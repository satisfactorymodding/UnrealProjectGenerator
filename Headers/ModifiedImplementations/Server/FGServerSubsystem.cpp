// This file has been automatically generated by the Unreal Header Implementation tool

#include "Server/FGServerSubsystem.h"

UFGServerSubsystem::UFGServerSubsystem(){ }
UFGServerSubsystem::UFGServerSubsystem(FVTableHelper& Helper){ }
UFGServerSubsystem::~UFGServerSubsystem(){ }
UFGServerSubsystem* UFGServerSubsystem::Get(const UObject* WorldContext){ return nullptr; }
bool UFGServerSubsystem::ShouldCreateSubsystem(UObject* Outer) const{ return bool(); }
void UFGServerSubsystem::Initialize(FSubsystemCollectionBase& Collection){ }
FString UFGServerSubsystem::GetServerName() const{ return FString(); }
void UFGServerSubsystem::SetServerName(const FString& ServerName){ }
void UFGServerSubsystem::SetAdminPassword(const FString& HashedPassword){ }
void UFGServerSubsystem::SetClientPassword(const FString& HashedPassword){ }
void UFGServerSubsystem::SetAutoLoadSessionName(const FString& SessionName){ }
FServerAuthenticationToken UFGServerSubsystem::AuthenticatePlayer(const FString& HashedPassword, EPrivilegeLevel MinimumTargetPrivilege, FUniqueNetIdRepl Player, TSharedPtr<const FInternetAddr> PlayerAddr){ return FServerAuthenticationToken(); }
FServerAuthenticationToken UFGServerSubsystem::AttemptPasswordlessLogin(FUniqueNetIdRepl Player, TSharedPtr<const FInternetAddr> PlayerAddr){ return FServerAuthenticationToken(); }
bool UFGServerSubsystem::VerifyAuthToken(const FServerAuthenticationToken& Cookie, FUniqueNetIdRepl Player, TSharedPtr<const FInternetAddr> PlayerAddr){ return bool(); }
bool UFGServerSubsystem::VerifyGameTicket(const FServerEntryToken& Ticket, FUniqueNetIdRepl Player, TSharedPtr<const FInternetAddr> PlayerAddr){ return bool(); }
void UFGServerSubsystem::StartGame(const FString& SessionName, const FString& StartLocation){ }
bool UFGServerSubsystem::LoadGame(const FSaveHeader& header, TMap<FString, FString> Options){ return bool(); }
bool UFGServerSubsystem::AutoStart(){ return bool(); }
FServerEntryToken UFGServerSubsystem::IssueTicket(FUniqueNetIdRepl Player, TSharedPtr<const FInternetAddr> PlayerAddr, EPrivilegeLevel Privilege){ return FServerEntryToken(); }
bool UFGServerSubsystem::ShouldAutoPause() const{ return bool(); }
FServerGameState UFGServerSubsystem::GetServerGameState() const{ return FServerGameState(); }
void UFGServerSubsystem::SetAutoPause(bool AutoPause){ }
void UFGServerSubsystem::SetAutoSaveOnDisconnect(bool AutoSaveOnDisconnect){ }
bool UFGServerSubsystem::Tick(float DeltaTime){ return bool(); }
void UFGServerSubsystem::OnPreLoadMap(const FString &MapName){ }
void UFGServerSubsystem::OnPostLoadMap(UWorld* World){ }
void UFGServerSubsystem::PlayerLeaving( AGameModeBase* ,  AController*) const{ }
void UFGServerSubsystem::SaveSettings() const{ }
void UFGServerSubsystem::LoadSettings(){ }
FString UFGServerSubsystem::SeasonText(const FString& HashedText) const{ return FString(); }
