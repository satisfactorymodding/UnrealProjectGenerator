import json
import os
import re
import argparse

generation_scripts_path = os.path.dirname(os.path.abspath(__file__))
root = os.path.dirname(generation_scripts_path)

projectPath = os.path.join(root, 'FactoryGame')
header_root = os.path.join(projectPath, 'Source', 'FactoryGame', 'Public')
cpp_root = os.path.join(projectPath, 'Source', 'FactoryGame', 'Private')

def round_float_scientific(f: float, decimals: int = 5) -> float:
    return float(f'{f:.{decimals}e}')

class_headers = {
    # TODO: parse UE headers?
    'UAIPerceptionComponent': 'Perception/AIPerceptionComponent.h',
    'UAkComponent': 'AkAudio/Classes/AkComponent.h',
    'UBillboardComponent': '',
    'UBoxComponent': '',
    'UBrushComponent': 'Components/BrushComponent.h',
    'UCameraComponent': '',
    'UCapsuleComponent': 'Components/CapsuleComponent.h',
    'UCharacterMovementComponent': '',
    'UDecalComponent': '',
    'UDestructibleComponent': '',
    'UHierarchicalInstancedStaticMeshComponent': 'Components/HierarchicalInstancedStaticMeshComponent.h',
    'UInputComponent': '',
    'UInstancedStaticMeshComponent': '',
    'UMaterialBillboardComponent': '',
    'UMeshComponent': '',
    'UParticleSystemComponent': '',
    'UPathFollowingComponent': '',
    'UPawnActionsComponent': '',
    'UProjectileMovementComponent': 'GameFramework/ProjectileMovementComponent.h',
    'UProxyHierarchicalInstancedStaticMeshComponent': 'Components/ProxyHierarchicalInstancedStaticMeshComponent.h',
    'UProxyInstancedStaticMeshComponent': 'Components/ProxyInstancedStaticMeshComponent.h',
    'URotatingMovementComponent': 'GameFramework/RotatingMovementComponent.h',
    'USceneCaptureComponent': 'Components/SceneCaptureComponent.h',
    'USceneCaptureComponent2D': 'Components/SceneCaptureComponent2D.h',
    'USceneComponent': 'Components/SceneComponent.h',
    'UShapeComponent': 'Components/ShapeComponent.h',
    'USkeletalMeshComponent': 'Components/SkeletalMeshComponent.h',
    'USphereComponent': 'Components/SphereComponent.h',
    'USplineComponent': 'Components/SplineComponent.h',
    'USplineMeshComponent': 'Components/SplineMeshComponent.h',
    'USpringArmComponent': 'GameFramework/SpringArmComponent.h',
    'UStaticMeshComponent': 'Components/StaticMeshComponent.h',
    'UTextRenderComponent': 'Components/TextRenderComponent.h',
    'UWheeledVehicleMovementComponent': 'WheeledVehicleMovementComponent.h',
    'UWidgetComponent': 'Components/WidgetComponent.h',
    'UFGInstancedSplineMeshComponent': 'FGInstancedSplineMeshComponent.h',
    'UEnvQueryContext_Querier': 'EnvironmentQuery/Contexts/EnvQueryContext_Querier.h',
    'UFloatingPawnMovement': 'GameFramework/FloatingPawnMovement.h',
    'UNavArea_Obstacle': 'NavAreas/NavArea_Obstacle.h',
    'USpotLightComponent': 'Components/SpotLightComponent.h',
    'UMaterial': 'Materials/Material.h',
    'AAIController': 'AIController.h',
    'ADebugCameraController': 'Engine/DebugCameraController.h',
    'UEnvQueryItemType_Point': 'EnvironmentQuery/Items/EnvQueryItemType_Point.h',
    'AParticleEventManager': 'Particles/ParticleEventManager.h',
    'UEngineMessage': 'GameFramework/EngineMessage.h',
    'ASpectatorPawn': 'GameFramework/SpectatorPawn.h',
    'AServerStatReplicator': 'Engine/ServerStatReplicator.h',
    'UTexture2D': 'Engine/Texture2D.h',
    'UNetReplicationGraphConnection': 'ReplicationGraph.h',
    'UStaticMesh': 'Engine/StaticMesh.h',
    'APawn': 'GameFramework/Pawn.h',
    'AGameSession': 'GameFramework/GameSession.h',
    'APlayerController': 'GameFramework/PlayerController.h',
    'UVehicleWheel': 'VehicleWheel.h',
    'ADefaultPhysicsVolume': 'GameFramework/DefaultPhysicsVolume.h',
    'AGameNetworkManager': 'GameFramework/GameNetworkManager.h',
    'UBookMark': 'Engine/BookMark.h',
    'EEquipmentSlot': 'Equipment/FGEquipment.h'
}

getters = {
    'BrushComponent': 'GetBrushComponent()',
    'mCollisionComp': 'GetCollisionSphere()',
    'CapsuleComponent': 'GetCapsuleComponent()',
}

