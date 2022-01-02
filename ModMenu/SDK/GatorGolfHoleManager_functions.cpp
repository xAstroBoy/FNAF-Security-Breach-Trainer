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
//		Name   -> Function GatorGolfHoleManager.GatorGolfHoleManager_C.Hole Activated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                HoleNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGatorGolfHoleManager_C::Hole_Activated(int HoleNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorGolfHoleManager.GatorGolfHoleManager_C.Hole Activated");

	AGatorGolfHoleManager_C_Hole_Activated_Params params {};
	params.HoleNumber = HoleNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function GatorGolfHoleManager.GatorGolfHoleManager_C.ExecuteUbergraph_GatorGolfHoleManager
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGatorGolfHoleManager_C::ExecuteUbergraph_GatorGolfHoleManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GatorGolfHoleManager.GatorGolfHoleManager_C.ExecuteUbergraph_GatorGolfHoleManager");

	AGatorGolfHoleManager_C_ExecuteUbergraph_GatorGolfHoleManager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
