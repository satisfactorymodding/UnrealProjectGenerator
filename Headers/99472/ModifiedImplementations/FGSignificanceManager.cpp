// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSignificanceManager.h"

UFGSignificanceManager::UFGSignificanceManager(){ }
void UFGSignificanceManager::RegisterObject( UObject* Object, FName Tag, FSignificanceFunction SignificanceFunction, EPostSignificanceType InPostSignificanceType , FPostSignificanceFunction InPostSignificanceFunction ){ }
void UFGSignificanceManager::RegisterSignificanceObject( UObject* Object, EFGSignificanceType SignificanceType){ }
void UFGSignificanceManager::Update( TArrayView<const FTransform> Viewpoints){ }
FGainSignificanceData UFGSignificanceManager::GetClosestGainSignificanceData( UObject* inObject, float desiredDistance){ return FGainSignificanceData(); }
float UFGSignificanceManager::GenericTickSignificance( UObject* Object, const FTransform& Viewpoint){ return float(); }
void UFGSignificanceManager::GenericTickPostSignificance( UObject* ObjectInfo, float OldSignificance, float NewSignificance, bool bFinal){ }
float UFGSignificanceManager::FactorySignificance( UObject* Object, const FTransform& Viewpoint){ return float(); }
void UFGSignificanceManager::FactoryPostSignificance( UObject* ObjectInfo, float OldSignificance, float NewSignificance, bool bFinal){ }
float UFGSignificanceManager::ConveyorBeltSignificance( UObject* Object, const FTransform& Viewpoint){ return float(); }
void UFGSignificanceManager::ConveyorBeltPostSignificance( UObject* ObjectInfo, float OldSignificance, float NewSignificance, bool bFinal){ }
float UFGSignificanceManager::LowDistanceSignificance( UObject* Object, const FTransform& Viewpoint){ return float(); }
float UFGSignificanceManager::MidDistanceSignificance( UObject* Object, const FTransform& Viewpoint){ return float(); }
float UFGSignificanceManager::HighDistanceSignificance( UObject* Object, const FTransform& Viewpoint){ return float(); }
float UFGSignificanceManager::CustomDistanceSignificance( UObject* Object, const FTransform& Viewpoint){ return float(); }
void UFGSignificanceManager::GainSignificanceOnDistancePostSignificance( UObject* ObjectInfo, float OldSignificance, float NewSignificance, bool bFinal){ }
float UFGSignificanceManager::AudioVolumeSignificance( UObject* Object, const FTransform& Viewpoint){ return float(); }
void UFGSignificanceManager::AudioVolumePostSignificance( UObject* ObjectInfo, float OldSignificance, float NewSignificance, bool bFinal){ }
float UFGSignificanceManager::AmbientSoundSplineSignificance( UObject* Object, const FTransform& Viewpoint){ return float(); }
void UFGSignificanceManager::AmbientSoundSplinePostSignificance( UObject* ObjectInfo, float OldSignificance, float NewSignificance, bool bFinal){ }
FVector UFGSignificanceManager::GetObjectLocation( UObject* obj){ return FVector(); }
void UFGSignificanceManager::SetObjectTickRate( UObject* obj, float NewTickRate){ }
void UFGSignificanceManager::SetObjectTicks( UObject* obj, bool NewTicks){ }
