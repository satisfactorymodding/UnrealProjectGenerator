using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;

namespace ImplementHeaders
{
    class Program
    {
        private static bool CountOnly = false;
        private static int FunctionCount;

        private static readonly string[] NeedsSuper = new string[] { "Serialize", "OnRegister", "OnUnregister", "PostLoad", "BeginDestroy", "PostInitProperties", "PostInitializeComponents", "CreateRenderState_Concurrent", "PostEditChangeProperty", "PostActorCreated", "PreInitializeComponents", "NotifyBeginPlay" };
        // Only adds super if the class name starts with that character
        private static readonly Dictionary<string, string> ConditionalSuper = new Dictionary<string, string>()
        {
            { "CheckForErrors", "A" }
        };

        private static readonly Dictionary<string, List<string>> ExtraIncludes = new Dictionary<string, List<string>>()
        {
            { "FGInventoryComponent", new List<string>()
                {
                    "FactoryGameCustomVersion.h"
                }
            },
            { "FGCharacterPlayer", new List<string>()
                {
                    "FGCharacterMovementComponent.h"
                }
            },
            { "FGReplicationDetailInventoryComponent", new List<string>()
                {
                    "FGInventoryComponent.h"
                }
            },
            { "FactoryGameCustomVersion", new List<string>()
                {
                    "CustomVersion.h"
                }
            },
            { "FGBuildableGeneratorGeoThermal", new List<string>()
                {
                    "FGExtractableResourceInterface.h"
                }
            },
            { "FGComboBoxSearch", new List<string>()
                {
                    "SSpacer.h"
                }
            },
            { "FGResourceNodeFrackingSatellite", new List<string>()
                {
                    "FGResourceNodeFrackingCore.h"
                }
            },
            { "FGBuildableFrackingExtractor", new List<string>()
                {
                    "FGResourceNodeFrackingCore.h"
                }
            },
            { "FGServerObject", new List<string>()
                {
                    "FGServerManager.h"
                }
            }
        };

        private static readonly Dictionary<string, string> ExtraCPPContent = new Dictionary<string, string>()
        {
            { "FGBackgroundThread",
@"
DEFINE_LOG_CATEGORY(LogPoolSystem);"
            }
        };

