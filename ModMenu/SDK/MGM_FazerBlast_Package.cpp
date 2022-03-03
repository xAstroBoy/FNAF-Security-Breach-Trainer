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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.Set Capture Timer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMGM_FazerBlast_C::Set_Capture_Timer(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.Set Capture Timer");
		
		AMGM_FazerBlast_C_Set_Capture_Timer_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.PlayAreaLeave
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMGM_FazerBlast_C::PlayAreaLeave(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.PlayAreaLeave");
		
		AMGM_FazerBlast_C_PlayAreaLeave_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.Update Capture Time Queue
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              I_NewTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMGM_FazerBlast_C::Update_Capture_Time_Queue(float I_NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.Update Capture Time Queue");
		
		AMGM_FazerBlast_C_Update_Capture_Time_Queue_Params params {};
		params.I_NewTime = I_NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.OnEnd
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_EndMiniGameType_E_EndMiniGameType                EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMGM_FazerBlast_C::OnEnd(E_EndMiniGameType_E_EndMiniGameType EndType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.OnEnd");
		
		AMGM_FazerBlast_C_OnEnd_Params params {};
		params.EndType = EndType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.On Start
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::On_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.On Start");
		
		AMGM_FazerBlast_C_On_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.UpdateMissionTask
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               I_Leaving                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            I_TaskIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMGM_FazerBlast_C::UpdateMissionTask(bool I_Leaving, int32_t I_TaskIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.UpdateMissionTask");
		
		AMGM_FazerBlast_C_UpdateMissionTask_Params params {};
		params.I_Leaving = I_Leaving;
		params.I_TaskIndex = I_TaskIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.TrySpawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::TrySpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.TrySpawn");
		
		AMGM_FazerBlast_C_TrySpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.UpdateMusic
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Play                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMGM_FazerBlast_C::UpdateMusic(bool Play)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.UpdateMusic");
		
		AMGM_FazerBlast_C_UpdateMusic_Params params {};
		params.Play = Play;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.FindUsableSpawner
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AA_FazerBlast_Spawner_C*                     Spawner                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMGM_FazerBlast_C::FindUsableSpawner(class AA_FazerBlast_Spawner_C** Spawner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.FindUsableSpawner");
		
		AMGM_FazerBlast_C_FindUsableSpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Spawner != nullptr)
			*Spawner = params.Spawner;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.UserConstructionScript");
		
		AMGM_FazerBlast_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.OnFailure_7D8E43294D1FE2809E40FE959189C6ED
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::OnFailure_7D8E43294D1FE2809E40FE959189C6ED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.OnFailure_7D8E43294D1FE2809E40FE959189C6ED");
		
		AMGM_FazerBlast_C_OnFailure_7D8E43294D1FE2809E40FE959189C6ED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.OnSuccess_7D8E43294D1FE2809E40FE959189C6ED
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::OnSuccess_7D8E43294D1FE2809E40FE959189C6ED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.OnSuccess_7D8E43294D1FE2809E40FE959189C6ED");
		
		AMGM_FazerBlast_C_OnSuccess_7D8E43294D1FE2809E40FE959189C6ED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.OnFailure_EE39226D48E410FC896D9D8565A580FF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMGM_FazerBlast_C::OnFailure_EE39226D48E410FC896D9D8565A580FF(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.OnFailure_EE39226D48E410FC896D9D8565A580FF");
		
		AMGM_FazerBlast_C_OnFailure_EE39226D48E410FC896D9D8565A580FF_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.OnSuccess_EE39226D48E410FC896D9D8565A580FF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMGM_FazerBlast_C::OnSuccess_EE39226D48E410FC896D9D8565A580FF(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.OnSuccess_EE39226D48E410FC896D9D8565A580FF");
		
		AMGM_FazerBlast_C_OnSuccess_EE39226D48E410FC896D9D8565A580FF_Params params {};
		params.WrittenAchievementName = WrittenAchievementName;
		params.WrittenProgress = WrittenProgress;
		params.WrittenUserTag = WrittenUserTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.LaserHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AEQ_LaserGun_C*                              Gun                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AMGM_FazerBlast_C::LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.LaserHit");
		
		AMGM_FazerBlast_C_LaserHit_Params params {};
		params.Gun = Gun;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.ForceKill
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Animate_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMGM_FazerBlast_C::ForceKill(bool Animate_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.ForceKill");
		
		AMGM_FazerBlast_C_ForceKill_Params params {};
		params.Animate_ = Animate_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.GameStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::GameStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.GameStart");
		
		AMGM_FazerBlast_C_GameStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.GameEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::GameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.GameEnd");
		
		AMGM_FazerBlast_C_GameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.GameExit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::GameExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.GameExit");
		
		AMGM_FazerBlast_C_GameExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.PlayerHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AMGM_FazerBlast_C::PlayerHit(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.PlayerHit");
		
		AMGM_FazerBlast_C_PlayerHit_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.ReceiveBeginPlay");
		
		AMGM_FazerBlast_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.PlayAreaEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::PlayAreaEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.PlayAreaEnd");
		
		AMGM_FazerBlast_C_PlayAreaEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AMGM_FazerBlast_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		AMGM_FazerBlast_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.PlayAreaInit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::PlayAreaInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.PlayAreaInit");
		
		AMGM_FazerBlast_C_PlayAreaInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.DoorLock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Locked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Closed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Lost_Doors                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMGM_FazerBlast_C::DoorLock(bool Locked, bool Closed, int32_t Lost_Doors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.DoorLock");
		
		AMGM_FazerBlast_C_DoorLock_Params params {};
		params.Locked = Locked;
		params.Closed = Closed;
		params.Lost_Doors = Lost_Doors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.SpawnEnemies
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::SpawnEnemies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.SpawnEnemies");
		
		AMGM_FazerBlast_C_SpawnEnemies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.ResetGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::ResetGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.ResetGame");
		
		AMGM_FazerBlast_C_ResetGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.OnElevatorDoorsOpen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::OnElevatorDoorsOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.OnElevatorDoorsOpen");
		
		AMGM_FazerBlast_C_OnElevatorDoorsOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.UpdateCaptureTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::UpdateCaptureTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.UpdateCaptureTime");
		
		AMGM_FazerBlast_C_UpdateCaptureTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.AddHelmetHUD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::AddHelmetHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.AddHelmetHUD");
		
		AMGM_FazerBlast_C_AddHelmetHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.StartFlagCaptureTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::StartFlagCaptureTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.StartFlagCaptureTimer");
		
		AMGM_FazerBlast_C_StartFlagCaptureTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.CapturedTheFlag
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::CapturedTheFlag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.CapturedTheFlag");
		
		AMGM_FazerBlast_C_CapturedTheFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.GameWon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::GameWon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.GameWon");
		
		AMGM_FazerBlast_C_GameWon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.LostTheFlag
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::LostTheFlag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.LostTheFlag");
		
		AMGM_FazerBlast_C_LostTheFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.GameLost
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::GameLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.GameLost");
		
		AMGM_FazerBlast_C_GameLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.Remove HUD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::Remove_HUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.Remove HUD");
		
		AMGM_FazerBlast_C_Remove_HUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.5SecondsRemainWarning
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::_5SecondsRemainWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.5SecondsRemainWarning");
		
		AMGM_FazerBlast_C__5SecondsRemainWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.SetDoorsToWinState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMGM_FazerBlast_C::SetDoorsToWinState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.SetDoorsToWinState");
		
		AMGM_FazerBlast_C_SetDoorsToWinState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function MGM_FazerBlast.MGM_FazerBlast_C.ExecuteUbergraph_MGM_FazerBlast
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMGM_FazerBlast_C::ExecuteUbergraph_MGM_FazerBlast(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MGM_FazerBlast.MGM_FazerBlast_C.ExecuteUbergraph_MGM_FazerBlast");
		
		AMGM_FazerBlast_C_ExecuteUbergraph_MGM_FazerBlast_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMGM_FazerBlast_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMGM_FazerBlast_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MGM_FazerBlast.MGM_FazerBlast_C");
		return ptr;
	}

}


