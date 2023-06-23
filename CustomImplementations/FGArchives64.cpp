FArchiveLoadCompressedProxy64::FArchiveLoadCompressedProxy64(const TArray<uint8, TSizedDefaultAllocator<64>>& InCompressedData, FName CompressionFormat, ECompressionFlags InCompressionFlags): CompressedData(InCompressedData){ }
void FArchiveLoadCompressedProxy64::Serialize(void* Data, int64 Count){ FArchive::Serialize(Data,Count); }
FArchiveSaveCompressedProxy64::FArchiveSaveCompressedProxy64(EVS2015Redirector, TArray<uint8, TSizedDefaultAllocator<64>>& InCompressedData, ECompressionFlags InCompressionFlags): CompressedData(InCompressedData){ }
FArchiveSaveCompressedProxy64::FArchiveSaveCompressedProxy64(TArray<uint8, TSizedDefaultAllocator<64>>& InCompressedData, FName InCompressionFormat, ECompressionFlags InCompressionFlags): CompressedData(InCompressedData){ }
void FArchiveSaveCompressedProxy64::Serialize(void* Data, int64 Count){ FArchive::Serialize(Data,Count); }
