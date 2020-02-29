// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildablePipeReservoir.h"

void FQuantizedReservoirIndicatorData::SetFlowFillPct( float pct){ }
float FQuantizedReservoirIndicatorData::GetFlowFillPct() const{ return float(); }
void FQuantizedReservoirIndicatorData::SetFlowDrainPct( float pct){ }
float FQuantizedReservoirIndicatorData::GetFlowDrainPct() const{ return float(); }
void FQuantizedReservoirIndicatorData::SetContentPct( float pct){ }
float FQuantizedReservoirIndicatorData::GetContentPct() const{ return float(); }
AFGBuildablePipeReservoir::AFGBuildablePipeReservoir(){ }
void AFGBuildablePipeReservoir::GetLifetimeReplicatedProps( TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildablePipeReservoir::BeginPlay(){ }
void AFGBuildablePipeReservoir::EndPlay( const EEndPlayReason::Type endPlayReason){ }
void AFGBuildablePipeReservoir::Tick( float dt){ }
FFluidBox* AFGBuildablePipeReservoir::GetFluidBox(){ return nullptr; }
TArray< class UFGPipeConnectionComponent* > AFGBuildablePipeReservoir::GetPipeConnections(){ return TArray<class UFGPipeConnectionComponent*>(); }
float AFGBuildablePipeReservoir::GetFluidContent() const{ return float(); }
float AFGBuildablePipeReservoir::GetFluidContentMax() const{ return float(); }
float AFGBuildablePipeReservoir::GetFlowFill() const{ return float(); }
float AFGBuildablePipeReservoir::GetFlowDrain() const{ return float(); }
float AFGBuildablePipeReservoir::GetFlowLimit() const{ return float(); }
TSubclassOf< UFGItemDescriptor > AFGBuildablePipeReservoir::GetFluidDescriptor() const{ return TSubclassOf<UFGItemDescriptor>(); }