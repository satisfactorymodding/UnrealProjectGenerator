#include "FactoryGameCustomVersion.h"
#include "FGMinimapCaptureActor.h"
#include "Components/SkyAtmosphereComponent.h"
#include "Engine/ExponentialHeightFog.h"
#if WITH_EDITOR
#include "LevelEditor.h"
#endif

void AFGWorldSettings::BeginDestroy() {
	Super::BeginDestroy();

#if WITH_EDITOR
	// Unregister Map Change Events
	FLevelEditorModule& LevelEditor = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	LevelEditor.OnMapChanged().Remove(mOnMapChangedDelegateHandle);
	mOnMapChangedDelegateHandle.Reset();

	// Unregister Actor Spawned Event
	GetWorld()->RemoveOnActorSpawnedHandler(mActorSpawnedDelegateHandle);
	mActorSpawnedDelegateHandle.Reset();
#endif
}
void AFGWorldSettings::Serialize(FArchive& ar) {
	Super::Serialize(ar);
	ar.UsingCustomVersion(FFactoryGameCustomVersion::GUID);
}
void AFGWorldSettings::PostLoad() {
	Super::PostLoad();
}
void AFGWorldSettings::PreInitializeComponents() {
	Super::PreInitializeComponents();

#if WITH_EDITOR
	// Register Map Change Events
	FLevelEditorModule& LevelEditor = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	mOnMapChangedDelegateHandle = LevelEditor.OnMapChanged().AddUObject(this, &AFGWorldSettings::HandleMapChanged);

	// Register Actor Spawned Event
	// mActorSpawnedDelegateHandle = GetWorld()->AddOnActorSpawnedHandler(FOnActorSpawned::FDelegate::CreateUObject(this, &AFGWorldSettings::OnActorSpawned));
#endif

	/*UFGSubsystemClasses* SubsystemClasses = UFGSubsystemClasses::Get();
	SpawnSubsystem<AFGFoliageRemovalSubsystem>(mFoliageRemovalSubsystem, SubsystemClasses->mFoliageRemovalSubsystemClass, TEXT("FoliageRemovalSubsystem"));
	SpawnSubsystem<AFGAudioVolumeSubsystem>(mAudioVolumeSubsystem, AFGAudioVolumeSubsystem::StaticClass(), TEXT("AudioVolumeSubsystem"));
	SpawnSubsystem<AFGBuildableSubsystem>(mBuildableSubsystem, SubsystemClasses->mBuildableSubsystemClass, TEXT("BuildableSubsystem"));
	SpawnSubsystem<AFGPhotoModeManager>(mPhotoModeManager, SubsystemClasses->mPhotoModeManagerClass, TEXT("PhotoModeManager"));

	if (GetWorld()->WorldType != EWorldType::Editor && GetWorld()->WorldType != EWorldType::EditorPreview) {
		SpawnSubsystem<AFGConveyorItemSubsystem>(mConveyorItemSubsystem, SubsystemClasses->mConveyorItemSubsystemClass, TEXT("ConveyorItemSubsystem"));
	}*/
}
void AFGWorldSettings::NotifyBeginPlay() {
	Super::NotifyBeginPlay();

	/*if (!GetWorld()->HasBegunPlay()) {
		AFGFoliageRemovalSubsystem* FoliageRemovalSubsystem = AFGFoliageRemovalSubsystem::Get(GetWorld());
		if (FoliageRemovalSubsystem) {
			FoliageRemovalSubsystem->Init();
		}

		UFGGameUserSettings* UserSettings = UFGGameUserSettings::GetFGGameUserSettings();
		if (UserSettings) {
			UserSettings->ApplyHologramColoursToCollectionParameterInstance(GetWorld());
		}
	}*/
}
AExponentialHeightFog* AFGWorldSettings::GetExponentialHeightFog() const {
	return mExponentialHeightFog.LoadSynchronous();
}
ASkyAtmosphere* AFGWorldSettings::GetSkyAtmosphere() const {
	return mSkyAtmosphere.LoadSynchronous();
}
AFGSkySphere* AFGWorldSettings::GetSkySphere() const {
	return mSkySphere.LoadSynchronous();
}
void AFGWorldSettings::UpdateWorldBounds() {
	/*UMaterialParameterCollection* ParameterCollection = UFGEnvironmentSettings::GetWorldBoundsParameters();

	if (ParameterCollection) {
		FVector2D Min, Max;
		UFGMapFunctionLibrary::GetWorldBounds(this, Min, Max);

		UKismetMaterialLibrary::SetVectorParameterValue(this, ParameterCollection,
			UFGEnvironmentSettings::WorldBoundsMinName,
			FLinearColor(FVector(Min.X, Min.Y, 0.0f)));

		UKismetMaterialLibrary::SetVectorParameterValue(this, ParameterCollection,
			UFGEnvironmentSettings::WorldBoundsExtentName,
			FLinearColor(FVector(Max.X - Min.X, Max.Y - Min.Y, 0.0f)));
	}*/
}