/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "RIG_DJ_Music_Man_ABP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimGraph");
		
		URIG_DJ_Music_Man_ABP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CamShakeScale
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     SocketLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     PlayerLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_DJ_Music_Man_ABP_C::CamShakeScale(const struct FVector& SocketLocation, const struct FVector& PlayerLocation, float* Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CamShakeScale");
		
		URIG_DJ_Music_Man_ABP_C_CamShakeScale_Params params {};
		params.SocketLocation = SocketLocation;
		params.PlayerLocation = PlayerLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Scale != nullptr)
			*Scale = params.Scale;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.UpdateLeapInfo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ActorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Destination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_DJ_Music_Man_ABP_C::UpdateLeapInfo(const struct FVector& ActorLocation, const struct FVector& Destination, float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.UpdateLeapInfo");
		
		URIG_DJ_Music_Man_ABP_C_UpdateLeapInfo_Params params {};
		params.ActorLocation = ActorLocation;
		params.Destination = Destination;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_E4EE56FD477D41A6FD9038823314F52B
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_E4EE56FD477D41A6FD9038823314F52B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_E4EE56FD477D41A6FD9038823314F52B");
		
		URIG_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_E4EE56FD477D41A6FD9038823314F52B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.LeapLoopEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::LeapLoopEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.LeapLoopEvent");
		
		URIG_DJ_Music_Man_ABP_C_LeapLoopEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_BA34BC744693B5283F9F2087F21B025F
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_BA34BC744693B5283F9F2087F21B025F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_BA34BC744693B5283F9F2087F21B025F");
		
		URIG_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_BA34BC744693B5283F9F2087F21B025F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EndoBowlingCrawlEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::EndoBowlingCrawlEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EndoBowlingCrawlEvent");
		
		URIG_DJ_Music_Man_ABP_C_EndoBowlingCrawlEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EndoSpawnInBowlingEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::EndoSpawnInBowlingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EndoSpawnInBowlingEvent");
		
		URIG_DJ_Music_Man_ABP_C_EndoSpawnInBowlingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.FreddyEndIdle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::FreddyEndIdle(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.FreddyEndIdle");
		
		URIG_DJ_Music_Man_ABP_C_FreddyEndIdle_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_DA3CEDB6474FADAC83D740A555E914BA
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_DA3CEDB6474FADAC83D740A555E914BA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_DA3CEDB6474FADAC83D740A555E914BA");
		
		URIG_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_DA3CEDB6474FADAC83D740A555E914BA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanDieEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::CanDieEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanDieEvent");
		
		URIG_DJ_Music_Man_ABP_C_CanDieEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanHackEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::CanHackEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanHackEvent");
		
		URIG_DJ_Music_Man_ABP_C_CanHackEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.VoAnimEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Event                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_DJ_Music_Man_ABP_C::VoAnimEvent(class UAkAudioEvent* AK_Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.VoAnimEvent");
		
		URIG_DJ_Music_Man_ABP_C_VoAnimEvent_Params params {};
		params.AK_Event = AK_Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.RoxyCrying
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::RoxyCrying(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.RoxyCrying");
		
		URIG_DJ_Music_Man_ABP_C_RoxyCrying_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.FreddyCorrupted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::FreddyCorrupted(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.FreddyCorrupted");
		
		URIG_DJ_Music_Man_ABP_C_FreddyCorrupted_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.ForceAnimOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::ForceAnimOverride(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.ForceAnimOverride");
		
		URIG_DJ_Music_Man_ABP_C_ForceAnimOverride_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EnterFreddyOverrideEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::EnterFreddyOverrideEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EnterFreddyOverrideEvent");
		
		URIG_DJ_Music_Man_ABP_C_EnterFreddyOverrideEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanLeapEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::CanLeapEvent(bool Off)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanLeapEvent");
		
		URIG_DJ_Music_Man_ABP_C_CanLeapEvent_Params params {};
		params.Off = Off;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanLieDownEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::CanLieDownEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanLieDownEvent");
		
		URIG_DJ_Music_Man_ABP_C_CanLieDownEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.IsSickEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::IsSickEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.IsSickEvent");
		
		URIG_DJ_Music_Man_ABP_C_IsSickEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanWaveEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanWave                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::CanWaveEvent(bool CanWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanWaveEvent");
		
		URIG_DJ_Music_Man_ABP_C_CanWaveEvent_Params params {};
		params.CanWave = CanWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.PoundDoorEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PoundDoor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::PoundDoorEvent(bool PoundDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.PoundDoorEvent");
		
		URIG_DJ_Music_Man_ABP_C_PoundDoorEvent_Params params {};
		params.PoundDoor = PoundDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.StopScan
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::StopScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.StopScan");
		
		URIG_DJ_Music_Man_ABP_C_StopScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.LandEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::LandEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.LandEvent");
		
		URIG_DJ_Music_Man_ABP_C_LandEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.JumpEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanJump                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::JumpEvent(bool CanJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.JumpEvent");
		
		URIG_DJ_Music_Man_ABP_C_JumpEvent_Params params {};
		params.CanJump = CanJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.ForceScanStates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OverrideScan                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScan                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanL                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanScanR                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::ForceScanStates(bool OverrideScan, bool CanScan, bool CanScanL, bool CanScanR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.ForceScanStates");
		
		URIG_DJ_Music_Man_ABP_C_ForceScanStates_Params params {};
		params.OverrideScan = OverrideScan;
		params.CanScan = CanScan;
		params.CanScanL = CanScanL;
		params.CanScanR = CanScanR;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Breakthrough
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::Breakthrough()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Breakthrough");
		
		URIG_DJ_Music_Man_ABP_C_Breakthrough_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.OnAnimInstanceSwap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::OnAnimInstanceSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.OnAnimInstanceSwap");
		
		URIG_DJ_Music_Man_ABP_C_OnAnimInstanceSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.RummagingDoneEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::RummagingDoneEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.RummagingDoneEvent");
		
		URIG_DJ_Music_Man_ABP_C_RummagingDoneEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.IsNotFirstPersonEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::IsNotFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.IsNotFirstPersonEvent");
		
		URIG_DJ_Music_Man_ABP_C_IsNotFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.IsFirstPersonEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::IsFirstPersonEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.IsFirstPersonEvent");
		
		URIG_DJ_Music_Man_ABP_C_IsFirstPersonEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanRummageEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::CanRummageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanRummageEvent");
		
		URIG_DJ_Music_Man_ABP_C_CanRummageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Stun Event
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Stunned                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::Stun_Event(bool Is_Stunned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Stun Event");
		
		URIG_DJ_Music_Man_ABP_C_Stun_Event_Params params {};
		params.Is_Stunned = Is_Stunned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CutSceneSpineBlender
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Off                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ULevelSequencePlayer*                        Sequence                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_DJ_Music_Man_ABP_C::CutSceneSpineBlender(bool Off, class ULevelSequencePlayer* Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CutSceneSpineBlender");
		
		URIG_DJ_Music_Man_ABP_C_CutSceneSpineBlender_Params params {};
		params.Off = Off;
		params.Sequence = Sequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanRunEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanRun                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::CanRunEvent(bool CanRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanRunEvent");
		
		URIG_DJ_Music_Man_ABP_C_CanRunEvent_Params params {};
		params.CanRun = CanRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.StartScan
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::StartScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.StartScan");
		
		URIG_DJ_Music_Man_ABP_C_StartScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.SetHeadAimTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_DJ_Music_Man_ABP_C::SetHeadAimTarget(const struct FVector& AimLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.SetHeadAimTarget");
		
		URIG_DJ_Music_Man_ABP_C_SetHeadAimTarget_Params params {};
		params.AimLocation = AimLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.OpenDone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::OpenDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.OpenDone");
		
		URIG_DJ_Music_Man_ABP_C_OpenDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Open
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Open");
		
		URIG_DJ_Music_Man_ABP_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.SearchingDone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::SearchingDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.SearchingDone");
		
		URIG_DJ_Music_Man_ABP_C_SearchingDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Searching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		fnaf9_EHideObjectType                              Hide_Type                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_DJ_Music_Man_ABP_C::Searching(fnaf9_EHideObjectType Hide_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Searching");
		
		URIG_DJ_Music_Man_ABP_C_Searching_Params params {};
		params.Hide_Type = Hide_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_LayeredBoneBlend_AE9AC9D746CB3B7B4358ECA182D07D77
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_LayeredBoneBlend_AE9AC9D746CB3B7B4358ECA182D07D77()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_LayeredBoneBlend_AE9AC9D746CB3B7B4358ECA182D07D77");
		
		URIG_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_LayeredBoneBlend_AE9AC9D746CB3B7B4358ECA182D07D77_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_912542354E41E38FF0BDDBA540255CDB
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_912542354E41E38FF0BDDBA540255CDB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_912542354E41E38FF0BDDBA540255CDB");
		
		URIG_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_912542354E41E38FF0BDDBA540255CDB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.TurnEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TurnDegrees                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_DJ_Music_Man_ABP_C::TurnEvent(float TurnDegrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.TurnEvent");
		
		URIG_DJ_Music_Man_ABP_C_TurnEvent_Params params {};
		params.TurnDegrees = TurnDegrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.HeadAimEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OnOff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::HeadAimEvent(bool OnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.HeadAimEvent");
		
		URIG_DJ_Music_Man_ABP_C_HeadAimEvent_Params params {};
		params.OnOff = OnOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_64B47A9440776F2579137CA803CB45B7
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_64B47A9440776F2579137CA803CB45B7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_64B47A9440776F2579137CA803CB45B7");
		
		URIG_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_64B47A9440776F2579137CA803CB45B7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_ModifyBone_2A5E612B44172A1CB0AE189CC3489105
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_ModifyBone_2A5E612B44172A1CB0AE189CC3489105()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_ModifyBone_2A5E612B44172A1CB0AE189CC3489105");
		
		URIG_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_ModifyBone_2A5E612B44172A1CB0AE189CC3489105_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_DJ_Music_Man_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.BlueprintUpdateAnimation");
		
		URIG_DJ_Music_Man_ABP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Set Door
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LeftDoor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::Set_Door(bool LeftDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Set Door");
		
		URIG_DJ_Music_Man_ABP_C_Set_Door_Params params {};
		params.LeftDoor = LeftDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Set Reach
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanReach                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::Set_Reach(bool CanReach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Set Reach");
		
		URIG_DJ_Music_Man_ABP_C_Set_Reach_Params params {};
		params.CanReach = CanReach;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_L1_Contact
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::AnimNotify_L1_Contact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_L1_Contact");
		
		URIG_DJ_Music_Man_ABP_C_AnimNotify_L1_Contact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_L2_Contact
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::AnimNotify_L2_Contact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_L2_Contact");
		
		URIG_DJ_Music_Man_ABP_C_AnimNotify_L2_Contact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_L3_Contact
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::AnimNotify_L3_Contact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_L3_Contact");
		
		URIG_DJ_Music_Man_ABP_C_AnimNotify_L3_Contact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_R1_Contact
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::AnimNotify_R1_Contact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_R1_Contact");
		
		URIG_DJ_Music_Man_ABP_C_AnimNotify_R1_Contact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_R2_Contact
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::AnimNotify_R2_Contact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_R2_Contact");
		
		URIG_DJ_Music_Man_ABP_C_AnimNotify_R2_Contact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_R3_Contact
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::AnimNotify_R3_Contact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_R3_Contact");
		
		URIG_DJ_Music_Man_ABP_C_AnimNotify_R3_Contact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.TubeCanLeave
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanLeave                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::TubeCanLeave(bool CanLeave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.TubeCanLeave");
		
		URIG_DJ_Music_Man_ABP_C_TubeCanLeave_Params params {};
		params.CanLeave = CanLeave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.TubePhase2
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isPhase2                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::TubePhase2(bool isPhase2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.TubePhase2");
		
		URIG_DJ_Music_Man_ABP_C_TubePhase2_Params params {};
		params.isPhase2 = isPhase2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Jumpscare
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Jumpscare                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::Jumpscare(bool Jumpscare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Jumpscare");
		
		URIG_DJ_Music_Man_ABP_C_Jumpscare_Params params {};
		params.Jumpscare = Jumpscare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.TubeCanGrab
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanGrab                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::TubeCanGrab(bool CanGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.TubeCanGrab");
		
		URIG_DJ_Music_Man_ABP_C_TubeCanGrab_Params params {};
		params.CanGrab = CanGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CutsceneGrateEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ULevelSequencePlayer*                        SequencePlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_DJ_Music_Man_ABP_C::CutsceneGrateEvent(class ULevelSequencePlayer* SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CutsceneGrateEvent");
		
		URIG_DJ_Music_Man_ABP_C_CutsceneGrateEvent_Params params {};
		params.SequencePlayer = SequencePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_7090029B4C67C42BFE84D2935884BA85
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_7090029B4C67C42BFE84D2935884BA85()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_7090029B4C67C42BFE84D2935884BA85");
		
		URIG_DJ_Music_Man_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_AnimGraphNode_TransitionResult_7090029B4C67C42BFE84D2935884BA85_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_Exit_L_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::AnimNotify_Exit_L_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_Exit_L_Event");
		
		URIG_DJ_Music_Man_ABP_C_AnimNotify_Exit_L_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_Exit_R_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::AnimNotify_Exit_R_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_Exit_R_Event");
		
		URIG_DJ_Music_Man_ABP_C_AnimNotify_Exit_R_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_DoneExitingBathroom
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::AnimNotify_DoneExitingBathroom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_DoneExitingBathroom");
		
		URIG_DJ_Music_Man_ABP_C_AnimNotify_DoneExitingBathroom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_BeginRateScale
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::AnimNotify_BeginRateScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_BeginRateScale");
		
		URIG_DJ_Music_Man_ABP_C_AnimNotify_BeginRateScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_EndRateScale
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::AnimNotify_EndRateScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_EndRateScale");
		
		URIG_DJ_Music_Man_ABP_C_AnimNotify_EndRateScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Spotlight Aim Actor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AimActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_DJ_Music_Man_ABP_C::Spotlight_Aim_Actor(class AActor* AimActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.Spotlight Aim Actor");
		
		URIG_DJ_Music_Man_ABP_C_Spotlight_Aim_Actor_Params params {};
		params.AimActor = AimActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.BlueprintBeginPlay");
		
		URIG_DJ_Music_Man_ABP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_HasNotReversedEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::AnimNotify_HasNotReversedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_HasNotReversedEvent");
		
		URIG_DJ_Music_Man_ABP_C_AnimNotify_HasNotReversedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_HasReversedEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::AnimNotify_HasReversedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.AnimNotify_HasReversedEvent");
		
		URIG_DJ_Music_Man_ABP_C_AnimNotify_HasReversedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.ThrowObject
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ThrowL                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URIG_DJ_Music_Man_ABP_C::ThrowObject(bool ThrowL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.ThrowObject");
		
		URIG_DJ_Music_Man_ABP_C_ThrowObject_Params params {};
		params.ThrowL = ThrowL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanJumpscareEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URIG_DJ_Music_Man_ABP_C::CanJumpscareEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.CanJumpscareEvent");
		
		URIG_DJ_Music_Man_ABP_C_CanJumpscareEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.ExecuteUbergraph_RIG_DJ_Music_Man_ABP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URIG_DJ_Music_Man_ABP_C::ExecuteUbergraph_RIG_DJ_Music_Man_ABP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C.ExecuteUbergraph_RIG_DJ_Music_Man_ABP");
		
		URIG_DJ_Music_Man_ABP_C_ExecuteUbergraph_RIG_DJ_Music_Man_ABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URIG_DJ_Music_Man_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URIG_DJ_Music_Man_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass RIG_DJ_Music_Man_ABP.RIG_DJ_Music_Man_ABP_C");
		return ptr;
	}

}


