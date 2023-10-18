#include "Server/FGServerManager.h"

UFGServerManager& UFGServerObject::GetOuterServerManager() const {
  return * Cast<UFGServerManager>(GetOuter());
}
