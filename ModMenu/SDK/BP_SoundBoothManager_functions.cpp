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
//		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.Flash__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_SoundBoothManager_C::Flash__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SoundBoothManager.BP_SoundBoothManager_C.Flash__FinishedFunc");

	ABP_SoundBoothManager_C_Flash__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.Flash__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_SoundBoothManager_C::Flash__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SoundBoothManager.BP_SoundBoothManager_C.Flash__UpdateFunc");

	ABP_SoundBoothManager_C_Flash__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.Activate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_SoundBoothManager_C::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SoundBoothManager.BP_SoundBoothManager_C.Activate");

	ABP_SoundBoothManager_C_Activate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.Reset
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_SoundBoothManager_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SoundBoothManager.BP_SoundBoothManager_C.Reset");

	ABP_SoundBoothManager_C_Reset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_SoundBoothManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SoundBoothManager.BP_SoundBoothManager_C.ReceiveBeginPlay");

	ABP_SoundBoothManager_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_SoundBoothManager.BP_SoundBoothManager_C.ExecuteUbergraph_BP_SoundBoothManager
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SoundBoothManager_C::ExecuteUbergraph_BP_SoundBoothManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SoundBoothManager.BP_SoundBoothManager_C.ExecuteUbergraph_BP_SoundBoothManager");

	ABP_SoundBoothManager_C_ExecuteUbergraph_BP_SoundBoothManager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
