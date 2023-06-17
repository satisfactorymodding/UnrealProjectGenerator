void AFGResourceNode::InitResource(TSubclassOf<UFGResourceDescriptor> resourceClass, EResourceAmount amount, EResourcePurity purity) {
  this->mResourceClass = resourceClass;
  this->mAmount = amount;
  this->mPurity = purity;
}
