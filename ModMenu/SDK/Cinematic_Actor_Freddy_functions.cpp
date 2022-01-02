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
//		Name   -> Function Cinematic_Actor_Freddy.Cinematic_Actor_Freddy_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ACinematic_Actor_Freddy_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cinematic_Actor_Freddy.Cinematic_Actor_Freddy_C.ReceiveBeginPlay");

	ACinematic_Actor_Freddy_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Cinematic_Actor_Freddy.Cinematic_Actor_Freddy_C.ExecuteUbergraph_Cinematic_Actor_Freddy
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACinematic_Actor_Freddy_C::ExecuteUbergraph_Cinematic_Actor_Freddy(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cinematic_Actor_Freddy.Cinematic_Actor_Freddy_C.ExecuteUbergraph_Cinematic_Actor_Freddy");

	ACinematic_Actor_Freddy_C_ExecuteUbergraph_Cinematic_Actor_Freddy_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
