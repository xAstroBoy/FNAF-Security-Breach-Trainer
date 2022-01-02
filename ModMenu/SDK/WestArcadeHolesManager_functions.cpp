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
//		Name   -> Function WestArcadeHolesManager.WestArcadeHolesManager_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AWestArcadeHolesManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WestArcadeHolesManager.WestArcadeHolesManager_C.ReceiveBeginPlay");

	AWestArcadeHolesManager_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WestArcadeHolesManager.WestArcadeHolesManager_C.Update
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AWestArcadeHolesManager_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WestArcadeHolesManager.WestArcadeHolesManager_C.Update");

	AWestArcadeHolesManager_C_Update_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WestArcadeHolesManager.WestArcadeHolesManager_C.ExecuteUbergraph_WestArcadeHolesManager
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWestArcadeHolesManager_C::ExecuteUbergraph_WestArcadeHolesManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WestArcadeHolesManager.WestArcadeHolesManager_C.ExecuteUbergraph_WestArcadeHolesManager");

	AWestArcadeHolesManager_C_ExecuteUbergraph_WestArcadeHolesManager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
