#include "UObject/ObjectSaveContext.h"

FPrimaryAssetId UFGResearchTree::GetPrimaryAssetId() const {
	return FPrimaryAssetId(StaticClass()->GetFName(), FPackageName::GetShortFName(GetOutermost()->GetFName()));
}
FText UFGResearchTree::GetPreUnlockDisplayName(TSubclassOf<UFGResearchTree> inClass) {
	return inClass.GetDefaultObject()->mPreUnlockDisplayName;
}
FText UFGResearchTree::GetDisplayName(TSubclassOf<UFGResearchTree> inClass) {
	return inClass.GetDefaultObject()->mDisplayName;
}
FText UFGResearchTree::GetPreUnlockDescription(TSubclassOf<UFGResearchTree> inClass) {
	return inClass.GetDefaultObject()->mPreUnlockDescription;
}
FText UFGResearchTree::GetPostUnlockDescription(TSubclassOf<UFGResearchTree> inClass) {
	return inClass.GetDefaultObject()->mPostUnlockDescription;
}
FSlateBrush UFGResearchTree::GetResearchTreeIcon(TSubclassOf<UFGResearchTree> inClass) {
	return inClass.GetDefaultObject()->mResearchTreeIcon;
}
void UFGResearchTree::SetNodes(TSubclassOf<UFGResearchTree> inClass, TArray<UFGResearchTreeNode*> nodes) {
	inClass.GetDefaultObject()->mNodes = nodes;
}
TArray<class UFGResearchTreeNode*> UFGResearchTree::GetNodes(TSubclassOf<UFGResearchTree> inClass) {
	return inClass.GetDefaultObject()->mNodes;
}
TArray<class UFGAvailabilityDependency*> UFGResearchTree::GetUnlockDependencies(TSubclassOf<UFGResearchTree> inClass) {
	return inClass.GetDefaultObject()->mUnlockDependencies;
}
