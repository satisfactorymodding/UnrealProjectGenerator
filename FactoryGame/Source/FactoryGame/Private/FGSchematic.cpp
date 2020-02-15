// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSchematic.h"

#if WITH_EDITOR
void UFGSchematic::PreSave( const  ITargetPlatform* targetPlatform){ }
#endif 
#if WITH_EDITOR
void UFGSchematic::AddRecipe( TSubclassOf< UFGSchematic > inClass, TSubclassOf<  UFGRecipe > recipe){ }
#endif 
#if WITH_EDITOR
void UFGSchematic::UpdateAssetBundleData(){ }
#endif 
#if WITH_EDITORONLY_DATA
void UFGSchematic::MigrateDataToNewSchematicCategory(){ }
#endif 
UFGSchematic::UFGSchematic(){ }
ESchematicType UFGSchematic::GetType( TSubclassOf< UFGSchematic > inClass){ return ESchematicType(); }
FText UFGSchematic::GetSchematicDisplayName( TSubclassOf< UFGSchematic > inClass){ return FText(); }
TSubclassOf< class UFGSchematicCategory > UFGSchematic::GetSchematicCategory( TSubclassOf< UFGSchematic > inClass){ return TSubclassOf<class UFGSchematicCategory>(); }
void UFGSchematic::GetSubCategories( TSubclassOf< UFGSchematic > inClass, UPARAM( ref ) TArray< TSubclassOf<  UFGSchematicCategory > >& out_subCategories){ }
TArray< FItemAmount > UFGSchematic::GetCost( TSubclassOf< UFGSchematic > inClass){ return TArray<FItemAmount>(); }
TArray< UFGUnlock* > UFGSchematic::GetUnlocks( TSubclassOf< UFGSchematic > inClass){ return TArray<UFGUnlock*>(); }
int32 UFGSchematic::GetTechTier( TSubclassOf< UFGSchematic > inClass){ return int32(); }
float UFGSchematic::GetShipTravelTimeAfterPurchase( TSubclassOf< UFGSchematic > inClass){ return float(); }
FSlateBrush UFGSchematic::GetItemIcon( TSubclassOf< UFGSchematic > inClass){ return FSlateBrush(); }
TSubclassOf< UFGSchematic > UFGSchematic::GetDependentOnSchematic( TSubclassOf< UFGSchematic > inClass){ return TSubclassOf<UFGSchematic>(); }
TArray< TSubclassOf< UFGSchematic > > UFGSchematic::GetAdditionalSchematicDependencies( TSubclassOf< UFGSchematic > inClass){ return TArray<TSubclassOf<UFGSchematic> >(); }
bool UFGSchematic::IsRepeatPurchasesAllowed( TSubclassOf< UFGSchematic > inClass){ return bool(); }
bool UFGSchematic::IsIncludedInBuild( TSubclassOf< UFGSchematic > inClass){ return bool(); }
void UFGSchematic::PostLoad(){ Super::PostLoad(); }
void UFGSchematic::Serialize( FArchive& ar){ Super::Serialize(ar ); }
FPrimaryAssetId UFGSchematic::GetPrimaryAssetId() const{ return FPrimaryAssetId(); }
