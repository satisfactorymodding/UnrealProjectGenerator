// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRecipe.h"

bool UFGRecipe::CanEditChange(const FProperty* InProperty) const {
	return true;
}
void UFGRecipe::SetProduct(TSubclassOf<UFGRecipe> recipe, TArray<FItemAmount> product) {
	if (recipe)
		recipe.GetDefaultObject()->mProduct = product;
}
FText UFGRecipe::GetRecipeName(TSubclassOf<UFGRecipe> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mDisplayName;
	else
		return FText();
}
TArray<FItemAmount> UFGRecipe::GetIngredients(TSubclassOf<UFGRecipe> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mIngredients;
	else
		return TArray<FItemAmount>();
}
TArray<FItemAmount> UFGRecipe::GetProducts(TSubclassOf<UFGRecipe> inClass, bool allowChildRecipes) {
	if (inClass)
		return inClass.GetDefaultObject()->mProduct;
	else
		return TArray<FItemAmount>();
}
float UFGRecipe::GetManufacturingDuration(TSubclassOf<UFGRecipe> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mManufactoringDuration;
	else
		return float();
}
float UFGRecipe::GetManualManufacturingDuration(TSubclassOf<UFGRecipe> inClass) {
	if (inClass)
		return inClass.GetDefaultObject()->mManualManufacturingMultiplier;
	else
		return float();
}
TArray<TSubclassOf<UObject>> UFGRecipe::GetProducedIn(TSubclassOf<UFGRecipe> inClass) {
	TArray<TSubclassOf<UObject>> out;
	if (!inClass)
		return TArray<TSubclassOf<UObject>>();

	TArray<TSoftClassPtr<UObject>> In = inClass.GetDefaultObject()->mProducedIn;
	if (In.Num() > 0) {
		for (int j = 0; j < In.Num(); j++) {
			TSubclassOf<UObject> obj = In[j].LoadSynchronous();
			if (obj)
				out.Add(obj);
		}
		return out;
	}
	else
		return TArray<TSubclassOf<UObject>>();
}
void UFGRecipe::GetProducedIn(TArray<TSubclassOf<UObject>> &out_producedIn) const {
	out_producedIn = UFGRecipe::GetProducedIn(this->GetClass());
}

#if WITH_EDITOR
EDataValidationResult UFGRecipe::IsDataValid(TArray<FText>& ValidationErrors){ return EDataValidationResult::Valid; }
#endif 
#if WITH_EDITOR
#endif 
UFGRecipe::UFGRecipe() : Super() {
	this->mDisplayNameOverride = false;
	this->mDisplayName = INVTEXT("");
	this->mOverriddenCategory = nullptr;
	this->mManufacturingMenuPriority = 0.0;
	this->mManufactoringDuration = 1.0;
	this->mManualManufacturingMultiplier = 1.0;
	this->mMaterialCustomizationRecipe = nullptr;
	this->mVariablePowerConsumptionConstant = 0.0;
	this->mVariablePowerConsumptionFactor = 1.0;
}
TSubclassOf< UFGItemCategory > UFGRecipe::GetCategory(TSubclassOf< UFGRecipe > inClass){ return TSubclassOf<UFGItemCategory>(); }
float UFGRecipe::GetManufacturingMenuPriority(TSubclassOf< UFGRecipe > inClass){ return float(); }
bool UFGRecipe::HasAnyProducers(TSubclassOf< UFGRecipe > inClass){ return bool(); }
bool UFGRecipe::IsRecipeAffordable( AFGCharacterPlayer* player, TSubclassOf<  UFGRecipe > recipe){ return bool(); }
void UFGRecipe::SortByName(TArray< TSubclassOf< UFGRecipe > >& recipes){ }
void UFGRecipe::SortByManufacturingMenuPriority(TArray< TSubclassOf< UFGRecipe > >& recipes){ }
TSubclassOf< class UFGCustomizationRecipe > UFGRecipe::GetMaterialCustomizationRecipe(TSubclassOf< UFGRecipe > recipe){ return TSubclassOf<class UFGCustomizationRecipe>(); }
TSubclassOf< class UFGItemDescriptor > UFGRecipe::GetDescriptorForRecipe(TSubclassOf<  UFGRecipe > recipe){ return TSubclassOf<class UFGItemDescriptor>(); }
TArray< EEvents > UFGRecipe::GetRelevantEvents(TSubclassOf< UFGRecipe > inClass){ return TArray<EEvents>(); }
FText UFGRecipe::GetDisplayName() const{ return FText(); }
bool UFGRecipe::IsProducedIn(TSubclassOf<  UFGRecipe > inClass, TSubclassOf< UObject > inProducer){ return bool(); }
