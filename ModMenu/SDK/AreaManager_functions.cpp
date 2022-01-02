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
//		Name   -> Function AreaManager.AreaManager_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AAreaManager_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AreaManager.AreaManager_C.UserConstructionScript");

	AAreaManager_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AreaManager.AreaManager_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AAreaManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AreaManager.AreaManager_C.ReceiveBeginPlay");

	AAreaManager_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AreaManager.AreaManager_C.On Player Entered Room
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ARoomAreaBase*                               Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAreaManager_C::On_Player_Entered_Room(class ARoomAreaBase* Room)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AreaManager.AreaManager_C.On Player Entered Room");

	AAreaManager_C_On_Player_Entered_Room_Params params {};
	params.Room = Room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AreaManager.AreaManager_C.ExecuteUbergraph_AreaManager
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAreaManager_C::ExecuteUbergraph_AreaManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AreaManager.AreaManager_C.ExecuteUbergraph_AreaManager");

	AAreaManager_C_ExecuteUbergraph_AreaManager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AreaManager.AreaManager_C.OnPlayerEnteredArea__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Areas_EAreas>                          NewArea                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAreaManager_C::OnPlayerEnteredArea__DelegateSignature(TEnumAsByte<Areas_EAreas> NewArea)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AreaManager.AreaManager_C.OnPlayerEnteredArea__DelegateSignature");

	AAreaManager_C_OnPlayerEnteredArea__DelegateSignature_Params params {};
	params.NewArea = NewArea;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
