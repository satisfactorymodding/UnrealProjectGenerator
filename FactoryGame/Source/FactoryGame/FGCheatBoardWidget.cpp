// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCheatBoardWidget.h"

#if WITH_CHEATS
FReply SFGCheatBoardWidget::OnKeyDown( const FGeometry& myGeometry, const FKeyEvent& inKeyEvent){ return FReply::Unhandled(); }
bool SFGCheatBoardWidget::SupportsKeyboardFocus() const{ return bool(); }
void SFGCheatBoardWidget::CloseCheatBoard(){ }
FReply SFGCheatBoardWidget::OnFocusReceived( const FGeometry& MyGeometry, const FFocusEvent& InFocusEvent){ return FReply::Unhandled(); }
void SFGCheatBoardWidget::ShowInputWindowFor( UProperty* prop){ }
void SFGCheatBoardWidget::ShowInputWindowFor( UBoolProperty* prop){ }
void SFGCheatBoardWidget::ShowInputWindowFor( UNumericProperty* prop){ }
void SFGCheatBoardWidget::ShowInputWindowFor( UClass* inClass){ }
void SFGCheatBoardWidget::ShowInputWindowFor( UStrProperty* prop){ }
void SFGCheatBoardWidget::ShowInputWindowFor( FLinearColor color){ }
TArray< UFunction* > SFGCheatBoardWidget::GetAllCheats(){ return TArray<UFunction*>(); }
FReply SFGCheatBoardWidget::OnCheatClicked( UFunction* func){ return FReply::Unhandled(); }
void SFGCheatBoardWidget::OnInputTextCommited( const FText& InText, ETextCommit::Type InCommitType){ }
FReply SFGCheatBoardWidget::OnBoolParm( bool value){ return FReply::Unhandled(); }
FReply SFGCheatBoardWidget::OnClassParm( UClass* inClass){ return FReply::Unhandled(); }
void SFGCheatBoardWidget::OnSetColorFromColorPicker( FLinearColor newColor){ }
UProperty* SFGCheatBoardWidget::GetNextProperty(){ return nullptr; }
#endif
