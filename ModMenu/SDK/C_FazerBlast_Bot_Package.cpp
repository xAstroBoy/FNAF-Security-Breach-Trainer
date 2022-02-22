/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.GetCurrentPatrolPointIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	int32_t AC_FazerBlast_Bot_C::GetCurrentPatrolPointIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.GetCurrentPatrolPointIndex");
		
		AC_FazerBlast_Bot_C_GetCurrentPatrolPointIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.GetPatrolPath
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	void AC_FazerBlast_Bot_C::GetPatrolPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.GetPatrolPath");
		
		AC_FazerBlast_Bot_C_GetPatrolPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.StopFeedbackAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AC_FazerBlast_Bot_C::StopFeedbackAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.StopFeedbackAnimation");
		
		AC_FazerBlast_Bot_C_StopFeedbackAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.EnableFlee
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AC_FazerBlast_Bot_C::EnableFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.EnableFlee");
		
		AC_FazerBlast_Bot_C_EnableFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.HandleHit
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               Valid_hit                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AC_FazerBlast_Bot_C::HandleHit(const struct FHitResult& Hit, bool* Valid_hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.HandleHit");
		
		AC_FazerBlast_Bot_C_HandleHit_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid_hit != nullptr)
			*Valid_hit = params.Valid_hit;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.FindNearestPoint
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AC_FazerBlast_Bot_C::FindNearestPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.FindNearestPoint");
		
		AC_FazerBlast_Bot_C_FindNearestPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.SetCurrentPatrolPointIndex
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PatrolPointIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AC_FazerBlast_Bot_C::SetCurrentPatrolPointIndex(int32_t PatrolPointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.SetCurrentPatrolPointIndex");
		
		AC_FazerBlast_Bot_C_SetCurrentPatrolPointIndex_Params params {};
		params.PatrolPointIndex = PatrolPointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AC_FazerBlast_Bot_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.ReceiveBeginPlay");
		
		AC_FazerBlast_Bot_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.LaserHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AEQ_LaserGun_C*                              Gun                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AC_FazerBlast_Bot_C::LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.LaserHit");
		
		AC_FazerBlast_Bot_C_LaserHit_Params params {};
		params.Gun = Gun;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.GameEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AC_FazerBlast_Bot_C::GameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.GameEnd");
		
		AC_FazerBlast_Bot_C_GameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AC_FazerBlast_Bot_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.ReceiveTick");
		
		AC_FazerBlast_Bot_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.DestroySelf
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AC_FazerBlast_Bot_C::DestroySelf()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.DestroySelf");
		
		AC_FazerBlast_Bot_C_DestroySelf_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.SetPatrolPath
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void AC_FazerBlast_Bot_C::SetPatrolPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.SetPatrolPath");
		
		AC_FazerBlast_Bot_C_SetPatrolPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.PlayVO
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LineName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AC_FazerBlast_Bot_C::PlayVO(const class FName& LineName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.PlayVO");
		
		AC_FazerBlast_Bot_C_PlayVO_Params params {};
		params.LineName = LineName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.ExecuteUbergraph_C_FazerBlast_Bot
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AC_FazerBlast_Bot_C::ExecuteUbergraph_C_FazerBlast_Bot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function C_FazerBlast_Bot.C_FazerBlast_Bot_C.ExecuteUbergraph_C_FazerBlast_Bot");
		
		AC_FazerBlast_Bot_C_ExecuteUbergraph_C_FazerBlast_Bot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AC_FazerBlast_Bot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AC_FazerBlast_Bot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass C_FazerBlast_Bot.C_FazerBlast_Bot_C");
		return ptr;
	}

}


