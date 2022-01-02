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
//		Name   -> Function BP_LazerPlanetManager.BP_LazerPlanetManager_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_LazerPlanetManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LazerPlanetManager.BP_LazerPlanetManager_C.ReceiveBeginPlay");

	ABP_LazerPlanetManager_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_LazerPlanetManager.BP_LazerPlanetManager_C.SwitchColorForScenario
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_LazerPlanetManager_C::SwitchColorForScenario()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LazerPlanetManager.BP_LazerPlanetManager_C.SwitchColorForScenario");

	ABP_LazerPlanetManager_C_SwitchColorForScenario_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_LazerPlanetManager.BP_LazerPlanetManager_C.ExecuteUbergraph_BP_LazerPlanetManager
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LazerPlanetManager_C::ExecuteUbergraph_BP_LazerPlanetManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LazerPlanetManager.BP_LazerPlanetManager_C.ExecuteUbergraph_BP_LazerPlanetManager");

	ABP_LazerPlanetManager_C_ExecuteUbergraph_BP_LazerPlanetManager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
