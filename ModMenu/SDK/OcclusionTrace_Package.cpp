/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OcclusionTrace.OcclusionTrace_C.GetOcclusionHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SourceActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxAttenuation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OffsetDistance                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              yoffset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SingleTraceOnlyIn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOcclusionTrace_C::GetOcclusionHelper(class AActor* SourceActor, float Angle, float MaxAttenuation, float OffsetDistance, float yoffset, bool SingleTraceOnlyIn, bool UseLocation, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OcclusionTrace.OcclusionTrace_C.GetOcclusionHelper");
		
		AOcclusionTrace_C_GetOcclusionHelper_Params params {};
		params.SourceActor = SourceActor;
		params.Angle = Angle;
		params.MaxAttenuation = MaxAttenuation;
		params.OffsetDistance = OffsetDistance;
		params.yoffset = yoffset;
		params.SingleTraceOnlyIn = SingleTraceOnlyIn;
		params.UseLocation = UseLocation;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OcclusionTrace.OcclusionTrace_C.GetOcclusion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SourceActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxAttenuation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OffsetDistance                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              yoffset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SingleTraceOnly                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOcclusionTrace_C::GetOcclusion(class AActor* SourceActor, float Angle, float MaxAttenuation, float OffsetDistance, float yoffset, bool SingleTraceOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OcclusionTrace.OcclusionTrace_C.GetOcclusion");
		
		AOcclusionTrace_C_GetOcclusion_Params params {};
		params.SourceActor = SourceActor;
		params.Angle = Angle;
		params.MaxAttenuation = MaxAttenuation;
		params.OffsetDistance = OffsetDistance;
		params.yoffset = yoffset;
		params.SingleTraceOnly = SingleTraceOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OcclusionTrace.OcclusionTrace_C.GetOcclusionForLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SourceActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxAttenuation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OffsetDistance                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              yoffset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SingleTraceOnly                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOcclusionTrace_C::GetOcclusionForLocation(class AActor* SourceActor, float Angle, float MaxAttenuation, float OffsetDistance, float yoffset, const struct FVector& Location, bool SingleTraceOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OcclusionTrace.OcclusionTrace_C.GetOcclusionForLocation");
		
		AOcclusionTrace_C_GetOcclusionForLocation_Params params {};
		params.SourceActor = SourceActor;
		params.Angle = Angle;
		params.MaxAttenuation = MaxAttenuation;
		params.OffsetDistance = OffsetDistance;
		params.yoffset = yoffset;
		params.Location = Location;
		params.SingleTraceOnly = SingleTraceOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OcclusionTrace.OcclusionTrace_C.ExecuteUbergraph_OcclusionTrace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOcclusionTrace_C::ExecuteUbergraph_OcclusionTrace(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OcclusionTrace.OcclusionTrace_C.ExecuteUbergraph_OcclusionTrace");
		
		AOcclusionTrace_C_ExecuteUbergraph_OcclusionTrace_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOcclusionTrace_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOcclusionTrace_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OcclusionTrace.OcclusionTrace_C");
		return ptr;
	}

}


