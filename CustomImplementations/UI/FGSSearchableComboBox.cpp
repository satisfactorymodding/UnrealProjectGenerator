TSharedRef<ITableRow> FGSSearchableComboBox::GenerateMenuItemRow(TSharedPtr<FString> InItem, const TSharedRef<STableViewBase> &OwnerTable) {
  return SNew(STableRow<TSharedPtr<FString>>, OwnerTable);
}
