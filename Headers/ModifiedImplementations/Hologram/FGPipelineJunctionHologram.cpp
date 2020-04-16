// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPipelineJunctionHologram.h"
#include "FGBuildableFoundation.h"
#include "FGBuildableRailroadTrack.h"
#include "FGBuildableRoad.h"
#include "FGBuildablePipeline.h"
#include "FGBuildablePipelineAttachment.h"
#include "FGBuildableWall.h"

AFGPipelineJunctionHologram::AFGPipelineJunctionHologram() : Super() {
	this->mMaxValidTurnOffset = 140;
	this->mMaxValidTurnAngle = 3;
	this->mUseProducerDirectionalArrow = true;
	this->mProducerArrowRelativeLocation.X = 0; this->mProducerArrowRelativeLocation.Y = 0; this->mProducerArrowRelativeLocation.Z = 200;
	this->mWallSnapOffset.X = 0; this->mWallSnapOffset.Y = 75;
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass()); this->mValidHitClasses.Add(AFGBuildablePipeline::StaticClass()); this->mValidHitClasses.Add(AFGBuildablePipelineAttachment::StaticClass()); this->mValidHitClasses.Add(AFGBuildableWall::StaticClass());
	this->mUseBuildClearanceOverlapSnapp = true;
	this->bHidden = true;
	this->bReplicates = true;
}
int32 AFGPipelineJunctionHologram::GetRotationStep() const{ return int32(); }
