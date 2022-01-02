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
//		Name   -> Function WestArcadeDecalManager.WestArcadeDecalManager_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AWestArcadeDecalManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WestArcadeDecalManager.WestArcadeDecalManager_C.ReceiveBeginPlay");

	AWestArcadeDecalManager_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WestArcadeDecalManager.WestArcadeDecalManager_C.Update
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AWestArcadeDecalManager_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WestArcadeDecalManager.WestArcadeDecalManager_C.Update");

	AWestArcadeDecalManager_C_Update_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WestArcadeDecalManager.WestArcadeDecalManager_C.ExecuteUbergraph_WestArcadeDecalManager
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWestArcadeDecalManager_C::ExecuteUbergraph_WestArcadeDecalManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WestArcadeDecalManager.WestArcadeDecalManager_C.ExecuteUbergraph_WestArcadeDecalManager");

	AWestArcadeDecalManager_C_ExecuteUbergraph_WestArcadeDecalManager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
