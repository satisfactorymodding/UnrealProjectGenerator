#include "UObject/ObjectSaveContext.h"

FPrimaryAssetId UFGResearchRecipe::GetPrimaryAssetId() const {
  return FPrimaryAssetId(StaticClass()->GetFName(), FPackageName::GetShortFName(GetOutermost()->GetFName()));
}
