#include "Widgets/Layout/SSpacer.h"

TSharedRef<SWidget> UFGComboBoxSearch::HandleGenerateWidget(TSharedPtr<FString> Item) const {
  return SNew(SSpacer);
}
