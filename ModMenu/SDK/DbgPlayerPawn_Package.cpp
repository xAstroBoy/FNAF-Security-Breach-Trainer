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
	 * 		Name   -> Function DbgPlayerPawn.DbgPlayerPawn_C.GetCollisionMode
	 * 		Flags  -> ()
	 */
	ECollisionEnabled ADbgPlayerPawn_C::GetCollisionMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DbgPlayerPawn.DbgPlayerPawn_C.GetCollisionMode");
		
		ADbgPlayerPawn_C_GetCollisionMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DbgPlayerPawn.DbgPlayerPawn_C.Set Collision Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECollisionEnabled                                  NewType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADbgPlayerPawn_C::SetCollisionMode(ECollisionEnabled NewType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DbgPlayerPawn.DbgPlayerPawn_C.Set Collision Mode");
		
		ADbgPlayerPawn_C_SetCollisionMode_Params params {};
		params.NewType = NewType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DbgPlayerPawn.DbgPlayerPawn_C.ExecuteUbergraph_DbgPlayerPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADbgPlayerPawn_C::ExecuteUbergraph_DbgPlayerPawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DbgPlayerPawn.DbgPlayerPawn_C.ExecuteUbergraph_DbgPlayerPawn");
		
		ADbgPlayerPawn_C_ExecuteUbergraph_DbgPlayerPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADbgPlayerPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADbgPlayerPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DbgPlayerPawn.DbgPlayerPawn_C");
		return ptr;
	}

}


