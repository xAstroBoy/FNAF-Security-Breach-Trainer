/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MissionInterface.BPI_MissionInterface_C.IsStartupMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               StartupMission                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_MissionInterface_C::IsStartupMission(bool* StartupMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MissionInterface.BPI_MissionInterface_C.IsStartupMission");
		
		UBPI_MissionInterface_C_IsStartupMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartupMission != nullptr)
			*StartupMission = params.StartupMission;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MissionInterface.BPI_MissionInterface_C.OnSkip
	 * 		Flags  -> ()
	 */
	void UBPI_MissionInterface_C::OnSkip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MissionInterface.BPI_MissionInterface_C.OnSkip");
		
		UBPI_MissionInterface_C_OnSkip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_MissionInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_MissionInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_MissionInterface.BPI_MissionInterface_C");
		return ptr;
	}

}


