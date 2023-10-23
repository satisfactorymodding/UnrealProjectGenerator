// This file has been automatically generated by the Unreal Header Implementation tool

#include "Server/FGServerSocket.h"
#include "ServerSocket.h"

FPacketDispatcher::FPacketDispatcher(TSharedRef<FInternetAddr> BindAddress, const  UFGServerSocket& Outer): mBindAddress(BindAddress), mOuter(Outer){ }
FClientQuerySocket::FClientQuerySocket(TSharedRef< FInternetAddr > BindAddr): mBindAddress(BindAddr){ }

void FRunnableSocketBase::Stop(){ }
bool FRunnableSocketBase::ShouldStop() const{ return bool(); }
FPacketDispatcher::~FPacketDispatcher(){ }
bool FPacketDispatcher::Initialize(){ return bool(); }
void FPacketDispatcher::RegisterReroutedPort(FAnsiStringView MagicHeader, uint16 ListeningPort){ }
void FPacketDispatcher::DispatchPacket(TArray<uint8> Data, TSharedRef<FInternetAddr> Sender){ }
void FPacketDispatcher::ReroutePacket(TArray<uint8> PacketData, TSharedRef<FInternetAddr> FromAddress, TSharedRef<FInternetAddr> ToAddress){ }
void FPacketDispatcher::ProcessPoll(const TArray<uint8>& PacketData, TSharedRef<FInternetAddr> FromAddress){ }
void FPacketDispatcher::CleanupRoutes(){ }
UFGServerSocket::UFGServerSocket(){ }
bool UFGServerSocket::Initialize(int32 ListenPort){ return bool(); }
void UFGServerSocket::BeginDestroy(){ Super::BeginDestroy(); }
void UFGServerSocket::RegisterReroutedPort(FAnsiStringView MagicHeader, uint16 ListeningPort){ }
bool FClientQuerySocket::Init(){ return bool(); }
uint32 FClientQuerySocket::Run(){ return uint32(); }
