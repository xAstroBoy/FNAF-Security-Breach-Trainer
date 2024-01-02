/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MainGameGM.BPI_MainGameGM_C.GetNavigationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ANavigationData*                             NavigationData                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MainGameGM_C::GetNavigationData(class ANavigationData** NavigationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MainGameGM.BPI_MainGameGM_C.GetNavigationData");
		
		UBPI_MainGameGM_C_GetNavigationData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigationData != nullptr)
			*NavigationData = params.NavigationData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MainGameGM.BPI_MainGameGM_C.GetGMPowerStationManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APowerStationManager_C*                      PowerStationManager                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MainGameGM_C::GetGMPowerStationManager(class APowerStationManager_C** PowerStationManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MainGameGM.BPI_MainGameGM_C.GetGMPowerStationManager");
		
		UBPI_MainGameGM_C_GetGMPowerStationManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PowerStationManager != nullptr)
			*PowerStationManager = params.PowerStationManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MainGameGM.BPI_MainGameGM_C.GetGMTextFormatter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionTextFormatterFactory_C*              MissionTextFormatter                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MainGameGM_C::GetGMTextFormatter(class UMissionTextFormatterFactory_C** MissionTextFormatter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MainGameGM.BPI_MainGameGM_C.GetGMTextFormatter");
		
		UBPI_MainGameGM_C_GetGMTextFormatter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MissionTextFormatter != nullptr)
			*MissionTextFormatter = params.MissionTextFormatter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MainGameGM.BPI_MainGameGM_C.GetPlayerHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerHUD_C*                                PlayerHUD                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MainGameGM_C::GetPlayerHUD(class UPlayerHUD_C** PlayerHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MainGameGM.BPI_MainGameGM_C.GetPlayerHUD");
		
		UBPI_MainGameGM_C_GetPlayerHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerHUD != nullptr)
			*PlayerHUD = params.PlayerHUD;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MainGameGM.BPI_MainGameGM_C.SetPlayerHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerHUD_C*                                PlayerHUD                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MainGameGM_C::SetPlayerHUD(class UPlayerHUD_C* PlayerHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MainGameGM.BPI_MainGameGM_C.SetPlayerHUD");
		
		UBPI_MainGameGM_C_SetPlayerHUD_Params params {};
		params.PlayerHUD = PlayerHUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MainGameGM.BPI_MainGameGM_C.GetGregoryRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGregory_C*                                  Gregory                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MainGameGM_C::GetGregoryRef(class AGregory_C** Gregory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MainGameGM.BPI_MainGameGM_C.GetGregoryRef");
		
		UBPI_MainGameGM_C_GetGregoryRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Gregory != nullptr)
			*Gregory = params.Gregory;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MainGameGM.BPI_MainGameGM_C.SetGregoryRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGregory_C*                                  Gregory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MainGameGM_C::SetGregoryRef(class AGregory_C* Gregory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MainGameGM.BPI_MainGameGM_C.SetGregoryRef");
		
		UBPI_MainGameGM_C_SetGregoryRef_Params params {};
		params.Gregory = Gregory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MainGameGM.BPI_MainGameGM_C.OnGMCallFreddy
	 * 		Flags  -> ()
	 */
	void UBPI_MainGameGM_C::OnGMCallFreddy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MainGameGM.BPI_MainGameGM_C.OnGMCallFreddy");
		
		UBPI_MainGameGM_C_OnGMCallFreddy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MainGameGM.BPI_MainGameGM_C.HasGMLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasLoaded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_MainGameGM_C::HasGMLoaded(bool* HasLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MainGameGM.BPI_MainGameGM_C.HasGMLoaded");
		
		UBPI_MainGameGM_C_HasGMLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasLoaded != nullptr)
			*HasLoaded = params.HasLoaded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MainGameGM.BPI_MainGameGM_C.SetFreddyRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFreddy_C*                                   Freddy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MainGameGM_C::SetFreddyRef(class AFreddy_C* Freddy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MainGameGM.BPI_MainGameGM_C.SetFreddyRef");
		
		UBPI_MainGameGM_C_SetFreddyRef_Params params {};
		params.Freddy = Freddy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MainGameGM.BPI_MainGameGM_C.GetFreddyRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFreddy_C*                                   Freddy                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MainGameGM_C::GetFreddyRef(class AFreddy_C** Freddy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MainGameGM.BPI_MainGameGM_C.GetFreddyRef");
		
		UBPI_MainGameGM_C_GetFreddyRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Freddy != nullptr)
			*Freddy = params.Freddy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_MainGameGM.BPI_MainGameGM_C.GetFlashlightManager
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_MainGameGM_C.StaticClass
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


