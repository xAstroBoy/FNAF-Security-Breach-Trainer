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
//		Name   -> Function Staffbot_ABP_Comedy.Staffbot_ABP_Comedy_C.BlueprintBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UStaffbot_ABP_Comedy_C::BlueprintBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Comedy.Staffbot_ABP_Comedy_C.BlueprintBeginPlay");

	UStaffbot_ABP_Comedy_C_BlueprintBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_ABP_Comedy.Staffbot_ABP_Comedy_C.ExecuteUbergraph_Staffbot_ABP_Comedy
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaffbot_ABP_Comedy_C::ExecuteUbergraph_Staffbot_ABP_Comedy(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_ABP_Comedy.Staffbot_ABP_Comedy_C.ExecuteUbergraph_Staffbot_ABP_Comedy");

	UStaffbot_ABP_Comedy_C_ExecuteUbergraph_Staffbot_ABP_Comedy_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
