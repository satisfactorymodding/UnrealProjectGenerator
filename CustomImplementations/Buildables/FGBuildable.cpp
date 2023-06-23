#include "AbstractInstanceManager.h"

#if WITH_EDITOR
void AFGBuildable::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) {
    Super::PostEditChangeProperty(PropertyChangedEvent);
    if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(AFGBuildable, mInstanceData)) {
        mInstanceDataCDO = mInstanceData;
    }

    if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(AFGBuildable, mBuildableSparseDataEditorObject)) {
        mBuildableSparseDataCDO = mBuildableSparseDataEditorObject;
    }
}
void AFGBuildable::PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent) {
    Super::PostEditChangeChainProperty(PropertyChangedEvent);
    if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(AFGBuildable, mInstanceData)) {
        mInstanceDataCDO = mInstanceData;
    }

    if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(AFGBuildable, mBuildableSparseDataEditorObject)) {
        mBuildableSparseDataCDO = mBuildableSparseDataEditorObject;
    }
}
#endif
void AFGBuildable::OnConstruction(const FTransform& transform) {
    Super::OnConstruction(transform);

#if WITH_EDITOR
    RemoveInstances();
    RemoveInstances_Native();
    CallSetupInstances();
#endif
}
TArray<struct FInstanceData> AFGBuildable::GetActorLightweightInstanceData_Implementation() {
    if (IsValid(mInstanceDataCDO)) {
        return mInstanceDataCDO->GetInstanceData();
    }
    return TArray<FInstanceData>();
}
void AFGBuildable::SetupInstances_Native(bool bInitializeHidden) {
    if (this && GetWorld() && IsValid(mInstanceDataCDO)) {
        for (FInstanceData InstanceData : mInstanceDataCDO->GetInstanceData()) {
            if (IsValid(InstanceData.StaticMesh) && !InstanceData.OverridenMaterials.Contains(nullptr)) {
                FInstanceHandle* Handle;
                AAbstractInstanceManager::SetInstanceFromDataStatic(this, FTransform(), InstanceData, Handle, bInitializeHidden);
                mInstanceHandles.Add(Handle);
            }
        }
    }
}
void AFGBuildable::RemoveInstances_Native() {
    if (this && GetWorld()) {
        AAbstractInstanceManager* Manager = AAbstractInstanceManager::GetInstanceManager(GetWorld());
        for (FInstanceHandle* InstanceHandle : mInstanceHandles) {
            if (InstanceHandle->IsInstanced()) {
                Manager->RemoveInstance(InstanceHandle);
            }
        }
        mInstanceHandles.Empty();
    }
}
