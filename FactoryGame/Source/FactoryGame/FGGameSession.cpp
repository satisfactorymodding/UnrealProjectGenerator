// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGGameSession.h"

AFGGameSession::AFGGameSession(){ }
void AFGGameSession::UpdateGameSession(){ }
void AFGGameSession::Destroyed(){ }
void AFGGameSession::InitOptions( const FString& options){ }
void AFGGameSession::OnStartSessionComplete( FName inSessionName, bool wasSuccessful){ }
void AFGGameSession::OnEndSessionComplete( FName InSessionName, bool bWasSuccessful){ }
void AFGGameSession::PostLogin(APlayerController* NewPlayer){ }
void AFGGameSession::NotifyLogout(const APlayerController* PC){ }
void AFGGameSession::HandleMatchHasStarted(){ }
void AFGGameSession::HandleMatchHasEnded(){ }
bool AFGGameSession::KickPlayer(APlayerController* kickedPlayer, const FText& kickReason){ return bool(); }
FFGOnlineSessionSettings AFGGameSession::GetSessionSettings( UWorld* forWorld, FString sessionName){ return FFGOnlineSessionSettings(); }
void AFGGameSession::SetSessionVisibility( ESessionVisibility visibility){ }
void AFGGameSession::ListenForIntroSequenceUpdated(){ }
void AFGGameSession::IntroSequenceUpdated(){ }
int32 AFGGameSession::GetNumPrivateConnections() const{ return int32(); }
int32 AFGGameSession::GetNumPublicConnections() const{ return int32(); }
void AFGGameSession::OnUpdateSessionComplete( FName sessionName, bool wasSuccessful){ }
