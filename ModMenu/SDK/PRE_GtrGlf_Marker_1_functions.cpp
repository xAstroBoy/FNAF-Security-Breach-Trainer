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
//		Name   -> Function PRE_GtrGlf_Marker_1.PRE_GtrGlf_Marker_0_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void APRE_GtrGlf_Marker_0_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_GtrGlf_Marker_1.PRE_GtrGlf_Marker_0_C.UserConstructionScript");

	APRE_GtrGlf_Marker_0_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_GtrGlf_Marker_1.PRE_GtrGlf_Marker_0_C.SwitchColorForScenario
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APRE_GtrGlf_Marker_0_C::SwitchColorForScenario()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_GtrGlf_Marker_1.PRE_GtrGlf_Marker_0_C.SwitchColorForScenario");

	APRE_GtrGlf_Marker_0_C_SwitchColorForScenario_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_GtrGlf_Marker_1.PRE_GtrGlf_Marker_0_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void APRE_GtrGlf_Marker_0_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_GtrGlf_Marker_1.PRE_GtrGlf_Marker_0_C.ReceiveBeginPlay");

	APRE_GtrGlf_Marker_0_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PRE_GtrGlf_Marker_1.PRE_GtrGlf_Marker_0_C.ExecuteUbergraph_PRE_GtrGlf_Marker_1
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APRE_GtrGlf_Marker_0_C::ExecuteUbergraph_PRE_GtrGlf_Marker_1(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PRE_GtrGlf_Marker_1.PRE_GtrGlf_Marker_0_C.ExecuteUbergraph_PRE_GtrGlf_Marker_1");

	APRE_GtrGlf_Marker_0_C_ExecuteUbergraph_PRE_GtrGlf_Marker_1_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
