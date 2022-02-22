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
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetGameType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		fnaf9_EFNAFGameType                                GameType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::GetGameType(fnaf9_EFNAFGameType* GameType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetGameType");
		
		UFNAFGameInstance_C_GetGameType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameType != nullptr)
			*GameType = params.GameType;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetDefaultMappings
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TMap<class FName, struct FKeyBinding_Struct>       Output_Get                                                 (Parm, OutParm)
	 */
	void UFNAFGameInstance_C::GetDefaultMappings(TMap<class FName, struct FKeyBinding_Struct>* Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetDefaultMappings");
		
		UFNAFGameInstance_C_GetDefaultMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ApplyDLSS
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		FNAFVisualQualityLevel_EFNAFVisualQualityLevel     Quality                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::ApplyDLSS(FNAFVisualQualityLevel_EFNAFVisualQualityLevel Quality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ApplyDLSS");
		
		UFNAFGameInstance_C_ApplyDLSS_Params params {};
		params.Quality = Quality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ToggleSprint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SprintToggle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::ToggleSprint(bool SprintToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ToggleSprint");
		
		UFNAFGameInstance_C_ToggleSprint_Params params {};
		params.SprintToggle = SprintToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetProperControllerIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Keyboard_Key1                                              (Parm, OutParm)
	 * 		class FText                                        Keyboard_Key2                                              (Parm, OutParm)
	 * 		class URichTextBlock*                              Gamepad_Key1                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URichTextBlock*                              Gamepad_Key2                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::GetProperControllerIcon(const class FName& ActionName, class FText* Keyboard_Key1, class FText* Keyboard_Key2, class URichTextBlock** Gamepad_Key1, class URichTextBlock** Gamepad_Key2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetProperControllerIcon");
		
		UFNAFGameInstance_C_GetProperControllerIcon_Params params {};
		params.ActionName = ActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Keyboard_Key1 != nullptr)
			*Keyboard_Key1 = params.Keyboard_Key1;
		if (Keyboard_Key2 != nullptr)
			*Keyboard_Key2 = params.Keyboard_Key2;
		if (Gamepad_Key1 != nullptr)
			*Gamepad_Key1 = params.Gamepad_Key1;
		if (Gamepad_Key2 != nullptr)
			*Gamepad_Key2 = params.Gamepad_Key2;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.FindDeviceSpecicQualitySetting
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFNAFDeviceSpecificQualityConfig            Settings                                                   (Parm, OutParm, HasGetValueTypeHash)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::FindDeviceSpecicQualitySetting(struct FFNAFDeviceSpecificQualityConfig* Settings, bool* Found)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.FindDeviceSpecicQualitySetting");
		
		UFNAFGameInstance_C_FindDeviceSpecicQualitySetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Settings != nullptr)
			*Settings = params.Settings;
		if (Found != nullptr)
			*Found = params.Found;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetIsMinSpecPC
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsMinSpec                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::GetIsMinSpecPC(bool* IsMinSpec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetIsMinSpecPC");
		
		UFNAFGameInstance_C_GetIsMinSpecPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsMinSpec != nullptr)
			*IsMinSpec = params.IsMinSpec;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetDefaultVisualQualityLevels
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		SWGPlatformUtil_ESWGPlatform                       Platform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		FNAFVisualQualityLevel_EFNAFVisualQualityLevel     Visual                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		FNAFRayTraceQualityLevel_EFNAFRayTraceQualityLevel RayTrace                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::GetDefaultVisualQualityLevels(SWGPlatformUtil_ESWGPlatform Platform, FNAFVisualQualityLevel_EFNAFVisualQualityLevel* Visual, FNAFRayTraceQualityLevel_EFNAFRayTraceQualityLevel* RayTrace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetDefaultVisualQualityLevels");
		
		UFNAFGameInstance_C_GetDefaultVisualQualityLevels_Params params {};
		params.Platform = Platform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visual != nullptr)
			*Visual = params.Visual;
		if (RayTrace != nullptr)
			*RayTrace = params.RayTrace;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetIsRTXGPU
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsRTX                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::GetIsRTXGPU(bool* IsRTX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetIsRTXGPU");
		
		UFNAFGameInstance_C_GetIsRTXGPU_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsRTX != nullptr)
			*IsRTX = params.IsRTX;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetIsRayTracingSupported
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		SWGPlatformUtil_ESWGPlatform                       Platform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Supported                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::GetIsRayTracingSupported(SWGPlatformUtil_ESWGPlatform Platform, bool* Supported)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetIsRayTracingSupported");
		
		UFNAFGameInstance_C_GetIsRayTracingSupported_Params params {};
		params.Platform = Platform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Supported != nullptr)
			*Supported = params.Supported;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ToggleInstructionCards
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShowInstructions                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::ToggleInstructionCards(bool ShowInstructions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ToggleInstructionCards");
		
		UFNAFGameInstance_C_ToggleInstructionCards_Params params {};
		params.ShowInstructions = ShowInstructions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.SetMessageAndTime
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        MessageName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::SetMessageAndTime(const class FName& MessageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.SetMessageAndTime");
		
		UFNAFGameInstance_C_SetMessageAndTime_Params params {};
		params.MessageName = MessageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.GetMessageTimeReceived
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        MessageName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        MsgTime                                                    (Parm, OutParm)
	 */
	void UFNAFGameInstance_C::GetMessageTimeReceived(const class FName& MessageName, class FText* MsgTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.GetMessageTimeReceived");
		
		UFNAFGameInstance_C_GetMessageTimeReceived_Params params {};
		params.MessageName = MessageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MsgTime != nullptr)
			*MsgTime = params.MsgTime;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.InstructionCardViewed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_InstructionCard_Type_E_InstructionCard_Type      Instruction_Enum                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ViewedAlready                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::InstructionCardViewed(E_InstructionCard_Type_E_InstructionCard_Type Instruction_Enum, bool* ViewedAlready)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.InstructionCardViewed");
		
		UFNAFGameInstance_C_InstructionCardViewed_Params params {};
		params.Instruction_Enum = Instruction_Enum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ViewedAlready != nullptr)
			*ViewedAlready = params.ViewedAlready;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.SetupNewGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::SetupNewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.SetupNewGame");
		
		UFNAFGameInstance_C_SetupNewGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.IsInGameplayTrailerMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               InGamePlayTrailerMode                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::IsInGameplayTrailerMode(bool* InGamePlayTrailerMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.IsInGameplayTrailerMode");
		
		UFNAFGameInstance_C_IsInGameplayTrailerMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InGamePlayTrailerMode != nullptr)
			*InGamePlayTrailerMode = params.InGamePlayTrailerMode;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.LoadCardsAndMessages
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::LoadCardsAndMessages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.LoadCardsAndMessages");
		
		UFNAFGameInstance_C_LoadCardsAndMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.HasSaveGame
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               Exists                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::HasSaveGame(bool* Exists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.HasSaveGame");
		
		UFNAFGameInstance_C_HasSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Exists != nullptr)
			*Exists = params.Exists;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_347016F346FF261F1C1C92ADBA6D6462
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::OnFailure_347016F346FF261F1C1C92ADBA6D6462()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_347016F346FF261F1C1C92ADBA6D6462");
		
		UFNAFGameInstance_C_OnFailure_347016F346FF261F1C1C92ADBA6D6462_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_347016F346FF261F1C1C92ADBA6D6462
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::OnSuccess_347016F346FF261F1C1C92ADBA6D6462()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_347016F346FF261F1C1C92ADBA6D6462");
		
		UFNAFGameInstance_C_OnSuccess_347016F346FF261F1C1C92ADBA6D6462_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_2D43474D4FADD4C1301AEA8AD50DFC3D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::OnFailure_2D43474D4FADD4C1301AEA8AD50DFC3D(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_2D43474D4FADD4C1301AEA8AD50DFC3D");
		
		UFNAFGameInstance_C_OnFailure_2D43474D4FADD4C1301AEA8AD50DFC3D_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_2D43474D4FADD4C1301AEA8AD50DFC3D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::OnSuccess_2D43474D4FADD4C1301AEA8AD50DFC3D(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_2D43474D4FADD4C1301AEA8AD50DFC3D");
		
		UFNAFGameInstance_C_OnSuccess_2D43474D4FADD4C1301AEA8AD50DFC3D_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_2007C00C4878CD4D536B6E81A8F9EBF6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::OnFailure_2007C00C4878CD4D536B6E81A8F9EBF6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_2007C00C4878CD4D536B6E81A8F9EBF6");
		
		UFNAFGameInstance_C_OnFailure_2007C00C4878CD4D536B6E81A8F9EBF6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_2007C00C4878CD4D536B6E81A8F9EBF6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::OnSuccess_2007C00C4878CD4D536B6E81A8F9EBF6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_2007C00C4878CD4D536B6E81A8F9EBF6");
		
		UFNAFGameInstance_C_OnSuccess_2007C00C4878CD4D536B6E81A8F9EBF6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_C4FD1B5F4537DF8B128F3D916037CA11
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::OnFailure_C4FD1B5F4537DF8B128F3D916037CA11(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_C4FD1B5F4537DF8B128F3D916037CA11");
		
		UFNAFGameInstance_C_OnFailure_C4FD1B5F4537DF8B128F3D916037CA11_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_C4FD1B5F4537DF8B128F3D916037CA11
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::OnSuccess_C4FD1B5F4537DF8B128F3D916037CA11(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_C4FD1B5F4537DF8B128F3D916037CA11");
		
		UFNAFGameInstance_C_OnSuccess_C4FD1B5F4537DF8B128F3D916037CA11_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_E76021A145A37BC709C55BBACDEFFBF4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::OnFailure_E76021A145A37BC709C55BBACDEFFBF4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_E76021A145A37BC709C55BBACDEFFBF4");
		
		UFNAFGameInstance_C_OnFailure_E76021A145A37BC709C55BBACDEFFBF4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_E76021A145A37BC709C55BBACDEFFBF4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::OnSuccess_E76021A145A37BC709C55BBACDEFFBF4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_E76021A145A37BC709C55BBACDEFFBF4");
		
		UFNAFGameInstance_C_OnSuccess_E76021A145A37BC709C55BBACDEFFBF4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_621EF3114DDD2DACD4AB62B9F98E6B49
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::OnFailure_621EF3114DDD2DACD4AB62B9F98E6B49(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnFailure_621EF3114DDD2DACD4AB62B9F98E6B49");
		
		UFNAFGameInstance_C_OnFailure_621EF3114DDD2DACD4AB62B9F98E6B49_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_621EF3114DDD2DACD4AB62B9F98E6B49
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::OnSuccess_621EF3114DDD2DACD4AB62B9F98E6B49(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.OnSuccess_621EF3114DDD2DACD4AB62B9F98E6B49");
		
		UFNAFGameInstance_C_OnSuccess_621EF3114DDD2DACD4AB62B9F98E6B49_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.LoadMiniGameLevel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::LoadMiniGameLevel(const class FName& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.LoadMiniGameLevel");
		
		UFNAFGameInstance_C_LoadMiniGameLevel_Params params {};
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Start New Game
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::Start_New_Game()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Start New Game");
		
		UFNAFGameInstance_C_Start_New_Game_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Load From Save
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::Load_From_Save()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Load From Save");
		
		UFNAFGameInstance_C_Load_From_Save_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Load Title
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::Load_Title()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Load Title");
		
		UFNAFGameInstance_C_Load_Title_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Retry Game
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::Retry_Game()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Retry Game");
		
		UFNAFGameInstance_C_Retry_Game_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Quit To Title
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::Quit_To_Title()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Quit To Title");
		
		UFNAFGameInstance_C_Quit_To_Title_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ReceiveInit
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::ReceiveInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ReceiveInit");
		
		UFNAFGameInstance_C_ReceiveInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Unpause Game
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::Unpause_Game()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Unpause Game");
		
		UFNAFGameInstance_C_Unpause_Game_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Load To Area
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Area                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::Load_To_Area(const class FName& Area)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Load To Area");
		
		UFNAFGameInstance_C_Load_To_Area_Params params {};
		params.Area = Area;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Set Trailer Mode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InGamePlayTrailerMode                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::Set_Trailer_Mode(bool InGamePlayTrailerMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Set Trailer Mode");
		
		UFNAFGameInstance_C_Set_Trailer_Mode_Params params {};
		params.InGamePlayTrailerMode = InGamePlayTrailerMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Finish Load To Area
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::Finish_Load_To_Area()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Finish Load To Area");
		
		UFNAFGameInstance_C_Finish_Load_To_Area_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Start Survival Mode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::Start_Survival_Mode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Start Survival Mode");
		
		UFNAFGameInstance_C_Start_Survival_Mode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.Load Level
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::Load_Level(const class FName& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.Load Level");
		
		UFNAFGameInstance_C_Load_Level_Params params {};
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.SetLoadSavedGameOnNextWorldStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InLoadSavedGameOnNextWorldLoad                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::SetLoadSavedGameOnNextWorldStart(bool InLoadSavedGameOnNextWorldLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.SetLoadSavedGameOnNextWorldStart");
		
		UFNAFGameInstance_C_SetLoadSavedGameOnNextWorldStart_Params params {};
		params.InLoadSavedGameOnNextWorldLoad = InLoadSavedGameOnNextWorldLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.CheckLoadSavedGameOnNextWorldLoad
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::CheckLoadSavedGameOnNextWorldLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.CheckLoadSavedGameOnNextWorldLoad");
		
		UFNAFGameInstance_C_CheckLoadSavedGameOnNextWorldLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ApplyQualitySettings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		FNAFVisualQualityLevel_EFNAFVisualQualityLevel     QualityLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		FNAFRayTraceQualityLevel_EFNAFRayTraceQualityLevel RayTraceLevel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SWGPlatformUtil_ESWGPlatform                       Platform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::ApplyQualitySettings(FNAFVisualQualityLevel_EFNAFVisualQualityLevel QualityLevel, FNAFRayTraceQualityLevel_EFNAFRayTraceQualityLevel RayTraceLevel, SWGPlatformUtil_ESWGPlatform Platform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ApplyQualitySettings");
		
		UFNAFGameInstance_C_ApplyQualitySettings_Params params {};
		params.QualityLevel = QualityLevel;
		params.RayTraceLevel = RayTraceLevel;
		params.Platform = Platform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.RunHardwareBenchmark
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::RunHardwareBenchmark(bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.RunHardwareBenchmark");
		
		UFNAFGameInstance_C_RunHardwareBenchmark_Params params {};
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.CheckForTrophyTimeAchievement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::CheckForTrophyTimeAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.CheckForTrophyTimeAchievement");
		
		UFNAFGameInstance_C_CheckForTrophyTimeAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.EndGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::EndGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.EndGame");
		
		UFNAFGameInstance_C_EndGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ChangeHourlyActivity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            HourIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::ChangeHourlyActivity(int32_t HourIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ChangeHourlyActivity");
		
		UFNAFGameInstance_C_ChangeHourlyActivity_Params params {};
		params.HourIndex = HourIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.CheckForHideAndSeekMasterAchievement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::CheckForHideAndSeekMasterAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.CheckForHideAndSeekMasterAchievement");
		
		UFNAFGameInstance_C_CheckForHideAndSeekMasterAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.SetCurrentKeyMappings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class FName, struct FKeyBinding_Struct>       CurrentMappings                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFNAFGameInstance_C::SetCurrentKeyMappings(TMap<class FName, struct FKeyBinding_Struct> CurrentMappings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.SetCurrentKeyMappings");
		
		UFNAFGameInstance_C_SetCurrentKeyMappings_Params params {};
		params.CurrentMappings = CurrentMappings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.UpdateSavedMappings
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::UpdateSavedMappings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.UpdateSavedMappings");
		
		UFNAFGameInstance_C_UpdateSavedMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.CheckForLostAndFoundAchievement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFGameInstance_C::CheckForLostAndFoundAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.CheckForLostAndFoundAchievement");
		
		UFNAFGameInstance_C_CheckForLostAndFoundAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.ExecuteUbergraph_FNAFGameInstance
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFNAFGameInstance_C::ExecuteUbergraph_FNAFGameInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.ExecuteUbergraph_FNAFGameInstance");
		
		UFNAFGameInstance_C_ExecuteUbergraph_FNAFGameInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function FNAFGameInstance.FNAFGameInstance_C.TrailerModeChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TrailerEnabled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFNAFGameInstance_C::TrailerModeChanged__DelegateSignature(bool TrailerEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FNAFGameInstance.FNAFGameInstance_C.TrailerModeChanged__DelegateSignature");
		
		UFNAFGameInstance_C_TrailerModeChanged__DelegateSignature_Params params {};
		params.TrailerEnabled = TrailerEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFGameInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFGameInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FNAFGameInstance.FNAFGameInstance_C");
		return ptr;
	}

}


