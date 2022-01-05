/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "Button_FreddyGreenRoomBackDoor_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Button_FreddyGreenRoomBackDoor.Button_FreddyGreenRoomBackDoor_C.CanPlayerInteract
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanInteract                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		fnaf9_EConditionFailReason                         CantReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_FreddyGreenRoomBackDoor_C::CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_FreddyGreenRoomBackDoor.Button_FreddyGreenRoomBackDoor_C.CanPlayerInteract");
		
		AButton_FreddyGreenRoomBackDoor_C_CanPlayerInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanInteract != nullptr)
			*CanInteract = params.CanInteract;
		if (CantReason != nullptr)
			*CantReason = params.CantReason;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Button_FreddyGreenRoomBackDoor.Button_FreddyGreenRoomBackDoor_C.OnPlayerInteract
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_FreddyGreenRoomBackDoor_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_FreddyGreenRoomBackDoor.Button_FreddyGreenRoomBackDoor_C.OnPlayerInteract");
		
		AButton_FreddyGreenRoomBackDoor_C_OnPlayerInteract_Params params {};
		params.PlayerPawn = PlayerPawn;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function Button_FreddyGreenRoomBackDoor.Button_FreddyGreenRoomBackDoor_C.ExecuteUbergraph_Button_FreddyGreenRoomBackDoor
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AButton_FreddyGreenRoomBackDoor_C::ExecuteUbergraph_Button_FreddyGreenRoomBackDoor(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Button_FreddyGreenRoomBackDoor.Button_FreddyGreenRoomBackDoor_C.ExecuteUbergraph_Button_FreddyGreenRoomBackDoor");
		
		AButton_FreddyGreenRoomBackDoor_C_ExecuteUbergraph_Button_FreddyGreenRoomBackDoor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AButton_FreddyGreenRoomBackDoor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AButton_FreddyGreenRoomBackDoor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Button_FreddyGreenRoomBackDoor.Button_FreddyGreenRoomBackDoor_C");
		return ptr;
	}

}


