/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "PRE_FazXpress_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_FazXpress_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.UserConstructionScript");
		
		APRE_FazXpress_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.DoorMovement__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APRE_FazXpress_C::DoorMovement__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.DoorMovement__FinishedFunc");
		
		APRE_FazXpress_C_DoorMovement__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.DoorMovement__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APRE_FazXpress_C::DoorMovement__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.DoorMovement__UpdateFunc");
		
		APRE_FazXpress_C_DoorMovement__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APRE_FazXpress_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.Timeline_0__FinishedFunc");
		
		APRE_FazXpress_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APRE_FazXpress_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.Timeline_0__UpdateFunc");
		
		APRE_FazXpress_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APRE_FazXpress_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.ReceiveBeginPlay");
		
		APRE_FazXpress_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.DoorOpenClose
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Open_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APRE_FazXpress_C::DoorOpenClose(bool Open_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.DoorOpenClose");
		
		APRE_FazXpress_C_DoorOpenClose_Params params {};
		params.Open_ = Open_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.Give Pizza
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UChildActorComponent*                        pizza                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_FazXpress_C::Give_Pizza(class UChildActorComponent* pizza)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.Give Pizza");
		
		APRE_FazXpress_C_Give_Pizza_Params params {};
		params.pizza = pizza;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.Give Pizza Tray Open
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APRE_FazXpress_C::Give_Pizza_Tray_Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.Give Pizza Tray Open");
		
		APRE_FazXpress_C_Give_Pizza_Tray_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.Take Pizza
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UChildActorComponent*                        pizza                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_FazXpress_C::Take_Pizza(class UChildActorComponent* pizza)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.Take Pizza");
		
		APRE_FazXpress_C_Take_Pizza_Params params {};
		params.pizza = pizza;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.Give Pizza Tray Closed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APRE_FazXpress_C::Give_Pizza_Tray_Closed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.Give Pizza Tray Closed");
		
		APRE_FazXpress_C_Give_Pizza_Tray_Closed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.Allow Take Pizza
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APRE_FazXpress_C::Allow_Take_Pizza()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.Allow Take Pizza");
		
		APRE_FazXpress_C_Allow_Take_Pizza_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.ExecuteUbergraph_PRE_FazXpress
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_FazXpress_C::ExecuteUbergraph_PRE_FazXpress(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.ExecuteUbergraph_PRE_FazXpress");
		
		APRE_FazXpress_C_ExecuteUbergraph_PRE_FazXpress_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.On Take Pizza__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_FazXpress_C::On_Take_Pizza__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.On Take Pizza__DelegateSignature");
		
		APRE_FazXpress_C_On_Take_Pizza__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.On Tray Out__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_FazXpress_C::On_Tray_Out__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.On Tray Out__DelegateSignature");
		
		APRE_FazXpress_C_On_Tray_Out__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.On Tray In__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_FazXpress_C::On_Tray_In__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.On Tray In__DelegateSignature");
		
		APRE_FazXpress_C_On_Tray_In__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.On Door Closed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_FazXpress_C::On_Door_Closed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.On Door Closed__DelegateSignature");
		
		APRE_FazXpress_C_On_Door_Closed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_FazXpress.PRE_FazXpress_C.On Door Open__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_FazXpress_C::On_Door_Open__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_FazXpress.PRE_FazXpress_C.On Door Open__DelegateSignature");
		
		APRE_FazXpress_C_On_Door_Open__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APRE_FazXpress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_FazXpress_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_FazXpress.PRE_FazXpress_C");
		return ptr;
	}

}


