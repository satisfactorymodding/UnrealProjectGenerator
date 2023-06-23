#include "Settings/FGUserSettingCategory.h"

FAutoConsoleVariableSink UFGGameUserSettings::mCVarSink = FConsoleCommandDelegate::CreateStatic(&UFGGameUserSettings::CVarSinkHandler);
