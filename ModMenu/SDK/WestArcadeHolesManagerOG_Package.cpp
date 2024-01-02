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
	 * 		Name   -> Function WestArcadeHolesManagerOG.WestArcadeHolesManagerOG_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWestArcadeHolesManagerOG_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WestArcadeHolesManagerOG.WestArcadeHolesManagerOG_C.ReceiveBeginPlay");
		
		AWestArcadeHolesManagerOG_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WestArcadeHolesManagerOG.WestArcadeHolesManagerOG_C.Update
	 * 		Flags  -> ()
	 */
	void AWestArcadeHolesManagerOG_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WestArcadeHolesManagerOG.WestArcadeHolesManagerOG_C.Update");
		
		AWestArcadeHolesManagerOG_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WestArcadeHolesManagerOG.WestArcadeHolesManagerOG_C.ExecuteUbergraph_WestArcadeHolesManagerOG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWestArcadeHolesManagerOG_C::ExecuteUbergraph_WestArcadeHolesManagerOG(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WestArcadeHolesManagerOG.WestArcadeHolesManagerOG_C.ExecuteUbergraph_WestArcadeHolesManagerOG");
		
		AWestArcadeHolesManagerOG_C_ExecuteUbergraph_WestArcadeHolesManagerOG_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWestArcadeHolesManagerOG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWestArcadeHolesManagerOG_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WestArcadeHolesManagerOG.WestArcadeHolesManagerOG_C");
		return ptr;
	}

}


