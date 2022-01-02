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
//		Name   -> Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetGameType
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		fnaf9_EFNAFGameType                                GameType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFNAFGameInstanceInterface_C::GetGameType(fnaf9_EFNAFGameType* GameType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetGameType");

	UFNAFGameInstanceInterface_C_GetGameType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameType != nullptr)
		*GameType = params.GameType;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.ChangeHourlyActivity
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                HourIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFNAFGameInstanceInterface_C::ChangeHourlyActivity(int HourIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.ChangeHourlyActivity");

	UFNAFGameInstanceInterface_C_ChangeHourlyActivity_Params params {};
	params.HourIndex = HourIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