def read_class_includes():
    for root, dirs, files in os.walk(header_root, topdown=False):
        for name in files:
            header_contents = open(os.path.join(root, name), 'r').read()
            for cls in re.findall(r'^([ \t]*)(class|struct) ([^ ]*? )??([^ ]*?)( ?: ?.*?)?\s*{((?:.|\n)*?)^\1};', header_contents, re.RegexFlag.MULTILINE):
                class_headers[cls[3]] = os.path.relpath(os.path.join(root, name), header_root)

class UEStruct:
    def __init__(self, package: str, class_name: str, json_object: dict):
        self.package = package
        self.class_name = class_name

        self.object_hierarchy = json_object['ObjectHierarchy']

        self.properties: list = json_object['ClassSerializedData']['ChildProperties']
        for prop in self.properties:
            prop['OwnerStruct'] = self
            if 'Inner' in prop:
                prop['Inner']['OwnerStruct'] = self
            if 'KeyProp' in prop:
                prop['KeyProp']['OwnerStruct'] = self
            if 'ValueProp' in prop:
                prop['ValueProp']['OwnerStruct'] = self
        
        parent_hierarchy_idx = json_object['ClassSerializedData']['SuperStruct']
        if parent_hierarchy_idx != -1:
            parent_hierarchy = self.object_hierarchy[parent_hierarchy_idx]
            if parent_hierarchy['Type'] == 'Export':
                self.parent_package = self.package
            else:
                parent_package_hierarchy_idx = parent_hierarchy['Outer']
                parent_package_hierarchy = self.object_hierarchy[parent_package_hierarchy_idx]
                self.parent_package: str = parent_package_hierarchy['ObjectName'][8:] # trim /Script

            self.parent_class: str = parent_hierarchy['ObjectName']
        else:
            self.parent_package = None
            self.parent_class = None
        self.parent_ue_struct: UEStruct = None

        self.hierarchy_classes: dict[int, UEClass] = {
            idx: None
            for idx, obj in enumerate(self.object_hierarchy)
            if
                obj['Type'] == 'Export' and 'ObjectClass' in obj and self.object_hierarchy[obj['ObjectClass']]['ObjectName'] == 'Class' and not obj['ObjectName'].startswith('Default__')
            or
                obj['Type'] == 'Import' and obj['ClassName'] == 'Class'
        }

        self.hierarchy_structs: dict[int, UEStruct] = {
            idx: None
            for idx, obj in enumerate(self.object_hierarchy)
            if
                obj['Type'] == 'Export' and 'ObjectClass' in obj and self.object_hierarchy[obj['ObjectClass']]['ObjectName'] == 'ScriptStruct' and not obj['ObjectName'].startswith('Default__')
            or
                obj['Type'] == 'Import' and obj['ClassName'] == 'ScriptStruct'
        }

        self.json_object = json_object
    
    @property
    def prefix(self):
        return 'F'
    
    @property
    def full_name(self):
        return f'{self.prefix}{self.class_name}'

    @property
    def all_properties(self):
        properties = self.properties.copy()
        if self.parent_ue_struct:
            for prop in self.parent_ue_struct.all_properties:
                properties.append(prop)

        return properties
    
    def get_object_property_name_from_idx(self, object_idx: int) -> str:
        prop = None
        obj = self
        while obj and not prop:
            object_props = [p for p in obj.properties if p['ObjectClass'] == 'ObjectProperty']
            prop = next((p for p in object_props if p['ObjectName'] in self.cdo and self.cdo[p['ObjectName']] == object_idx), None)
            obj = obj.parent_ue_struct
        
        if not prop:
            return None

        self_prop = next((p for p in self.properties if p['ObjectName'] == prop['ObjectName']), None)
        if not self_prop and int(prop['PropertyFlags']) & 0x0040000000000000:
            return getters[prop['ObjectName']]
        return prop['ObjectName']

    def property_type_value(self, prop_name, prop_type, val, struct_type = None, enum_name = None) -> tuple[typing.Union[str, tuple[str, str]], dict[str, list[str]], list[str]]: # [impl (can be None if not available), {dep: [impl]} (dep can be self or None), required headers]:
        if prop_type == 'BoolProperty':
            return [f'{"true" if val else "false"}', {}, []]
        elif prop_type == 'FloatProperty':
            return [f'{round_float_scientific(val)}', {}, []]
        elif prop_type == 'IntProperty':
            if val == 2147483647:
                return ['INT_MAX', {}, []]
            if val == -2147483648:
                return ['INT_MIN', {}, []]
            return [f'{val}', {}, []]
        elif prop_type == 'Int8Property':
            return [f'{val}', {}, []]
        elif prop_type == 'Int16Property':
            return [f'{val}', {}, []]
        elif prop_type == 'UInt32Property':
            return [f'{val}U', {}, []]
        elif prop_type == 'Int64Property':
            return [f'{val}LL', {}, []]
        elif prop_type == 'EnumProperty':
            for cls in class_headers:
                if cls in val:
                    return [f'{val}', {}, [class_headers[cls]]]
            return [f'{val}', {}, []]
        elif prop_type == 'ByteProperty':
            if not enum_name or enum_name in val:
                return [f'{val}', {}, []]
            return [f'{enum_name}::{val}', {}, []]
        elif prop_type == 'ClassProperty':
            if val == -1:
                return [f'nullptr', {}, []]
            if 'ClassName' in self.object_hierarchy[val] and not self.object_hierarchy[self.object_hierarchy[val]['Outer']]['ObjectName'].startswith('/Script'):
                blueprint_hierarchy = self.object_hierarchy[val]
                blueprint_class = blueprint_hierarchy['ObjectName']
                
                blueprint_package_idx = blueprint_hierarchy['Outer']
                blueprint_package_hierarchy = self.object_hierarchy[blueprint_package_idx]
                blueprint_package = blueprint_package_hierarchy['ObjectName']
                
                return [f'FSoftClassPath("{blueprint_package}.{blueprint_class}").ResolveClass()', {}, []]
            else:
                return [f'{self.hierarchy_classes[val].full_name}::StaticClass()', {}, [class_headers[self.hierarchy_classes[val].full_name]]]
        elif prop_type == 'ObjectProperty':
            if val == -1:
                return [f'nullptr', {}, []]
            else:
                # Check if this object is the "first" one created and set its value to the existing object
                original = self.get_object_property_name_from_idx(val)
                if original and original != prop_name:
                    return [[original, original], {}, []]
                object_hierarchy = self.object_hierarchy[val]
                if object_hierarchy['Type'] == 'Export':
                    object_class = self.hierarchy_classes[object_hierarchy['ObjectClass']]
                
                    object_class_parent = object_class
                    while object_class_parent.parent_ue_class and object_class_parent.class_name != 'ActorComponent' and object_class_parent.class_name != 'SceneComponent':
                        object_class_parent = object_class_parent.parent_ue_class
                    object_type = object_class_parent.class_name

                    if object_type == 'ActorComponent':
                        return [f'CreateDefaultSubobject<{object_class.full_name}>(TEXT("{object_hierarchy["ObjectName"]}"))', {}, [class_headers[object_class.full_name]]]
                    elif object_type == 'SceneComponent':
                        impl = f'CreateDefaultSubobject<{object_class.full_name}>(TEXT("{object_hierarchy["ObjectName"]}"))'
                        extra = {}

                        attach_parent_idx = object_hierarchy['Properties']['AttachParent'] if 'AttachParent' in object_hierarchy['Properties'] else -1
                        if attach_parent_idx != -1:
                            if self.object_hierarchy[attach_parent_idx]['ObjectName'].startswith('Default__'):
                                extra[None] = [f'->SetupAttachment(this)']
                            else:
                                attach = self.get_object_property_name_from_idx(attach_parent_idx)
                                extra[attach] = [f'->SetupAttachment({attach})']
                        
                        return [impl, extra, [class_headers[object_class.full_name]]] 
                    else:
                        includes = [class_headers[object_class.full_name]]
                        outer_idx = object_hierarchy['Outer'] if 'Outer' in object_hierarchy else -1
                        if self.object_hierarchy[outer_idx]['ObjectName'].startswith('Default__'):
                            outer = 'this'
                            return [f'NewObject<{object_class.full_name}>({outer}, TEXT("{object_hierarchy["ObjectName"]}"))', {}, includes]
                        else:
                            outer = self.get_object_property_name_from_idx(outer_idx)
                            includes.append(class_headers[self.object_hierarchy[outer_idx]['ObjectName']])
                            return [None, {outer: [f'= NewObject<{object_class.full_name}>({outer}, TEXT("{object_hierarchy["ObjectName"]}"))']}, includes]
                else:
                    blueprint_hierarchy = self.object_hierarchy[val]
                    blueprint_class = blueprint_hierarchy['ObjectName']
                    
                    blueprint_package_idx = blueprint_hierarchy['Outer']
                    blueprint_package_hierarchy = self.object_hierarchy[blueprint_package_idx]
                    blueprint_package = blueprint_package_hierarchy['ObjectName']
                    
                    return [f'FSoftObjectPath("{blueprint_package}.{blueprint_class}").ResolveObject()', {}, []]
        elif prop_type == 'WeakObjectProperty':
            if val == -1:
                return [f'nullptr', {}, []]
            else:
                raise Exception(f'Unknown WeakObjectProperty type', 'WeakObjectProperty')
        elif prop_type == 'SoftObjectProperty':
            if val == -1:
                return [f'nullptr', {}, []]
            elif 'ClassName' in self.object_hierarchy[val]:
                blueprint_hierarchy = self.object_hierarchy[val]
                blueprint_class = blueprint_hierarchy['ObjectName']
                
                blueprint_package_idx = blueprint_hierarchy['Outer']
                blueprint_package_hierarchy = self.object_hierarchy[blueprint_package_idx]
                blueprint_package = blueprint_package_hierarchy['ObjectName']
                
                return [f'FSoftObjectPath("{blueprint_package}.{blueprint_class}")', {}, []]
            else:
                raise Exception(f'Unknown SoftObjectProperty type', 'SoftObjectProperty')
        elif prop_type == 'SoftClassProperty':
            if val == -1:
                return [f'nullptr', {}, []]
            elif 'ClassName' in self.object_hierarchy[val]:
                blueprint_hierarchy = self.object_hierarchy[val]
                blueprint_class = blueprint_hierarchy['ObjectName']
                
                blueprint_package_idx = blueprint_hierarchy['Outer']
                blueprint_package_hierarchy = self.object_hierarchy[blueprint_package_idx]
                blueprint_package = blueprint_package_hierarchy['ObjectName']
                
                return [f'FSoftClassPath("{blueprint_package}.{blueprint_class}")', {}, []]
            else:
                raise Exception(f'Unknown SoftClassProperty type', 'SoftClassProperty')
        elif prop_type == 'InterfaceProperty':
            if val == -1:
                return [f'nullptr', {}, []]
            else:
                raise Exception(f'Unknown InterfaceProperty type', 'InterfaceProperty')
        elif prop_type == 'StrProperty':
            return [f'TEXT("{val}")', {}, []]
        elif prop_type == 'TextProperty':
            if 'TEXT(' in val:
                return [val, {}, []]
            return [f'INVTEXT("{val}")', {}, []]
        elif prop_type == 'NameProperty':
            return [f'TEXT("{val}")', {}, []]
        elif prop_type == 'StructProperty':
            if not struct_type:
                raise Exception('struct_type') 

            if struct_type.class_name == 'SoftClassPath': # thank you UE, very cool
                return [f'FSoftClassPath("{val["AssetPathName"]}")', {}, []]

            extra = {None: []}
            includes = []
            for prop in struct_type.all_properties:
                inner_struct_type = prop['OwnerStruct'].hierarchy_structs[prop['Struct']] if 'Struct' in prop else None
                inner_enum_name = prop['OwnerStruct'].object_hierarchy[prop['Enum']]['ObjectName'] if 'Enum' in prop and prop['Enum'] != -1 else None
                if prop["ObjectClass"] == 'ArrayProperty':
                    if len(val) != 0:
                        print(f'Struct has array with values "{struct_type.package}/{struct_type.class_name}:{prop["ObjectName"]}')
                    else:
                        pass
                elif prop["ObjectClass"] == 'MapProperty':
                    if len(val) != 0:
                        print(f'Struct has map with values "{struct_type.package}/{struct_type.class_name}:{prop["ObjectName"]}')
                    else:
                        pass
                else:
                    if prop["ObjectName"] in val:
                        [inner_impl, inner_extra, inner_includes] = self.property_type_value(prop_name, prop["ObjectClass"], val[prop["ObjectName"]], inner_struct_type, inner_enum_name)
                        if inner_impl:
                            if isinstance(inner_impl, str):
                                extra[None].append(f'.{prop["ObjectName"]} = {inner_impl}')
                            else:
                                if inner_impl[0] not in extra:
                                    extra[inner_impl[0]] = []
                                extra[inner_impl[0]].append(f'.{prop["ObjectName"]} = {inner_impl[1]}')
                        for dep, inner_extra_list in inner_extra.items():
                            if dep not in extra:
                                extra[dep] = []
                            for inner_extra_item in inner_extra_list:
                                extra[dep].append(f'.{prop["ObjectName"]}{inner_extra_item}')
                        for inner_include in inner_includes:
                            includes.append(inner_include)
                            
            return [None, extra, includes]
        else:
            raise Exception(f'Unknown property type "{prop_type}"', prop_type)


    def property_type_implementation(self, prop_name, prop_type, val, struct_type = None, enum_name = None, inner_property_type = None, key_property_type = None, value_property_type = None) -> tuple[str, dict[str, list[str]], list[str]]: # [impl (can be None if not available), {dep: [impl]} (dep can be self), required headers]
        if prop_type == 'ArrayProperty':
            if len(val) == 0:
                return None
            
            if not inner_property_type:
                raise Exception('inner_property_type')
            
            inner_struct_type = inner_property_type['OwnerStruct'].hierarchy_structs[inner_property_type['Struct']] if 'Struct' in inner_property_type else None
            inner_enum_name = inner_property_type['OwnerStruct'].object_hierarchy[inner_property_type['Enum']]['ObjectName'] if 'Enum' in inner_property_type and inner_property_type['Enum'] != -1 else None
            
            extra = {None: []}
            includes = []
            for idx, item in enumerate(val):
                [inner_impl, inner_extra, inner_includes] = self.property_type_value(f'{prop_name}[{idx}]', inner_property_type["ObjectClass"], item, inner_struct_type)
                if inner_impl:
                    if isinstance(inner_impl, str):
                        extra[None].append(f'this->{prop_name}.Add({inner_impl});')
                    else:
                        if inner_impl[0] not in extra:
                            extra[inner_impl[0]] = []
                        extra[inner_impl[0]].append(f'this->{prop_name}.Add({inner_impl[1]});')
                else:
                    extra[None].append(f'this->{prop_name}.Emplace();')
                for dep, inner_extra_list in inner_extra.items():
                    if dep not in extra:
                        extra[dep] = []
                    for inner_extra_item in inner_extra_list:
                        extra[dep].append(f'this->{prop_name}[{idx}]{inner_extra_item};')
                for inner_include in inner_includes:
                    includes.append(inner_include)
            return [None, extra, includes]
        elif prop_type == 'SetProperty':
            if len(val) == 0:
                return None
            
            if not inner_property_type:
                raise Exception('inner_property_type')
            
            inner_struct_type = inner_property_type['OwnerStruct'].hierarchy_structs[inner_property_type['Struct']] if 'Struct' in inner_property_type else None
            inner_enum_name = inner_property_type['OwnerStruct'].object_hierarchy[inner_property_type['Enum']]['ObjectName'] if 'Enum' in inner_property_type and inner_property_type['Enum'] != -1 else None
            
            extra = {None: []}
            includes = []
            for idx, item in enumerate(val):
                [inner_impl, inner_extra, inner_includes] = self.property_type_value(f'{prop_name}[{idx}]', inner_property_type["ObjectClass"], item, inner_struct_type, inner_enum_name)
                if inner_impl:
                    if isinstance(inner_impl, str):
                        extra[None].append(f'this->{prop_name}.Add({inner_impl});')
                    else:
                        if inner_impl[0] not in extra:
                            extra[inner_impl[0]] = []
                        extra[inner_impl[0]].append(f'this->{prop_name}.Add({inner_impl[1]});')

                for dep, inner_extra_list in inner_extra.items():
                    if dep not in extra:
                        extra[dep] = []
                    for inner_extra_item in inner_extra_list:
                        extra[dep].append(f'this->{prop_name}[{idx}]{inner_extra_item};')
                for inner_include in inner_includes:
                    includes.append(inner_include)
            return [None, extra, includes]
        elif prop_type == 'MapProperty':
            if len(val) == 0:
                return None
            if not key_property_type:
                raise Exception('key_property_type')
            if not value_property_type:
                raise Exception('value_property_type')
            
            key_struct_type = key_property_type['OwnerStruct'].hierarchy_structs[key_property_type['Struct']] if 'Struct' in key_property_type else None
            key_enum_name = key_property_type['OwnerStruct'].object_hierarchy[key_property_type['Enum']]['ObjectName'] if 'Enum' in key_property_type and key_property_type['Enum'] != -1 else None
            
            value_struct_type = value_property_type['OwnerStruct'].hierarchy_structs[value_property_type['Struct']] if 'Struct' in value_property_type else None
            value_enum_name = value_property_type['OwnerStruct'].object_hierarchy[value_property_type['Enum']]['ObjectName'] if 'Enum' in value_property_type and value_property_type['Enum'] != -1 else None

            extra = {None: []}
            includes = []
            for entry in val:
                [key_impl, key_extra, key_includes] = self.property_type_value(f'{prop_name}[KEY_UNKNOWN]', key_property_type["ObjectClass"], entry['Key'], key_struct_type, key_enum_name)
                [val_impl, val_extra, val_includes] = self.property_type_value(f'{prop_name}[VALUE_UNKNOWN]', value_property_type["ObjectClass"], entry['Value'], value_struct_type, value_enum_name)
                if not key_impl:
                    raise Exception(f'key_impl is None for {self.class_name}:{prop_name}')
                
                if not isinstance(key_impl, str):
                    raise Exception(f'key_impl is not str for {self.class_name}:{prop_name}') # Ok, maybe I need multiple dependencies

                if val_impl:
                    if isinstance(val_impl, str):
                        extra[None].append(f'this->{prop_name}.Add({key_impl}, {val_impl});')
                    else:
                        if val_impl[0] not in extra:
                            extra[val_impl[0]] = []
                        extra[val_impl[0]].append(f'this->{prop_name}.Add({key_impl}, {val_impl[1]});')
                else:
                    extra[None].append(f'this->{prop_name}.Emplace({key_impl});')
                
                for dep, key_extra_list in key_extra.items():
                    if dep not in extra:
                        extra[dep] = []
                    if len(key_extra_list) > 0:
                        raise Exception('Map key extra')
                for key_include in key_includes:
                    includes.append(key_include)

                for dep, val_extra_list in val_extra.items():
                    if dep not in extra:
                        extra[dep] = []
                    for val_extra_item in val_extra_list:
                        extra[dep].append(f'this->{prop_name}[{key_impl}]{val_extra_item};')
                for val_include in val_includes:
                    includes.append(val_include)
            return [None, extra, includes]
        elif prop_type == 'MulticastInlineDelegateProperty':
            return None
        elif prop_type == 'DelegateProperty':
            return None
        else:
            try:
                impls = self.property_type_value(prop_name, prop_type, val, struct_type, enum_name)
                if impls:
                    [impl, extra, includes] = impls
                    if prop_name == 'bReplicateMovement':
                        return [f'this->SetReplicatingMovement({impl});' if impl else None, {dep: [f'this->{prop_name}{extra_item};' for extra_item in extra_items] for dep, extra_items in extra.items()}, includes]
                    if prop_name == 'bHidden':
                        return [f'this->SetHidden({impl});' if impl else None, {dep: [f'this->{prop_name}{extra_item};' for extra_item in extra_items] for dep, extra_items in extra.items()}, includes]
                    if prop_name == 'bReplicates' and self.prefix == 'U':
                        return [f'this->SetIsReplicatedByDefault({impl});' if impl else None, {dep: [f'{prop_name}{extra_item};' for extra_item in extra_items] for dep, extra_items in extra.items()}, includes]
                    if isinstance(impl, str):
                        return [f'this->{prop_name} = {impl};' if impl else None, {dep: [f'this->{prop_name}{extra_item};' for extra_item in extra_items] for dep, extra_items in extra.items()}, includes]
                    else:
                        return [[impl[0], f'this->{prop_name} = {impl[1]};'] if impl else None, {dep: [f'this->{prop_name}{extra_item};' for extra_item in extra_items] for dep, extra_items in extra.items()}, includes]
                else:
                    return None
            except Exception as e:
                if len(e.args) >= 2:
                    raise Exception(f'Unknown property type "{e.args[1]}" for {self.package}.{self.class_name}:{prop_name}')
                else:
                    raise Exception(f'Error generating {self.package}.{self.class_name}:{prop_name}', e)

