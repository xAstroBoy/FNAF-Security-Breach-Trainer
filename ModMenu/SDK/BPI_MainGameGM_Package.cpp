/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "BPI_MainGameGM_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function BPI_MainGameGM.BPI_MainGameGM_C.GetFlashlightManager
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFlashlightRechargeStationManager_C*         FlashlightManager                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MainGameGM_C::GetFlashlightManager(class AFlashlightRechargeStationManager_C** FlashlightManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MainGameGM.BPI_MainGameGM_C.GetFlashlightManager");
		
		UBPI_MainGameGM_C_GetFlashlightManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FlashlightManager != nullptr)
			*FlashlightManager = params.FlashlightManager;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBPI_MainGameGM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_MainGameGM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_MainGameGM.BPI_MainGameGM_C");
		return ptr;
	}

}


