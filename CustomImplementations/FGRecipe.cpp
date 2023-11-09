#if WITH_EDITOR
bool UFGRecipe::CanEditChange(const FProperty* InProperty) const {
	return true;
}
void UFGRecipe::SetProduct(TSubclassOf<UFGRecipe> recipe, TArray<FItemAmount> product) {
	if (recipe)
		recipe.GetDefaultObject()->mProduct = product;
}
#endif
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
EDataValidationResult UFGRecipe::IsDataValid(TArray<FText>& ValidationErrors) {
	// MODDING IMPLEMENTATION
	EDataValidationResult ValidationResult = Super::IsDataValid(ValidationErrors);

	TArray<FItemAmount> AllReferencedItems;
	AllReferencedItems.Append(UFGRecipe::GetIngredients(GetClass()));
	AllReferencedItems.Append(UFGRecipe::GetProducts(GetClass()));

	for (const FItemAmount& ItemAmount : AllReferencedItems) {
		if (ItemAmount.ItemClass == nullptr) {
			ValidationErrors.Add(NSLOCTEXT("Recipe", "RecipeValidation_NullItem", "Null item referenced by recipe. Was the content it previously referenced deleted or moved?"));
			ValidationResult = EDataValidationResult::Invalid;
		}
	}

	return ValidationResult;
}
#endif 