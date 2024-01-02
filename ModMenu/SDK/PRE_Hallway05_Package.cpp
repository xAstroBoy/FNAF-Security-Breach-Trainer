/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Hallway05.PRE_Hallway05_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APRE_Hallway05_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Hallway05.PRE_Hallway05_C.Timeline_0__FinishedFunc");
		
		APRE_Hallway05_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Hallway05.PRE_Hallway05_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APRE_Hallway05_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Hallway05.PRE_Hallway05_C.Timeline_0__UpdateFunc");
		
		APRE_Hallway05_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Hallway05.PRE_Hallway05_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APRE_Hallway05_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Hallway05.PRE_Hallway05_C.ReceiveBeginPlay");
		
		APRE_Hallway05_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Hallway05.PRE_Hallway05_C.Update
	 * 		Flags  -> ()
	 */
	void APRE_Hallway05_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Hallway05.PRE_Hallway05_C.Update");
		
		APRE_Hallway05_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Hallway05.PRE_Hallway05_C.ExecuteUbergraph_PRE_Hallway05
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_Hallway05_C::ExecuteUbergraph_PRE_Hallway05(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Hallway05.PRE_Hallway05_C.ExecuteUbergraph_PRE_Hallway05");
		
		APRE_Hallway05_C_ExecuteUbergraph_PRE_Hallway05_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRE_Hallway05_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_Hallway05_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_Hallway05.PRE_Hallway05_C");
		return ptr;
	}

}


