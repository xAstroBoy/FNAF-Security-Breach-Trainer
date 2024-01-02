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
	 * 		Name   -> Function Door_FreddyGreenRoomBack.Door_FreddyGreenRoomBack_C.BndEvt__Door_K2Node_ComponentBoundEvent_0_OnPawnExitedDoor__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDoorComponent*                              DoorComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoor_FreddyGreenRoomBack_C::BndEvt__Door_K2Node_ComponentBoundEvent_0_OnPawnExitedDoor__DelegateSignature(class UDoorComponent* DoorComponent, class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_FreddyGreenRoomBack.Door_FreddyGreenRoomBack_C.BndEvt__Door_K2Node_ComponentBoundEvent_0_OnPawnExitedDoor__DelegateSignature");
		
		ADoor_FreddyGreenRoomBack_C_BndEvt__Door_K2Node_ComponentBoundEvent_0_OnPawnExitedDoor__DelegateSignature_Params params {};
		params.DoorComponent = DoorComponent;
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_FreddyGreenRoomBack.Door_FreddyGreenRoomBack_C.BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_1_OnTimeStart__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ADoor_FreddyGreenRoomBack_C::BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_1_OnTimeStart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_FreddyGreenRoomBack.Door_FreddyGreenRoomBack_C.BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_1_OnTimeStart__DelegateSignature");
		
		ADoor_FreddyGreenRoomBack_C_BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_1_OnTimeStart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_FreddyGreenRoomBack.Door_FreddyGreenRoomBack_C.BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_2_OnTimeEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ADoor_FreddyGreenRoomBack_C::BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_2_OnTimeEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_FreddyGreenRoomBack.Door_FreddyGreenRoomBack_C.BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_2_OnTimeEnd__DelegateSignature");
		
		ADoor_FreddyGreenRoomBack_C_BndEvt__TimeCheckComponent_K2Node_ComponentBoundEvent_2_OnTimeEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Door_FreddyGreenRoomBack.Door_FreddyGreenRoomBack_C.ExecuteUbergraph_Door_FreddyGreenRoomBack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADoor_FreddyGreenRoomBack_C::ExecuteUbergraph_Door_FreddyGreenRoomBack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Door_FreddyGreenRoomBack.Door_FreddyGreenRoomBack_C.ExecuteUbergraph_Door_FreddyGreenRoomBack");
		
		ADoor_FreddyGreenRoomBack_C_ExecuteUbergraph_Door_FreddyGreenRoomBack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADoor_FreddyGreenRoomBack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADoor_FreddyGreenRoomBack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Door_FreddyGreenRoomBack.Door_FreddyGreenRoomBack_C");
		return ptr;
	}

}


