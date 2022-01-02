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
//		Name   -> Function MarkerIcon.MarkerIcon_C.Set Marker
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UMarkerIcon_C::Set_Marker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MarkerIcon.MarkerIcon_C.Set Marker");

	UMarkerIcon_C_Set_Marker_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MarkerIcon.MarkerIcon_C.ExecuteUbergraph_MarkerIcon
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMarkerIcon_C::ExecuteUbergraph_MarkerIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MarkerIcon.MarkerIcon_C.ExecuteUbergraph_MarkerIcon");

	UMarkerIcon_C_ExecuteUbergraph_MarkerIcon_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