ignore_properties = [
    'mFogOfWarRawData',
    'WidgetStyle',
    'ItemStyle',
    'ForegroundColor',
    'mSwitchData',
    'mCurrentSubtitle',
    'CollisionMesh',
    'mTopTransform',
    'mPowerStats',
    'BodyInstance',
    'mClientTrainData',
    'mLastItem',
    'mSchematicIcon',
    'mMesh3P',
    'DefaultBookmarkClass',
    'LastBookmarkClass',
    'mPickupItems',
    'mRespawnTimeIndays',
    'mDefaultCrosshair',
    'mPickupCrosshair',
    'mVehicleCrosshair',
    'mWeaponCrosshair',
    'mWorkbenchCrosshair',
    'mGeneralCrosshair',
    'mInventoryIcon',
    'mExtractorClass',
    'mIndicatorData',
    'mActorTransform',
    'mCachedUseState',
    'mCargoMeshComponentDerailedTransform',
    'bWorkOnFloatValues',
]

class UEClass(UEStruct):
    def __init__(self, package: str, class_name: str, json_object: dict):
        super().__init__(package, class_name, json_object)
        
        for prop in self.properties:
            prop['OwnerClass'] = self
            if 'Inner' in prop:
                prop['Inner']['OwnerClass'] = self
            if 'KeyProp' in prop:
                prop['KeyProp']['OwnerClass'] = self
            if 'ValueProp' in prop:
                prop['ValueProp']['OwnerClass'] = self
        
        cdo_hierarchy_idx = json_object['ClassSerializedData']['ClassDefaultObject']
        self.cdo: dict[str, ] = self.object_hierarchy[cdo_hierarchy_idx]['Properties']
        
        parent_hierarchy_idx = json_object['ClassSerializedData']['SuperStruct']
        if parent_hierarchy_idx != -1:
            parent_hierarchy = self.object_hierarchy[parent_hierarchy_idx]
            if parent_hierarchy['Type'] == 'Export':
                self.parent_package = self.package
            else:
                parent_package_hierarchy_idx = parent_hierarchy['Outer']
                parent_package_hierarchy = self.object_hierarchy[parent_package_hierarchy_idx]
                self.parent_package: str = parent_package_hierarchy['ObjectName'][8:] # trim /Script

            self.parent_class: str = parent_hierarchy['ObjectName']
        else:
            self.parent_package = None
            self.parent_class = None
        self.parent_ue_class: UEClass = None
    
    @property
    def prefix(self):
        significant_parent = self
        while significant_parent.class_name != 'Actor' and significant_parent.class_name != 'Object':
            significant_parent = significant_parent.parent_ue_class
        return 'A' if significant_parent.class_name == 'Actor' else 'U'

    @property
    def modified_cdo(self):
        if not self.parent_ue_class:
            return self.cdo
        all_properties = self.all_properties
        modified_cdo = self.cdo.copy()
        
        for cdo_property in self.cdo:
            if cdo_property == '$ReferencedObjects':
                continue
            
            prop = next((prop for prop in all_properties if prop['ObjectName'] == cdo_property), None)
            self_prop = next((prop for prop in self.properties if prop['ObjectName'] == cdo_property), None)
           
            if self_prop:
                continue
            
            if prop['ObjectClass'] == 'ObjectProperty' or prop['ObjectClass'] == 'WeakObjectProperty' or prop['ObjectClass'] == 'SoftObjectProperty' or prop['ObjectClass'] == 'ClassProperty' or prop['ObjectClass'] == 'SoftClassProperty':
                if prop['ArrayDim'] == 1:
                    if self.cdo[cdo_property] == -1 and self.parent_ue_class.cdo[cdo_property] == -1:
                        del modified_cdo[cdo_property]
                    elif int(prop['PropertyFlags']) & 0x0040000000000000: # private
                        del modified_cdo[cdo_property]
                    else:
                        self_object_hierarchy = self.object_hierarchy[self.cdo[cdo_property]]
                        parent_object_hierarchy = self.parent_ue_class.object_hierarchy[self.parent_ue_class.cdo[cdo_property]]
                        if self_object_hierarchy['ObjectName'] == parent_object_hierarchy['ObjectName']:
                            del modified_cdo[cdo_property]
                else:
                    for i in range(prop['ArrayDim']):
                        if self.cdo[cdo_property][i] == -1 and self.parent_ue_class.cdo[cdo_property][i] == -1:
                            modified_cdo[cdo_property][i] = None
                        elif int(prop['PropertyFlags']) & 0x0040000000000000: # private
                            modified_cdo[cdo_property][i] = None
                        else:
                            self_object_hierarchy = self.object_hierarchy[self.cdo[cdo_property][i]]
                            parent_object_hierarchy = self.parent_ue_class.object_hierarchy[self.parent_ue_class.cdo[cdo_property][i]]
                            if self_object_hierarchy['ObjectName'] == parent_object_hierarchy['ObjectName']:
                                modified_cdo[cdo_property][i] = None
                    if all(entry == None for entry in modified_cdo[cdo_property]):
                        del modified_cdo[cdo_property]
            else:
                if self.cdo[cdo_property] == self.parent_ue_class.cdo[cdo_property]:
                    del modified_cdo[cdo_property]

        return modified_cdo

    @property
    def cdo_implmenentation(self):
        cdo = self.modified_cdo
        all_props = self.all_properties

        implementations = {}

        for prop_name, val in cdo.items():
            if prop_name == '$ReferencedObjects' or prop_name in ignore_properties:
                continue
            
            prop = next((prop for prop in all_props if prop['ObjectName'] == prop_name), None)
            prop_type = prop['ObjectClass']
            array_dim = prop['ArrayDim']
            inner_prop_type = prop['Inner'] if 'Inner' in prop else None
            key_prop_type = prop['KeyProp'] if 'KeyProp' in prop else None
            value_prop_type = prop['ValueProp'] if 'ValueProp' in prop else None
            struct_type = prop['OwnerStruct'].hierarchy_structs[prop['Struct']] if 'Struct' in prop else None
            enum_name = prop['OwnerStruct'].object_hierarchy[prop['Enum']]['ObjectName'] if 'Enum' in prop and prop['Enum'] != -1 else None
            if array_dim == 1:
                implementations[prop_name] = self.property_type_implementation(f'{prop_name}', prop_type, val, struct_type, enum_name, inner_prop_type, key_prop_type, value_prop_type)
            else:
                implementations[prop_name] = [None, {None: []}, []]
                for i in range(0, array_dim):
                    [impl, extra, includes] = self.property_type_implementation(f'{prop_name}[{i}]', prop_type, val[i], struct_type, enum_name)
                    if impl:
                        implementations[prop_name][1][None].append(impl)
                    for dep, extra_items in extra.items():
                        for extra_item in extra_items:
                            implementations[prop_name][1][dep].append(f'{extra_item};')
                    for include in includes:
                        implementations[prop_name][2].append(include)

        return implementations

