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
//		Name   -> Function LobbyFirstHourManager.LobbyFirstHourManager_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ALobbyFirstHourManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyFirstHourManager.LobbyFirstHourManager_C.ReceiveBeginPlay");

	ALobbyFirstHourManager_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LobbyFirstHourManager.LobbyFirstHourManager_C.On 12:30
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALobbyFirstHourManager_C::On_12_30()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyFirstHourManager.LobbyFirstHourManager_C.On 12:30");

	ALobbyFirstHourManager_C_On_12_30_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LobbyFirstHourManager.LobbyFirstHourManager_C.ExecuteUbergraph_LobbyFirstHourManager
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALobbyFirstHourManager_C::ExecuteUbergraph_LobbyFirstHourManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyFirstHourManager.LobbyFirstHourManager_C.ExecuteUbergraph_LobbyFirstHourManager");

	ALobbyFirstHourManager_C_ExecuteUbergraph_LobbyFirstHourManager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
