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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.OnFailure_F4AD70CC4B8771615B07A38E185D79AB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChicaGreenroomCollectible_C::OnFailure_F4AD70CC4B8771615B07A38E185D79AB(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.OnFailure_F4AD70CC4B8771615B07A38E185D79AB");
		
		AChicaGreenroomCollectible_C_OnFailure_F4AD70CC4B8771615B07A38E185D79AB_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.OnSuccess_F4AD70CC4B8771615B07A38E185D79AB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChicaGreenroomCollectible_C::OnSuccess_F4AD70CC4B8771615B07A38E185D79AB(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.OnSuccess_F4AD70CC4B8771615B07A38E185D79AB");
		
		AChicaGreenroomCollectible_C_OnSuccess_F4AD70CC4B8771615B07A38E185D79AB_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.OnFailure_A91445044E68314BD471929DF90DE4E5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChicaGreenroomCollectible_C::OnFailure_A91445044E68314BD471929DF90DE4E5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.OnFailure_A91445044E68314BD471929DF90DE4E5");
		
		AChicaGreenroomCollectible_C_OnFailure_A91445044E68314BD471929DF90DE4E5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.OnSuccess_A91445044E68314BD471929DF90DE4E5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChicaGreenroomCollectible_C::OnSuccess_A91445044E68314BD471929DF90DE4E5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.OnSuccess_A91445044E68314BD471929DF90DE4E5");
		
		AChicaGreenroomCollectible_C_OnSuccess_A91445044E68314BD471929DF90DE4E5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.OnCollect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChicaGreenroomCollectible_C::OnCollect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.OnCollect");
		
		AChicaGreenroomCollectible_C_OnCollect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.On Timer Ended
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChicaGreenroomCollectible_C::On_Timer_Ended()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.On Timer Ended");
		
		AChicaGreenroomCollectible_C_On_Timer_Ended_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.Setup Hourly Sequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChicaGreenroomCollectible_C::Setup_Hourly_Sequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.Setup Hourly Sequence");
		
		AChicaGreenroomCollectible_C_Setup_Hourly_Sequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.OnLoadCollected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChicaGreenroomCollectible_C::OnLoadCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.OnLoadCollected");
		
		AChicaGreenroomCollectible_C_OnLoadCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.On Finished Loading
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChicaGreenroomCollectible_C::On_Finished_Loading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.On Finished Loading");
		
		AChicaGreenroomCollectible_C_On_Finished_Loading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.Setup Time
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChicaGreenroomCollectible_C::Setup_Time()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.Setup Time");
		
		AChicaGreenroomCollectible_C_Setup_Time_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.ExecuteUbergraph_ChicaGreenroomCollectible
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChicaGreenroomCollectible_C::ExecuteUbergraph_ChicaGreenroomCollectible(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaGreenroomCollectible.ChicaGreenroomCollectible_C.ExecuteUbergraph_ChicaGreenroomCollectible");
		
		AChicaGreenroomCollectible_C_ExecuteUbergraph_ChicaGreenroomCollectible_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AChicaGreenroomCollectible_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChicaGreenroomCollectible_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChicaGreenroomCollectible.ChicaGreenroomCollectible_C");
		return ptr;
	}

}


