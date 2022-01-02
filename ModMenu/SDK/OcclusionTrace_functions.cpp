﻿// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OcclusionTrace.OcclusionTrace_C.GetOcclusion
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      SourceActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MaxAttenuation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OffsetDistance                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              y_offset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               SingleTraceOnly                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AOcclusionTrace_C::GetOcclusion(class AActor* SourceActor, float Angle, float MaxAttenuation, float OffsetDistance, float y_offset, bool SingleTraceOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OcclusionTrace.OcclusionTrace_C.GetOcclusion");

	AOcclusionTrace_C_GetOcclusion_Params params {};
	params.SourceActor = SourceActor;
	params.Angle = Angle;
	params.MaxAttenuation = MaxAttenuation;
	params.OffsetDistance = OffsetDistance;
	params.y_offset = y_offset;
	params.SingleTraceOnly = SingleTraceOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OcclusionTrace.OcclusionTrace_C.GetOcclusionForLocation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      SourceActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MaxAttenuation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OffsetDistance                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              y_offset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               SingleTraceOnly                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AOcclusionTrace_C::GetOcclusionForLocation(class AActor* SourceActor, float Angle, float MaxAttenuation, float OffsetDistance, float y_offset, const struct FVector& Location, bool SingleTraceOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OcclusionTrace.OcclusionTrace_C.GetOcclusionForLocation");

	AOcclusionTrace_C_GetOcclusionForLocation_Params params {};
	params.SourceActor = SourceActor;
	params.Angle = Angle;
	params.MaxAttenuation = MaxAttenuation;
	params.OffsetDistance = OffsetDistance;
	params.y_offset = y_offset;
	params.Location = Location;
	params.SingleTraceOnly = SingleTraceOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OcclusionTrace.OcclusionTrace_C.ExecuteUbergraph_OcclusionTrace
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOcclusionTrace_C::ExecuteUbergraph_OcclusionTrace(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OcclusionTrace.OcclusionTrace_C.ExecuteUbergraph_OcclusionTrace");

	AOcclusionTrace_C_ExecuteUbergraph_OcclusionTrace_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif