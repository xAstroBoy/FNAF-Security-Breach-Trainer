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
	 * 		Name   -> Function AISeekerController.AISeekerController_C.GetHearingStimulus
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIStimulus                                 Output                                                     (Parm, OutParm, NoDestructor)
	 */
	void AAISeekerController_C::GetHearingStimulus(class AActor* Actor, struct FAIStimulus* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.GetHearingStimulus");
		
		AAISeekerController_C_GetHearingStimulus_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.HandleNoiseMaker
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAIStimulus                                 Stimulus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class AActor*                                      NoisyActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAISeekerController_C::HandleNoiseMaker(const struct FAIStimulus& Stimulus, class AActor* NoisyActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.HandleNoiseMaker");
		
		AAISeekerController_C_HandleNoiseMaker_Params params {};
		params.Stimulus = Stimulus;
		params.NoisyActor = NoisyActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.HandleHearing
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAIStimulus                                 AIStimulus                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class AActor*                                      ActorProducingSound                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAISeekerController_C::HandleHearing(const struct FAIStimulus& AIStimulus, class AActor* ActorProducingSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.HandleHearing");
		
		AAISeekerController_C_HandleHearing_Params params {};
		params.AIStimulus = AIStimulus;
		params.ActorProducingSound = ActorProducingSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.HandleSight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      UpdatedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAISeekerController_C::HandleSight(class AActor* UpdatedActor, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.HandleSight");
		
		AAISeekerController_C_HandleSight_Params params {};
		params.UpdatedActor = UpdatedActor;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.OnCheckpointSave
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAISeekerController_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.OnCheckpointSave");
		
		AAISeekerController_C_OnCheckpointSave_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.OnGameDataLoaded
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAISeekerController_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.OnGameDataLoaded");
		
		AAISeekerController_C_OnGameDataLoaded_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.OnStoreGameData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAISeekerController_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.OnStoreGameData");
		
		AAISeekerController_C_OnStoreGameData_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.PostGameLoad
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAISeekerController_C::PostGameLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.PostGameLoad");
		
		AAISeekerController_C_PostGameLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.PostSaveGame
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAISeekerController_C::PostSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.PostSaveGame");
		
		AAISeekerController_C_PostSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AAISeekerController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.ReceiveBeginPlay");
		
		AAISeekerController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAISeekerController_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.ReceiveTick");
		
		AAISeekerController_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              UpdatedActors                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void AAISeekerController_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature(TArray<class AActor*> UpdatedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature");
		
		AAISeekerController_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature_Params params {};
		params.UpdatedActors = UpdatedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.OnRoomChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomAreaBase*                               Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAISeekerController_C::OnRoomChanged(class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.OnRoomChanged");
		
		AAISeekerController_C_OnRoomChanged_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.On Camera Alert
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASecurityCamera*                             SecurityCamera                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAISeekerController_C::On_Camera_Alert(class ASecurityCamera* SecurityCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.On Camera Alert");
		
		AAISeekerController_C_On_Camera_Alert_Params params {};
		params.SecurityCamera = SecurityCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.Jump Scare
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAISeekerController_C::Jump_Scare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.Jump Scare");
		
		AAISeekerController_C_Jump_Scare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.OnCheckpointLoad
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAISeekerController_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.OnCheckpointLoad");
		
		AAISeekerController_C_OnCheckpointLoad_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.On Sound Heard
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     SoundLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAISeekerController_C::On_Sound_Heard(const struct FVector& SoundLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.On Sound Heard");
		
		AAISeekerController_C_On_Sound_Heard_Params params {};
		params.SoundLocation = SoundLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.Reset AI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAISeekerController_C::Reset_AI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.Reset AI");
		
		AAISeekerController_C_Reset_AI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.HandleOnDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAISeekerController_C::HandleOnDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.HandleOnDestroyed");
		
		AAISeekerController_C_HandleOnDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AISeekerController.AISeekerController_C.ExecuteUbergraph_AISeekerController
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAISeekerController_C::ExecuteUbergraph_AISeekerController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AISeekerController.AISeekerController_C.ExecuteUbergraph_AISeekerController");
		
		AAISeekerController_C_ExecuteUbergraph_AISeekerController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAISeekerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAISeekerController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AISeekerController.AISeekerController_C");
		return ptr;
	}

}


