#include "ServerSocket.h"

FPacketDispatcher::FPacketDispatcher(TSharedRef<FInternetAddr> BindAddress, const  UFGServerSocket& Outer): mBindAddress(BindAddress), mOuter(Outer){ }
FClientQuerySocket::FClientQuerySocket(TSharedRef< FInternetAddr > BindAddr): mBindAddress(BindAddr){ }