#include "UObject/ObjectSaveContext.h"

FPrimaryAssetId UFGSchematic::GetPrimaryAssetId() const {
	return FPrimaryAssetId(StaticClass()->GetFName(), FPackageName::GetShortFName(GetOutermost()->GetFName()));
}
ESchematicType UFGSchematic::GetType(TSubclassOf<UFGSchematic> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mType;
	else
		return ESchematicType();
}
FText UFGSchematic::GetSchematicDisplayName(TSubclassOf<UFGSchematic> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mDisplayName;
	else
		return FText();
}
TSubclassOf<class UFGSchematicCategory> UFGSchematic::GetSchematicCategory(TSubclassOf<UFGSchematic> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mSchematicCategory;
	else
		return TSubclassOf<class UFGSchematicCategory>();
}
void UFGSchematic::GetSubCategories(TSubclassOf<UFGSchematic> inClass, TArray<TSubclassOf<UFGSchematicCategory>> &out_subCategories) {
	if (inClass)
		out_subCategories = inClass.GetDefaultObject()->mSubCategories;
}
TArray<FItemAmount> UFGSchematic::GetCost(TSubclassOf<UFGSchematic> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mCost;
	else
		return TArray<FItemAmount>();
}
TArray<class UFGUnlock*> UFGSchematic::GetUnlocks(TSubclassOf<UFGSchematic> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mUnlocks;
	else
		return TArray<UFGUnlock*>();
}
int32 UFGSchematic::GetTechTier(TSubclassOf<UFGSchematic> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mTechTier;
	else
		return int32();
}
float UFGSchematic::GetTimeToComplete(TSubclassOf<UFGSchematic> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mTimeToComplete;
	else
		return float();
}
FSlateBrush UFGSchematic::GetItemIcon(TSubclassOf<UFGSchematic> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mSchematicIcon;
	else
		return FSlateBrush();
}
