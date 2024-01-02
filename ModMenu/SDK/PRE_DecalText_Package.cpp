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
	 * 		Name   -> Function PRE_DecalText.PRE_DecalText_C.Update
	 * 		Flags  -> ()
	 */
	void APRE_DecalText_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_DecalText.PRE_DecalText_C.Update");
		
		APRE_DecalText_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_DecalText.PRE_DecalText_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APRE_DecalText_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_DecalText.PRE_DecalText_C.UserConstructionScript");
		
		APRE_DecalText_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_DecalText.PRE_DecalText_C.DoWork
	 * 		Flags  -> ()
	 */
	void APRE_DecalText_C::DoWork()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_DecalText.PRE_DecalText_C.DoWork");
		
		APRE_DecalText_C_DoWork_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_DecalText.PRE_DecalText_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APRE_DecalText_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_DecalText.PRE_DecalText_C.ReceiveBeginPlay");
		
		APRE_DecalText_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PRE_DecalText.PRE_DecalText_C.ExecuteUbergraph_PRE_DecalText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_DecalText_C::ExecuteUbergraph_PRE_DecalText(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_DecalText.PRE_DecalText_C.ExecuteUbergraph_PRE_DecalText");
		
		APRE_DecalText_C_ExecuteUbergraph_PRE_DecalText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRE_DecalText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_DecalText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_DecalText.PRE_DecalText_C");
		return ptr;
	}

}


