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
//		Name   -> Function BPI_Player.BPI_Player_C.PlayerEnteringExitingFreddy
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Player_C::PlayerEnteringExitingFreddy(bool* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Player.BPI_Player_C.PlayerEnteringExitingFreddy");

	UBPI_Player_C_PlayerEnteringExitingFreddy_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
