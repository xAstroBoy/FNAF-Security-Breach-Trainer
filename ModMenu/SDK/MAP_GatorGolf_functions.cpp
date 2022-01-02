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
//		Name   -> Function MAP_GatorGolf.MAP_GatorGolf_C.TryAgain
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMAP_GatorGolf_C::TryAgain()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MAP_GatorGolf.MAP_GatorGolf_C.TryAgain");

	AMAP_GatorGolf_C_TryAgain_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MAP_GatorGolf.MAP_GatorGolf_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AMAP_GatorGolf_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MAP_GatorGolf.MAP_GatorGolf_C.ReceiveBeginPlay");

	AMAP_GatorGolf_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MAP_GatorGolf.MAP_GatorGolf_C.ExecuteUbergraph_MAP_GatorGolf
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMAP_GatorGolf_C::ExecuteUbergraph_MAP_GatorGolf(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MAP_GatorGolf.MAP_GatorGolf_C.ExecuteUbergraph_MAP_GatorGolf");

	AMAP_GatorGolf_C_ExecuteUbergraph_MAP_GatorGolf_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
