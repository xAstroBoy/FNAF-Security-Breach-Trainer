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
//		Name   -> Function PlayerPlacementLocator.PlayerPlacementLocator_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void APlayerPlacementLocator_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPlacementLocator.PlayerPlacementLocator_C.ReceiveBeginPlay");

	APlayerPlacementLocator_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlayerPlacementLocator.PlayerPlacementLocator_C.ExecuteUbergraph_PlayerPlacementLocator
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlayerPlacementLocator_C::ExecuteUbergraph_PlayerPlacementLocator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPlacementLocator.PlayerPlacementLocator_C.ExecuteUbergraph_PlayerPlacementLocator");

	APlayerPlacementLocator_C_ExecuteUbergraph_PlayerPlacementLocator_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
