// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.HasDoorInitialized
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Underground_VentDoor_C::HasDoorInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.HasDoorInitialized");

	ABP_Underground_VentDoor_C_HasDoorInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.IsDoorLockedForAI
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Underground_VentDoor_C::IsDoorLockedForAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.IsDoorLockedForAI");

	ABP_Underground_VentDoor_C_IsDoorLockedForAI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.IsDoorLockedForPlayer
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Underground_VentDoor_C::IsDoorLockedForPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.IsDoorLockedForPlayer");

	ABP_Underground_VentDoor_C_IsDoorLockedForPlayer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.IsDoorOpen
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Underground_VentDoor_C::IsDoorOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.IsDoorOpen");

	ABP_Underground_VentDoor_C_IsDoorOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.Door_Open_Close__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_Underground_VentDoor_C::Door_Open_Close__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.Door_Open_Close__FinishedFunc");

	ABP_Underground_VentDoor_C_Door_Open_Close__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.Door_Open_Close__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_Underground_VentDoor_C::Door_Open_Close__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.Door_Open_Close__UpdateFunc");

	ABP_Underground_VentDoor_C_Door_Open_Close__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.SetDoorRequiredItem
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Underground_VentDoor_C::SetDoorRequiredItem(const struct FName& ItemName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.SetDoorRequiredItem");

	ABP_Underground_VentDoor_C_SetDoorRequiredItem_Params params {};
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.SetSecurityLevel
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewSecurityLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Underground_VentDoor_C::SetSecurityLevel(int NewSecurityLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.SetSecurityLevel");

	ABP_Underground_VentDoor_C_SetSecurityLevel_Params params {};
	params.NewSecurityLevel = NewSecurityLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.ForceDoorClose
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Underground_VentDoor_C::ForceDoorClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.ForceDoorClose");

	ABP_Underground_VentDoor_C_ForceDoorClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.BndEvt__Door_K2Node_ComponentBoundEvent_0_OnInitialOpen__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ABP_Underground_VentDoor_C::BndEvt__Door_K2Node_ComponentBoundEvent_0_OnInitialOpen__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.BndEvt__Door_K2Node_ComponentBoundEvent_0_OnInitialOpen__DelegateSignature");

	ABP_Underground_VentDoor_C_BndEvt__Door_K2Node_ComponentBoundEvent_0_OnInitialOpen__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.BndEvt__Door_K2Node_ComponentBoundEvent_1_OnOpenCloseDoor__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Underground_VentDoor_C::BndEvt__Door_K2Node_ComponentBoundEvent_1_OnOpenCloseDoor__DelegateSignature(bool bIsPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.BndEvt__Door_K2Node_ComponentBoundEvent_1_OnOpenCloseDoor__DelegateSignature");

	ABP_Underground_VentDoor_C_BndEvt__Door_K2Node_ComponentBoundEvent_1_OnOpenCloseDoor__DelegateSignature_Params params {};
	params.bIsPlayer = bIsPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.BndEvt__Door_K2Node_ComponentBoundEvent_2_OnOpenCloseDoor__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Underground_VentDoor_C::BndEvt__Door_K2Node_ComponentBoundEvent_2_OnOpenCloseDoor__DelegateSignature(bool bIsPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.BndEvt__Door_K2Node_ComponentBoundEvent_2_OnOpenCloseDoor__DelegateSignature");

	ABP_Underground_VentDoor_C_BndEvt__Door_K2Node_ComponentBoundEvent_2_OnOpenCloseDoor__DelegateSignature_Params params {};
	params.bIsPlayer = bIsPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.ForceDoorOpen
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Underground_VentDoor_C::ForceDoorOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.ForceDoorOpen");

	ABP_Underground_VentDoor_C_ForceDoorOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.SetDoorLockAI
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Underground_VentDoor_C::SetDoorLockAI(bool Lock)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.SetDoorLockAI");

	ABP_Underground_VentDoor_C_SetDoorLockAI_Params params {};
	params.Lock = Lock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.SetDoorLockPlayer
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Underground_VentDoor_C::SetDoorLockPlayer(bool Lock)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.SetDoorLockPlayer");

	ABP_Underground_VentDoor_C_SetDoorLockPlayer_Params params {};
	params.Lock = Lock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Underground_VentDoor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.ReceiveBeginPlay");

	ABP_Underground_VentDoor_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.ExecuteUbergraph_BP_Underground_VentDoor
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Underground_VentDoor_C::ExecuteUbergraph_BP_Underground_VentDoor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Underground_VentDoor.BP_Underground_VentDoor_C.ExecuteUbergraph_BP_Underground_VentDoor");

	ABP_Underground_VentDoor_C_ExecuteUbergraph_BP_Underground_VentDoor_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
