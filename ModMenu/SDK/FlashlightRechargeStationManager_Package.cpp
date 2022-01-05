/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "FlashlightRechargeStationManager_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.SetupAllRechargeStations
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AFlashlightRechargeStationManager_C::SetupAllRechargeStations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.SetupAllRechargeStations");
		
		AFlashlightRechargeStationManager_C_SetupAllRechargeStations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.GetChargePercentage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float AFlashlightRechargeStationManager_C::GetChargePercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.GetChargePercentage");
		
		AFlashlightRechargeStationManager_C_GetChargePercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.GetCurrentStation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AFlashlightRechargeStation_C*                Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStationManager_C::GetCurrentStation(class AFlashlightRechargeStation_C** Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.GetCurrentStation");
		
		AFlashlightRechargeStationManager_C_GetCurrentStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnFlashlightCollected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFlashlightRechargeStationManager_C::OnFlashlightCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnFlashlightCollected");
		
		AFlashlightRechargeStationManager_C_OnFlashlightCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.GetStationID
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AFlashlightRechargeStation_C*                Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int AFlashlightRechargeStationManager_C::GetStationID(class AFlashlightRechargeStation_C* Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.GetStationID");
		
		AFlashlightRechargeStationManager_C_GetStationID_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnFlashlightDeposited
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFlashlightRechargeStation_C*                RechargeStation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStationManager_C::OnFlashlightDeposited(class AFlashlightRechargeStation_C* RechargeStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnFlashlightDeposited");
		
		AFlashlightRechargeStationManager_C_OnFlashlightDeposited_Params params {};
		params.RechargeStation = RechargeStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnRechargeStationLoaded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFlashlightRechargeStation_C*                RechargeStation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStationManager_C::OnRechargeStationLoaded(class AFlashlightRechargeStation_C* RechargeStation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnRechargeStationLoaded");
		
		AFlashlightRechargeStationManager_C_OnRechargeStationLoaded_Params params {};
		params.RechargeStation = RechargeStation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnCheckpointSave
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStationManager_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnCheckpointSave");
		
		AFlashlightRechargeStationManager_C_OnCheckpointSave_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnStoreGameData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStationManager_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnStoreGameData");
		
		AFlashlightRechargeStationManager_C_OnStoreGameData_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.PostGameLoad
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFlashlightRechargeStationManager_C::PostGameLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.PostGameLoad");
		
		AFlashlightRechargeStationManager_C_PostGameLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.PostSaveGame
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFlashlightRechargeStationManager_C::PostSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.PostSaveGame");
		
		AFlashlightRechargeStationManager_C_PostSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStationManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.ReceiveTick");
		
		AFlashlightRechargeStationManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnCheckpointLoad
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStationManager_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnCheckpointLoad");
		
		AFlashlightRechargeStationManager_C_OnCheckpointLoad_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnGameDataLoaded
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStationManager_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.OnGameDataLoaded");
		
		AFlashlightRechargeStationManager_C_OnGameDataLoaded_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.ExecuteUbergraph_FlashlightRechargeStationManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFlashlightRechargeStationManager_C::ExecuteUbergraph_FlashlightRechargeStationManager(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlashlightRechargeStationManager.FlashlightRechargeStationManager_C.ExecuteUbergraph_FlashlightRechargeStationManager");
		
		AFlashlightRechargeStationManager_C_ExecuteUbergraph_FlashlightRechargeStationManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFlashlightRechargeStationManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlashlightRechargeStationManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FlashlightRechargeStationManager.FlashlightRechargeStationManager_C");
		return ptr;
	}

}


