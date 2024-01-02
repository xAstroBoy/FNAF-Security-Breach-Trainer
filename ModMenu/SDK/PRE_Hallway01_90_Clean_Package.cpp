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
	 * 		Name   -> Function PRE_Hallway01_90_Clean.PRE_Hallway01_90_Clean_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APRE_Hallway01_90_Clean_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Hallway01_90_Clean.PRE_Hallway01_90_Clean_C.Timeline_0__FinishedFunc");
		
		APRE_Hallway01_90_Clean_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Hallway01_90_Clean.PRE_Hallway01_90_Clean_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APRE_Hallway01_90_Clean_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Hallway01_90_Clean.PRE_Hallway01_90_Clean_C.Timeline_0__UpdateFunc");
		
		APRE_Hallway01_90_Clean_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Hallway01_90_Clean.PRE_Hallway01_90_Clean_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APRE_Hallway01_90_Clean_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Hallway01_90_Clean.PRE_Hallway01_90_Clean_C.ReceiveBeginPlay");
		
		APRE_Hallway01_90_Clean_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Hallway01_90_Clean.PRE_Hallway01_90_Clean_C.Update
	 * 		Flags  -> ()
	 */
	void APRE_Hallway01_90_Clean_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Hallway01_90_Clean.PRE_Hallway01_90_Clean_C.Update");
		
		APRE_Hallway01_90_Clean_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_Hallway01_90_Clean.PRE_Hallway01_90_Clean_C.ExecuteUbergraph_PRE_Hallway01_90_Clean
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_Hallway01_90_Clean_C::ExecuteUbergraph_PRE_Hallway01_90_Clean(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_Hallway01_90_Clean.PRE_Hallway01_90_Clean_C.ExecuteUbergraph_PRE_Hallway01_90_Clean");
		
		APRE_Hallway01_90_Clean_C_ExecuteUbergraph_PRE_Hallway01_90_Clean_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRE_Hallway01_90_Clean_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_Hallway01_90_Clean_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_Hallway01_90_Clean.PRE_Hallway01_90_Clean_C");
		return ptr;
	}

}


