/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "EngineSettings_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UConsoleSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsoleSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EngineSettings.ConsoleSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x016DBAE0
	 * 		Name   -> Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSkipFirstPlayer                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameMapsSettings::SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1");
		
		UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Params params {};
		params.bSkipFirstPlayer = bSkipFirstPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x016DBAB0
	 * 		Name   -> Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGameMapsSettings::GetSkipAssigningGamepadToPlayer1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1");
		
		UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x016DBA80
	 * 		Name   -> Function EngineSettings.GameMapsSettings.GetGameMapsSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UGameMapsSettings* UGameMapsSettings::STATIC_GetGameMapsSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.GetGameMapsSettings");
		
		UGameMapsSettings_GetGameMapsSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGameMapsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameMapsSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EngineSettings.GameMapsSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGameNetworkManagerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameNetworkManagerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EngineSettings.GameNetworkManagerSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGameSessionSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameSessionSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EngineSettings.GameSessionSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGeneralEngineSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneralEngineSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EngineSettings.GeneralEngineSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGeneralProjectSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneralProjectSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EngineSettings.GeneralProjectSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHudSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EngineSettings.HudSettings");
		return ptr;
	}

}