        private static readonly Dictionary<string, string> CustomImplementation = new Dictionary<string, string>()
        {
            { "static UFGItemDescriptor::CanBeDiscarded",
@"	if (inClass)
		return inClass.GetDefaultObject()->mCanBeDiscarded;
	else
		return bool();"
            },
            { "static UFGItemDescriptor::GetBigIcon",
@"	if (inClass)
		return inClass.GetDefaultObject()->mPersistentBigIcon;
	else
		return nullptr;"
            },
            { "static UFGItemDescriptor::GetEnergyValue",
@"	if (inClass)
		return inClass.GetDefaultObject()->mEnergyValue;
	else
		return float();"
            },
            { "static UFGItemDescriptor::GetFluidColor",
@"	if (inClass)
		return inClass.GetDefaultObject()->mFluidColor;
	else
		return FColor();"
            },
            { "static UFGItemDescriptor::GetFluidColorLinear",
@"	if (inClass)
		return inClass.GetDefaultObject()->mFluidColor.ReinterpretAsLinear();
	else
		return FLinearColor();"
            },
            { "static UFGItemDescriptor::GetFluidDensity",
@"	if (inClass)
		return inClass.GetDefaultObject()->mFluidDensity;
	else
		return float();"
            },
            { "static UFGItemDescriptor::GetFluidFriction",
@"	if (inClass)
		return inClass.GetDefaultObject()->mFluidFriction;
	else
		return float();"
            },
            { "static UFGItemDescriptor::GetFluidViscosity",
@"	if (inClass)
		return inClass.GetDefaultObject()->mFluidViscosity;
	else
		return float();"
            },
            { "static UFGItemDescriptor::GetForm",
@"	if (inClass)
		return inClass.GetDefaultObject()->mForm;
	else
		return EResourceForm();"
            },
            { "static UFGItemDescriptor::GetItemCategory",
@"	if (inClass)
		return inClass.GetDefaultObject()->mItemCategory;
	else
		return TSubclassOf< UFGItemCategory >();"
			},
            { "static UFGItemDescriptor::GetItemDescription",
@"	if (inClass)
		return inClass.GetDefaultObject()->mDescription;
	else
		return FText();"
            },
            { "static UFGItemDescriptor::GetItemIcon",
@"	if (inClass)
		return inClass.GetDefaultObject()->mInventoryIcon;
	else
		return FSlateBrush();"
            },
            { "static UFGItemDescriptor::GetItemMesh",
@"	if (inClass)
		return inClass.GetDefaultObject()->mConveyorMesh;
	else
		return nullptr;"
            },
            { "static UFGItemDescriptor::GetItemName",
@"	if (!inClass)
		return FText();
	if (inClass.GetDefaultObject()->mUseDisplayNameAndDescription)
		return inClass.GetDefaultObject()->mDisplayName;
	else
		return FText::FromString(inClass->GetName());"
            },
            { "static UFGItemDescriptor::GetRadioactiveDecay",
@"	if (inClass)
		return inClass.GetDefaultObject()->mRadioactiveDecay;
	else
		return float();"
            },
            { "static UFGItemDescriptor::GetSmallIcon",
@"	if (inClass)
		return inClass.GetDefaultObject()->mSmallIcon;
	else
		return nullptr;"
            },
            { "static UFGItemDescriptor::GetStackSize",
@"	if (inClass)
		return static_cast<int32>(inClass.GetDefaultObject()->mStackSize);
	else
		return int32();"
            },
            { "UFGItemDescriptor::GetStackSizeConverted",
@"	switch (inClass.GetDefaultObject()->mStackSize) {
    case EStackSize::SS_ONE: return 1;
    case EStackSize::SS_SMALL: return 20;
    case EStackSize::SS_MEDIUM: return 50;
    case EStackSize::SS_BIG: return 200;
    case EStackSize::SS_HUGE: return 500;
    case EStackSize::SS_FLUID: return 5000;
    case EStackSize::SS_LAST_ENUM: return 1;
    }
    return 0;"
            },
            { "static UFGItemDescriptor::RememberPickUp",
@"	if (inClass)
		return inClass.GetDefaultObject()->mRememberPickUp;
	else
		return bool();"
            },
            { "static UFGRecipe::GetIngredients",
@"	if (inClass)
		return inClass.GetDefaultObject()->mIngredients;
	else
		return TArray<FItemAmount>();"
            },
            { "static UFGRecipe::GetManualManufacturingDuration",
@"	if (inClass)
		return inClass.GetDefaultObject()->mManualManufacturingMultiplier;
	else
		return float();"
            },
            { "static UFGRecipe::GetManufacturingDuration",
@"	if (inClass)
		return inClass.GetDefaultObject()->mManufactoringDuration;
	else
		return float();"
            },
            { "UFGRecipe::GetProducedIn",
@"	out_producedIn = UFGRecipe::GetProducedIn(this->GetClass());"
            },
            { "static UFGRecipe::GetProducts",
@"	if (inClass)
		return inClass.GetDefaultObject()->mProduct;
	else
		return TArray< FItemAmount >();"
            },
            { "static UFGRecipe::GetRecipeName",
@"	if (inClass)
		return inClass.GetDefaultObject()->mDisplayName;
	else
		return FText();"
            },
            { "UFGRecipe::SetIngredient",
@"	recipe.GetDefaultObject()->mIngredients = ingredient;"
            },
            { "UFGRecipe::SetManualManufacturingMultiplier",
@"	recipe.GetDefaultObject()->mManualManufacturingMultiplier = sec;"
            },
            { "UFGRecipe::SetManufactoringDuration",
@"	recipe.GetDefaultObject()->mManufactoringDuration = sec;"
            },
            { "static UFGRecipe::SetProduct",
@"	if(recipe)
		recipe.GetDefaultObject()->mProduct = product;"
            },
            { "UFGRecipe::CanEditChange",
@"	return true;"
            },
            { "static UFGResearchTree::GetDisplayName",
@"	return inClass.GetDefaultObject()->mDisplayName;"
			},
            { "static UFGResearchTree::GetNodes",
@"	return inClass.GetDefaultObject()->mNodes;"
			},
            { "static UFGResearchTree::GetPostUnlockDescription",
@"	return inClass.GetDefaultObject()->mPostUnlockDescription;"
			},
            { "static UFGResearchTree::GetPreUnlockDescription",
@"	return inClass.GetDefaultObject()->mPreUnlockDescription;"
			},
            { "static UFGResearchTree::GetPreUnlockDisplayName",
@"	return inClass.GetDefaultObject()->mPreUnlockDisplayName;"
			},
            { "static UFGResearchTree::GetResearchTreeIcon",
@"	return inClass.GetDefaultObject()->mResearchTreeIcon;"
			},
            { "static UFGResearchTree::GetUnlockDependencies",
@"	return inClass.GetDefaultObject()->mUnlockDependencies;"
			},
            { "static UFGResearchTree::SetNodes",
@"	inClass.GetDefaultObject()->mNodes = nodes;"
			},
            { "static UFGSchematic::GetAdditionalSchematicDependencies",
@"	return inClass.GetDefaultObject()->mAdditionalSchematicDependencies;"
			},
            { "static UFGSchematic::GetCost",
@"	if (inClass)
		return inClass.GetDefaultObject()->mCost;
	else
		return TArray< FItemAmount >();"
            },
            { "static UFGSchematic::GetDependentOnSchematic",
@"	return inClass.GetDefaultObject()->mDependsOnSchematic;"
			},
            { "static UFGSchematic::GetItemIcon",
@"	if (inClass)
		return inClass.GetDefaultObject()->mSchematicIcon;
	else
		return FSlateBrush();"
            },
            { "static UFGSchematic::GetSchematicCategory",
@"	if (inClass)
		return inClass.GetDefaultObject()->mSchematicCategory;
	else
		return TSubclassOf< class UFGSchematicCategory >();"
            },
            { "static UFGSchematic::GetSchematicDisplayName",
@"	if (inClass)
		return inClass.GetDefaultObject()->mDisplayName;
	else
		return FText();"
            },
            { "static UFGSchematic::GetSubCategories",
@"	if(inClass)
		out_subCategories = inClass.GetDefaultObject()->mSubCategories;"
            },
            { "static UFGSchematic::GetTechTier",
@"	if (inClass)
		return inClass.GetDefaultObject()->mTechTier;
	else
		return int32();"
            },
            { "static UFGSchematic::GetTimeToComplete",
@"	if (inClass)
		return inClass.GetDefaultObject()->mTimeToComplete;
	else
		return float();"
            },
            { "static UFGSchematic::GetType",
@"	if (inClass)
		return inClass.GetDefaultObject()->mType;
	else
		return ESchematicType();"
            },
            { "static UFGSchematic::GetUnlocks",
@"	if (inClass)
		return inClass.GetDefaultObject()->mUnlocks;
	else
		return TArray<UFGUnlock*>();"
            },
            { "static UFGSchematic::SetCost",
@"	inClass.GetDefaultObject()->mCost = Cost;"
			},
            { "static UFGSchematic::SetDisplayName",
@"	inClass.GetDefaultObject()->mDisplayName = Name;"
			},
            { "static UFGSchematic::SetTechTier",
@"	inClass.GetDefaultObject()->mTechTier = Tier;"
			},
            { "static UFGSchematic::SetTimeToComplete",
@"	inClass.GetDefaultObject()->mTimeToComplete = sec;"
			},
            { "static UFGSchematic::SetType",
@"	inClass.GetDefaultObject()->mType = Type;"
			},
            { "static UFGRecipe::GetProducedIn",
@"	TArray<TSubclassOf<UObject>>   out;
	if (!inClass)
		return TArray< TSubclassOf< UObject > >();

	TArray<TSoftClassPtr<UObject>> In = inClass.GetDefaultObject()->mProducedIn;
	if (In.Num() > 0)
	{
		for (int j = 0; j < In.Num(); j++)
		{
			TSubclassOf<UObject> obj = In[j].LoadSynchronous();
			if(obj)
				out.Add(obj);
		}
		return out;
	}
	else
		return TArray<TSubclassOf<UObject>>();"
            },
            { "static UFGItemDescriptor::GetIconCameraTransform",
@"	if (inClass)
#if WITH_EDITOR
		return inClass.GetDefaultObject()->mIconCameraTransform;
#else
		return FTransform();
#endif
	else
		return FTransform();"
            },
            { "static UFGItemDescriptor::SetIconCameraTransform",
@"#if WITH_EDITOR
	if (inClass)
		inClass.GetDefaultObject()->mIconCameraTransform = cameraTransform;
#endif"
            },
            { "static UFGItemDescriptor::GetIconFOV",
@"	if (inClass)
#if WITH_EDITOR
		return inClass.GetDefaultObject()->mIconFOV;
#else
		return float();
#endif
	else
		return float();"
            },
            { "static UFGItemDescriptor::SetIconFOV",
@"#if WITH_EDITOR
	if (inClass)
		inClass.GetDefaultObject()->mIconFOV = iconFOV;
#endif"
            },
            { "static UFGItemDescriptor::GetIconObjectOrientation",
@"	if (inClass)
#if WITH_EDITOR
		return inClass.GetDefaultObject()->mIconObjectOrientation;
#else
		return FRotator();
#endif
	else
		return FRotator();"
            },
            { "static UFGItemDescriptor::SetIconObjectOrientation",
@"#if WITH_EDITOR
	if (inClass)
		inClass.GetDefaultObject()->mIconObjectOrientation = objectOrientation;
#endif"
            },
            { "static UFGItemDescriptor::GetIconCameraDistance",
@"	if (inClass)
#if WITH_EDITOR
		return inClass.GetDefaultObject()->mIconCameraDistance;
#else
		return float();
#endif
	else
		return  float();"
            },
            { "static UFGItemDescriptor::SetIconCameraDistance",
@"#if WITH_EDITOR
	if (inClass)
		inClass.GetDefaultObject()->mIconCameraDistance = cameraDistance;
#endif"
            },
            { "static UFGItemDescriptor::GetIconSkyOrientation",
@"	if (inClass)
#if WITH_EDITOR
		return inClass.GetDefaultObject()->mIconSkyOrientation;
#else
		return FRotator();
#endif
	else
		return FRotator();"
            },
            { "UFGSchematicPurchasedDependency::Init",
@"	this->mSchematics = schematics;
    this->mRequireAllSchematicsToBePurchased = requireAllSchematicsToBePurchased;"
            },
            { "UFGSchematicPurchasedDependency::GetSchematics",
@"  out_schematics = mSchematics;"  
            },
            { "FFluidBox::Serialize",
@"	if (ar.ArIsSaveGame) {

        ar << Content;
    }
	return true;"
            },
            { "FFluidBox::operator==",
@"	return !this->operator!=(other);"
            },
            { "FFluidBox::operator!=",
@"	return (bool)FPlatformMemory::Memcmp(this, &other, sizeof(FFluidBox));"
            },
            { "FInventoryItem::Serialize",
@"	ar.UsingCustomVersion(FFactoryGameCustomVersion::GUID);
	if (ar.CustomVer(FFactoryGameCustomVersion::GUID) >= 2) {
		ar << ItemClass;
		ar << ItemState;
	}
	return true;"
            },
            { "FRailroadTrackPosition::Serialize",
@"	if (ar.ArIsSaveGame) {
		ar << Offset;
		ar << Forward;
	}

