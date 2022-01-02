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
//		Name   -> Function PowerDrainerInterface.PowerDrainerInterface_C.PerformPowerTasks
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ASecurityOfficeManager_C*                    OfficeManager                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPowerDrainerInterface_C::PerformPowerTasks(class ASecurityOfficeManager_C* OfficeManager)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerDrainerInterface.PowerDrainerInterface_C.PerformPowerTasks");

	UPowerDrainerInterface_C_PerformPowerTasks_Params params {};
	params.OfficeManager = OfficeManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PowerDrainerInterface.PowerDrainerInterface_C.GetPowerDrainRate
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DrainRate                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPowerDrainerInterface_C::GetPowerDrainRate(float* DrainRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PowerDrainerInterface.PowerDrainerInterface_C.GetPowerDrainRate");

	UPowerDrainerInterface_C_GetPowerDrainRate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DrainRate != nullptr)
		*DrainRate = params.DrainRate;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
