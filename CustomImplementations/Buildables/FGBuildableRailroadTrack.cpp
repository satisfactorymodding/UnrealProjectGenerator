bool FRailroadTrackPosition::Serialize(FArchive& ar) {
	if (ar.ArIsSaveGame) {
		ar << Offset;
		ar << Forward;
	}

	return true;
}
