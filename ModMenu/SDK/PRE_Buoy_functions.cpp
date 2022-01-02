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
//		Name   -> Function PRE_Buoy.PRE_Buoy_C.Subtle_bob__FinishedFunc
//		Flags  -> (BlueprintEvent)
void APRE_Buoy_C::Subtle_bob__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_Buoy.PRE_Buoy_C.Subtle_bob__FinishedFunc");

	APRE_Buoy_C_Subtle_bob__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_Buoy.PRE_Buoy_C.Subtle_bob__UpdateFunc
//		Flags  -> (BlueprintEvent)
void APRE_Buoy_C::Subtle_bob__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_Buoy.PRE_Buoy_C.Subtle_bob__UpdateFunc");

	APRE_Buoy_C_Subtle_bob__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_Buoy.PRE_Buoy_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void APRE_Buoy_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_Buoy.PRE_Buoy_C.ReceiveBeginPlay");

	APRE_Buoy_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_Buoy.PRE_Buoy_C.ExecuteUbergraph_PRE_Buoy
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APRE_Buoy_C::ExecuteUbergraph_PRE_Buoy(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_Buoy.PRE_Buoy_C.ExecuteUbergraph_PRE_Buoy");

	APRE_Buoy_C_ExecuteUbergraph_PRE_Buoy_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
