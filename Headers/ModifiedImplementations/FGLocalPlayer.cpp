// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGLocalPlayer.h"

UFGEM_LoggedOutFromOnlineService::UFGEM_LoggedOutFromOnlineService(){ }
UFGEM_LostConnectionWithOnlineService::UFGEM_LostConnectionWithOnlineService(){ }
UFGEM_FailedToLoginToOnlineService::UFGEM_FailedToLoginToOnlineService(){ }
FFGOnlineFriend::FFGOnlineFriend(){ }
FFGOnlineFriend::FFGOnlineFriend(TSharedRef<FOnlineFriend> onlineFriend){ }
UFGLocalPlayer::UFGLocalPlayer(){ }
void UFGLocalPlayer::PlayerAdded( UGameViewportClient* inViewportClient, FPlatformUserId inUserId){ }
void UFGLocalPlayer::PlayerRemoved(){ }
bool UFGLocalPlayer::Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar){ return bool(); }
void UFGLocalPlayer::SubscribeToOptionUpdates(){ }
void UFGLocalPlayer::OnMaintainYAxisFOVUpdated(FString updatedCvar){ }
TEnumAsByte<ELoginState> UFGLocalPlayer::GetLoginState() const{ return TEnumAsByte<ELoginState>(); }
FString UFGLocalPlayer::GetUsername() const{ return FString(); }
FString UFGLocalPlayer::GetUsernameEpic() const{ return FString(); }
FString UFGLocalPlayer::GetUsernameSteam() const{ return FString(); }
void UFGLocalPlayer::SetupServerAndTravelToMap(const FString& mapName, const FString& options, const FString& sessionName, ESessionVisibility visibility){ }
bool UFGLocalPlayer::GetFriendList(TArray<FFGOnlineFriend>& out_friends){ return bool(); }
void UFGLocalPlayer::AutoLogin(){ }
void UFGLocalPlayer::CopyPresenceDataToLocalPresenceAndPushToServer(const TSharedRef<FOnlineUserPresence>& presence){ }
void UFGLocalPlayer::UpdatePresence(){ }
void UFGLocalPlayer::CheckForStartupArguments(){ }
void UFGLocalPlayer::TestSteamCommandLineArgs(FString &sessionId){ }
void UFGLocalPlayer::SetNextUpdatePresenceTime(float timeTillNextUpdate){ }
void UFGLocalPlayer::OnInviteReceived(const FPendingInvite& invite){ }
void UFGLocalPlayer::RefreshRecentRegisteredSocialAccountID(){ }
bool UFGLocalPlayer::HasReceivedProductUserId() const{ return bool(); }
TSharedPtr<const FUniqueNetId> UFGLocalPlayer::GetPlayerId() const{ return TSharedPtr<const FUniqueNetId>(); }
TSharedPtr<const FUniqueNetId> UFGLocalPlayer::GetPlayerIdEpic() const{ return TSharedPtr<const FUniqueNetId>(); }
TSharedPtr<const FUniqueNetId> UFGLocalPlayer::GetPlayerIdSteam() const{ return TSharedPtr<const FUniqueNetId>(); }
void UFGLocalPlayer::ConnectAccount(const FName currentPlatform){ }
void UFGLocalPlayer::LogOutEpicAndCreateNewAccountConnection(const FName currentPlatform){ }
void UFGLocalPlayer::CreateNewAccountConnection(const FName currentPlatform){ }
void UFGLocalPlayer::BroadcastAccountConnectionStepResult(const FName currentPlatform, EEosAccountConnectionResult result){ }
void UFGLocalPlayer::LoginAndConnectAccount(const FName currentPlatform){ }
void UFGLocalPlayer::ContinueWithoutConnectingAccount(const FName currentPlatform){ }
void UFGLocalPlayer::ResetAccountLinkingAfterConnect(FName currentPlatform, EEosAccountConnectionResult result){ }
void UFGLocalPlayer::ResetAccountLinkingAfterEpicLogout(FName currentPlatform, EEosAccountConnectionResult result){ }
void UFGLocalPlayer::TryResetAccountLinking(){ }
void UFGLocalPlayer::UnlinkAccount(){ }
void UFGLocalPlayer::LinkAccount(){ }
void UFGLocalPlayer::SwitchController( APlayerController* PC){ }
FString UFGLocalPlayer::GetNickname() const{ return FString(); }
void UFGLocalPlayer::LoginAndConnectOtherEpicAccount(){ }
void UFGLocalPlayer::ContinueWithAndHookUpSteamToEOSAfterEpicLogout(){ }
void UFGLocalPlayer::LogoutEpicAccountAndContinue(){ }
void UFGLocalPlayer::LoginEpicAccountPortal(){ }
void UFGLocalPlayer::LogoutEpicAccountPortal(){ }
void UFGLocalPlayer::ContinueWithoutMultiplayer(){ }
void UFGLocalPlayer::FindChildMappingContexts(const UFGInputMappingContext* mainContext, TArray<UFGInputMappingContext*>& out_childContexts) const{ }
void UFGLocalPlayer::OnLoginStatusChanged(int32 localUserNum, ELoginStatus::Type previous, ELoginStatus::Type current, const FUniqueNetId& userId){ }
void UFGLocalPlayer::OnLoginStatusChangedSteam(int32 localUserNum, ELoginStatus::Type previous, ELoginStatus::Type current, const FUniqueNetId& userId){ }
void UFGLocalPlayer::OnLoginStatusChanged(TSharedRef<UE::Online::FAccountInfo> AccountInfo, EOnlineIntegrationUnmappedContext Context){ }
void UFGLocalPlayer::SteamTaskRetryWaiter(){ }
void UFGLocalPlayer::StartSteamEOSConnect(){ }
void UFGLocalPlayer::OnLoginComplete(int32 localUserNum, bool wasSuccessful, const FUniqueNetId& userId, const FString& error){ }
void UFGLocalPlayer::OnLoginCompleteSteam(int32 localUserNum, bool wasSuccessful, const FUniqueNetId& userId, const FString& error){ }
void UFGLocalPlayer::OnAutoLoginComplete(int32 localUserNum, bool wasSuccessful, const FUniqueNetId& userId, const FString& error){ }
void UFGLocalPlayer::OnAutoLoginCompleteSteam(int32 localUserNum, bool wasSuccessful, const FUniqueNetId& userId, const FString& error){ }
void UFGLocalPlayer::OnConnectionStatusChanged(const FString& serviceName, EOnlineServerConnectionStatus::Type lastConnectionState, EOnlineServerConnectionStatus::Type connectionState){ }
void UFGLocalPlayer::OnConnectionStatusChangedSteam(const FString& serviceName, EOnlineServerConnectionStatus::Type lastConnectionState, EOnlineServerConnectionStatus::Type connectionState){ }
void UFGLocalPlayer::OnReadFriendsListComplete(int32 localUserNum, bool wasSuccessful, const FString& listName, const FString& errorStr){ }
void UFGLocalPlayer::OnReadFriendsListCompleteSteam(int32 localUserNum, bool wasSuccessful, const FString& listName, const FString& errorStr){ }
void UFGLocalPlayer::OnFriendsChange(){ }
void UFGLocalPlayer::OnFriendsChangeSteam(){ }
void UFGLocalPlayer::OnQueryUserInfoForFriendListComplete(int32 localUSerNum, bool wasSuccessful, const TArray< TSharedRef<const FUniqueNetId> >& userIds, const FString& errorString){ }
void UFGLocalPlayer::OnPresenceReceived(const  FUniqueNetId& userId, const TSharedRef<FOnlineUserPresence>& presence){ }
void UFGLocalPlayer::OnPresenceReceivedSteam(const  FUniqueNetId& userId, const TSharedRef<FOnlineUserPresence>& presence){ }
void UFGLocalPlayer::UpdateLoginState(){ }
bool UFGLocalPlayer::CanAutoLoginEpic() const{ return bool(); }
bool UFGLocalPlayer::CanAutoLoginSteam() const{ return bool(); }
FString UFGLocalPlayer::GetPresenceString() const{ return FString(); }
void UFGLocalPlayer::GetPresenceState(FPlayerPresenceState& outState) const{ }
ELoginState UFGLocalPlayer::FromLoginStatus(ELoginStatus::Type from) const{ return ELoginState(); }
void UFGLocalPlayer::OnLoggedIn(){ }
void UFGLocalPlayer::SetLoginStateEpic(ELoginState newLoginState){ }
void UFGLocalPlayer::SetLoginStateSteam(ELoginState newLoginState){ }
void UFGLocalPlayer::GetFriendsWithNoData(TArray<TSharedRef<const FUniqueNetId>>& out_usersWithNoData){ }
void UFGLocalPlayer::PushErrorAndAutosave(TSubclassOf<class UFGErrorMessage> errorMessage){ }
void UFGLocalPlayer::SetIsWaitingForEOSConnectLogin(bool waiting){ }
void UFGLocalPlayer::OnComandlineInviteSearchComplete(FBlueprintSessionResult result){ }
