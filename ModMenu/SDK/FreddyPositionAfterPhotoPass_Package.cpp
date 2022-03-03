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
	 * 		Name   -> Function FreddyPositionAfterPhotoPass.FreddyPositionAfterPhotoPass_C.BndEvt__ItemCollectListener_K2Node_ComponentBoundEvent_0_OnCorrectItemCollectedDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFreddyPositionAfterPhotoPass_C::BndEvt__ItemCollectListener_K2Node_ComponentBoundEvent_0_OnCorrectItemCollectedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyPositionAfterPhotoPass.FreddyPositionAfterPhotoPass_C.BndEvt__ItemCollectListener_K2Node_ComponentBoundEvent_0_OnCorrectItemCollectedDelegate__DelegateSignature");
		
		AFreddyPositionAfterPhotoPass_C_BndEvt__ItemCollectListener_K2Node_ComponentBoundEvent_0_OnCorrectItemCollectedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function FreddyPositionAfterPhotoPass.FreddyPositionAfterPhotoPass_C.On Pawn Possessed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyPositionAfterPhotoPass_C::On_Pawn_Possessed(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyPositionAfterPhotoPass.FreddyPositionAfterPhotoPass_C.On Pawn Possessed");
		
		AFreddyPositionAfterPhotoPass_C_On_Pawn_Possessed_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function FreddyPositionAfterPhotoPass.FreddyPositionAfterPhotoPass_C.ExecuteUbergraph_FreddyPositionAfterPhotoPass
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyPositionAfterPhotoPass_C::ExecuteUbergraph_FreddyPositionAfterPhotoPass(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyPositionAfterPhotoPass.FreddyPositionAfterPhotoPass_C.ExecuteUbergraph_FreddyPositionAfterPhotoPass");
		
		AFreddyPositionAfterPhotoPass_C_ExecuteUbergraph_FreddyPositionAfterPhotoPass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFreddyPositionAfterPhotoPass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFreddyPositionAfterPhotoPass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FreddyPositionAfterPhotoPass.FreddyPositionAfterPhotoPass_C");
		return ptr;
	}

}


