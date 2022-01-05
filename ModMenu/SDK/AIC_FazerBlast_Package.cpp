/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "AIC_FazerBlast_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.TickDisable
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AAIC_FazerBlast_C::TickDisable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.TickDisable");
		
		AAIC_FazerBlast_C_TickDisable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.NavHelper_Clear
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAIC_FazerBlast_C::NavHelper_Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.NavHelper_Clear");
		
		AAIC_FazerBlast_C_NavHelper_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.NavHelper_Update
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         I_OverlappedCompnent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               I_IsDestination                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AA_FazerBlast_NavHelper_Spline_C*            I_NavHelper                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_FazerBlast_C::NavHelper_Update(class UPrimitiveComponent* I_OverlappedCompnent, bool I_IsDestination, class AA_FazerBlast_NavHelper_Spline_C* I_NavHelper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.NavHelper_Update");
		
		AAIC_FazerBlast_C_NavHelper_Update_Params params {};
		params.I_OverlappedCompnent = I_OverlappedCompnent;
		params.I_IsDestination = I_IsDestination;
		params.I_NavHelper = I_NavHelper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.NavHelper_GetClosestBox
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AA_FazerBlast_NavHelper_Spline_C*            I_NavHelper                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               End                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Bot_Or_Player                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBoxComponent*                               ClosestBox                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ShortestDistance                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_FazerBlast_C::NavHelper_GetClosestBox(class AA_FazerBlast_NavHelper_Spline_C* I_NavHelper, bool End, bool Bot_Or_Player, class UBoxComponent** ClosestBox, float* ShortestDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.NavHelper_GetClosestBox");
		
		AAIC_FazerBlast_C_NavHelper_GetClosestBox_Params params {};
		params.I_NavHelper = I_NavHelper;
		params.End = End;
		params.Bot_Or_Player = Bot_Or_Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClosestBox != nullptr)
			*ClosestBox = params.ClosestBox;
		if (ShortestDistance != nullptr)
			*ShortestDistance = params.ShortestDistance;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.NavHelper_GetDestination
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AA_FazerBlast_NavHelper_Spline_C*            I_NavHelper                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBoxComponent*                               BoxDestination                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_FazerBlast_C::NavHelper_GetDestination(class AA_FazerBlast_NavHelper_Spline_C* I_NavHelper, class UBoxComponent** BoxDestination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.NavHelper_GetDestination");
		
		AAIC_FazerBlast_C_NavHelper_GetDestination_Params params {};
		params.I_NavHelper = I_NavHelper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BoxDestination != nullptr)
			*BoxDestination = params.BoxDestination;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.NavHelper_CheckForOverlaps
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AAIC_FazerBlast_C::NavHelper_CheckForOverlaps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.NavHelper_CheckForOverlaps");
		
		AAIC_FazerBlast_C_NavHelper_CheckForOverlaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.GetFleeLocationDirection
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FleeRadius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FleeHeight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocationWeight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TargetWeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Debug                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DebugTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ReturnDirection                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_FazerBlast_C::GetFleeLocationDirection(float FleeRadius, float FleeHeight, float LocationWeight, float TargetWeight, bool Debug, float DebugTime, struct FVector* ReturnDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.GetFleeLocationDirection");
		
		AAIC_FazerBlast_C_GetFleeLocationDirection_Params params {};
		params.FleeRadius = FleeRadius;
		params.FleeHeight = FleeHeight;
		params.LocationWeight = LocationWeight;
		params.TargetWeight = TargetWeight;
		params.Debug = Debug;
		params.DebugTime = DebugTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnDirection != nullptr)
			*ReturnDirection = params.ReturnDirection;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.UpdateFleeArrayTargets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     AddFleeLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                ArrayLimit                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_FazerBlast_C::UpdateFleeArrayTargets(bool Reset, const struct FVector& AddFleeLocation, int ArrayLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.UpdateFleeArrayTargets");
		
		AAIC_FazerBlast_C_UpdateFleeArrayTargets_Params params {};
		params.Reset = Reset;
		params.AddFleeLocation = AddFleeLocation;
		params.ArrayLimit = ArrayLimit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.UpdateFleeArrayLocations
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     AddFleeLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                ArrayLimit                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_FazerBlast_C::UpdateFleeArrayLocations(bool Reset, const struct FVector& AddFleeLocation, int ArrayLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.UpdateFleeArrayLocations");
		
		AAIC_FazerBlast_C_UpdateFleeArrayLocations_Params params {};
		params.Reset = Reset;
		params.AddFleeLocation = AddFleeLocation;
		params.ArrayLimit = ArrayLimit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.UpdateFleeArray
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     AddFleeLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                ArrayLimit                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FVector>                             TargetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               Debug                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAIC_FazerBlast_C::UpdateFleeArray(bool Reset, const struct FVector& AddFleeLocation, int ArrayLimit, TArray<struct FVector> TargetArray, bool Debug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.UpdateFleeArray");
		
		AAIC_FazerBlast_C_UpdateFleeArray_Params params {};
		params.Reset = Reset;
		params.AddFleeLocation = AddFleeLocation;
		params.ArrayLimit = ArrayLimit;
		params.TargetArray = TargetArray;
		params.Debug = Debug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.TickFlee
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAIC_FazerBlast_C::TickFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.TickFlee");
		
		AAIC_FazerBlast_C_TickFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.BeginFlee
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAIC_FazerBlast_C::BeginFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.BeginFlee");
		
		AAIC_FazerBlast_C_BeginFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.ProcessAISense
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIStimulus                                 Stimulus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void AAIC_FazerBlast_C::ProcessAISense(class AActor* Actor, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.ProcessAISense");
		
		AAIC_FazerBlast_C_ProcessAISense_Params params {};
		params.Actor = Actor;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.CompleteSenses
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FAIStimulus>                         Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void AAIC_FazerBlast_C::CompleteSenses(TArray<struct FAIStimulus>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.CompleteSenses");
		
		AAIC_FazerBlast_C_CompleteSenses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIStimulus                                 Stimulus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void AAIC_FazerBlast_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature");
		
		AAIC_FazerBlast_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.GameEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAIC_FazerBlast_C::GameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.GameEnd");
		
		AAIC_FazerBlast_C_GameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.GameStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAIC_FazerBlast_C::GameStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.GameStart");
		
		AAIC_FazerBlast_C_GameStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_PerceptionUpdatedDelegate__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              UpdatedActors                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void AAIC_FazerBlast_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_PerceptionUpdatedDelegate__DelegateSignature(TArray<class AActor*> UpdatedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_PerceptionUpdatedDelegate__DelegateSignature");
		
		AAIC_FazerBlast_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_PerceptionUpdatedDelegate__DelegateSignature_Params params {};
		params.UpdatedActors = UpdatedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_FazerBlast_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.ReceiveTick");
		
		AAIC_FazerBlast_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AAIC_FazerBlast_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.ReceiveBeginPlay");
		
		AAIC_FazerBlast_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.PlayerHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AAIC_FazerBlast_C::PlayerHit(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.PlayerHit");
		
		AAIC_FazerBlast_C_PlayerHit_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.GameExit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAIC_FazerBlast_C::GameExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.GameExit");
		
		AAIC_FazerBlast_C_GameExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.ForceKill
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Animate_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAIC_FazerBlast_C::ForceKill(bool Animate_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.ForceKill");
		
		AAIC_FazerBlast_C_ForceKill_Params params {};
		params.Animate_ = Animate_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.LaserHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AEQ_LaserGun_C*                              Gun                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AAIC_FazerBlast_C::LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.LaserHit");
		
		AAIC_FazerBlast_C_LaserHit_Params params {};
		params.Gun = Gun;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIC_FazerBlast.AIC_FazerBlast_C.ExecuteUbergraph_AIC_FazerBlast
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_FazerBlast_C::ExecuteUbergraph_AIC_FazerBlast(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIC_FazerBlast.AIC_FazerBlast_C.ExecuteUbergraph_AIC_FazerBlast");
		
		AAIC_FazerBlast_C_ExecuteUbergraph_AIC_FazerBlast_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAIC_FazerBlast_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIC_FazerBlast_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIC_FazerBlast.AIC_FazerBlast_C");
		return ptr;
	}

}


