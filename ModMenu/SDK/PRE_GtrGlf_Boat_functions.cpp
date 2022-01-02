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
//		Name   -> Function PRE_GtrGlf_Boat.PRE_GtrGlf_Boat_C.Subtle_bob__FinishedFunc
//		Flags  -> (BlueprintEvent)
void APRE_GtrGlf_Boat_C::Subtle_bob__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_GtrGlf_Boat.PRE_GtrGlf_Boat_C.Subtle_bob__FinishedFunc");

	APRE_GtrGlf_Boat_C_Subtle_bob__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_GtrGlf_Boat.PRE_GtrGlf_Boat_C.Subtle_bob__UpdateFunc
//		Flags  -> (BlueprintEvent)
void APRE_GtrGlf_Boat_C::Subtle_bob__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_GtrGlf_Boat.PRE_GtrGlf_Boat_C.Subtle_bob__UpdateFunc");

	APRE_GtrGlf_Boat_C_Subtle_bob__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_GtrGlf_Boat.PRE_GtrGlf_Boat_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void APRE_GtrGlf_Boat_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_GtrGlf_Boat.PRE_GtrGlf_Boat_C.ReceiveBeginPlay");

	APRE_GtrGlf_Boat_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_GtrGlf_Boat.PRE_GtrGlf_Boat_C.ExecuteUbergraph_PRE_GtrGlf_Boat
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APRE_GtrGlf_Boat_C::ExecuteUbergraph_PRE_GtrGlf_Boat(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_GtrGlf_Boat.PRE_GtrGlf_Boat_C.ExecuteUbergraph_PRE_GtrGlf_Boat");

	APRE_GtrGlf_Boat_C_ExecuteUbergraph_PRE_GtrGlf_Boat_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
