/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "Functions_Traces_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Functions_Traces.Functions_Traces_C.LineTraceByChannelAcrossSurfaces (Conform)
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     End                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Normal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SurfaceSampleDepth                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SurfaceSampleInterval                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SurfacePadding                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TEnumAsByte<Engine_ETraceTypeQuery>                TraceChannel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bTraceComplex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               bIgnoreSelf                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Debug                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                DebugInputStartColor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DebugInputLineColor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DebugInputEndColor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DebugTraceSurfaceSampleColor                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DebugTracePaddingColor                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DebugTraceReconnectColor                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DebugTraceIntervalColor                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DebugTraceResultFailColor                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DebugTraceResultSuccessColor                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DebugTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ReturnLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FVector>                             ReturnLocationNodes                                        (Parm, OutParm, HasGetValueTypeHash)
	 */
	bool UFunctions_Traces_C::STATIC_LineTraceByChannelAcrossSurfaces__Conform_(const struct FVector& Start, const struct FVector& End, const struct FVector& Normal, float SurfaceSampleDepth, float SurfaceSampleInterval, float SurfacePadding, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf, bool Debug, const struct FLinearColor& DebugInputStartColor, const struct FLinearColor& DebugInputLineColor, const struct FLinearColor& DebugInputEndColor, const struct FLinearColor& DebugTraceSurfaceSampleColor, const struct FLinearColor& DebugTracePaddingColor, const struct FLinearColor& DebugTraceReconnectColor, const struct FLinearColor& DebugTraceIntervalColor, const struct FLinearColor& DebugTraceResultFailColor, const struct FLinearColor& DebugTraceResultSuccessColor, float DebugTime, class UObject* __WorldContext, struct FVector* ReturnLocation, TArray<struct FVector>* ReturnLocationNodes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Functions_Traces.Functions_Traces_C.LineTraceByChannelAcrossSurfaces (Conform)");
		
		UFunctions_Traces_C_LineTraceByChannelAcrossSurfaces__Conform__Params params {};
		params.Start = Start;
		params.End = End;
		params.Normal = Normal;
		params.SurfaceSampleDepth = SurfaceSampleDepth;
		params.SurfaceSampleInterval = SurfaceSampleInterval;
		params.SurfacePadding = SurfacePadding;
		params.TraceChannel = TraceChannel;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		params.bIgnoreSelf = bIgnoreSelf;
		params.Debug = Debug;
		params.DebugInputStartColor = DebugInputStartColor;
		params.DebugInputLineColor = DebugInputLineColor;
		params.DebugInputEndColor = DebugInputEndColor;
		params.DebugTraceSurfaceSampleColor = DebugTraceSurfaceSampleColor;
		params.DebugTracePaddingColor = DebugTracePaddingColor;
		params.DebugTraceReconnectColor = DebugTraceReconnectColor;
		params.DebugTraceIntervalColor = DebugTraceIntervalColor;
		params.DebugTraceResultFailColor = DebugTraceResultFailColor;
		params.DebugTraceResultSuccessColor = DebugTraceResultSuccessColor;
		params.DebugTime = DebugTime;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnLocation != nullptr)
			*ReturnLocation = params.ReturnLocation;
		if (ReturnLocationNodes != nullptr)
			*ReturnLocationNodes = params.ReturnLocationNodes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Functions_Traces.Functions_Traces_C.LineTraceByChannelAcrossSurfaces (Slide)
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Length                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SurfacePadding                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TEnumAsByte<Engine_ETraceTypeQuery>                TraceChannel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bTraceComplex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		TEnumAsByte<Engine_EDrawDebugTrace>                DrawDebugType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIgnoreSelf                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                TraceColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                TraceHitColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DrawTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ReturnLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FHitResult>                          ReturnHits                                                 (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	bool UFunctions_Traces_C::STATIC_LineTraceByChannelAcrossSurfaces__Slide_(const struct FVector& Start, const struct FVector& Direction, float Length, float SurfacePadding, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, class UObject* __WorldContext, struct FVector* ReturnLocation, TArray<struct FHitResult>* ReturnHits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Functions_Traces.Functions_Traces_C.LineTraceByChannelAcrossSurfaces (Slide)");
		
		UFunctions_Traces_C_LineTraceByChannelAcrossSurfaces__Slide__Params params {};
		params.Start = Start;
		params.Direction = Direction;
		params.Length = Length;
		params.SurfacePadding = SurfacePadding;
		params.TraceChannel = TraceChannel;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		params.DrawDebugType = DrawDebugType;
		params.bIgnoreSelf = bIgnoreSelf;
		params.TraceColor = TraceColor;
		params.TraceHitColor = TraceHitColor;
		params.DrawTime = DrawTime;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnLocation != nullptr)
			*ReturnLocation = params.ReturnLocation;
		if (ReturnHits != nullptr)
			*ReturnHits = params.ReturnHits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFunctions_Traces_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFunctions_Traces_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Functions_Traces.Functions_Traces_C");
		return ptr;
	}

}


