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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetGameType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		fnaf9_EFNAFGameType                                GameType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstanceInterface_C::GetGameType(fnaf9_EFNAFGameType* GameType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.GetGameType");
		
		UFNAFGameInstanceInterface_C_GetGameType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameType != nullptr)
			*GameType = params.GameType;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.ChangeHourlyActivity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            HourIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstanceInterface_C::ChangeHourlyActivity(int32_t HourIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstanceInterface.FNAFGameInstanceInterface_C.ChangeHourlyActivity");
		
		UFNAFGameInstanceInterface_C_ChangeHourlyActivity_Params params {};
		params.HourIndex = HourIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFGameInstanceInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFGameInstanceInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FNAFGameInstanceInterface.FNAFGameInstanceInterface_C");
		return ptr;
	}

}


