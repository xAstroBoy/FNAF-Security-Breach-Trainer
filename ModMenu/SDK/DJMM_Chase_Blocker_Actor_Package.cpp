/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "DJMM_Chase_Blocker_Actor_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.GetHapticIntensityValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADJMM_Chase_Blocker_Actor_C::GetHapticIntensityValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.GetHapticIntensityValue");
		
		ADJMM_Chase_Blocker_Actor_C_GetHapticIntensityValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.GetDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LandLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADJMM_Chase_Blocker_Actor_C::GetDistance(const struct FVector& LandLocation, float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.GetDistance");
		
		ADJMM_Chase_Blocker_Actor_C_GetDistance_Params params {};
		params.LandLocation = LandLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.SyncPlayrate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADJMM_Chase_Blocker_Actor_C::SyncPlayrate(class USkeletalMeshComponent* SkeletalMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.SyncPlayrate");
		
		ADJMM_Chase_Blocker_Actor_C_SyncPlayrate_Params params {};
		params.SkeletalMesh = SkeletalMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.AssignAnims
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           AnimInput                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADJMM_Chase_Blocker_Actor_C::AssignAnims(class USkeletalMeshComponent* SkeletalMesh, class UAnimSequenceBase* AnimInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.AssignAnims");
		
		ADJMM_Chase_Blocker_Actor_C_AssignAnims_Params params {};
		params.SkeletalMesh = SkeletalMesh;
		params.AnimInput = AnimInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADJMM_Chase_Blocker_Actor_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.ReceiveTick");
		
		ADJMM_Chase_Blocker_Actor_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADJMM_Chase_Blocker_Actor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.ReceiveBeginPlay");
		
		ADJMM_Chase_Blocker_Actor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.ExecuteUbergraph_DJMM_Chase_Blocker_Actor
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADJMM_Chase_Blocker_Actor_C::ExecuteUbergraph_DJMM_Chase_Blocker_Actor(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C.ExecuteUbergraph_DJMM_Chase_Blocker_Actor");
		
		ADJMM_Chase_Blocker_Actor_C_ExecuteUbergraph_DJMM_Chase_Blocker_Actor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ADJMM_Chase_Blocker_Actor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADJMM_Chase_Blocker_Actor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DJMM_Chase_Blocker_Actor.DJMM_Chase_Blocker_Actor_C");
		return ptr;
	}

}


