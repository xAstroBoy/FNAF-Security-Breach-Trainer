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
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetAllScreensToInstructionCard
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_InstructionCard_Type_E_InstructionCard_Type      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASurvivalStartupSequence_C::SetAllScreensToInstructionCard(E_InstructionCard_Type_E_InstructionCard_Type Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetAllScreensToInstructionCard");
		
		ASurvivalStartupSequence_C_SetAllScreensToInstructionCard_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.OnSecondAudioFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		AkAudio_EAkCallbackType                            CallbackType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkCallbackInfo*                             CallbackInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASurvivalStartupSequence_C::OnSecondAudioFinished(AkAudio_EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.OnSecondAudioFinished");
		
		ASurvivalStartupSequence_C_OnSecondAudioFinished_Params params {};
		params.CallbackType = CallbackType;
		params.CallbackInfo = CallbackInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetScreenToInstructionCard
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Screen_Index                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_InstructionCard_Type_E_InstructionCard_Type      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASurvivalStartupSequence_C::SetScreenToInstructionCard(int32_t Screen_Index, E_InstructionCard_Type_E_InstructionCard_Type Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetScreenToInstructionCard");
		
		ASurvivalStartupSequence_C_SetScreenToInstructionCard_Params params {};
		params.Screen_Index = Screen_Index;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetAllScreensToWidget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASurvivalStartupSequence_C::SetAllScreensToWidget(class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetAllScreensToWidget");
		
		ASurvivalStartupSequence_C_SetAllScreensToWidget_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetScreenToWidget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Screen_Index                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASurvivalStartupSequence_C::SetScreenToWidget(int32_t Screen_Index, class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetScreenToWidget");
		
		ASurvivalStartupSequence_C_SetScreenToWidget_Params params {};
		params.Screen_Index = Screen_Index;
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetAllScreensToStatic
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASurvivalStartupSequence_C::SetAllScreensToStatic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetAllScreensToStatic");
		
		ASurvivalStartupSequence_C_SetAllScreensToStatic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetAllScreensToTexture
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TextureIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASurvivalStartupSequence_C::SetAllScreensToTexture(int32_t TextureIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetAllScreensToTexture");
		
		ASurvivalStartupSequence_C_SetAllScreensToTexture_Params params {};
		params.TextureIndex = TextureIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetScreenToTexture
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Screen_Index                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Card_Index                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_InstructionCard_Type_E_InstructionCard_Type      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASurvivalStartupSequence_C::SetScreenToTexture(int32_t Screen_Index, int32_t Card_Index, E_InstructionCard_Type_E_InstructionCard_Type Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetScreenToTexture");
		
		ASurvivalStartupSequence_C_SetScreenToTexture_Params params {};
		params.Screen_Index = Screen_Index;
		params.Card_Index = Card_Index;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.GetScreenTexture
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UTexture* ASurvivalStartupSequence_C::GetScreenTexture(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.GetScreenTexture");
		
		ASurvivalStartupSequence_C_GetScreenTexture_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetScreenToStatic
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ScreenIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASurvivalStartupSequence_C::SetScreenToStatic(int32_t ScreenIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.SetScreenToStatic");
		
		ASurvivalStartupSequence_C_SetScreenToStatic_Params params {};
		params.ScreenIndex = ScreenIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.Setup2
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		AkAudio_EAkCallbackType                            CallbackType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkCallbackInfo*                             CallbackInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASurvivalStartupSequence_C::Setup2(AkAudio_EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.Setup2");
		
		ASurvivalStartupSequence_C_Setup2_Params params {};
		params.CallbackType = CallbackType;
		params.CallbackInfo = CallbackInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.FinishInstructions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASurvivalStartupSequence_C::FinishInstructions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.FinishInstructions");
		
		ASurvivalStartupSequence_C_FinishInstructions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Skip                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASurvivalStartupSequence_C::Setup(bool Skip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.Setup");
		
		ASurvivalStartupSequence_C_Setup_Params params {};
		params.Skip = Skip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.SkipIntro
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASurvivalStartupSequence_C::SkipIntro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.SkipIntro");
		
		ASurvivalStartupSequence_C_SkipIntro_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ASurvivalStartupSequence_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1");
		
		ASurvivalStartupSequence_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.OnCheckpointLoad
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASurvivalStartupSequence_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.OnCheckpointLoad");
		
		ASurvivalStartupSequence_C_OnCheckpointLoad_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.OnCheckpointSave
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASurvivalStartupSequence_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.OnCheckpointSave");
		
		ASurvivalStartupSequence_C_OnCheckpointSave_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.OnGameDataLoaded
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASurvivalStartupSequence_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.OnGameDataLoaded");
		
		ASurvivalStartupSequence_C_OnGameDataLoaded_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.OnStoreGameData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASurvivalStartupSequence_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.OnStoreGameData");
		
		ASurvivalStartupSequence_C_OnStoreGameData_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.PostGameLoad
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASurvivalStartupSequence_C::PostGameLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.PostGameLoad");
		
		ASurvivalStartupSequence_C_PostGameLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.PostSaveGame
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASurvivalStartupSequence_C::PostSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.PostSaveGame");
		
		ASurvivalStartupSequence_C_PostSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.BndEvt__PlayerCompleteTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ASurvivalStartupSequence_C::BndEvt__PlayerCompleteTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.BndEvt__PlayerCompleteTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ASurvivalStartupSequence_C_BndEvt__PlayerCompleteTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.Finish Instructions Part 1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASurvivalStartupSequence_C::Finish_Instructions_Part_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.Finish Instructions Part 1");
		
		ASurvivalStartupSequence_C_Finish_Instructions_Part_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASurvivalStartupSequence_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.ReceiveBeginPlay");
		
		ASurvivalStartupSequence_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.DelaySpawnChica
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASurvivalStartupSequence_C::DelaySpawnChica()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.DelaySpawnChica");
		
		ASurvivalStartupSequence_C_DelaySpawnChica_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.LockAndWait
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASurvivalStartupSequence_C::LockAndWait()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.LockAndWait");
		
		ASurvivalStartupSequence_C_LockAndWait_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.Run Dialog Instruction Cards
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASurvivalStartupSequence_C::Run_Dialog_Instruction_Cards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.Run Dialog Instruction Cards");
		
		ASurvivalStartupSequence_C_Run_Dialog_Instruction_Cards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.SpawnChica
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASurvivalStartupSequence_C::SpawnChica()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.SpawnChica");
		
		ASurvivalStartupSequence_C_SpawnChica_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.BndEvt__SpawnChicaTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ASurvivalStartupSequence_C::BndEvt__SpawnChicaTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.BndEvt__SpawnChicaTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
		
		ASurvivalStartupSequence_C_BndEvt__SpawnChicaTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASurvivalStartupSequence_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.ReceiveTick");
		
		ASurvivalStartupSequence_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SurvivalStartupSequence.SurvivalStartupSequence_C.ExecuteUbergraph_SurvivalStartupSequence
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASurvivalStartupSequence_C::ExecuteUbergraph_SurvivalStartupSequence(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivalStartupSequence.SurvivalStartupSequence_C.ExecuteUbergraph_SurvivalStartupSequence");
		
		ASurvivalStartupSequence_C_ExecuteUbergraph_SurvivalStartupSequence_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASurvivalStartupSequence_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASurvivalStartupSequence_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SurvivalStartupSequence.SurvivalStartupSequence_C");
		return ptr;
	}

}


