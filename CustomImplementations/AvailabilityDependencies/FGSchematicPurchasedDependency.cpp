#if WITH_EDITOR
void UFGSchematicPurchasedDependency::Init(TArray<TSubclassOf<UFGSchematic>> schematics, bool requireAllSchematicsToBePurchased) {
  this->mSchematics = schematics;
  this->mRequireAllSchematicsToBePurchased = requireAllSchematicsToBePurchased;
}
void UFGSchematicPurchasedDependency::GetSchematics(TArray<TSubclassOf<UFGSchematic>> &out_schematics) const {
  out_schematics = mSchematics;
}
#endif