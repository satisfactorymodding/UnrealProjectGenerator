// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGNetworkLibrary.h"

bool UFGSessionLookup::StartLookup(){ return bool(); }
void UFGSessionLookup::InitialSearchCompleted(int32 controllerId, bool wasSuccessful, const FOnlineSessionSearchResult& searchResult){ }
void UFGSessionLookup::SetState(ESessionLookupState State){ }
bool UFGPresenceLibrary::IsOnline(const FOnlinePresence& presence){ return bool(); }
FOnlinePresence UFGPresenceLibrary::GetPresenceFromNetId(UObject* worldContext, const FUniqueNetIdRepl& netId){ return FOnlinePresence(); }
bool UFGPresenceLibrary::NetIdHasValidPresence(UObject* worldContext, const FUniqueNetIdRepl& netId){ return bool(); }
FString UFGPresenceLibrary::GetPresenceString(const FOnlinePresence& presence){ return FString(); }
FString UFGPresenceLibrary::GetSessionIDFromPresence(const FOnlinePresence& presence){ return FString(); }
bool UFGPresenceLibrary::IsPlayingThisGame(const FOnlinePresence& presence){ return bool(); }
bool UFGPresenceLibrary::IsPlayingOtherGame(const FOnlinePresence& presence){ return bool(); }
bool UFGPresenceLibrary::IsValid_OnlinePresence(const FOnlinePresence& a){ return bool(); }
bool UFGFriendsLibrary::EqualEqual_FriendFriend(const FFGOnlineFriend& A, const FFGOnlineFriend& B){ return bool(); }
FUniqueNetIdRepl UFGFriendsLibrary::GetFriendUniqueNetId(const FFGOnlineFriend& onlineFriend){ return FUniqueNetIdRepl(); }
FFGOnlineFriend UFGFriendsLibrary::GetFriendFromNetId(ULocalPlayer* friendOf, const FUniqueNetIdRepl& netId){ return FFGOnlineFriend(); }
bool UFGFriendsLibrary::GetFriendName(ULocalPlayer* friendOf,  const FFGOnlineFriend& onlineFriend, FString& out_displayName){ return bool(); }
bool UFGFriendsLibrary::IsWaitingForData(ULocalPlayer* friendOf, const FFGOnlineFriend& onlineFriend){ return bool(); }
bool UFGFriendsLibrary::IsValid_Friend(const FFGOnlineFriend& a){ return bool(); }
FFGOnlineSessionSettings UFGSessionLibrary::GetSessionSettingsForSession(UObject* worldContext, const FCommonSession& session){ return FFGOnlineSessionSettings(); }
FString UFGSessionLibrary::GetSessionId(UWorld* worldContext, const FCommonSession& session){ return FString(); }
ESessionVisibility UFGSessionLibrary::GetSessionVisibility(UObject* worldContext, const FCommonSession& session){ return ESessionVisibility(); }
FCommonSession UFGSessionLibrary::GetMySession(ULocalPlayer* localPlayer){ return FCommonSession(); }
void UFGSessionLibrary::GetPlayersInMySession(ULocalPlayer* localPlayer, TArray< FUniqueNetIdRepl >& out_playersInSession){ }
bool UFGSessionLibrary::IsInGameSession(ULocalPlayer* localPlayer){ return bool(); }
bool UFGSessionLibrary::IsSessionValid(const FCommonSession& session){ return bool(); }
TEnumAsByte<ECantJoinReason> UFGSessionLibrary::IsSessionJoinable(UObject* worldContext, const FCommonSession& session){ return TEnumAsByte<ECantJoinReason>(); }
void UFGSessionLibrary::JoinSession(APlayerController *player, const FCommonSession& session){ }
int32 UFGSessionLibrary::GetMaxNumberOfPlayers(UObject* worldContext, const FCommonSession& session){ return int32(); }
bool UFGSessionLibrary::QuerySessionByID(ULocalPlayer* localPlayer, FString sessionOnlineID, FSearchQueryCompleteDelegate onComplete){ return bool(); }
bool UFGSessionLibrary::CheckIsCompatibleVersion(const FFGOnlineSessionSettings& session){ return bool(); }
UE::Online::FSessionSettingsUpdate UFGSessionLibrary::CreateSessionSettingsUpdate(const TSharedRef<const UE::Online::ISession> session, const FFGOnlineSessionSettings& gameSessionSettings){ return UE::Online::FSessionSettingsUpdate(); }
FFGOnlineSessionSettings UFGSessionLibrary::SessionSettingsFromSession(const TSharedRef<const UE::Online::ISession> session){ return FFGOnlineSessionSettings(); }
void UFGSessionLibrary::OnFindCompleteDelicgateFunction(bool wasSucsessful){ }
FUniqueNetIdRepl UFGInviteLibrary::GetInviteSenderUniqueNetId(const FPendingInvite& invite){ return FUniqueNetIdRepl(); }
FBlueprintSessionResult UFGInviteLibrary::GetSessionFromInvite(const FPendingInvite& invite){ return FBlueprintSessionResult(); }
void UFGInviteLibrary::GetPendingInvites(UObject* worldContext, TArray<FPendingInvite>& out_invites){ }
FPendingInvite UFGInviteLibrary::GetInviteFromSender(UObject* worldContext, const FUniqueNetIdRepl& sender){ return FPendingInvite(); }
void UFGInviteLibrary::SendInviteToFriend(ULocalPlayer* fromPlayer, const FFGOnlineFriend& toFriend){ }
void UFGInviteLibrary::JoinInvite(UObject* worldContext, const FPendingInvite& invite){ }
void UFGInviteLibrary::DiscardInvite(UObject* worldContext, const FPendingInvite& invite){ }
bool UFGNetworkLibrary::OpenWebURL(const FString& Url){ return bool(); }
bool UFGNetworkLibrary::SubmitFeedback(FUserFeedbackFrontEndData frontEndFeedbackData,  APlayerController* playerController){ return bool(); }
bool UFGNetworkLibrary::GetNameFromUniqueNetId(const ULocalPlayer* querier, const FUniqueNetIdRepl& netId, FString& out_name){ return bool(); }
ENetIdType UFGNetworkLibrary::GetUniqueNetIdType(const FUniqueNetIdRepl& netId){ return ENetIdType(); }
bool UFGNetworkLibrary::EqualEqual_NetIdNetId(const FUniqueNetIdRepl& a, const FUniqueNetIdRepl& b){ return bool(); }
bool UFGNetworkLibrary::IsValid_UniqueNetId(const FUniqueNetIdRepl& a){ return bool(); }
void UFGNetworkLibrary::QueryNATType(UObject* worldContext){ }
ECachedNATType UFGNetworkLibrary::GetCachedNATType(UObject* worldContext){ return ECachedNATType(); }
FText UFGNetworkLibrary::NATTypeToText(ECachedNATType NatType){ return FText(); }
FString UFGNetworkLibrary::GetLocalBuildVersion(){ return FString(); }
FUniqueNetIdRepl UFGNetworkLibrary::GetUniqueID(UFGLocalPlayer* localPlayer){ return FUniqueNetIdRepl(); }
