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
//		Name   -> Function Burntrap_PowerStationPlayerInteractible.Burntrap_PowerStationPlayerInteractible_C.OnPlayerInteract
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABurntrap_PowerStationPlayerInteractible_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Burntrap_PowerStationPlayerInteractible.Burntrap_PowerStationPlayerInteractible_C.OnPlayerInteract");

	ABurntrap_PowerStationPlayerInteractible_C_OnPlayerInteract_Params params {};
	params.PlayerPawn = PlayerPawn;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Burntrap_PowerStationPlayerInteractible.Burntrap_PowerStationPlayerInteractible_C.ExecuteUbergraph_Burntrap_PowerStationPlayerInteractible
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABurntrap_PowerStationPlayerInteractible_C::ExecuteUbergraph_Burntrap_PowerStationPlayerInteractible(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Burntrap_PowerStationPlayerInteractible.Burntrap_PowerStationPlayerInteractible_C.ExecuteUbergraph_Burntrap_PowerStationPlayerInteractible");

	ABurntrap_PowerStationPlayerInteractible_C_ExecuteUbergraph_Burntrap_PowerStationPlayerInteractible_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