def read_dump(dump_root: str):
    package_classes: dict[str, dict[str, UEClass]] = {}
    package_structs: dict[str, dict[str, UEStruct]] = {}

    for pkg in os.listdir(os.path.join(dump_root, 'Classes')):
        package_classes[pkg] = {}
        for cls in os.listdir(os.path.join(dump_root, 'Classes', pkg)):
            class_name = cls[:-5] # trim .json
            package_classes[pkg][class_name] = UEClass(pkg, class_name, json.load(open(os.path.join(dump_root, 'Classes', pkg, cls), 'r')))

    for pkg in os.listdir(os.path.join(dump_root, 'Structs')):
        package_structs[pkg] = {}
        for struct in os.listdir(os.path.join(dump_root, 'Structs', pkg)):
            struct_name = struct[:-5] # trim .json
            package_structs[pkg][struct_name] = UEStruct(pkg, struct_name, json.load(open(os.path.join(dump_root, 'Structs', pkg, struct), 'r')))

    for pkg, classes in package_classes.items():
        for class_name, cls in classes.items():
            if cls.parent_package and cls.parent_class:
                cls.parent_ue_class = package_classes[cls.parent_package][cls.parent_class]
                cls.parent_ue_struct = package_classes[cls.parent_package][cls.parent_class]
                
            for hier_cls_idx in cls.hierarchy_classes:
                hier_cls_hierarchy = cls.object_hierarchy[hier_cls_idx]
                
                if hier_cls_hierarchy['Type'] == 'Export':
                    hier_cls_package = cls.package
                else:
                    hier_cls_package_hierarchy_idx = hier_cls_hierarchy['Outer']
                    hier_cls_package_hierarchy = cls.object_hierarchy[hier_cls_package_hierarchy_idx]
                    hier_cls_package: str = hier_cls_package_hierarchy['ObjectName'][8:]
                
                hier_cls_class: str = hier_cls_hierarchy['ObjectName']

                cls.hierarchy_classes[hier_cls_idx] = package_classes[hier_cls_package][hier_cls_class]
            
            for hier_cls_idx in cls.hierarchy_structs:
                hier_cls_hierarchy = cls.object_hierarchy[hier_cls_idx]
                
                if hier_cls_hierarchy['Type'] == 'Export':
                    hier_cls_package = cls.package
                else:
                    hier_cls_package_hierarchy_idx = hier_cls_hierarchy['Outer']
                    hier_cls_package_hierarchy = cls.object_hierarchy[hier_cls_package_hierarchy_idx]
                    hier_cls_package: str = hier_cls_package_hierarchy['ObjectName'][8:]
                
                hier_cls_class: str = hier_cls_hierarchy['ObjectName']

                cls.hierarchy_structs[hier_cls_idx] = package_structs[hier_cls_package][hier_cls_class]

    for pkg, structs in package_structs.items():
        for struct_name, struct in structs.items():
            if struct.parent_package and struct.parent_class:
                struct.parent_ue_struct = package_structs[struct.parent_package][struct.parent_class]
                
            for hier_cls_idx in struct.hierarchy_classes:
                hier_cls_hierarchy = struct.object_hierarchy[hier_cls_idx]
                
                if hier_cls_hierarchy['Type'] == 'Export':
                    hier_cls_package = struct.package
                else:
                    hier_cls_package_hierarchy_idx = hier_cls_hierarchy['Outer']
                    hier_cls_package_hierarchy = struct.object_hierarchy[hier_cls_package_hierarchy_idx]
                    hier_cls_package: str = hier_cls_package_hierarchy['ObjectName'][8:]
                
                hier_cls_class: str = hier_cls_hierarchy['ObjectName']

                struct.hierarchy_classes[hier_cls_idx] = package_classes[hier_cls_package][hier_cls_class]
            
            for hier_cls_idx in struct.hierarchy_structs:
                hier_cls_hierarchy = struct.object_hierarchy[hier_cls_idx]
                
                if hier_cls_hierarchy['Type'] == 'Export':
                    hier_cls_package = struct.package
                else:
                    hier_cls_package_hierarchy_idx = hier_cls_hierarchy['Outer']
                    hier_cls_package_hierarchy = struct.object_hierarchy[hier_cls_package_hierarchy_idx]
                    hier_cls_package: str = hier_cls_package_hierarchy['ObjectName'][8:]
                
                hier_cls_class: str = hier_cls_hierarchy['ObjectName']

                struct.hierarchy_structs[hier_cls_idx] = package_structs[hier_cls_package][hier_cls_class]
            
    return (package_classes, package_structs)

