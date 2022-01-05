/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "BreakCannon_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BreakCannon.BreakCannon_C.OnNotifyEnd_A710A0DA4C04A7D001CD6FABAB5A5E08
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBreakCannon_C::OnNotifyEnd_A710A0DA4C04A7D001CD6FABAB5A5E08(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreakCannon.BreakCannon_C.OnNotifyEnd_A710A0DA4C04A7D001CD6FABAB5A5E08");
		
		UBreakCannon_C_OnNotifyEnd_A710A0DA4C04A7D001CD6FABAB5A5E08_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BreakCannon.BreakCannon_C.OnNotifyBegin_A710A0DA4C04A7D001CD6FABAB5A5E08
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBreakCannon_C::OnNotifyBegin_A710A0DA4C04A7D001CD6FABAB5A5E08(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreakCannon.BreakCannon_C.OnNotifyBegin_A710A0DA4C04A7D001CD6FABAB5A5E08");
		
		UBreakCannon_C_OnNotifyBegin_A710A0DA4C04A7D001CD6FABAB5A5E08_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BreakCannon.BreakCannon_C.OnInterrupted_A710A0DA4C04A7D001CD6FABAB5A5E08
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBreakCannon_C::OnInterrupted_A710A0DA4C04A7D001CD6FABAB5A5E08(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreakCannon.BreakCannon_C.OnInterrupted_A710A0DA4C04A7D001CD6FABAB5A5E08");
		
		UBreakCannon_C_OnInterrupted_A710A0DA4C04A7D001CD6FABAB5A5E08_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BreakCannon.BreakCannon_C.OnBlendOut_A710A0DA4C04A7D001CD6FABAB5A5E08
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBreakCannon_C::OnBlendOut_A710A0DA4C04A7D001CD6FABAB5A5E08(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreakCannon.BreakCannon_C.OnBlendOut_A710A0DA4C04A7D001CD6FABAB5A5E08");
		
		UBreakCannon_C_OnBlendOut_A710A0DA4C04A7D001CD6FABAB5A5E08_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BreakCannon.BreakCannon_C.OnCompleted_A710A0DA4C04A7D001CD6FABAB5A5E08
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBreakCannon_C::OnCompleted_A710A0DA4C04A7D001CD6FABAB5A5E08(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreakCannon.BreakCannon_C.OnCompleted_A710A0DA4C04A7D001CD6FABAB5A5E08");
		
		UBreakCannon_C_OnCompleted_A710A0DA4C04A7D001CD6FABAB5A5E08_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BreakCannon.BreakCannon_C.OnNotifyEnd_4BA8AEFF461D0D9538C45595C4F82DA5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBreakCannon_C::OnNotifyEnd_4BA8AEFF461D0D9538C45595C4F82DA5(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreakCannon.BreakCannon_C.OnNotifyEnd_4BA8AEFF461D0D9538C45595C4F82DA5");
		
		UBreakCannon_C_OnNotifyEnd_4BA8AEFF461D0D9538C45595C4F82DA5_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BreakCannon.BreakCannon_C.OnNotifyBegin_4BA8AEFF461D0D9538C45595C4F82DA5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBreakCannon_C::OnNotifyBegin_4BA8AEFF461D0D9538C45595C4F82DA5(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreakCannon.BreakCannon_C.OnNotifyBegin_4BA8AEFF461D0D9538C45595C4F82DA5");
		
		UBreakCannon_C_OnNotifyBegin_4BA8AEFF461D0D9538C45595C4F82DA5_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BreakCannon.BreakCannon_C.OnInterrupted_4BA8AEFF461D0D9538C45595C4F82DA5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBreakCannon_C::OnInterrupted_4BA8AEFF461D0D9538C45595C4F82DA5(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreakCannon.BreakCannon_C.OnInterrupted_4BA8AEFF461D0D9538C45595C4F82DA5");
		
		UBreakCannon_C_OnInterrupted_4BA8AEFF461D0D9538C45595C4F82DA5_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BreakCannon.BreakCannon_C.OnBlendOut_4BA8AEFF461D0D9538C45595C4F82DA5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBreakCannon_C::OnBlendOut_4BA8AEFF461D0D9538C45595C4F82DA5(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreakCannon.BreakCannon_C.OnBlendOut_4BA8AEFF461D0D9538C45595C4F82DA5");
		
		UBreakCannon_C_OnBlendOut_4BA8AEFF461D0D9538C45595C4F82DA5_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BreakCannon.BreakCannon_C.OnCompleted_4BA8AEFF461D0D9538C45595C4F82DA5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBreakCannon_C::OnCompleted_4BA8AEFF461D0D9538C45595C4F82DA5(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreakCannon.BreakCannon_C.OnCompleted_4BA8AEFF461D0D9538C45595C4F82DA5");
		
		UBreakCannon_C_OnCompleted_4BA8AEFF461D0D9538C45595C4F82DA5_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BreakCannon.BreakCannon_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBreakCannon_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreakCannon.BreakCannon_C.ReceiveExecuteAI");
		
		UBreakCannon_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BreakCannon.BreakCannon_C.ExecuteUbergraph_BreakCannon
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBreakCannon_C::ExecuteUbergraph_BreakCannon(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreakCannon.BreakCannon_C.ExecuteUbergraph_BreakCannon");
		
		UBreakCannon_C_ExecuteUbergraph_BreakCannon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBreakCannon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBreakCannon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BreakCannon.BreakCannon_C");
		return ptr;
	}

}


