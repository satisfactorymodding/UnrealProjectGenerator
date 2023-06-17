bool UFGColoredInstanceMeshProxy::ShouldCreateRenderState() const {
#if WITH_EDITOR // Ensure visibility in blueprint & editor.
    if (GetWorld()->WorldType == EWorldType::Editor || GetWorld()->WorldType == EWorldType::EditorPreview) {
        return true;
    }
#endif
    // only create when its blocking instancing.
    return mBlockInstancing;
}
