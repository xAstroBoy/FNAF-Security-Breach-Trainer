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
	 * 		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnCheckpointSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonmanSequenceActor_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnCheckpointSave");
		
		AMoonmanSequenceActor_C_OnCheckpointSave_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnGameDataLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonmanSequenceActor_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnGameDataLoaded");
		
		AMoonmanSequenceActor_C_OnGameDataLoaded_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnStoreGameData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonmanSequenceActor_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnStoreGameData");
		
		AMoonmanSequenceActor_C_OnStoreGameData_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.PostSaveGame
	 * 		Flags  -> ()
	 */
	void AMoonmanSequenceActor_C::PostSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.PostSaveGame");
		
		AMoonmanSequenceActor_C_PostSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.DLCRabbitDisplayAlertText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Display                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoonmanSequenceActor_C::DLCRabbitDisplayAlertText(bool Display)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.DLCRabbitDisplayAlertText");
		
		AMoonmanSequenceActor_C_DLCRabbitDisplayAlertText_Params params {};
		params.Display = Display;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMoonmanSequenceActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.ReceiveBeginPlay");
		
		AMoonmanSequenceActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonmanSequenceActor_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.ReceiveTick");
		
		AMoonmanSequenceActor_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.EyeBlinkSetup
	 * 		Flags  -> ()
	 */
	void AMoonmanSequenceActor_C::EyeBlinkSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.EyeBlinkSetup");
		
		AMoonmanSequenceActor_C_EyeBlinkSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnDestroySelf
	 * 		Flags  -> ()
	 */
	void AMoonmanSequenceActor_C::OnDestroySelf()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnDestroySelf");
		
		AMoonmanSequenceActor_C_OnDestroySelf_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnDeathSequence
	 * 		Flags  -> ()
	 */
	void AMoonmanSequenceActor_C::OnDeathSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnDeathSequence");
		
		AMoonmanSequenceActor_C_OnDeathSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnDebugVis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoonmanSequenceActor_C::OnDebugVis(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnDebugVis");
		
		AMoonmanSequenceActor_C_OnDebugVis_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.PostGameLoad
	 * 		Flags  -> ()
	 */
	void AMoonmanSequenceActor_C::PostGameLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.PostGameLoad");
		
		AMoonmanSequenceActor_C_PostGameLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnCheckpointLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonmanSequenceActor_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.OnCheckpointLoad");
		
		AMoonmanSequenceActor_C_OnCheckpointLoad_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.EyesShut1
	 * 		Flags  -> ()
	 */
	void AMoonmanSequenceActor_C::EyesShut1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.EyesShut1");
		
		AMoonmanSequenceActor_C_EyesShut1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MoonmanSequenceActor.MoonmanSequenceActor_C.ExecuteUbergraph_MoonmanSequenceActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMoonmanSequenceActor_C::ExecuteUbergraph_MoonmanSequenceActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoonmanSequenceActor.MoonmanSequenceActor_C.ExecuteUbergraph_MoonmanSequenceActor");
		
		AMoonmanSequenceActor_C_ExecuteUbergraph_MoonmanSequenceActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMoonmanSequenceActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMoonmanSequenceActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MoonmanSequenceActor.MoonmanSequenceActor_C");
		return ptr;
	}

}


