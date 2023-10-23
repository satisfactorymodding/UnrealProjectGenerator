// This file has been automatically generated by the Unreal Header Implementation tool

#include "Online/FGOnlineHelpers.h"

void RefreshEOSConnectionForPlayer::CallLoginRefresh(IOnlineSubsystem* systemEos){ }
FEOSAccountHelpers::FEOSAccountHelpers() noexcept(false){ }
FEOSAccountHelpers::~FEOSAccountHelpers(){ }
void FEOSAccountHelpers::ConnectAccount(UObject* worldContext, int32 LocalUserNum, TSharedRef<const FUniqueNetId> userId, FString token, const FOnEOSAccountConnectionCompleteDelegate& onComplete){ }
void FEOSAccountHelpers::ConnectLinkAccountToExistingEOSAccount(UObject* worldContext, int32 LocalUserNum, EOS_ContinuanceToken token, const FOnEOSAccountConnectionCompleteDelegate& onComplete){ }
void FEOSAccountHelpers::CreateNewAccountConnection(UObject* worldContext, int32 LocalUserNum, TSharedRef<const FUniqueNetId> userId, EOS_ContinuanceToken token, const FOnEOSAccountConnectionCompleteDelegate& onComplete){ }
void FEOSAccountHelpers::LogoutAndForgetPresistent(UObject* worldContext, int32 LocalUserNum){ }
void FEOSAccountHelpers::UnlinkAccount(UObject* worldContext, TSharedRef<const FUniqueNetId> userId, const FOnEOSAccountUnlinkCompleteDelegate& onComplete){ }
void FEOSAccountHelpers::AddIdentificationToPresence(UObject* worldContext, TSharedRef<const FUniqueNetId> userId, TSharedPtr<class FOnlineUserPresence> presnce){ }
FString FEOSAccountHelpers::GetProductUserId(const FUniqueNetId& id){ return FString(); }
void FEOSAccountHelpers::SetupLoginRefreshForUser(UObject* worldContext, RefreshEOSConnectionForPlayer* refreshObj){ }
bool FEOSAccountHelpers::ProductUserIDIsValid(EOS_ProductUserId ProductUserId){ return bool(); }
bool FEOSAccountHelpers::EpicAccountIDIsValid(EOS_EpicAccountId InAccountId){ return bool(); }
bool FEOSAccountHelpers::IsNetIDEpicAccountIDValid(const FUniqueNetId& id){ return bool(); }
bool FEOSAccountHelpers::GetCssEosSessionIdFromPresence(TSharedPtr<class FOnlineUserPresence> presnce, FString& out_buffer){ return bool(); }
bool FEOSAccountHelpers::GetCssEosSessionIdFromPresence(const  FOnlineUserPresence& presnce, FString& out_buffer){ return bool(); }
bool EOSId::GetProductUserId(const FUniqueNetId& netId, FString& out_ProductUserIdString){ return bool(); }
bool EOSId::GetEpicUserId(const FUniqueNetId& netId, FString& out_EpicUserIdString){ return bool(); }
