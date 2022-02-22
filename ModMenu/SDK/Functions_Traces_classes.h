#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Functions_Traces.Functions_Traces_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFunctions_Traces_C : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_LineTraceByChannelAcrossSurfaces__Conform_(const struct FVector& Start, const struct FVector& End, const struct FVector& Normal, float SurfaceSampleDepth, float SurfaceSampleInterval, float SurfacePadding, Engine_ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf, bool Debug, const struct FLinearColor& DebugInputStartColor, const struct FLinearColor& DebugInputLineColor, const struct FLinearColor& DebugInputEndColor, const struct FLinearColor& DebugTraceSurfaceSampleColor, const struct FLinearColor& DebugTracePaddingColor, const struct FLinearColor& DebugTraceReconnectColor, const struct FLinearColor& DebugTraceIntervalColor, const struct FLinearColor& DebugTraceResultFailColor, const struct FLinearColor& DebugTraceResultSuccessColor, float DebugTime, class UObject* __WorldContext, struct FVector* ReturnLocation, TArray<struct FVector>* ReturnLocationNodes);
		bool STATIC_LineTraceByChannelAcrossSurfaces__Slide_(const struct FVector& Start, const struct FVector& Direction, float Length, float SurfacePadding, Engine_ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, Engine_EDrawDebugTrace DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, class UObject* __WorldContext, struct FVector* ReturnLocation, TArray<struct FHitResult>* ReturnHits);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
