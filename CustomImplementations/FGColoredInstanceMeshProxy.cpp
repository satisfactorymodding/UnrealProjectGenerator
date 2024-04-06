bool UFGColoredInstanceMeshProxy::ShouldCreateRenderState() const {
#if WITH_EDITOR // Ensure visibility in blueprint, editor & PIE
    if (GetWorld()->IsEditorWorld()) {
        return true;
    }
#endif
    // only create when its blocking instancing.
    return mBlockInstancing;
}