def create_implementations(package_classes: dict[str, dict[str, UEClass]], dump_package: str):
    class_implementations = {}

    for class_name, cls in package_classes[dump_package].items():
        # poor man's topological sort
        already_implemented = [None]
        queued = {}
        lines = []
        class_includes = []
        for prop, impls in cls.cdo_implmenentation.items():
            if not impls:
                continue
            
            [impl, extras, includes] = impls
            if impl:
                if isinstance(impl, str):
                    lines.append(impl)
                else:
                    if dep not in already_implemented:
                        queued[impl[0]] = impl[1]
                    else:
                        lines.append(impl[1])
            already_implemented.append(prop)
            for dep, extra_items in extras.items():
                if dep in already_implemented:
                    for extra_item in extra_items:
                        lines.append(extra_item)
                else:
                    if dep not in queued:
                        queued[dep] = []
                    for extra_item in extra_items:
                        queued[dep].append(extra_item)
            
            if prop in queued:
                for queued_item in queued[prop]:
                    lines.append(queued_item)
                del queued[prop]
            
            for include in includes:
                if isinstance(include, list):
                    raise Exception('nested', prop)
                class_includes.append(include)
        
        for prop, queued_items in queued.items():
            print(f'{class_name}::{prop} was not generated. Implementations depending on it added at the end')
            for queued_item in queued_items:
                lines.append(queued_item)

        class_implementations[cls.full_name] = ['\n'.join(['\t' + line for line in lines]), class_includes]

    for root, dirs, files in os.walk(cpp_root, topdown=False):
        for name in files:
            cpp_content = open(os.path.join(root, name), 'r').read()
            includes = set()
            
            for cls in re.findall(r'((\b(.+)::\3\((.*?)\))(\s*:\s*Super\((.*?)\))?\s*{\s*.*?})', cpp_content, re.DOTALL):
                if cls[0][0] != 'F' and cls[2] in class_implementations:
                    [impls, incls] = class_implementations[cls[2]]
                    cpp_content = cpp_content.replace(cls[0], cls[1] + (cls[4] if cls[4] else ' : Super()') + ' {\n' + impls + '\n}')
                    for include in incls:
                        if include:
                            includes.add(include.replace('\\', '/'))
            
            existing_includes = re.findall(r'#include "(.+)"', cpp_content)
            for inc in existing_includes:
                if inc in includes:
                    includes.remove(inc)
            
            if len(includes) > 0:                
                header_rel_path = os.path.relpath(os.path.join(root, name), cpp_root).replace('.cpp', '.h').replace('\\', '/')
                cpp_content = cpp_content.replace(f'#include "{header_rel_path}"', f'#include "{header_rel_path}"\n' + '\n'.join([f'#include "{inc}"' for inc in includes]))
            
            open(os.path.join(root, name), 'w+').write(cpp_content)
            print(os.path.join(root, name))

def main():
    parser = argparse.ArgumentParser(description='Generate implementations for constructors that set default values as extracted from the game.')
    parser.add_argument('--dump', '-d', dest='dump_root', required = True,
                        help='The path at which the native class and struct dump is located')
    args = parser.parse_args()

    read_class_includes()
    (package_classes, package_structs) = read_dump(args.dump_root)
    create_implementations(package_classes, 'FactoryGame')

if __name__ == "__main__":
    main()