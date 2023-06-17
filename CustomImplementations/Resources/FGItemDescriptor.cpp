#include "FGCategory.h"
#include "FGItemCategory.h"

EResourceForm UFGItemDescriptor::GetForm(TSubclassOf<UFGItemDescriptor> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mForm;
	else
		return EResourceForm();
}
float UFGItemDescriptor::GetEnergyValue(TSubclassOf<UFGItemDescriptor> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mEnergyValue;
	else
		return float();
}
float UFGItemDescriptor::GetRadioactiveDecay(TSubclassOf<UFGItemDescriptor> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mRadioactiveDecay;
	else
		return float();
}
FText UFGItemDescriptor::GetItemName(TSubclassOf<UFGItemDescriptor> inClass) {
	if (!inClass)
		return FText();
	if (inClass.GetDefaultObject()->mUseDisplayNameAndDescription)
		return inClass.GetDefaultObject()->mDisplayName;
	else
		return FText::FromString(inClass->GetName());
}
FText UFGItemDescriptor::GetItemDescription(TSubclassOf<UFGItemDescriptor> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mDescription;
	else
		return FText();
}
UTexture2D* UFGItemDescriptor::GetSmallIcon(TSubclassOf<UFGItemDescriptor> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mSmallIcon;
	else
		return nullptr;
}
UTexture2D* UFGItemDescriptor::GetBigIcon(TSubclassOf<UFGItemDescriptor> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mPersistentBigIcon;
	else
		return nullptr;
}
UStaticMesh* UFGItemDescriptor::GetItemMesh(TSubclassOf<UFGItemDescriptor> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mConveyorMesh;
	else
		return nullptr;
}
int32 UFGItemDescriptor::GetStackSize(TSubclassOf<UFGItemDescriptor> inClass) {
	if (inClass)
		return static_cast<int32>(inClass.GetDefaultObject()->mStackSize);
	else
		return int32();
}
bool UFGItemDescriptor::CanBeDiscarded(TSubclassOf<UFGItemDescriptor> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mCanBeDiscarded;
	else
		return bool();
}
bool UFGItemDescriptor::RememberPickUp(TSubclassOf<UFGItemDescriptor> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mRememberPickUp;
	else
		return bool();
}
TSubclassOf<class UFGItemCategory> UFGItemDescriptor::GetItemCategory(TSubclassOf<UFGItemDescriptor> inClass) {
	return TSubclassOf<UFGItemCategory>(UFGItemDescriptor::GetCategory(inClass));
}
TSubclassOf<class UFGCategory> UFGItemDescriptor::GetCategory(TSubclassOf<UFGItemDescriptor> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mCategory;
	else
		return TSubclassOf<UFGCategory>();
}
FColor UFGItemDescriptor::GetFluidColor(TSubclassOf<UFGItemDescriptor> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mFluidColor;
	else
		return FColor();
}
FLinearColor UFGItemDescriptor::GetFluidColorLinear(TSubclassOf<UFGItemDescriptor> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mFluidColor.ReinterpretAsLinear();
	else
		return FLinearColor();
}