	return true;"
            },
            { "FSignData::Serialize",
@"	if (ar.ArIsSaveGame) {
		ar << BackgroundColorIndex;
	}

	return true;"
            },
            { "FSaveCollectorArchive::FSaveCollectorArchive",
@":mObjectsToSave(toFill) {}"
            },
            { "FHolgramAStarHelper::GetNeighbour",
@"  return FHologramAStarNode(0);"
            },
            { "UFGComboBoxSearch::HandleGenerateWidget",
@"  return SNew(SSpacer);"
            },
            { "FGSSearchableComboBox::GenerateMenuItemRow",
@"  return SNew(STableRow<TSharedPtr<FString>>, OwnerTable);"
            },
            { "UFGColoredInstanceMeshProxy::ShouldCreateRenderState",
@"#if WITH_EDITOR // Ensure visibility in blueprint & editor.
    if( GetWorld()->WorldType == EWorldType::Editor || GetWorld()->WorldType == EWorldType::EditorPreview)
    {
        return true;
    }
#endif    
    // only create when its blocking instancing.
    return mBlockInstancing;"
            },
            { "FFactoryGameCustomVersion::GUID",
@"FGuid(0x0F4E61DC1, 0x7C029ACE, 0x85D7D561, 0x0E42F6A3D); //See symbol ?GUID@FFactoryGameCustomVersion@@2UFGuid@@B in IDA for value <0F4E61DC1h, 7C029ACEh, 85D7D561h, 0E42F6A3Dh>

//Stuff to register custom version for UE4 tracking
FCustomVersionRegistration GRegisterFactoryGameCustomVersion{ FFactoryGameCustomVersion::GUID, FFactoryGameCustomVersion::Type::LatestVersion, TEXT(""Dev-Framework"") }" }, // I don't like this multiline
            { "FSaveCustomVersion::GUID",
@" FGuid(0x21043E2F, 0x13E61FD6, 0x513B9D51, 0x3636A230); //See symbol ?GUID@FSaveCustomVersion@@2UFGuid@@B in IDA for value <21043E2Fh, 13E61FD6h, 513B9D51h, 3636A230h>" },
            { "UFGGameUserSettings::mCVarSink",
@"FConsoleCommandDelegate::CreateStatic(&UFGGameUserSettings::CVarSinkHandler)" },
            { "UFGServerObject::GetOuterServerManager",
@"  return *Cast<UFGServerManager>(GetOuter());" }
        };

        private static readonly Dictionary<string, string> CustomSuper = new Dictionary<string, string>()
        {
            { "AFGCharacterPlayer", "Super(ObjectInitializer.SetDefaultSubobjectClass<UFGCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))" },
            { "FLargeDataTransfer", "mNumChunks(0)" }
        };

        private static readonly Dictionary<string, string> NestedStructs = new Dictionary<string, string>()
        {
            { "ItemHolderHistory", "FConveyorBeltItems::ItemHolderHistory" },
            { "FGenerateIconContext", "UFGItemDescriptor::FGenerateIconContext" },
            { "Type", "FSaveCustomVersion::Type" },
            { "FFrequencyGrid2D_Cell", "UFGReplicationGraphNode_ConveyorSpatialFrequency::FFrequencyGrid2D_Cell" },
            { "FSettings", "UFGReplicationGraphNode_ConveyorSpatialFrequency::FSettings" },
            { "FRailroadHitResult", "AFGRailroadSubsystem::FRailroadHitResult" },
            { "Plan", "AFGWheeledVehicleAIController::Plan" },
            { "FSignHandle", "UFGSignPixelInstanceManager::FSignHandle" },
        };

        static void Main(string[] args)
        {
            if (args.Length == 0)
            {
                args = new string[] { "", "", "" };
                Console.Write("Headers dir: ");
                args[0] = Console.ReadLine();
                Console.Write("Cpp dir: ");
                args[1] = Console.ReadLine();
                Console.Write("Show only count? (y/N): ");
                args[2] = Console.ReadLine();
                if (args[2].ToLower() == "y" || args[2].ToLower() == "yes")
                    args[2] = "true";
                else
                    args[2] = "false";
            }
            if (args.Length >= 3)
                CountOnly = bool.Parse(args[2]);
            Directory.Delete(args[1], true); // remove the old implementations
            Stopwatch stopwatch = new Stopwatch();
            stopwatch.Start();
            Implement(args[0], args[1]);
            stopwatch.Stop();
            Console.WriteLine($"Done. Generated {FunctionCount} functions in {stopwatch.ElapsedMilliseconds} ms.");
        }

        private static void Implement(string path, string saveLocation)
        {
            if (File.Exists(path))
            {
                if (path.EndsWith(".h"))
                    ImplementFile(path, saveLocation);
            }
            else if (Directory.Exists(path))
            {
                foreach (string dir in Directory.EnumerateDirectories(path))
                {
                    string newSaveLocation = saveLocation + Path.DirectorySeparatorChar + new DirectoryInfo(dir).Name;
                    Directory.CreateDirectory(newSaveLocation);
                    Implement(dir, newSaveLocation);
                }
                foreach (string file in Directory.EnumerateFiles(path))
                    if (file.EndsWith(".h"))
                        ImplementFile(file, saveLocation);
            }
        }

        private static HashSet<string> InlineImplementedFunctions = new HashSet<string>();

        private static void ImplementFile(string filePath, string saveDir)
        {
            string fileContents;
            using (StreamReader reader = new StreamReader(filePath))
                fileContents = reader.ReadToEnd();
            List<string> implementations = new List<string>();
            // TODO: Maybe clear InlineImplementedFunctions, but it's not like they conflict
            foreach (Match match in Regex.Matches(fileContents, @"^(FORCEINLINE|inline)\s+(.+\(.*\))\s*{?$", RegexOptions.Multiline))
            {
                InlineImplementedFunctions.Add(match.Groups[2].Value);
            }
            foreach(Match match in Regex.Matches(fileContents, @"^([ \t]*)(class|struct) ([^ ]*? )??([^ ]*?)( ?: ?[^{]*?)?\s*{((?:.|\n)*?)^\1};", RegexOptions.Multiline)) // Match class/struct definition
            {
                string FGAPI = match.Groups[3].Value;
                string className = match.Groups[4].Value;
                string classContents = match.Groups[6].Value;
                if (!IsValidClassName(className))
                    continue;
                implementations.AddRange(ImplementClass(className, classContents, !string.IsNullOrWhiteSpace(FGAPI)));
            }
            using (StreamWriter writer = new StreamWriter($"{saveDir}{Path.DirectorySeparatorChar}{Path.GetFileName(filePath).Replace(".h", ".cpp")}"))
            {
                writer.WriteLine($"// This file has been automatically generated by the Unreal Header Implementation tool");
                writer.WriteLine($"");
                writer.WriteLine($"#include \"{Path.GetFileName(filePath)}\"");
                if (ExtraIncludes.ContainsKey(Path.GetFileNameWithoutExtension(filePath)))
                {
                    foreach (string incl in ExtraIncludes[Path.GetFileNameWithoutExtension(filePath)])
                    {
                        writer.WriteLine($"#include \"{incl}\"");
                    }
                }
                writer.WriteLine($"");
                if(ExtraCPPContent.ContainsKey(Path.GetFileNameWithoutExtension(filePath)))
                {
                    writer.WriteLine(ExtraCPPContent[Path.GetFileNameWithoutExtension(filePath)]);
                }
                if (filePath.Contains("FGCheatBoardWidget.h"))
                    writer.WriteLine("#if WITH_CHEATS");
                foreach (string func in implementations)
                    writer.WriteLine(func);
                if (filePath.Contains("FGCheatBoardWidget.h"))
                    writer.WriteLine("#endif");
                if (filePath.Contains("FactoryGame.h"))
                {
                    writer.WriteLine("DEFINE_LOG_CATEGORY(LogGame);"); // TODO: Generate this for all logs
                    writer.WriteLine("DEFINE_LOG_CATEGORY(LogSigns);"); // TODO: Generate this for all logs
                }
                if (filePath.Contains("FactoryGameModule.h"))
                    writer.WriteLine("IMPLEMENT_PRIMARY_GAME_MODULE(FDefaultGameModuleImpl, FactoryGame, \"FactoryGame\");");
            }
        }

        private static List<string> ImplementClass(string className, string classContents, bool FGAPI)
        {
            List<string> implementations = new List<string>();
            bool needsFObjectInitializer = Regex.IsMatch(classContents, @"GENERATED_U(CLASS|INTERFACE)_BODY");
            bool needsGetLifetimeReplicatedProps = Regex.IsMatch(classContents, @"UPROPERTY\(.*(?<!Not)Replicated.*\)");
            classContents = Regex.Replace(classContents, @"\/+ *\*(?:.|\s)*?\*\/", ""); // fix for comments containing brackets being matched as functions
            classContents = Regex.Replace(classContents, @"\/{2,}.*", ""); // fix for comments causing some error
            classContents = Regex.Replace(classContents, @"\s*GENERATED.*?\(\)", ""); // fix for GENERATED... macros being matched
            classContents = Regex.Replace(classContents, @"\s*UPROPERTY ?\( ?(?:.|\s)*?;", ""); // fix for UPROPERTY... macros being matched
            classContents = Regex.Replace(classContents, @"\s*UE_DEPRECATED ?\( ?(?:.|\s)*?\)", ""); // fix for UE_DEPRECATED... macros being matched
            classContents = Regex.Replace(classContents, @"^\s*DEPRECATED ?\( ?(?:.|\s)*?\)", "", RegexOptions.Multiline); // fix for DEPRECATED... macros being matched

            // Implement with #if ... and delete it (fixes issues and requires less manual changes in the end)
            foreach (Match ifMacro in Regex.Matches(classContents, @"\s*#if(def)? (.*?)\n((?:.|\n)*?)\n\s*#endif(.*)"))
            {
                string ifContents = ifMacro.Groups[3].Value;
                implementations.Add($"#if{ifMacro.Groups[1].Value} {ifMacro.Groups[2].Value.Trim()}");
                foreach (Match match in Regex.Matches(ifContents, @"^([ \t]*)(class|struct) ([^ ]*? )??([^ ]*?)( ?: ?.*?)?\s*{((?:.|\n)*?)^\1};", RegexOptions.Multiline)) // Match inner class/struct definition
                {
                    string innerClassName = match.Groups[4].Value;
                    string innerClassContents = match.Groups[6].Value;
                    if (!IsValidClassName(innerClassName))
                        continue;
                    implementations.AddRange(ImplementClass(className + "::" + innerClassName, innerClassContents, FGAPI));
                    ifContents = ifContents.Replace(match.Value, "");
                }
                implementations.AddRange(ImplementFunctions(ifContents, className));
                implementations.AddRange(ImplementStaticVars(ifContents, className));
                implementations.Add($"#endif {ifMacro.Groups[4].Value.Trim()}");
            }
            classContents = Regex.Replace(classContents, @"\s*#if(def)?\s(.*?)\n((?:.|\n)*?)\n\s*#endif(.*)", "");
            foreach (Match match in Regex.Matches(classContents, @"^([\s\t]*)(class|struct)\s([^\s]*?\s)??([^\s]*?)(\s?:\s?.*?)?\s*{((?:.|\n)*?)^\1};", RegexOptions.Multiline)) // Match inner class/struct definition
            {
                string innerClassName = match.Groups[4].Value;
                string innerClassContents = match.Groups[6].Value;
                if (!IsValidClassName(innerClassName))
                    continue;
                implementations.AddRange(ImplementClass(className + "::" + innerClassName, innerClassContents, FGAPI));
                classContents = classContents.Replace(match.Value, "");
            }
            implementations.AddRange(ImplementFunctions(classContents, className));
            implementations.AddRange(ImplementStaticVars(classContents, className));

            if (needsFObjectInitializer && !implementations.Any((impl) => impl.Replace(" ", "").Contains($"{className}::{className}(constFObjectInitializer")) && !InlineImplementedFunctions.Any((impl) => impl.Replace(" ", "").Contains($"{className}::{className}(classFObjectInitializer")))
                implementations.Add($"{className}::{className}(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {{}}");

            if (needsGetLifetimeReplicatedProps && !implementations.Any((impl) => impl.Contains($"void {className}::GetLifetimeReplicatedProps")))
                implementations.Add($"void {className}::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> & OutLifetimeProps) const {{ Super::GetLifetimeReplicatedProps(OutLifetimeProps); }}");

            return implementations;
        }

        private static List<string> ImplementStaticVars(string content, string className)
        {
            List<string> implementations = new List<string>();
            foreach (Match function in Regex.Matches(content, @"(const\s)?static\s(const\s)?\s*([\w\d_]*?)\s+([\w\d_]*?);", RegexOptions.Multiline))
            {
                string isConst = function.Groups[1].Value + function.Groups[2].Value;
                string type = FixReturnType(function.Groups[3].Value).Trim();
                string name = function.Groups[4].Value;
                if (CustomImplementation.ContainsKey($"{className}::{name}"))
                {
                    implementations.Add($"{isConst}{type} {className}::{name} = {CustomImplementation[$"{className}::{name}"]};");
                }
                else
                {
                    if (type.Contains("FAutoConsoleVariableSink")) // for this classes there is no constructor with no params, but NULL works
                        implementations.Add($"{isConst}{type} {className}::{name} = NULL;");
                    else // but NULL doesn't work for everything
                        implementations.Add($"{isConst}{type} {className}::{name} = {type}();");
                }
            }
            return implementations;
        }

        private static List<string> ImplementFunctions(string content, string className)
        {
            // Remove access modifiers
            content = Regex.Replace(content, @"\r?\n\s*public:", "\r\n");
            content = Regex.Replace(content, @"\r?\n\s*private:", "\r\n");
            content = Regex.Replace(content, @"\r?\n\s*protected:", "\r\n");

            // Remove event/delegate declarations, which are matched as functions
            content = Regex.Replace(content, @"^\s*DECLARE_.*\(.*\)\r?\n", "\r\n", RegexOptions.Multiline);
            List<string> implementations = new List<string>();
            // Match function definition (including UFUNCTIONs), nothing to see here ... just walk away ... probably the reason for many missing implementations...
            foreach (Match function in Regex.Matches(content, @"^\s*(?:(UFUNCTION\s*\(.*?\))\s*)?(template\s*<\s*.*?>\s*)?(virtual\s?)?(static\s?)?(const\s?)?(class\s?)?(explicit\s?)?([^=()\n{}]*?\s)?\n*((?:[^=<>()\n{}]|operator.+)*?)(\([^{}\[]*?\))(\s*const)?(\s*override)?([^<>\n]*);", RegexOptions.Multiline))
            {
                // string comment = function.Groups[1].Value; // removed because regex took too long
                string ufunction = function.Groups[1].Value;
                string template = function.Groups[2].Value;
                string isVirtual = function.Groups[3].Value;
                string isStatic = function.Groups[4].Value;
                string isReturnConst = function.Groups[5].Value;
                string isClass = function.Groups[6].Value;
                string isExplicit = function.Groups[7].Value;
                string returnType = function.Groups[8].Value;
                string functionName = function.Groups[9].Value;
                string parameters = function.Groups[10].Value;
                string isConst = function.Groups[11].Value;
                string isOverride = function.Groups[12].Value;
                string extras = function.Groups[13].Value;

                if (extras.Contains("PURE_VIRTUAL")) // ignore pure virtual macro
                    continue;

                if (!IsValidFunctionName(functionName) && !(functionName.Trim().Replace("~", "") == className && string.IsNullOrWhiteSpace(returnType)))
                    continue;

                if (!string.IsNullOrWhiteSpace(template)) // All of them end up commented
                    continue;
                // regex takes too long and it is the only other way to fix UPARAM's closing bracket being matched as parameter closing bracket...
                // also happens on non primitive default parameters 
                int bracketCount = parameters.Count(ch => ch == '(') - parameters.Count(ch => ch == ')');
                if (bracketCount > 0)
                {
                    parameters += isConst + isOverride;
                    isConst = "";
                    isOverride = "";
                    while (bracketCount > 0)
                    {
                        parameters += extras[0];
                        if (extras[0] == '(')
                            bracketCount++;
                        if (extras[0] == ')')
                            bracketCount--;
                        extras = extras.Substring(1);
                    }
                    if (extras.Contains("const"))
                        isConst = " const";
                    if (extras.Contains("override"))
                        isConst = " override";
                }

                parameters = Regex.Replace(parameters, @"meta\s*=\s*\(.*?\)", ""); // also meta=() brackets
                parameters = Regex.Replace(parameters, @"UPARAM\s*\(.*?\)", "");

                if (extras.Contains('{') || extras.Contains("delete") || extras.Contains("="))
                    continue; // already implemented in header and it matched "... { return ...; }"

                parameters = Regex.Replace(parameters, @"\/\*.*?\*\/", ""); // fix for commented defaults
                template = Regex.Replace(template, @"\/\*.*?\*\/", ""); // fix for commented defaults ?

                if (!string.IsNullOrWhiteSpace(ufunction))
                {
                    if (Regex.IsMatch(ufunction, @"\WBlueprintImplementableEvent\W"))
                    {
                        if (!CountOnly)
                            Console.WriteLine($"Skipped {className}::{functionName} (BlueprintImplementableEvent)");
                        continue;
                    }
                    if (Regex.IsMatch(ufunction, @"\WBlueprintNativeEvent\W") || Regex.IsMatch(ufunction, @"\W(?<!""|=\s*)Server\W") || Regex.IsMatch(ufunction, @"\WClient\W") || Regex.IsMatch(ufunction, @"\WNetMulticast\W"))
                    {
                        if (Regex.IsMatch(ufunction, @"\WBlueprintNativeEvent\W") && className[0] == 'I')
                        {
                            if (!CountOnly)
                                Console.WriteLine($"Skipped {className}::{functionName} (BlueprintNativeEvent in Interface)"); // https://answers.unrealengine.com/questions/832889/blueprintnativeevent-function-already-has-a-body.html
                            continue;
                        }
                        ImplementFunction(implementations, className, isClass, isReturnConst, returnType, functionName.Trim() + "_Implementation", parameters, isConst, template, isStatic);
                    }
                    else if (Regex.IsMatch(ufunction, @"\WBlueprintPure\W") || Regex.IsMatch(ufunction, @"\WBlueprintCallable\W") || Regex.IsMatch(ufunction, @"\WExec\W", RegexOptions.IgnoreCase) || Regex.IsMatch(ufunction, @"\WCallInEditor\W", RegexOptions.IgnoreCase) || Regex.Replace(TrimUselessSpaces(ufunction), @"( ?(?:Category ?= ?"".*?""|meta ?= ?"".*""|meta ?= ?\(.*?\))(?:,| )?)", "") == "UFUNCTION()")
                        ImplementFunction(implementations, className, isClass, isReturnConst, returnType, functionName, parameters, isConst, template, isStatic);
                    if (Regex.IsMatch(ufunction, @"\WWithValidation\W"))
                        ImplementFunction(implementations, className, isClass, isReturnConst, "bool ", functionName.Trim() + "_Validate", parameters, isConst, template, isStatic);
                }
                else
                    ImplementFunction(implementations, className, isClass, isReturnConst, returnType, functionName, parameters, isConst, template, isStatic);
            }
            return implementations;
        }

        private static void ImplementFunction(List<string> implementations, string className, string isClass, string isReturnConst, string returnType, string functionName, string parameters, string isConst, string template, string isStatic)
        {
            string withoutDestructorThingy = functionName.Trim().Replace("~", "");
            string withoutOuterClass = className.Substring(className.LastIndexOf(":") + 1);
            if (IsValidReturnType(returnType) || (withoutDestructorThingy == withoutOuterClass && string.IsNullOrWhiteSpace(returnType)))
            {
                if (!string.IsNullOrWhiteSpace(template))
                    template = FixDefaults(template.Trim().TrimEnd('>')) + '>' + Environment.NewLine;
                string result = $"{template}{isReturnConst}{FixReturnType(returnType)}{className}::{functionName}({Regex.Replace(FixDefaults(parameters.Trim().TrimEnd(')')), @"(?<!<)\b(class|struct)\b", "")}){isConst}";
                if (CustomSuper.ContainsKey(functionName.Trim()))
                {
                    result += $" : {CustomSuper[functionName.Trim()]} ";
                }
                else
                {
                    if (parameters.Contains("objectInitializer") && withoutDestructorThingy == className) // if it is constructor of derived class
                        result += " : Super(objectInitializer) ";
                    else if (parameters.Contains("ObjectInitializer") && withoutDestructorThingy == className) // if it is constructor of derived class
                        result += " : Super(ObjectInitializer) ";
                    if (parameters.Replace(" ", "").Contains("FArchive&inInnerArchive"))
                        result += " : FArchiveProxy(inInnerArchive) ";
                    if (parameters.Replace(" ", "").Contains("UCharacterMovementComponent"))
                        result += " : FNetworkPredictionData_Client_Character(clientMovement) ";
                    if (functionName.Replace(" ", "").Contains("FObjectReader"))
                        result += " : FObjectReader(Obj, InBytes) ";
                    if (functionName.Replace(" ", "").Contains("FObjectWriter"))
                        result += " : FObjectWriter(Obj, InBytes) ";
                }

                if (CustomImplementation.ContainsKey($"{(!string.IsNullOrWhiteSpace(isStatic) ? "static " : "")}{className}::{functionName}")) // aghhhh
                {
                    string customImplementation = CustomImplementation[$"{(!string.IsNullOrWhiteSpace(isStatic) ? "static " : "")}{className}::{functionName}"];
                    if(customImplementation[0] == ':')
                        result += customImplementation;
                    else
                        result += $" {{\r\n{customImplementation}\r\n}}";
                }
                else
                {
                    result += $"{{ "; // TODO: Add space for nice formatting
                    if (returnType.Contains("void") || string.IsNullOrWhiteSpace(returnType))
                    {
                        if (NeedsSuper.Contains(functionName.Trim()) || (ConditionalSuper.ContainsKey(functionName.Trim()) && className.Trim().StartsWith(ConditionalSuper[functionName.Trim()])))
                            result += $"Super::{functionName}({string.Join(",", Regex.Matches(FixDefaults(parameters.Trim().TrimEnd(')')), @"(?:.*? )??(.*?) ([^ ]*?)(?:, ?| \)|$)").Cast<Match>().Select(match => match.Groups[2].Value))}); ";
                        result += $"}}";
                    }
                    else
                    {
                        result += $"return ";
                        if (returnType.Trim().EndsWith("&"))
                            if (returnType.Trim().TrimEnd('&') == className)
                                result += $"*(this)";
                            else
                                result += $"*(new {returnType.Trim().TrimEnd('&')})"; // Brabb3l's life-hacks
                        else if (returnType.Trim().EndsWith("*"))
                            result += $"nullptr";
                        else
                            result += $"{GetCustomReturn(returnType)}";
                        result += $"; }}";
                    }
                }
                if (!implementations.Contains(result))
                    implementations.Add(result);
                if(!CountOnly)
                    Console.WriteLine($"Generated {className}::{functionName}");
                FunctionCount++;
            }
        }

        private static bool IsValidClassName(string className)
        {
            return Regex.Match(className, @"^[\w\d_]+$").Success;
        }

        private static bool IsValidFunctionName(string functionName)
        {
            return Regex.Match(functionName.Trim(), @"^([\w\d_~]+|operator.+)$").Success && !(new string[] { "return", "if", "else", "const", "struct", "for" /* fill with more as they show up */ }).Contains(functionName.Trim()) && !IsAllCaps(functionName.Trim()); // Don't match macros
        }

        private static string FixReturnType(string returnType)
        {
            returnType = returnType.Trim();
            if (returnType.EndsWith("*"))
            {
                if (NestedStructs.ContainsKey(returnType.TrimEnd('*')))
                    return NestedStructs[returnType.TrimEnd('*')] + "* ";
            }
            else if (returnType.EndsWith("&"))
            {
                if (NestedStructs.ContainsKey(returnType.TrimEnd('&')))
                    return NestedStructs[returnType.TrimEnd('&')] + "& ";
            }
            else
            {
                if (NestedStructs.ContainsKey(returnType))
                    return NestedStructs[returnType] + " ";
            }
            if(!string.IsNullOrWhiteSpace(returnType))
                return returnType.Trim() + " ";
            return "";
        }

        private static string GetCustomReturn(string returnType)
        {
            returnType = TrimUselessSpaces(returnType); // trim spaces between < and character, ( and character, etc.
            switch (returnType)
            {
                case "FReply":
                    return "FReply::Unhandled()";
                case "TSharedRef<SWidget>":
                    return "Super::RebuildWidget()";
                case "EDataValidationResult":
                    return "EDataValidationResult::Valid";
                default:
                    return $"{returnType}()";
            }
        }

        private static string TrimUselessSpaces(string str)
        {
            return Regex.Replace(str.Trim(), @"(?:([^\w\d])\s+([\w\d])|([\w\d])\s+([^\w\d])|([^\w\d])\s+([^\w\d]))", "$1$2$3$4$5$6");
        }

        private static string FixDefaults(string parameters)
        {
            string result = "";
            int paranthesisDepth = 1;
            bool isInDefault = false;
            for(int i = 1; i < parameters.Length; i++)
            {
                if (parameters[i] == '(')
                    paranthesisDepth++;
                if (parameters[i] == ')')
                    paranthesisDepth--;

                if(parameters[i] == '=')
                    isInDefault = true;

                if (parameters[i] == ',' && paranthesisDepth == 1)
                    isInDefault = false;

                if (!isInDefault)
                    result += parameters[i];
            }
            return result.Trim();
        }

        private static bool IsAllCaps(string str)
        {
            return !Regex.Match(str, "[a-z]").Success && !string.IsNullOrWhiteSpace(str);
        }

        private static bool IsValidReturnType(string returnType)
        {
            return !(new string[] { "return", "if", "else", "const", "struct", "for" /* fill with more as they show up */ }).Contains(returnType.Trim()) && !IsAllCaps(returnType) && !string.IsNullOrWhiteSpace(returnType) && !returnType.Contains("FORCEINLINE") && !returnType.Contains("+"); // FORCEINLINE are already implemented in header (?)
        }
    }
}
