/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function PowerDrainerInterface.PowerDrainerInterface_C.PerformPowerTasks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASecurityOfficeManager_C*                    OfficeManager                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPowerDrainerInterface_C::PerformPowerTasks(class ASecurityOfficeManager_C* OfficeManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerDrainerInterface.PowerDrainerInterface_C.PerformPowerTasks");
		
		UPowerDrainerInterface_C_PerformPowerTasks_Params params {};
		params.OfficeManager = OfficeManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function PowerDrainerInterface.PowerDrainerInterface_C.GetPowerDrainRate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DrainRate                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPowerDrainerInterface_C::GetPowerDrainRate(float* DrainRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PowerDrainerInterface.PowerDrainerInterface_C.GetPowerDrainRate");
		
		UPowerDrainerInterface_C_GetPowerDrainRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DrainRate != nullptr)
			*DrainRate = params.DrainRate;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPowerDrainerInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPowerDrainerInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PowerDrainerInterface.PowerDrainerInterface_C");
		return ptr;
	}

}


