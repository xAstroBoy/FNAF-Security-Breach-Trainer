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
	 * 		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.OnEnd
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_EndMiniGameType_E_EndMiniGameType                EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_VannyBattle_C::OnEnd(E_EndMiniGameType_E_EndMiniGameType EndType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.OnEnd");
		
		AOGM_VannyBattle_C_OnEnd_Params params {};
		params.EndType = EndType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.On Start
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_VannyBattle_C::On_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.On Start");
		
		AOGM_VannyBattle_C_On_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_51304B0B49067B4078771F8EA879D31D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_VannyBattle_C::OnFailure_51304B0B49067B4078771F8EA879D31D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_51304B0B49067B4078771F8EA879D31D");
		
		AOGM_VannyBattle_C_OnFailure_51304B0B49067B4078771F8EA879D31D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_51304B0B49067B4078771F8EA879D31D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_VannyBattle_C::OnSuccess_51304B0B49067B4078771F8EA879D31D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_51304B0B49067B4078771F8EA879D31D");
		
		AOGM_VannyBattle_C_OnSuccess_51304B0B49067B4078771F8EA879D31D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_09F97D64470242AC12A058B1AC7CE376
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_VannyBattle_C::OnFailure_09F97D64470242AC12A058B1AC7CE376(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_09F97D64470242AC12A058B1AC7CE376");
		
		AOGM_VannyBattle_C_OnFailure_09F97D64470242AC12A058B1AC7CE376_Params params {};
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
	 * 		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_09F97D64470242AC12A058B1AC7CE376
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_VannyBattle_C::OnSuccess_09F97D64470242AC12A058B1AC7CE376(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_09F97D64470242AC12A058B1AC7CE376");
		
		AOGM_VannyBattle_C_OnSuccess_09F97D64470242AC12A058B1AC7CE376_Params params {};
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
	 * 		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_51304B0B49067B4078771F8E7573F813
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_VannyBattle_C::OnFailure_51304B0B49067B4078771F8E7573F813()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_51304B0B49067B4078771F8E7573F813");
		
		AOGM_VannyBattle_C_OnFailure_51304B0B49067B4078771F8E7573F813_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_51304B0B49067B4078771F8E7573F813
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_VannyBattle_C::OnSuccess_51304B0B49067B4078771F8E7573F813()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_51304B0B49067B4078771F8E7573F813");
		
		AOGM_VannyBattle_C_OnSuccess_51304B0B49067B4078771F8E7573F813_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_09F97D64470242AC12A058B17176C878
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_VannyBattle_C::OnFailure_09F97D64470242AC12A058B17176C878(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_09F97D64470242AC12A058B17176C878");
		
		AOGM_VannyBattle_C_OnFailure_09F97D64470242AC12A058B17176C878_Params params {};
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
	 * 		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_09F97D64470242AC12A058B17176C878
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_VannyBattle_C::OnSuccess_09F97D64470242AC12A058B17176C878(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_09F97D64470242AC12A058B17176C878");
		
		AOGM_VannyBattle_C_OnSuccess_09F97D64470242AC12A058B17176C878_Params params {};
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
	 * 		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.BndEvt__Drop Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AOGM_VannyBattle_C::BndEvt__Drop_Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.BndEvt__Drop Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
		
		AOGM_VannyBattle_C_BndEvt__Drop_Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.Vanny Destroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_VannyBattle_C::Vanny_Destroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.Vanny Destroy");
		
		AOGM_VannyBattle_C_Vanny_Destroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.Vanny Redeem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOGM_VannyBattle_C::Vanny_Redeem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.Vanny Redeem");
		
		AOGM_VannyBattle_C_Vanny_Redeem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.ExecuteUbergraph_OGM_VannyBattle
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOGM_VannyBattle_C::ExecuteUbergraph_OGM_VannyBattle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.ExecuteUbergraph_OGM_VannyBattle");
		
		AOGM_VannyBattle_C_ExecuteUbergraph_OGM_VannyBattle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOGM_VannyBattle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOGM_VannyBattle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OGM_VannyBattle.OGM_VannyBattle_C");
		return ptr;
	}

}


