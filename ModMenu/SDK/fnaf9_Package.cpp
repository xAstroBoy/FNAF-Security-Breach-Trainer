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
	 * 		Name   -> Function fnaf9.AIDLC_RabbitComponent.UpdateDLC_RabbitValues
	 * 		Flags  -> ()
	 */
	void UAIDLC_RabbitComponent::UpdateDLC_RabbitValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitComponent.UpdateDLC_RabbitValues");
		
		UAIDLC_RabbitComponent_UpdateDLC_RabbitValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIDLC_RabbitComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDLC_RabbitComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.AIDLC_RabbitComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.UnregisterAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InterfaceImplementor                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::UnregisterAnimation(class AActor* InterfaceImplementor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.UnregisterAnimation");
		
		UAIDLC_RabbitSystem_UnregisterAnimation_Params params {};
		params.InterfaceImplementor = InterfaceImplementor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.UnpauseTimers
	 * 		Flags  -> ()
	 */
	void UAIDLC_RabbitSystem::UnpauseTimers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.UnpauseTimers");
		
		UAIDLC_RabbitSystem_UnpauseTimers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.StopPsuedoAlert
	 * 		Flags  -> ()
	 */
	void UAIDLC_RabbitSystem::StopPsuedoAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.StopPsuedoAlert");
		
		UAIDLC_RabbitSystem_StopPsuedoAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.StartPsuedoAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TrackLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::StartPsuedoAlert(const struct FVector& TrackLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.StartPsuedoAlert");
		
		UAIDLC_RabbitSystem_StartPsuedoAlert_Params params {};
		params.TrackLocation = TrackLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetupQueryData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQuery*                                   InFindSpawnPointEQSA                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UEnvQuery*                                   InFindSpawnPointEQSB                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UEnvQuery*                                   InFindSpawnPointEQSA_Close                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UEnvQuery*                                   InFindSpawnPointEQSB_Close                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDataTable*                                  InDLC_RabbitDataTable                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetupQueryData(class UEnvQuery* InFindSpawnPointEQSA, class UEnvQuery* InFindSpawnPointEQSB, class UEnvQuery* InFindSpawnPointEQSA_Close, class UEnvQuery* InFindSpawnPointEQSB_Close, class UDataTable* InDLC_RabbitDataTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetupQueryData");
		
		UAIDLC_RabbitSystem_SetupQueryData_Params params {};
		params.InFindSpawnPointEQSA = InFindSpawnPointEQSA;
		params.InFindSpawnPointEQSB = InFindSpawnPointEQSB;
		params.InFindSpawnPointEQSA_Close = InFindSpawnPointEQSA_Close;
		params.InFindSpawnPointEQSB_Close = InFindSpawnPointEQSB_Close;
		params.InDLC_RabbitDataTable = InDLC_RabbitDataTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetTypesToAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAnimatronicTypeData>                TypesToAlertIn                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetTypesToAlert(TArray<struct FAnimatronicTypeData> TypesToAlertIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetTypesToAlert");
		
		UAIDLC_RabbitSystem_SetTypesToAlert_Params params {};
		params.TypesToAlertIn = TypesToAlertIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetTrailSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewTrailSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetTrailSpeed(float NewTrailSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetTrailSpeed");
		
		UAIDLC_RabbitSystem_SetTrailSpeed_Params params {};
		params.NewTrailSpeed = NewTrailSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetStareTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewStareTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetStareTime(float NewStareTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetStareTime");
		
		UAIDLC_RabbitSystem_SetStareTime_Params params {};
		params.NewStareTime = NewStareTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetSpawnTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSpawnTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetSpawnTime(float NewSpawnTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetSpawnTime");
		
		UAIDLC_RabbitSystem_SetSpawnTime_Params params {};
		params.NewSpawnTime = NewSpawnTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetSpawnRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSpawnRadius                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetSpawnRadius(float NewSpawnRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetSpawnRadius");
		
		UAIDLC_RabbitSystem_SetSpawnRadius_Params params {};
		params.NewSpawnRadius = NewSpawnRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetSpawnInViewChance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSpawnInViewChance                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetSpawnInViewChance(float NewSpawnInViewChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetSpawnInViewChance");
		
		UAIDLC_RabbitSystem_SetSpawnInViewChance_Params params {};
		params.NewSpawnInViewChance = NewSpawnInViewChance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetSpawnCloseMaxDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSpawnCloseMaxDistance                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetSpawnCloseMaxDistance(float NewSpawnCloseMaxDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetSpawnCloseMaxDistance");
		
		UAIDLC_RabbitSystem_SetSpawnCloseMaxDistance_Params params {};
		params.NewSpawnCloseMaxDistance = NewSpawnCloseMaxDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetSpawnCloseChance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSpawnCloseChance                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetSpawnCloseChance(float NewSpawnCloseChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetSpawnCloseChance");
		
		UAIDLC_RabbitSystem_SetSpawnCloseChance_Params params {};
		params.NewSpawnCloseChance = NewSpawnCloseChance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetSpawnCloseAlertDelay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSpawnCloseAlertDelay                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetSpawnCloseAlertDelay(float NewSpawnCloseAlertDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetSpawnCloseAlertDelay");
		
		UAIDLC_RabbitSystem_SetSpawnCloseAlertDelay_Params params {};
		params.NewSpawnCloseAlertDelay = NewSpawnCloseAlertDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetSoftJumpscareTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSoftJumpscareTime                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetSoftJumpscareTime(float NewSoftJumpscareTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetSoftJumpscareTime");
		
		UAIDLC_RabbitSystem_SetSoftJumpscareTime_Params params {};
		params.NewSoftJumpscareTime = NewSoftJumpscareTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetSoftJumpscareChance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSoftJumpscareChance                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetSoftJumpscareChance(float NewSoftJumpscareChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetSoftJumpscareChance");
		
		UAIDLC_RabbitSystem_SetSoftJumpscareChance_Params params {};
		params.NewSoftJumpscareChance = NewSoftJumpscareChance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetPauseTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewPauseTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetPauseTime(float NewPauseTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetPauseTime");
		
		UAIDLC_RabbitSystem_SetPauseTime_Params params {};
		params.NewPauseTime = NewPauseTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetPauseRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewPauseRate                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetPauseRate(float NewPauseRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetPauseRate");
		
		UAIDLC_RabbitSystem_SetPauseRate_Params params {};
		params.NewPauseRate = NewPauseRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetOuterRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewOuterRange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetOuterRange(float NewOuterRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetOuterRange");
		
		UAIDLC_RabbitSystem_SetOuterRange_Params params {};
		params.NewOuterRange = NewOuterRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetNumberToAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberToAlertIn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetNumberToAlert(int32_t NumberToAlertIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetNumberToAlert");
		
		UAIDLC_RabbitSystem_SetNumberToAlert_Params params {};
		params.NumberToAlertIn = NumberToAlertIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetMoveLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewMoveLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetMoveLength(float NewMoveLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetMoveLength");
		
		UAIDLC_RabbitSystem_SetMoveLength_Params params {};
		params.NewMoveLength = NewMoveLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetInnerRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewInnerRange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetInnerRange(float NewInnerRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetInnerRange");
		
		UAIDLC_RabbitSystem_SetInnerRange_Params params {};
		params.NewInnerRange = NewInnerRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetInhibitorRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewInhibitorRadius                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetInhibitorRadius(float NewInhibitorRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetInhibitorRadius");
		
		UAIDLC_RabbitSystem_SetInhibitorRadius_Params params {};
		params.NewInhibitorRadius = NewInhibitorRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetHasBeenAgitatedByWalkieTalkie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewHasBeenAgitated                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetHasBeenAgitatedByWalkieTalkie(bool NewHasBeenAgitated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetHasBeenAgitatedByWalkieTalkie");
		
		UAIDLC_RabbitSystem_SetHasBeenAgitatedByWalkieTalkie_Params params {};
		params.NewHasBeenAgitated = NewHasBeenAgitated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetDLC_RabbitData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDLC_RabbitSaveData                         Data                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetDLC_RabbitData(const struct FDLC_RabbitSaveData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetDLC_RabbitData");
		
		UAIDLC_RabbitSystem_SetDLC_RabbitData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetDespawnTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewDespawnTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetDespawnTime(float NewDespawnTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetDespawnTime");
		
		UAIDLC_RabbitSystem_SetDespawnTime_Params params {};
		params.NewDespawnTime = NewDespawnTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetCooldownPhaseTwo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewCooldownPhaseTwo                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetCooldownPhaseTwo(float NewCooldownPhaseTwo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetCooldownPhaseTwo");
		
		UAIDLC_RabbitSystem_SetCooldownPhaseTwo_Params params {};
		params.NewCooldownPhaseTwo = NewCooldownPhaseTwo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetCooldownPhaseOne
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewCooldownPhaseOne                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetCooldownPhaseOne(float NewCooldownPhaseOne)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetCooldownPhaseOne");
		
		UAIDLC_RabbitSystem_SetCooldownPhaseOne_Params params {};
		params.NewCooldownPhaseOne = NewCooldownPhaseOne;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARTrailSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewTrailSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARTrailSpeed(float NewTrailSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARTrailSpeed");
		
		UAIDLC_RabbitSystem_SetARTrailSpeed_Params params {};
		params.NewTrailSpeed = NewTrailSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARStareTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARStareTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARStareTime(float NewARStareTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARStareTime");
		
		UAIDLC_RabbitSystem_SetARStareTime_Params params {};
		params.NewARStareTime = NewARStareTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARSpawnTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARSpawnTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARSpawnTime(float NewARSpawnTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARSpawnTime");
		
		UAIDLC_RabbitSystem_SetARSpawnTime_Params params {};
		params.NewARSpawnTime = NewARSpawnTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARSpawnRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARSpawnRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARSpawnRadius(float NewARSpawnRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARSpawnRadius");
		
		UAIDLC_RabbitSystem_SetARSpawnRadius_Params params {};
		params.NewARSpawnRadius = NewARSpawnRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARSpawnInViewChance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARSpawnInViewChance                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARSpawnInViewChance(float NewARSpawnInViewChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARSpawnInViewChance");
		
		UAIDLC_RabbitSystem_SetARSpawnInViewChance_Params params {};
		params.NewARSpawnInViewChance = NewARSpawnInViewChance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARSpawnCloseMaxDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARSpawnCloseMaxDistance                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARSpawnCloseMaxDistance(float NewARSpawnCloseMaxDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARSpawnCloseMaxDistance");
		
		UAIDLC_RabbitSystem_SetARSpawnCloseMaxDistance_Params params {};
		params.NewARSpawnCloseMaxDistance = NewARSpawnCloseMaxDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARSpawnCloseChance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARSpawnCloseChance                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARSpawnCloseChance(float NewARSpawnCloseChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARSpawnCloseChance");
		
		UAIDLC_RabbitSystem_SetARSpawnCloseChance_Params params {};
		params.NewARSpawnCloseChance = NewARSpawnCloseChance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARSpawnCloseAlertDelay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARSpawnCloseAlertDelay                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARSpawnCloseAlertDelay(float NewARSpawnCloseAlertDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARSpawnCloseAlertDelay");
		
		UAIDLC_RabbitSystem_SetARSpawnCloseAlertDelay_Params params {};
		params.NewARSpawnCloseAlertDelay = NewARSpawnCloseAlertDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARSoftJumpscareTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARSoftJumpscareTime                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARSoftJumpscareTime(float NewARSoftJumpscareTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARSoftJumpscareTime");
		
		UAIDLC_RabbitSystem_SetARSoftJumpscareTime_Params params {};
		params.NewARSoftJumpscareTime = NewARSoftJumpscareTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARSoftJumpscareChance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARSoftJumpscareChance                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARSoftJumpscareChance(float NewARSoftJumpscareChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARSoftJumpscareChance");
		
		UAIDLC_RabbitSystem_SetARSoftJumpscareChance_Params params {};
		params.NewARSoftJumpscareChance = NewARSoftJumpscareChance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARPauseTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARPauseTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARPauseTime(float NewARPauseTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARPauseTime");
		
		UAIDLC_RabbitSystem_SetARPauseTime_Params params {};
		params.NewARPauseTime = NewARPauseTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARPauseRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARPauseRate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARPauseRate(float NewARPauseRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARPauseRate");
		
		UAIDLC_RabbitSystem_SetARPauseRate_Params params {};
		params.NewARPauseRate = NewARPauseRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetAROuterRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewAROuterRange                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetAROuterRange(float NewAROuterRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetAROuterRange");
		
		UAIDLC_RabbitSystem_SetAROuterRange_Params params {};
		params.NewAROuterRange = NewAROuterRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARMoveLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARMoveLength                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARMoveLength(float NewARMoveLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARMoveLength");
		
		UAIDLC_RabbitSystem_SetARMoveLength_Params params {};
		params.NewARMoveLength = NewARMoveLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARInnerRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARInnerRange                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARInnerRange(float NewARInnerRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARInnerRange");
		
		UAIDLC_RabbitSystem_SetARInnerRange_Params params {};
		params.NewARInnerRange = NewARInnerRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARInhibitorRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARInhibitorRadius                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARInhibitorRadius(float NewARInhibitorRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARInhibitorRadius");
		
		UAIDLC_RabbitSystem_SetARInhibitorRadius_Params params {};
		params.NewARInhibitorRadius = NewARInhibitorRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARHasBeenAgitatedByWalkieTalkie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewARHasBeenAgitated                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARHasBeenAgitatedByWalkieTalkie(bool NewARHasBeenAgitated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARHasBeenAgitatedByWalkieTalkie");
		
		UAIDLC_RabbitSystem_SetARHasBeenAgitatedByWalkieTalkie_Params params {};
		params.NewARHasBeenAgitated = NewARHasBeenAgitated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARDLC_RabbitData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDLC_RabbitSaveData                         Data                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARDLC_RabbitData(const struct FDLC_RabbitSaveData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARDLC_RabbitData");
		
		UAIDLC_RabbitSystem_SetARDLC_RabbitData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARDespawnTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARDespawnTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARDespawnTime(float NewARDespawnTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARDespawnTime");
		
		UAIDLC_RabbitSystem_SetARDespawnTime_Params params {};
		params.NewARDespawnTime = NewARDespawnTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARCooldownPhaseTwo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARCooldownPhaseTwo                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARCooldownPhaseTwo(float NewARCooldownPhaseTwo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARCooldownPhaseTwo");
		
		UAIDLC_RabbitSystem_SetARCooldownPhaseTwo_Params params {};
		params.NewARCooldownPhaseTwo = NewARCooldownPhaseTwo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARCooldownPhaseOne
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARCooldownPhaseOne                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARCooldownPhaseOne(float NewARCooldownPhaseOne)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARCooldownPhaseOne");
		
		UAIDLC_RabbitSystem_SetARCooldownPhaseOne_Params params {};
		params.NewARCooldownPhaseOne = NewARCooldownPhaseOne;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARAnimatronicSpawnDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARAnimatronicSpawnDistance                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARAnimatronicSpawnDistance(float NewARAnimatronicSpawnDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARAnimatronicSpawnDistance");
		
		UAIDLC_RabbitSystem_SetARAnimatronicSpawnDistance_Params params {};
		params.NewARAnimatronicSpawnDistance = NewARAnimatronicSpawnDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARAnimatronicDespawnRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARAnimatronicDespawnRadius                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARAnimatronicDespawnRadius(float NewARAnimatronicDespawnRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARAnimatronicDespawnRadius");
		
		UAIDLC_RabbitSystem_SetARAnimatronicDespawnRadius_Params params {};
		params.NewARAnimatronicDespawnRadius = NewARAnimatronicDespawnRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetARAlertPhaseLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewARAlertPhaseLength                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetARAlertPhaseLength(float NewARAlertPhaseLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetARAlertPhaseLength");
		
		UAIDLC_RabbitSystem_SetARAlertPhaseLength_Params params {};
		params.NewARAlertPhaseLength = NewARAlertPhaseLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetAnimatronicSpawnDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewAnimatronicSpawnDistance                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetAnimatronicSpawnDistance(float NewAnimatronicSpawnDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetAnimatronicSpawnDistance");
		
		UAIDLC_RabbitSystem_SetAnimatronicSpawnDistance_Params params {};
		params.NewAnimatronicSpawnDistance = NewAnimatronicSpawnDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetAnimatronicDespawnRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewAnimatronicDespawnRadius                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetAnimatronicDespawnRadius(float NewAnimatronicDespawnRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetAnimatronicDespawnRadius");
		
		UAIDLC_RabbitSystem_SetAnimatronicDespawnRadius_Params params {};
		params.NewAnimatronicDespawnRadius = NewAnimatronicDespawnRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.SetAlertPhaseLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewAlertPhaseLength                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::SetAlertPhaseLength(float NewAlertPhaseLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.SetAlertPhaseLength");
		
		UAIDLC_RabbitSystem_SetAlertPhaseLength_Params params {};
		params.NewAlertPhaseLength = NewAlertPhaseLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.RespawnRabbitAI
	 * 		Flags  -> ()
	 */
	void UAIDLC_RabbitSystem::RespawnRabbitAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.RespawnRabbitAI");
		
		UAIDLC_RabbitSystem_RespawnRabbitAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.RespawnAlertAI
	 * 		Flags  -> ()
	 */
	void UAIDLC_RabbitSystem::RespawnAlertAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.RespawnAlertAI");
		
		UAIDLC_RabbitSystem_RespawnAlertAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.ResetARDLC_RabbitValues
	 * 		Flags  -> ()
	 */
	void UAIDLC_RabbitSystem::ResetARDLC_RabbitValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.ResetARDLC_RabbitValues");
		
		UAIDLC_RabbitSystem_ResetARDLC_RabbitValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.RegisterDLC_RabbitActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DLC_RabbitIn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::RegisterDLC_RabbitActor(class AActor* DLC_RabbitIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.RegisterDLC_RabbitActor");
		
		UAIDLC_RabbitSystem_RegisterDLC_RabbitActor_Params params {};
		params.DLC_RabbitIn = DLC_RabbitIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.RegisterAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDLC_RabbitEnemySequenceDataStruct          DataIn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::RegisterAnimation(const struct FDLC_RabbitEnemySequenceDataStruct& DataIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.RegisterAnimation");
		
		UAIDLC_RabbitSystem_RegisterAnimation_Params params {};
		params.DataIn = DataIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.PauseTimers
	 * 		Flags  -> ()
	 */
	void UAIDLC_RabbitSystem::PauseTimers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.PauseTimers");
		
		UAIDLC_RabbitSystem_PauseTimers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.OnSwitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NormalWorld                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIDLC_RabbitSystem::OnSwitch(bool NormalWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.OnSwitch");
		
		UAIDLC_RabbitSystem_OnSwitch_Params params {};
		params.NormalWorld = NormalWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.OnSoftJumpscareFinished
	 * 		Flags  -> ()
	 */
	void UAIDLC_RabbitSystem::OnSoftJumpscareFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.OnSoftJumpscareFinished");
		
		UAIDLC_RabbitSystem_OnSoftJumpscareFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.OnNormalWorldEntry
	 * 		Flags  -> ()
	 */
	void UAIDLC_RabbitSystem::OnNormalWorldEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.OnNormalWorldEntry");
		
		UAIDLC_RabbitSystem_OnNormalWorldEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.OnARWorldEntry
	 * 		Flags  -> ()
	 */
	void UAIDLC_RabbitSystem::OnARWorldEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.OnARWorldEntry");
		
		UAIDLC_RabbitSystem_OnARWorldEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetUseAlertDelay
	 * 		Flags  -> ()
	 */
	bool UAIDLC_RabbitSystem::GetUseAlertDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetUseAlertDelay");
		
		UAIDLC_RabbitSystem_GetUseAlertDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetTypesToAlert
	 * 		Flags  -> ()
	 */
	TArray<struct FAnimatronicTypeData> UAIDLC_RabbitSystem::GetTypesToAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetTypesToAlert");
		
		UAIDLC_RabbitSystem_GetTypesToAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetTrailSpeed
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetTrailSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetTrailSpeed");
		
		UAIDLC_RabbitSystem_GetTrailSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetStareTime
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetStareTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetStareTime");
		
		UAIDLC_RabbitSystem_GetStareTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetSpawnTime
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetSpawnTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetSpawnTime");
		
		UAIDLC_RabbitSystem_GetSpawnTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetSpawnRadius
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetSpawnRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetSpawnRadius");
		
		UAIDLC_RabbitSystem_GetSpawnRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetSpawnInViewChance
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetSpawnInViewChance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetSpawnInViewChance");
		
		UAIDLC_RabbitSystem_GetSpawnInViewChance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetSpawnCloseMaxDistance
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetSpawnCloseMaxDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetSpawnCloseMaxDistance");
		
		UAIDLC_RabbitSystem_GetSpawnCloseMaxDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetSpawnCloseChance
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetSpawnCloseChance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetSpawnCloseChance");
		
		UAIDLC_RabbitSystem_GetSpawnCloseChance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetSpawnCloseAlertDelay
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetSpawnCloseAlertDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetSpawnCloseAlertDelay");
		
		UAIDLC_RabbitSystem_GetSpawnCloseAlertDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetSoftJumpscareTime
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetSoftJumpscareTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetSoftJumpscareTime");
		
		UAIDLC_RabbitSystem_GetSoftJumpscareTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetSoftJumpscareChance
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetSoftJumpscareChance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetSoftJumpscareChance");
		
		UAIDLC_RabbitSystem_GetSoftJumpscareChance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetShouldSpawnBehind
	 * 		Flags  -> ()
	 */
	bool UAIDLC_RabbitSystem::GetShouldSpawnBehind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetShouldSpawnBehind");
		
		UAIDLC_RabbitSystem_GetShouldSpawnBehind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetRemainingSpawnTimePercent
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetRemainingSpawnTimePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetRemainingSpawnTimePercent");
		
		UAIDLC_RabbitSystem_GetRemainingSpawnTimePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetRemainingSpawnTime
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetRemainingSpawnTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetRemainingSpawnTime");
		
		UAIDLC_RabbitSystem_GetRemainingSpawnTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetRemainingAlertTimePercent
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetRemainingAlertTimePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetRemainingAlertTimePercent");
		
		UAIDLC_RabbitSystem_GetRemainingAlertTimePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetRemainingAlertTime
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetRemainingAlertTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetRemainingAlertTime");
		
		UAIDLC_RabbitSystem_GetRemainingAlertTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetProximityPercent
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetProximityPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetProximityPercent");
		
		UAIDLC_RabbitSystem_GetProximityPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetPauseTime
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetPauseTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetPauseTime");
		
		UAIDLC_RabbitSystem_GetPauseTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetPauseRate
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetPauseRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetPauseRate");
		
		UAIDLC_RabbitSystem_GetPauseRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetOuterRange
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetOuterRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetOuterRange");
		
		UAIDLC_RabbitSystem_GetOuterRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetNumberToAlert
	 * 		Flags  -> ()
	 */
	int32_t UAIDLC_RabbitSystem::GetNumberToAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetNumberToAlert");
		
		UAIDLC_RabbitSystem_GetNumberToAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetMoveLength
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetMoveLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetMoveLength");
		
		UAIDLC_RabbitSystem_GetMoveLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetIsAlerted
	 * 		Flags  -> ()
	 */
	bool UAIDLC_RabbitSystem::GetIsAlerted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetIsAlerted");
		
		UAIDLC_RabbitSystem_GetIsAlerted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetInnerRange
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetInnerRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetInnerRange");
		
		UAIDLC_RabbitSystem_GetInnerRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetInhibitorRadius
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetInhibitorRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetInhibitorRadius");
		
		UAIDLC_RabbitSystem_GetInhibitorRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetHasBeenAgitatedByWalkieTalkie
	 * 		Flags  -> ()
	 */
	bool UAIDLC_RabbitSystem::GetHasBeenAgitatedByWalkieTalkie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetHasBeenAgitatedByWalkieTalkie");
		
		UAIDLC_RabbitSystem_GetHasBeenAgitatedByWalkieTalkie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetDLC_RabbitData
	 * 		Flags  -> ()
	 */
	struct FDLC_RabbitSaveData UAIDLC_RabbitSystem::GetDLC_RabbitData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetDLC_RabbitData");
		
		UAIDLC_RabbitSystem_GetDLC_RabbitData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetDespawnTime
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetDespawnTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetDespawnTime");
		
		UAIDLC_RabbitSystem_GetDespawnTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetCooldownPhaseTwo
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetCooldownPhaseTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetCooldownPhaseTwo");
		
		UAIDLC_RabbitSystem_GetCooldownPhaseTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetCooldownPhaseOne
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetCooldownPhaseOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetCooldownPhaseOne");
		
		UAIDLC_RabbitSystem_GetCooldownPhaseOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARTrailSpeed
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARTrailSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARTrailSpeed");
		
		UAIDLC_RabbitSystem_GetARTrailSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARStareTime
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARStareTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARStareTime");
		
		UAIDLC_RabbitSystem_GetARStareTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARSpawnTime
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARSpawnTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARSpawnTime");
		
		UAIDLC_RabbitSystem_GetARSpawnTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARSpawnRadius
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARSpawnRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARSpawnRadius");
		
		UAIDLC_RabbitSystem_GetARSpawnRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARSpawnInViewChance
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARSpawnInViewChance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARSpawnInViewChance");
		
		UAIDLC_RabbitSystem_GetARSpawnInViewChance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARSpawnCloseMaxDistance
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARSpawnCloseMaxDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARSpawnCloseMaxDistance");
		
		UAIDLC_RabbitSystem_GetARSpawnCloseMaxDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARSpawnCloseChance
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARSpawnCloseChance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARSpawnCloseChance");
		
		UAIDLC_RabbitSystem_GetARSpawnCloseChance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARSpawnCloseAlertDelay
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARSpawnCloseAlertDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARSpawnCloseAlertDelay");
		
		UAIDLC_RabbitSystem_GetARSpawnCloseAlertDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARSoftJumpscareTime
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARSoftJumpscareTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARSoftJumpscareTime");
		
		UAIDLC_RabbitSystem_GetARSoftJumpscareTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARSoftJumpscareChance
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARSoftJumpscareChance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARSoftJumpscareChance");
		
		UAIDLC_RabbitSystem_GetARSoftJumpscareChance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARPauseTime
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARPauseTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARPauseTime");
		
		UAIDLC_RabbitSystem_GetARPauseTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARPauseRate
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARPauseRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARPauseRate");
		
		UAIDLC_RabbitSystem_GetARPauseRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetAROuterRange
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetAROuterRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetAROuterRange");
		
		UAIDLC_RabbitSystem_GetAROuterRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARMoveLength
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARMoveLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARMoveLength");
		
		UAIDLC_RabbitSystem_GetARMoveLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARInnerRange
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARInnerRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARInnerRange");
		
		UAIDLC_RabbitSystem_GetARInnerRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARInhibitorRadius
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARInhibitorRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARInhibitorRadius");
		
		UAIDLC_RabbitSystem_GetARInhibitorRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARHasBeenAgitatedByWalkieTalkie
	 * 		Flags  -> ()
	 */
	bool UAIDLC_RabbitSystem::GetARHasBeenAgitatedByWalkieTalkie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARHasBeenAgitatedByWalkieTalkie");
		
		UAIDLC_RabbitSystem_GetARHasBeenAgitatedByWalkieTalkie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARDLC_RabbitData
	 * 		Flags  -> ()
	 */
	struct FDLC_RabbitSaveData UAIDLC_RabbitSystem::GetARDLC_RabbitData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARDLC_RabbitData");
		
		UAIDLC_RabbitSystem_GetARDLC_RabbitData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARDespawnTime
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARDespawnTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARDespawnTime");
		
		UAIDLC_RabbitSystem_GetARDespawnTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARCooldownPhaseTwo
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARCooldownPhaseTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARCooldownPhaseTwo");
		
		UAIDLC_RabbitSystem_GetARCooldownPhaseTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARCooldownPhaseOne
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARCooldownPhaseOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARCooldownPhaseOne");
		
		UAIDLC_RabbitSystem_GetARCooldownPhaseOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARAnimatronicSpawnDistance
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARAnimatronicSpawnDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARAnimatronicSpawnDistance");
		
		UAIDLC_RabbitSystem_GetARAnimatronicSpawnDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARAnimatronicDespawnRadius
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARAnimatronicDespawnRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARAnimatronicDespawnRadius");
		
		UAIDLC_RabbitSystem_GetARAnimatronicDespawnRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetARAlertPhaseLength
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetARAlertPhaseLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetARAlertPhaseLength");
		
		UAIDLC_RabbitSystem_GetARAlertPhaseLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetAnimatronicSpawnDistance
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetAnimatronicSpawnDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetAnimatronicSpawnDistance");
		
		UAIDLC_RabbitSystem_GetAnimatronicSpawnDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetAnimatronicDespawnRadius
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetAnimatronicDespawnRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetAnimatronicDespawnRadius");
		
		UAIDLC_RabbitSystem_GetAnimatronicDespawnRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetAlertPhaseLength
	 * 		Flags  -> ()
	 */
	float UAIDLC_RabbitSystem::GetAlertPhaseLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetAlertPhaseLength");
		
		UAIDLC_RabbitSystem_GetAlertPhaseLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.GetAlertedActors
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> UAIDLC_RabbitSystem::GetAlertedActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.GetAlertedActors");
		
		UAIDLC_RabbitSystem_GetAlertedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.DoesDLC_RabbitExist
	 * 		Flags  -> ()
	 */
	bool UAIDLC_RabbitSystem::DoesDLC_RabbitExist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.DoesDLC_RabbitExist");
		
		UAIDLC_RabbitSystem_DoesDLC_RabbitExist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.ConstructAlertedActorList
	 * 		Flags  -> ()
	 */
	void UAIDLC_RabbitSystem::ConstructAlertedActorList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.ConstructAlertedActorList");
		
		UAIDLC_RabbitSystem_ConstructAlertedActorList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.BanishRabbit
	 * 		Flags  -> ()
	 */
	void UAIDLC_RabbitSystem::BanishRabbit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.BanishRabbit");
		
		UAIDLC_RabbitSystem_BanishRabbit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.AlertFinished
	 * 		Flags  -> ()
	 */
	void UAIDLC_RabbitSystem::AlertFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.AlertFinished");
		
		UAIDLC_RabbitSystem_AlertFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIDLC_RabbitSystem.Alert
	 * 		Flags  -> ()
	 */
	void UAIDLC_RabbitSystem::Alert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIDLC_RabbitSystem.Alert");
		
		UAIDLC_RabbitSystem_Alert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIDLC_RabbitSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDLC_RabbitSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.AIDLC_RabbitSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIHiderInterface.ExitHideMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      HideActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIHiderInterface::ExitHideMode(class AActor* HideActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIHiderInterface.ExitHideMode");
		
		UAIHiderInterface_ExitHideMode_Params params {};
		params.HideActor = HideActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIHiderInterface.EnterHideMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      HideActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIHiderInterface::EnterHideMode(class AActor* HideActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIHiderInterface.EnterHideMode");
		
		UAIHiderInterface_EnterHideMode_Params params {};
		params.HideActor = HideActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIHiderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIHiderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.AIHiderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIEnvironmentQueryInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIEnvironmentQueryInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.AIEnvironmentQueryInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.UnregisterSeekerPath
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::UnregisterSeekerPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.UnregisterSeekerPath");
		
		UAIManagementSystem_UnregisterSeekerPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.UnRegisterAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::UnRegisterAI(class APawn* AIPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.UnRegisterAI");
		
		UAIManagementSystem_UnRegisterAI_Params params {};
		params.AIPawn = AIPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.UnpauseManager
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::UnpauseManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.UnpauseManager");
		
		UAIManagementSystem_UnpauseManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.StoreEndoStates
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::StoreEndoStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.StoreEndoStates");
		
		UAIManagementSystem_StoreEndoStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.StoreAnimatronicSpawnWithSubType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFAISubType                                     AISubType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::StoreAnimatronicSpawnWithSubType(EFNAFAISpawnType AIType, const class FName& PathName, EFNAFAISubType AISubType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.StoreAnimatronicSpawnWithSubType");
		
		UAIManagementSystem_StoreAnimatronicSpawnWithSubType_Params params {};
		params.AIType = AIType;
		params.PathName = PathName;
		params.AISubType = AISubType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.StoreAnimatronicSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsShattered                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::StoreAnimatronicSpawn(EFNAFAISpawnType AIType, const class FName& PathName, bool bIsShattered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.StoreAnimatronicSpawn");
		
		UAIManagementSystem_StoreAnimatronicSpawn_Params params {};
		params.AIType = AIType;
		params.PathName = PathName;
		params.bIsShattered = bIsShattered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.StartManager
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::StartManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.StartManager");
		
		UAIManagementSystem_StartManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnVannyOrVanessa
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSpawnVanny                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutSpawned                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentActionInfo                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SpawnVannyOrVanessa(bool bSpawnVanny, bool* bOutSpawned, const struct FLatentActionInfo& LatentActionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnVannyOrVanessa");
		
		UAIManagementSystem_SpawnVannyOrVanessa_Params params {};
		params.bSpawnVanny = bSpawnVanny;
		params.LatentActionInfo = LatentActionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutSpawned != nullptr)
			*bOutSpawned = params.bOutSpawned;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnSpecificAIOnPathWithSubType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFAISubType                                     AISubType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnSpecificAIOnPathWithSubType(EFNAFAISpawnType AIType, EFNAFAISubType AISubType, const class FName& PathName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnSpecificAIOnPathWithSubType");
		
		UAIManagementSystem_SpawnSpecificAIOnPathWithSubType_Params params {};
		params.AIType = AIType;
		params.AISubType = AISubType;
		params.PathName = PathName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnSpecificAIOnPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceShattered                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnSpecificAIOnPath(EFNAFAISpawnType AIType, bool bForceShattered, const class FName& PathName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnSpecificAIOnPath");
		
		UAIManagementSystem_SpawnSpecificAIOnPath_Params params {};
		params.AIType = AIType;
		params.bForceShattered = bForceShattered;
		params.PathName = PathName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnSpecificAIAtSpawnPointWithSubType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFNAFAISpawnPoint*                           SpawnPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFAISubType                                     forceAISubType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SpawnSpecificAIAtSpawnPointWithSubType(class AFNAFAISpawnPoint* SpawnPoint, EFNAFAISpawnType AIType, EFNAFAISubType forceAISubType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnSpecificAIAtSpawnPointWithSubType");
		
		UAIManagementSystem_SpawnSpecificAIAtSpawnPointWithSubType_Params params {};
		params.SpawnPoint = SpawnPoint;
		params.AIType = AIType;
		params.forceAISubType = forceAISubType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnSpecificAIAtSpawnPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFNAFAISpawnPoint*                           SpawnPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ForceShattered                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SpawnSpecificAIAtSpawnPoint(class AFNAFAISpawnPoint* SpawnPoint, EFNAFAISpawnType AIType, bool ForceShattered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnSpecificAIAtSpawnPoint");
		
		UAIManagementSystem_SpawnSpecificAIAtSpawnPoint_Params params {};
		params.SpawnPoint = SpawnPoint;
		params.AIType = AIType;
		params.ForceShattered = ForceShattered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAIWithTransformAndPathWithSubType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFAISubType                                     forceAISubType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SpawnTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnAIWithTransformAndPathWithSubType(EFNAFAISpawnType AIType, EFNAFAISubType forceAISubType, const struct FTransform& SpawnTransform, const class FName& PathName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIWithTransformAndPathWithSubType");
		
		UAIManagementSystem_SpawnAIWithTransformAndPathWithSubType_Params params {};
		params.AIType = AIType;
		params.forceAISubType = forceAISubType;
		params.SpawnTransform = SpawnTransform;
		params.PathName = PathName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAIWithTransformAndPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceShattered                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SpawnTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnAIWithTransformAndPath(EFNAFAISpawnType AIType, bool bForceShattered, const struct FTransform& SpawnTransform, const class FName& PathName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIWithTransformAndPath");
		
		UAIManagementSystem_SpawnAIWithTransformAndPath_Params params {};
		params.AIType = AIType;
		params.bForceShattered = bForceShattered;
		params.SpawnTransform = SpawnTransform;
		params.PathName = PathName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAITypeWithTransformWithSubType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SpawnTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EFNAFAISubType                                     forceAISubType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESpawnActorCollisionHandlingMethod                 CollisionOverrideMethod                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnAITypeWithTransformWithSubType(EFNAFAISpawnType AIType, const struct FTransform& SpawnTransform, EFNAFAISubType forceAISubType, ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, class AActor* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAITypeWithTransformWithSubType");
		
		UAIManagementSystem_SpawnAITypeWithTransformWithSubType_Params params {};
		params.AIType = AIType;
		params.SpawnTransform = SpawnTransform;
		params.forceAISubType = forceAISubType;
		params.CollisionOverrideMethod = CollisionOverrideMethod;
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAITypeWithTransformSafeWithSubType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SpawnTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EFNAFAISubType                                     forceAISubType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESpawnActorCollisionHandlingMethod                 CollisionOverrideMethod                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceRespawn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnAITypeWithTransformSafeWithSubType(EFNAFAISpawnType AIType, const struct FTransform& SpawnTransform, EFNAFAISubType forceAISubType, bool* success, ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, class AActor* Owner, bool bForceRespawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAITypeWithTransformSafeWithSubType");
		
		UAIManagementSystem_SpawnAITypeWithTransformSafeWithSubType_Params params {};
		params.AIType = AIType;
		params.SpawnTransform = SpawnTransform;
		params.forceAISubType = forceAISubType;
		params.CollisionOverrideMethod = CollisionOverrideMethod;
		params.Owner = Owner;
		params.bForceRespawn = bForceRespawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAITypeWithTransformSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SpawnTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ForceShattered                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESpawnActorCollisionHandlingMethod                 CollisionOverrideMethod                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceRespawn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnAITypeWithTransformSafe(EFNAFAISpawnType AIType, const struct FTransform& SpawnTransform, bool ForceShattered, bool* success, ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, class AActor* Owner, bool bForceRespawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAITypeWithTransformSafe");
		
		UAIManagementSystem_SpawnAITypeWithTransformSafe_Params params {};
		params.AIType = AIType;
		params.SpawnTransform = SpawnTransform;
		params.ForceShattered = ForceShattered;
		params.CollisionOverrideMethod = CollisionOverrideMethod;
		params.Owner = Owner;
		params.bForceRespawn = bForceRespawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAITypeWithTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SpawnTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ForceShattered                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESpawnActorCollisionHandlingMethod                 CollisionOverrideMethod                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnAITypeWithTransform(EFNAFAISpawnType AIType, const struct FTransform& SpawnTransform, bool ForceShattered, ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, class AActor* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAITypeWithTransform");
		
		UAIManagementSystem_SpawnAITypeWithTransform_Params params {};
		params.AIType = AIType;
		params.SpawnTransform = SpawnTransform;
		params.ForceShattered = ForceShattered;
		params.CollisionOverrideMethod = CollisionOverrideMethod;
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAITypeAtLocationWithSubType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SpawnLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFAISubType                                     forceAISubType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnAITypeAtLocationWithSubType(EFNAFAISpawnType AIType, const struct FVector& SpawnLocation, EFNAFAISubType forceAISubType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAITypeAtLocationWithSubType");
		
		UAIManagementSystem_SpawnAITypeAtLocationWithSubType_Params params {};
		params.AIType = AIType;
		params.SpawnLocation = SpawnLocation;
		params.forceAISubType = forceAISubType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAITypeAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SpawnLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ForceShattered                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnAITypeAtLocation(EFNAFAISpawnType AIType, const struct FVector& SpawnLocation, bool ForceShattered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAITypeAtLocation");
		
		UAIManagementSystem_SpawnAITypeAtLocation_Params params {};
		params.AIType = AIType;
		params.SpawnLocation = SpawnLocation;
		params.ForceShattered = ForceShattered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAIOnPathWithSubType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFAISubType                                     forceAISubType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnAIOnPathWithSubType(EFNAFAISpawnType AIType, EFNAFAISubType forceAISubType, const class FName& PathName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIOnPathWithSubType");
		
		UAIManagementSystem_SpawnAIOnPathWithSubType_Params params {};
		params.AIType = AIType;
		params.forceAISubType = forceAISubType;
		params.PathName = PathName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAIOnPathNearLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnAIOnPathNearLocation(EFNAFAISpawnType AIType, const struct FVector& Location, const class FName& PathName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIOnPathNearLocation");
		
		UAIManagementSystem_SpawnAIOnPathNearLocation_Params params {};
		params.AIType = AIType;
		params.Location = Location;
		params.PathName = PathName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAIOnPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceShattered                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnAIOnPath(EFNAFAISpawnType AIType, bool bForceShattered, const class FName& PathName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIOnPath");
		
		UAIManagementSystem_SpawnAIOnPath_Params params {};
		params.AIType = AIType;
		params.bForceShattered = bForceShattered;
		params.PathName = PathName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAINearPlayer
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::SpawnAINearPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAINearPlayer");
		
		UAIManagementSystem_SpawnAINearPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAIFar
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::SpawnAIFar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIFar");
		
		UAIManagementSystem_SpawnAIFar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAIAtSpawnPointWithSubType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFNAFAISpawnPoint*                           SpawnPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFAISubType                                     forceAISubType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SpawnAIAtSpawnPointWithSubType(class AFNAFAISpawnPoint* SpawnPoint, EFNAFAISubType forceAISubType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIAtSpawnPointWithSubType");
		
		UAIManagementSystem_SpawnAIAtSpawnPointWithSubType_Params params {};
		params.SpawnPoint = SpawnPoint;
		params.forceAISubType = forceAISubType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAIAtSpawnPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFNAFAISpawnPoint*                           SpawnPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceShattered                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SpawnAIAtSpawnPoint(class AFNAFAISpawnPoint* SpawnPoint, bool bForceShattered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIAtSpawnPoint");
		
		UAIManagementSystem_SpawnAIAtSpawnPoint_Params params {};
		params.SpawnPoint = SpawnPoint;
		params.bForceShattered = bForceShattered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAIAtDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SpawnAIAtDistance(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIAtDistance");
		
		UAIManagementSystem_SpawnAIAtDistance_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SetWorldSpawnEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SetWorldSpawnEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetWorldSpawnEnabled");
		
		UAIManagementSystem_SetWorldSpawnEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SetVanessaSpawnEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SetVanessaSpawnEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetVanessaSpawnEnable");
		
		UAIManagementSystem_SetVanessaSpawnEnable_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SetUseStagedSpawns
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SetUseStagedSpawns(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetUseStagedSpawns");
		
		UAIManagementSystem_SetUseStagedSpawns_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SetSpawningEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SetSpawningEnabled(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetSpawningEnabled");
		
		UAIManagementSystem_SetSpawningEnabled_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SetExpectedAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAnimatronicExpectedData>            AITypes                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SetExpectedAI(TArray<struct FAnimatronicExpectedData> AITypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetExpectedAI");
		
		UAIManagementSystem_SetExpectedAI_Params params {};
		params.AITypes = AITypes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SetAllAIExpected
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::SetAllAIExpected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetAllAIExpected");
		
		UAIManagementSystem_SetAllAIExpected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SetAITeleportEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SetAITeleportEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetAITeleportEnabled");
		
		UAIManagementSystem_SetAITeleportEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SendVanessaAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EFNAFAISpawnType>                           TypesToAlert                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumberToAlert                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SendVanessaAlert(TArray<EFNAFAISpawnType> TypesToAlert, int32_t NumberToAlert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SendVanessaAlert");
		
		UAIManagementSystem_SendVanessaAlert_Params params {};
		params.TypesToAlert = TypesToAlert;
		params.NumberToAlert = NumberToAlert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.SendGeneralAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     AlertLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAnimatronicTypeData>                TypesToAlert                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumberToAlert                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SendGeneralAlert(const struct FVector& AlertLocation, TArray<struct FAnimatronicTypeData> TypesToAlert, int32_t NumberToAlert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SendGeneralAlert");
		
		UAIManagementSystem_SendGeneralAlert_Params params {};
		params.AlertLocation = AlertLocation;
		params.TypesToAlert = TypesToAlert;
		params.NumberToAlert = NumberToAlert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.RespawnEndos
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::RespawnEndos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RespawnEndos");
		
		UAIManagementSystem_RespawnEndos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.RespawnAnimatronics
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::RespawnAnimatronics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RespawnAnimatronics");
		
		UAIManagementSystem_RespawnAnimatronics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.RespawnAllAI
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::RespawnAllAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RespawnAllAI");
		
		UAIManagementSystem_RespawnAllAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.Reset
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.Reset");
		
		UAIManagementSystem_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.RemoveExpectedAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::RemoveExpectedAI(EFNAFAISpawnType AIType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RemoveExpectedAI");
		
		UAIManagementSystem_RemoveExpectedAI_Params params {};
		params.AIType = AIType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.RemoveCharacterByType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::RemoveCharacterByType(EFNAFAISpawnType AIType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RemoveCharacterByType");
		
		UAIManagementSystem_RemoveCharacterByType_Params params {};
		params.AIType = AIType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.RemoveAllCharacters
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::RemoveAllCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RemoveAllCharacters");
		
		UAIManagementSystem_RemoveAllCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.RegisterSeekerPath
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::RegisterSeekerPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RegisterSeekerPath");
		
		UAIManagementSystem_RegisterSeekerPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.RegisterAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::RegisterAI(class APawn* AIPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RegisterAI");
		
		UAIManagementSystem_RegisterAI_Params params {};
		params.AIPawn = AIPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.PawnExitedRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::PawnExitedRoom(class APawn* AIPawn, class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.PawnExitedRoom");
		
		UAIManagementSystem_PawnExitedRoom_Params params {};
		params.AIPawn = AIPawn;
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.PawnEnteringRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::PawnEnteringRoom(class APawn* AIPawn, class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.PawnEnteringRoom");
		
		UAIManagementSystem_PawnEnteringRoom_Params params {};
		params.AIPawn = AIPawn;
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.PawnEnteredRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::PawnEnteredRoom(class APawn* AIPawn, class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.PawnEnteredRoom");
		
		UAIManagementSystem_PawnEnteredRoom_Params params {};
		params.AIPawn = AIPawn;
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.PauseManager
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::PauseManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.PauseManager");
		
		UAIManagementSystem_PauseManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.OnWorldStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFGameState                                     NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFGameState                                     OldState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::OnWorldStateChanged(EFNAFGameState NewState, EFNAFGameState OldState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.OnWorldStateChanged");
		
		UAIManagementSystem_OnWorldStateChanged_Params params {};
		params.NewState = NewState;
		params.OldState = OldState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.OnVannyPathsCollected
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::OnVannyPathsCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.OnVannyPathsCollected");
		
		UAIManagementSystem_OnVannyPathsCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.OnPawnEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedPawn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::OnPawnEndPlay(class AActor* DestroyedPawn, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.OnPawnEndPlay");
		
		UAIManagementSystem_OnPawnEndPlay_Params params {};
		params.DestroyedPawn = DestroyedPawn;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.OnAIFellOutOfWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::OnAIFellOutOfWorld(class APawn* AIPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.OnAIFellOutOfWorld");
		
		UAIManagementSystem_OnAIFellOutOfWorld_Params params {};
		params.AIPawn = AIPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.OnAIEnvQueryInfoLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAssetData>                          AssetDataList                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::OnAIEnvQueryInfoLoaded(TArray<struct FAssetData> AssetDataList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.OnAIEnvQueryInfoLoaded");
		
		UAIManagementSystem_OnAIEnvQueryInfoLoaded_Params params {};
		params.AssetDataList = AssetDataList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.OnAICharacterInfoLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAssetData>                          AssetDataList                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::OnAICharacterInfoLoaded(TArray<struct FAssetData> AssetDataList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.OnAICharacterInfoLoaded");
		
		UAIManagementSystem_OnAICharacterInfoLoaded_Params params {};
		params.AssetDataList = AssetDataList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.IsWorldSpawnEnabled
	 * 		Flags  -> ()
	 */
	bool UAIManagementSystem::IsWorldSpawnEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsWorldSpawnEnabled");
		
		UAIManagementSystem_IsWorldSpawnEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.IsUsingStagedSpawns
	 * 		Flags  -> ()
	 */
	bool UAIManagementSystem::IsUsingStagedSpawns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsUsingStagedSpawns");
		
		UAIManagementSystem_IsUsingStagedSpawns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.IsSpawningEnabled
	 * 		Flags  -> ()
	 */
	bool UAIManagementSystem::IsSpawningEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsSpawningEnabled");
		
		UAIManagementSystem_IsSpawningEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.IsRoomOccupied
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIManagementSystem::IsRoomOccupied(class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsRoomOccupied");
		
		UAIManagementSystem_IsRoomOccupied_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.IsRoomBeingEntered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIManagementSystem::IsRoomBeingEntered(class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsRoomBeingEntered");
		
		UAIManagementSystem_IsRoomBeingEntered_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.IsAITeleportEnabled
	 * 		Flags  -> ()
	 */
	bool UAIManagementSystem::IsAITeleportEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsAITeleportEnabled");
		
		UAIManagementSystem_IsAITeleportEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetTimeSinceLastEncounter
	 * 		Flags  -> ()
	 */
	float UAIManagementSystem::GetTimeSinceLastEncounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetTimeSinceLastEncounter");
		
		UAIManagementSystem_GetTimeSinceLastEncounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetRoomDistancesToPlayer
	 * 		Flags  -> ()
	 */
	TMap<class APawn*, int32_t> UAIManagementSystem::GetRoomDistancesToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetRoomDistancesToPlayer");
		
		UAIManagementSystem_GetRoomDistancesToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetRoomAIPawnIsIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ARoomAreaBase* UAIManagementSystem::GetRoomAIPawnIsIn(class APawn* AIPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetRoomAIPawnIsIn");
		
		UAIManagementSystem_GetRoomAIPawnIsIn_Params params {};
		params.AIPawn = AIPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetRoomAIPawnIsEntering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ARoomAreaBase* UAIManagementSystem::GetRoomAIPawnIsEntering(class APawn* AIPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetRoomAIPawnIsEntering");
		
		UAIManagementSystem_GetRoomAIPawnIsEntering_Params params {};
		params.AIPawn = AIPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetPawnForType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::GetPawnForType(EFNAFAISpawnType AIType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetPawnForType");
		
		UAIManagementSystem_GetPawnForType_Params params {};
		params.AIType = AIType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetPawnClassForTypeAndSubType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFAISubType                                     forceAISubType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UAIManagementSystem::GetPawnClassForTypeAndSubType(EFNAFAISpawnType AIType, EFNAFAISubType forceAISubType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetPawnClassForTypeAndSubType");
		
		UAIManagementSystem_GetPawnClassForTypeAndSubType_Params params {};
		params.AIType = AIType;
		params.forceAISubType = forceAISubType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetPawnClassForType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceShattered                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UAIManagementSystem::GetPawnClassForType(EFNAFAISpawnType AIType, bool bForceShattered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetPawnClassForType");
		
		UAIManagementSystem_GetPawnClassForType_Params params {};
		params.AIType = AIType;
		params.bForceShattered = bForceShattered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetPathForAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::GetPathForAI(EFNAFAISpawnType AIType, const class FName& PathName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetPathForAI");
		
		UAIManagementSystem_GetPathForAI_Params params {};
		params.AIType = AIType;
		params.PathName = PathName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetPathByNameForAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::GetPathByNameForAI(const class FName& PathName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetPathByNameForAI");
		
		UAIManagementSystem_GetPathByNameForAI_Params params {};
		params.PathName = PathName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetExistingPawnTypes
	 * 		Flags  -> ()
	 */
	TArray<EFNAFAISpawnType> UAIManagementSystem::GetExistingPawnTypes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetExistingPawnTypes");
		
		UAIManagementSystem_GetExistingPawnTypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetExistingPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               RequireShattered                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::GetExistingPawn(EFNAFAISpawnType AIType, bool RequireShattered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetExistingPawn");
		
		UAIManagementSystem_GetExistingPawn_Params params {};
		params.AIType = AIType;
		params.RequireShattered = RequireShattered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetCurrentVannyMeterValuesAsPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OutCurrentValuePercent                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutSoftMaxPercent                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::GetCurrentVannyMeterValuesAsPercentage(float* OutCurrentValuePercent, float* OutSoftMaxPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetCurrentVannyMeterValuesAsPercentage");
		
		UAIManagementSystem_GetCurrentVannyMeterValuesAsPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCurrentValuePercent != nullptr)
			*OutCurrentValuePercent = params.OutCurrentValuePercent;
		if (OutSoftMaxPercent != nullptr)
			*OutSoftMaxPercent = params.OutSoftMaxPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetCurrentVannyMeterValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Max                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SoftMax                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::GetCurrentVannyMeterValues(float* CurrentValue, float* Max, float* SoftMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetCurrentVannyMeterValues");
		
		UAIManagementSystem_GetCurrentVannyMeterValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentValue != nullptr)
			*CurrentValue = params.CurrentValue;
		if (Max != nullptr)
			*Max = params.Max;
		if (SoftMax != nullptr)
			*SoftMax = params.SoftMax;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetCurrentVannyMeterPercentage
	 * 		Flags  -> ()
	 */
	float UAIManagementSystem::GetCurrentVannyMeterPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetCurrentVannyMeterPercentage");
		
		UAIManagementSystem_GetCurrentVannyMeterPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetCachedDistances
	 * 		Flags  -> ()
	 */
	TArray<struct FAIDistanceResult> UAIManagementSystem::GetCachedDistances()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetCachedDistances");
		
		UAIManagementSystem_GetCachedDistances_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetCachedDistanceFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutResultValid                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAIDistanceResult                           OutResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::GetCachedDistanceFor(class APawn* Pawn, bool* bOutResultValid, struct FAIDistanceResult* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetCachedDistanceFor");
		
		UAIManagementSystem_GetCachedDistanceFor_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutResultValid != nullptr)
			*bOutResultValid = params.bOutResultValid;
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAllSpawnPointsFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AFNAFAISpawnPoint*> UAIManagementSystem::GetAllSpawnPointsFor(EFNAFAISpawnType AIType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllSpawnPointsFor");
		
		UAIManagementSystem_GetAllSpawnPointsFor_Params params {};
		params.AIType = AIType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAllSpawnPoints
	 * 		Flags  -> ()
	 */
	TArray<class AFNAFAISpawnPoint*> UAIManagementSystem::GetAllSpawnPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllSpawnPoints");
		
		UAIManagementSystem_GetAllSpawnPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAllRegisteredAI
	 * 		Flags  -> ()
	 */
	TArray<class APawn*> UAIManagementSystem::GetAllRegisteredAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllRegisteredAI");
		
		UAIManagementSystem_GetAllRegisteredAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAllAnimatronicPawns
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class APawn*>                               OutAnimatronicPawns                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::GetAllAnimatronicPawns(TArray<class APawn*>* OutAnimatronicPawns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllAnimatronicPawns");
		
		UAIManagementSystem_GetAllAnimatronicPawns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAnimatronicPawns != nullptr)
			*OutAnimatronicPawns = params.OutAnimatronicPawns;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAllAIInRoomAtMost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            numRooms                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class APawn*> UAIManagementSystem::GetAllAIInRoomAtMost(int32_t numRooms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllAIInRoomAtMost");
		
		UAIManagementSystem_GetAllAIInRoomAtMost_Params params {};
		params.numRooms = numRooms;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAllAI
	 * 		Flags  -> ()
	 */
	TArray<class APawn*> UAIManagementSystem::GetAllAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllAI");
		
		UAIManagementSystem_GetAllAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAIPawnsWithSightToPlayer
	 * 		Flags  -> ()
	 */
	TArray<class APawn*> UAIManagementSystem::GetAIPawnsWithSightToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAIPawnsWithSightToPlayer");
		
		UAIManagementSystem_GetAIPawnsWithSightToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAIPawnsEnteringRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class APawn*> UAIManagementSystem::GetAIPawnsEnteringRoom(class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAIPawnsEnteringRoom");
		
		UAIManagementSystem_GetAIPawnsEnteringRoom_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAIPawnInRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class APawn*> UAIManagementSystem::GetAIPawnInRoom(class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAIPawnInRoom");
		
		UAIManagementSystem_GetAIPawnInRoom_Params params {};
		params.Room = Room;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.FindSpawnPointClosestToDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AFNAFAISpawnPoint* UAIManagementSystem::FindSpawnPointClosestToDistance(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindSpawnPointClosestToDistance");
		
		UAIManagementSystem_FindSpawnPointClosestToDistance_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.FindSpawnNotVisibleAtDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFAISpawnType                                   SpawnType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       PawnForNavProperties                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AFNAFAISpawnPoint*>                   OutSpawnPointsResult                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutDistances                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::FindSpawnNotVisibleAtDistance(float Distance, EFNAFAISpawnType SpawnType, class APawn* PawnForNavProperties, TArray<class AFNAFAISpawnPoint*>* OutSpawnPointsResult, TArray<float>* OutDistances, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindSpawnNotVisibleAtDistance");
		
		UAIManagementSystem_FindSpawnNotVisibleAtDistance_Params params {};
		params.Distance = Distance;
		params.SpawnType = SpawnType;
		params.PawnForNavProperties = PawnForNavProperties;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSpawnPointsResult != nullptr)
			*OutSpawnPointsResult = params.OutSpawnPointsResult;
		if (OutDistances != nullptr)
			*OutDistances = params.OutDistances;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.FindRandomPatrolPointOutOfView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFAISpawnType                                   AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIManagementSystem::FindRandomPatrolPointOutOfView(EFNAFAISpawnType AIType, struct FVector* OutLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindRandomPatrolPointOutOfView");
		
		UAIManagementSystem_FindRandomPatrolPointOutOfView_Params params {};
		params.AIType = AIType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.FindFurthestSpawnPoint
	 * 		Flags  -> ()
	 */
	class AFNAFAISpawnPoint* UAIManagementSystem::FindFurthestSpawnPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindFurthestSpawnPoint");
		
		UAIManagementSystem_FindFurthestSpawnPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.FindClosestSpawnPoint
	 * 		Flags  -> ()
	 */
	class AFNAFAISpawnPoint* UAIManagementSystem::FindClosestSpawnPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindClosestSpawnPoint");
		
		UAIManagementSystem_FindClosestSpawnPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.FindClosestPatrolPointOutOfView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutResultValid                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentActionInfo                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutPointIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::FindClosestPatrolPointOutOfView(class APawn* AIPawn, bool* bOutResultValid, struct FVector* OutLocation, const struct FLatentActionInfo& LatentActionInfo, int32_t* OutPointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindClosestPatrolPointOutOfView");
		
		UAIManagementSystem_FindClosestPatrolPointOutOfView_Params params {};
		params.AIPawn = AIPawn;
		params.LatentActionInfo = LatentActionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutResultValid != nullptr)
			*bOutResultValid = params.bOutResultValid;
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		if (OutPointIndex != nullptr)
			*OutPointIndex = params.OutPointIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.FindClosestPathPointForAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OutResultValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutPointIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::FindClosestPathPointForAI(class APawn* AIPawn, bool* OutResultValid, int32_t* OutPointIndex, struct FVector* OutLocation, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindClosestPathPointForAI");
		
		UAIManagementSystem_FindClosestPathPointForAI_Params params {};
		params.AIPawn = AIPawn;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResultValid != nullptr)
			*OutResultValid = params.OutResultValid;
		if (OutPointIndex != nullptr)
			*OutPointIndex = params.OutPointIndex;
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.ExitedHiding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::ExitedHiding(class APawn* AIPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.ExitedHiding");
		
		UAIManagementSystem_ExitedHiding_Params params {};
		params.AIPawn = AIPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.DoNotDespawnAIDuringMoonmanPhase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDoNotDestroy                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::DoNotDespawnAIDuringMoonmanPhase(bool bDoNotDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.DoNotDespawnAIDuringMoonmanPhase");
		
		UAIManagementSystem_DoNotDespawnAIDuringMoonmanPhase_Params params {};
		params.bDoNotDestroy = bDoNotDestroy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.DestroyAllAINotVisible
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::DestroyAllAINotVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.DestroyAllAINotVisible");
		
		UAIManagementSystem_DestroyAllAINotVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.DestroyAllAIInRoomsAtleast
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RoomDist                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::DestroyAllAIInRoomsAtleast(int32_t RoomDist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.DestroyAllAIInRoomsAtleast");
		
		UAIManagementSystem_DestroyAllAIInRoomsAtleast_Params params {};
		params.RoomDist = RoomDist;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.DestroyAllAI
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::DestroyAllAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.DestroyAllAI");
		
		UAIManagementSystem_DestroyAllAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.ClearExpectedAI
	 * 		Flags  -> ()
	 */
	void UAIManagementSystem::ClearExpectedAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.ClearExpectedAI");
		
		UAIManagementSystem_ClearExpectedAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.CalculateAllAIDistances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAIDistanceResult>                   DistanceResults                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutClosestIsValid                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ClosestIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::CalculateAllAIDistances(TArray<struct FAIDistanceResult>* DistanceResults, bool* bOutClosestIsValid, int32_t* ClosestIndex, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.CalculateAllAIDistances");
		
		UAIManagementSystem_CalculateAllAIDistances_Params params {};
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DistanceResults != nullptr)
			*DistanceResults = params.DistanceResults;
		if (bOutClosestIsValid != nullptr)
			*bOutClosestIsValid = params.bOutClosestIsValid;
		if (ClosestIndex != nullptr)
			*ClosestIndex = params.ClosestIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.ApplySound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::ApplySound(float Strength, const struct FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.ApplySound");
		
		UAIManagementSystem_ApplySound_Params params {};
		params.Strength = Strength;
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.ApplyCollect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::ApplyCollect(const struct FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.ApplyCollect");
		
		UAIManagementSystem_ApplyCollect_Params params {};
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.AnyPawnInPlayerRoom
	 * 		Flags  -> ()
	 */
	bool UAIManagementSystem::AnyPawnInPlayerRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.AnyPawnInPlayerRoom");
		
		UAIManagementSystem_AnyPawnInPlayerRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.AISpottedPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::AISpottedPlayer(class APawn* AIPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.AISpottedPlayer");
		
		UAIManagementSystem_AISpottedPlayer_Params params {};
		params.AIPawn = AIPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.AILostSightOfPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::AILostSightOfPlayer(class APawn* AIPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.AILostSightOfPlayer");
		
		UAIManagementSystem_AILostSightOfPlayer_Params params {};
		params.AIPawn = AIPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.AdjustVannyMeter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::AdjustVannyMeter(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.AdjustVannyMeter");
		
		UAIManagementSystem_AdjustVannyMeter_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AIManagementSystem.AddExpectedAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnimatronicExpectedData                    AIType                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::AddExpectedAI(const struct FAnimatronicExpectedData& AIType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.AddExpectedAI");
		
		UAIManagementSystem_AddExpectedAI_Params params {};
		params.AIType = AIType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIManagementSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIManagementSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.AIManagementSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PathPointProvider.SetPointType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PointType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPathPointProvider::SetPointType(int32_t PointIndex, int32_t PointType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.SetPointType");
		
		UPathPointProvider_SetPointType_Params params {};
		params.PointIndex = PointIndex;
		params.PointType = PointType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PathPointProvider.SetPointLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPathPointProvider::SetPointLocation(int32_t PointIndex, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.SetPointLocation");
		
		UPathPointProvider_SetPointLocation_Params params {};
		params.PointIndex = PointIndex;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PathPointProvider.RemovePointConnection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PointToDisconnectIndex                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPathPointProvider::RemovePointConnection(int32_t PointIndex, int32_t PointToDisconnectIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.RemovePointConnection");
		
		UPathPointProvider_RemovePointConnection_Params params {};
		params.PointIndex = PointIndex;
		params.PointToDisconnectIndex = PointToDisconnectIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PathPointProvider.RemovePoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPathPointProvider::RemovePoint(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.RemovePoint");
		
		UPathPointProvider_RemovePoint_Params params {};
		params.PointIndex = PointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PathPointProvider.GetPointType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPathPointProvider::GetPointType(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetPointType");
		
		UPathPointProvider_GetPointType_Params params {};
		params.PointIndex = PointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PathPointProvider.GetPointsConnectedTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> UPathPointProvider::GetPointsConnectedTo(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetPointsConnectedTo");
		
		UPathPointProvider_GetPointsConnectedTo_Params params {};
		params.PointIndex = PointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PathPointProvider.GetPointLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UPathPointProvider::GetPointLocation(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetPointLocation");
		
		UPathPointProvider_GetPointLocation_Params params {};
		params.PointIndex = PointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PathPointProvider.GetPointColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UPathPointProvider::GetPointColor(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetPointColor");
		
		UPathPointProvider_GetPointColor_Params params {};
		params.PointIndex = PointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PathPointProvider.GetNumberOfPathPoints
	 * 		Flags  -> ()
	 */
	int32_t UPathPointProvider::GetNumberOfPathPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetNumberOfPathPoints");
		
		UPathPointProvider_GetNumberOfPathPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PathPointProvider.GetAvailablePointTypes
	 * 		Flags  -> ()
	 */
	TArray<class FText> UPathPointProvider::GetAvailablePointTypes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetAvailablePointTypes");
		
		UPathPointProvider_GetAvailablePointTypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PathPointProvider.AddPointConnection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PointToConnectIndex                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPathPointProvider::AddPointConnection(int32_t PointIndex, int32_t PointToConnectIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.AddPointConnection");
		
		UPathPointProvider_AddPointConnection_Params params {};
		params.PointIndex = PointIndex;
		params.PointToConnectIndex = PointToConnectIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PathPointProvider.AddPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPathPointProvider::AddPoint(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.AddPoint");
		
		UPathPointProvider_AddPoint_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPathPointProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathPointProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.PathPointProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPathComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPathComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.AIPathComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnPointComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnPointComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.AISpawnPointComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AISpawnSystem.OnRollChange
	 * 		Flags  -> ()
	 */
	void AAISpawnSystem::OnRollChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AISpawnSystem.OnRollChange");
		
		AAISpawnSystem_OnRollChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAISpawnSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAISpawnSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.AISpawnSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PlayerTrigger.SetTriggerActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlayerTrigger::SetTriggerActive(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.SetTriggerActive");
		
		APlayerTrigger_SetTriggerActive_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PlayerTrigger.SaveActivated
	 * 		Flags  -> ()
	 */
	void APlayerTrigger::SaveActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.SaveActivated");
		
		APlayerTrigger_SaveActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PlayerTrigger.OnWorldObjectStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ObjectName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ObjectState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlayerTrigger::OnWorldObjectStateChanged(const class FName& ObjectName, bool ObjectState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.OnWorldObjectStateChanged");
		
		APlayerTrigger_OnWorldObjectStateChanged_Params params {};
		params.ObjectName = ObjectName;
		params.ObjectState = ObjectState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PlayerTrigger.OnTriggerStay
	 * 		Flags  -> ()
	 */
	void APlayerTrigger::OnTriggerStay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.OnTriggerStay");
		
		APlayerTrigger_OnTriggerStay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PlayerTrigger.OnTriggered
	 * 		Flags  -> ()
	 */
	void APlayerTrigger::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.OnTriggered");
		
		APlayerTrigger_OnTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PlayerTrigger.IsTriggerStateSet
	 * 		Flags  -> ()
	 */
	bool APlayerTrigger::IsTriggerStateSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.IsTriggerStateSet");
		
		APlayerTrigger_IsTriggerStateSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PlayerTrigger.IsTriggerActive
	 * 		Flags  -> ()
	 */
	bool APlayerTrigger::IsTriggerActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.IsTriggerActive");
		
		APlayerTrigger_IsTriggerActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PlayerTrigger.ForceTrigger
	 * 		Flags  -> ()
	 */
	void APlayerTrigger::ForceTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.ForceTrigger");
		
		APlayerTrigger_ForceTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PlayerTrigger.CanTrigger
	 * 		Flags  -> ()
	 */
	bool APlayerTrigger::CanTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.CanTrigger");
		
		APlayerTrigger_CanTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayerTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.PlayerTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AISpawnTrigger.OnAISpawnedFailure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       SpawnedPawn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAISpawnTrigger::OnAISpawnedFailure(class APawn* SpawnedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AISpawnTrigger.OnAISpawnedFailure");
		
		AAISpawnTrigger_OnAISpawnedFailure_Params params {};
		params.SpawnedPawn = SpawnedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AISpawnTrigger.OnAISpawned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       SpawnedPawn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAISpawnTrigger::OnAISpawned(class APawn* SpawnedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AISpawnTrigger.OnAISpawned");
		
		AAISpawnTrigger_OnAISpawned_Params params {};
		params.SpawnedPawn = SpawnedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAISpawnTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAISpawnTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.AISpawnTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISystemSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISystemSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.AISystemSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFAICharacterInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFAICharacterInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFAICharacterInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AudioUtil.RemoveWwiseListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioUtil::RemoveWwiseListener(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AudioUtil.RemoveWwiseListener");
		
		UAudioUtil_RemoveWwiseListener_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AudioUtil.IsAudioForActorPlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAudioUtil::IsAudioForActorPlaying(class UObject* WorldContextObject, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AudioUtil.IsAudioForActorPlaying");
		
		UAudioUtil_IsAudioForActorPlaying_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AudioUtil.GetWwiseListeners
	 * 		Flags  -> ()
	 */
	void UAudioUtil::GetWwiseListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AudioUtil.GetWwiseListeners");
		
		UAudioUtil_GetWwiseListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AudioUtil.AddWwiseListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioUtil::AddWwiseListener(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AudioUtil.AddWwiseListener");
		
		UAudioUtil_AddWwiseListener_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioUtil.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioUtil::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.AudioUtil");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABallPitVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABallPitVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.BallPitVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.CameraHelperFunctions.IsLocationInCameraView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECameraAngleFlags                                  CameraAngles                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutHorizontalAngle                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutVerticalAngle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCameraHelperFunctions::IsLocationInCameraView(class UObject* WorldContextObject, const struct FVector& Location, ECameraAngleFlags CameraAngles, float* OutHorizontalAngle, float* OutVerticalAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.CameraHelperFunctions.IsLocationInCameraView");
		
		UCameraHelperFunctions_IsLocationInCameraView_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		params.CameraAngles = CameraAngles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHorizontalAngle != nullptr)
			*OutHorizontalAngle = params.OutHorizontalAngle;
		if (OutVerticalAngle != nullptr)
			*OutVerticalAngle = params.OutVerticalAngle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.CameraHelperFunctions.GetLocationAnglesFromCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutHorizontalAngle                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutVerticalAngle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraHelperFunctions::GetLocationAnglesFromCamera(class UObject* WorldContextObject, const struct FVector& Location, float* OutHorizontalAngle, float* OutVerticalAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.CameraHelperFunctions.GetLocationAnglesFromCamera");
		
		UCameraHelperFunctions_GetLocationAnglesFromCamera_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHorizontalAngle != nullptr)
			*OutHorizontalAngle = params.OutHorizontalAngle;
		if (OutVerticalAngle != nullptr)
			*OutVerticalAngle = params.OutVerticalAngle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraHelperFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraHelperFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.CameraHelperFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.CameraTrigger.GetAlertType
	 * 		Flags  -> ()
	 */
	EAlertType UCameraTrigger::GetAlertType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.CameraTrigger.GetAlertType");
		
		UCameraTrigger_GetAlertType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.CameraTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ChowdaDebugSubsystem.SpawnDLCRabbit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAnimatronicTypeData>                TypesToAlertIn                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UChowdaDebugSubsystem::SpawnDLCRabbit(TArray<struct FAnimatronicTypeData> TypesToAlertIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ChowdaDebugSubsystem.SpawnDLCRabbit");
		
		UChowdaDebugSubsystem_SpawnDLCRabbit_Params params {};
		params.TypesToAlertIn = TypesToAlertIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ChowdaDebugSubsystem.GoToThisArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapArea                                           MapArea                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChowdaDebugSubsystem::GoToThisArea(EMapArea MapArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ChowdaDebugSubsystem.GoToThisArea");
		
		UChowdaDebugSubsystem_GoToThisArea_Params params {};
		params.MapArea = MapArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChowdaDebugSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChowdaDebugSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.ChowdaDebugSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ChowdaPawnInterface_DLC.ForceEject
	 * 		Flags  -> ()
	 */
	void UChowdaPawnInterface_DLC::ForceEject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ChowdaPawnInterface_DLC.ForceEject");
		
		UChowdaPawnInterface_DLC_ForceEject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChowdaPawnInterface_DLC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChowdaPawnInterface_DLC::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.ChowdaPawnInterface_DLC");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ChowdaUtils.ResetInputsToDefaults
	 * 		Flags  -> ()
	 */
	class UInputSettings* UChowdaUtils::ResetInputsToDefaults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ChowdaUtils.ResetInputsToDefaults");
		
		UChowdaUtils_ResetInputsToDefaults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ChowdaUtils.IsPlayInEditor
	 * 		Flags  -> ()
	 */
	bool UChowdaUtils::IsPlayInEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ChowdaUtils.IsPlayInEditor");
		
		UChowdaUtils_IsPlayInEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ChowdaUtils.DoInputMappingsMatch
	 * 		Flags  -> ()
	 */
	bool UChowdaUtils::DoInputMappingsMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ChowdaUtils.DoInputMappingsMatch");
		
		UChowdaUtils_DoInputMappingsMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChowdaUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChowdaUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.ChowdaUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ConditionalCheckComponent.OnConditionUpdated
	 * 		Flags  -> ()
	 */
	void UConditionalCheckComponent::OnConditionUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionalCheckComponent.OnConditionUpdated");
		
		UConditionalCheckComponent_OnConditionUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionalCheckComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionalCheckComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.ConditionalCheckComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ConditionCheckInterface.UnbindConditionUpdatedDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnConditionResultUpdated                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UConditionCheckInterface::UnbindConditionUpdatedDelegate(const class FScriptDelegate& OnConditionResultUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionCheckInterface.UnbindConditionUpdatedDelegate");
		
		UConditionCheckInterface_UnbindConditionUpdatedDelegate_Params params {};
		params.OnConditionResultUpdated = OnConditionResultUpdated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ConditionCheckInterface.ConditionsMet
	 * 		Flags  -> ()
	 */
	bool UConditionCheckInterface::ConditionsMet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionCheckInterface.ConditionsMet");
		
		UConditionCheckInterface_ConditionsMet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ConditionCheckInterface.BindConditionUpdatedDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnConditionResultUpdated                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UConditionCheckInterface::BindConditionUpdatedDelegate(const class FScriptDelegate& OnConditionResultUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionCheckInterface.BindConditionUpdatedDelegate");
		
		UConditionCheckInterface_BindConditionUpdatedDelegate_Params params {};
		params.OnConditionResultUpdated = OnConditionResultUpdated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionCheckInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionCheckInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.ConditionCheckInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ConditionFunctionLibrary.RemoveConditionDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FConditionResultDelegates                   DelegateHandle                                             (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UConditionFunctionLibrary::RemoveConditionDelegate(struct FConditionResultDelegates* DelegateHandle, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.RemoveConditionDelegate");
		
		UConditionFunctionLibrary_RemoveConditionDelegate_Params params {};
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DelegateHandle != nullptr)
			*DelegateHandle = params.DelegateHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditionsWithGet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToCheck                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutConditionsMet                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConditionFunctionLibrary::HasMetComponentConditionsWithGet(class AActor* ActorToCheck, bool* bOutConditionsMet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditionsWithGet");
		
		UConditionFunctionLibrary_HasMetComponentConditionsWithGet_Params params {};
		params.ActorToCheck = ActorToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutConditionsMet != nullptr)
			*bOutConditionsMet = params.bOutConditionsMet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToCheck                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConditionFunctionLibrary::HasMetComponentConditions(class AActor* ActorToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditions");
		
		UConditionFunctionLibrary_HasMetComponentConditions_Params params {};
		params.ActorToCheck = ActorToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ConditionFunctionLibrary.HasMetAnyComponentConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToCheck                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConditionFunctionLibrary::HasMetAnyComponentConditions(class AActor* ActorToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.HasMetAnyComponentConditions");
		
		UConditionFunctionLibrary_HasMetAnyComponentConditions_Params params {};
		params.ActorToCheck = ActorToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ConditionFunctionLibrary.CallConditionUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FConditionResultDelegates                   DelegateHandle                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UConditionFunctionLibrary::CallConditionUpdate(const struct FConditionResultDelegates& DelegateHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.CallConditionUpdate");
		
		UConditionFunctionLibrary_CallConditionUpdate_Params params {};
		params.DelegateHandle = DelegateHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ConditionFunctionLibrary.AddConditionDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FConditionResultDelegates                   DelegateHandle                                             (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UConditionFunctionLibrary::AddConditionDelegate(struct FConditionResultDelegates* DelegateHandle, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.AddConditionDelegate");
		
		UConditionFunctionLibrary_AddConditionDelegate_Params params {};
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DelegateHandle != nullptr)
			*DelegateHandle = params.DelegateHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConditionFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.ConditionFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.CounterpartProviderInterface.GetCounterPart
	 * 		Flags  -> ()
	 */
	class AActor* UCounterpartProviderInterface::GetCounterPart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.CounterpartProviderInterface.GetCounterPart");
		
		UCounterpartProviderInterface_GetCounterPart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCounterpartProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCounterpartProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.CounterpartProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADarkModePostProcessVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADarkModePostProcessVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.DarkModePostProcessVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DataTableUtils.GetAnimatronicVODataTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDataTable* UDataTableUtils::GetAnimatronicVODataTable(const class FName& RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DataTableUtils.GetAnimatronicVODataTable");
		
		UDataTableUtils_GetAnimatronicVODataTable_Params params {};
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataTableUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataTableUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.DataTableUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DLC_RabbitAlertUI.ShowSoftJumpscare
	 * 		Flags  -> ()
	 */
	void UDLC_RabbitAlertUI::ShowSoftJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DLC_RabbitAlertUI.ShowSoftJumpscare");
		
		UDLC_RabbitAlertUI_ShowSoftJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DLC_RabbitAlertUI.ShowRabbitFlicker
	 * 		Flags  -> ()
	 */
	void UDLC_RabbitAlertUI::ShowRabbitFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DLC_RabbitAlertUI.ShowRabbitFlicker");
		
		UDLC_RabbitAlertUI_ShowRabbitFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DLC_RabbitAlertUI.ShowAlert
	 * 		Flags  -> ()
	 */
	void UDLC_RabbitAlertUI::ShowAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DLC_RabbitAlertUI.ShowAlert");
		
		UDLC_RabbitAlertUI_ShowAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DLC_RabbitAlertUI.HideSoftJumpscare
	 * 		Flags  -> ()
	 */
	void UDLC_RabbitAlertUI::HideSoftJumpscare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DLC_RabbitAlertUI.HideSoftJumpscare");
		
		UDLC_RabbitAlertUI_HideSoftJumpscare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DLC_RabbitAlertUI.HideAlert
	 * 		Flags  -> ()
	 */
	void UDLC_RabbitAlertUI::HideAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DLC_RabbitAlertUI.HideAlert");
		
		UDLC_RabbitAlertUI_HideAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDLC_RabbitAlertUI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDLC_RabbitAlertUI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.DLC_RabbitAlertUI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DLC_RabbitEnemySequence.RequestStop
	 * 		Flags  -> ()
	 */
	void UDLC_RabbitEnemySequence::RequestStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DLC_RabbitEnemySequence.RequestStop");
		
		UDLC_RabbitEnemySequence_RequestStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDLC_RabbitEnemySequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDLC_RabbitEnemySequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.DLC_RabbitEnemySequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADLC_RabbitForbiddenZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADLC_RabbitForbiddenZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.DLC_RabbitForbiddenZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.SetSecurityLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewSecurityLevel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::SetSecurityLevel(int32_t NewSecurityLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetSecurityLevel");
		
		UDoorComponent_SetSecurityLevel_Params params {};
		params.NewSecurityLevel = NewSecurityLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.SetPlayerBlocker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InPlayerBlocker                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::SetPlayerBlocker(class UPrimitiveComponent* InPlayerBlocker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetPlayerBlocker");
		
		UDoorComponent_SetPlayerBlocker_Params params {};
		params.InPlayerBlocker = InPlayerBlocker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.SetLockedForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLocked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::SetLockedForPlayer(bool bLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetLockedForPlayer");
		
		UDoorComponent_SetLockedForPlayer_Params params {};
		params.bLocked = bLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.SetLockedForAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLocked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::SetLockedForAI(bool bLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetLockedForAI");
		
		UDoorComponent_SetLockedForAI_Params params {};
		params.bLocked = bLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.SetAutomaticDoorEnableForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::SetAutomaticDoorEnableForPlayer(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetAutomaticDoorEnableForPlayer");
		
		UDoorComponent_SetAutomaticDoorEnableForPlayer_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.SetAutomaticDoorEnableForAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::SetAutomaticDoorEnableForAI(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetAutomaticDoorEnableForAI");
		
		UDoorComponent_SetAutomaticDoorEnableForAI_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.PawnExitedDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::PawnExitedDoor(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.PawnExitedDoor");
		
		UDoorComponent_PawnExitedDoor_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.PawnEnteredDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::PawnEnteredDoor(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.PawnEnteredDoor");
		
		UDoorComponent_PawnEnteredDoor_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.IsLockedForPlayer
	 * 		Flags  -> ()
	 */
	bool UDoorComponent::IsLockedForPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.IsLockedForPlayer");
		
		UDoorComponent_IsLockedForPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.IsLockedForAI
	 * 		Flags  -> ()
	 */
	bool UDoorComponent::IsLockedForAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.IsLockedForAI");
		
		UDoorComponent_IsLockedForAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.HasMetConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AFNAFBasePlayerCharacter*                    BasePlayerCharacter                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConditionsMet                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EConditionFailReason                               FailReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::HasMetConditions(class AFNAFBasePlayerCharacter* BasePlayerCharacter, bool* bConditionsMet, EConditionFailReason* FailReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.HasMetConditions");
		
		UDoorComponent_HasMetConditions_Params params {};
		params.BasePlayerCharacter = BasePlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bConditionsMet != nullptr)
			*bConditionsMet = params.bConditionsMet;
		if (FailReason != nullptr)
			*FailReason = params.FailReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.HasDoorInitialized
	 * 		Flags  -> ()
	 */
	bool UDoorComponent::HasDoorInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.HasDoorInitialized");
		
		UDoorComponent_HasDoorInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.GetPawnsInDoor
	 * 		Flags  -> ()
	 */
	TArray<class APawn*> UDoorComponent::GetPawnsInDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetPawnsInDoor");
		
		UDoorComponent_GetPawnsInDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForPlayer
	 * 		Flags  -> ()
	 */
	bool UDoorComponent::GetIsAutomaticDoorEnabledForPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForPlayer");
		
		UDoorComponent_GetIsAutomaticDoorEnabledForPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForAI
	 * 		Flags  -> ()
	 */
	bool UDoorComponent::GetIsAutomaticDoorEnabledForAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForAI");
		
		UDoorComponent_GetIsAutomaticDoorEnabledForAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.GetDoorSideFromLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EDoorSide UDoorComponent::GetDoorSideFromLocation(const struct FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetDoorSideFromLocation");
		
		UDoorComponent_GetDoorSideFromLocation_Params params {};
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.GetDoorSideFromActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EDoorSide UDoorComponent::GetDoorSideFromActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetDoorSideFromActor");
		
		UDoorComponent_GetDoorSideFromActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.GetCurrentRequirements
	 * 		Flags  -> ()
	 */
	struct FDoorEntryRequirements UDoorComponent::GetCurrentRequirements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetCurrentRequirements");
		
		UDoorComponent_GetCurrentRequirements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.ForceOpen
	 * 		Flags  -> ()
	 */
	void UDoorComponent::ForceOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.ForceOpen");
		
		UDoorComponent_ForceOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.ForceClose
	 * 		Flags  -> ()
	 */
	void UDoorComponent::ForceClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.ForceClose");
		
		UDoorComponent_ForceClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.CopyConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDoorComponent*                              OtherDoorComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::CopyConditions(class UDoorComponent* OtherDoorComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.CopyConditions");
		
		UDoorComponent_CopyConditions_Params params {};
		params.OtherDoorComponent = OtherDoorComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorComponent.CanPawnOpenDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutConditionsMet                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EConditionFailReason                               OutFailReason                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::CanPawnOpenDoor(class APawn* Pawn, bool* bOutConditionsMet, EConditionFailReason* OutFailReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.CanPawnOpenDoor");
		
		UDoorComponent_CanPawnOpenDoor_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutConditionsMet != nullptr)
			*bOutConditionsMet = params.bOutConditionsMet;
		if (OutFailReason != nullptr)
			*OutFailReason = params.OutFailReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDoorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.DoorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorInteractor.OnOverlappedDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCanEnterDoor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EConditionFailReason                               CantEnterReason                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDoorComponent*                              DoorComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorInteractor::OnOverlappedDoor(bool bCanEnterDoor, EConditionFailReason CantEnterReason, class UDoorComponent* DoorComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorInteractor.OnOverlappedDoor");
		
		UDoorInteractor_OnOverlappedDoor_Params params {};
		params.bCanEnterDoor = bCanEnterDoor;
		params.CantEnterReason = CantEnterReason;
		params.DoorComponent = DoorComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorInteractor.OnEndOverlapDoor
	 * 		Flags  -> ()
	 */
	void UDoorInteractor::OnEndOverlapDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorInteractor.OnEndOverlapDoor");
		
		UDoorInteractor_OnEndOverlapDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DoorInteractor.DoorEntryNotAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDoorComponent*                              DoorComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDoorInteractor::DoorEntryNotAllowed(class UDoorComponent* DoorComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorInteractor.DoorEntryNotAllowed");
		
		UDoorInteractor_DoorEntryNotAllowed_Params params {};
		params.DoorComponent = DoorComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDoorInteractor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoorInteractor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.DoorInteractor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DownloadableContentHandler.HasMountedDLCPack
	 * 		Flags  -> ()
	 */
	bool UDownloadableContentHandler::HasMountedDLCPack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DownloadableContentHandler.HasMountedDLCPack");
		
		UDownloadableContentHandler_HasMountedDLCPack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DownloadableContentHandler.HasDLC
	 * 		Flags  -> ()
	 */
	bool UDownloadableContentHandler::HasDLC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DownloadableContentHandler.HasDLC");
		
		UDownloadableContentHandler_HasDLC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.DownloadableContentHandler.GetDLCPurchases
	 * 		Flags  -> ()
	 */
	TArray<class FString> UDownloadableContentHandler::GetDLCPurchases()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DownloadableContentHandler.GetDLCPurchases");
		
		UDownloadableContentHandler_GetDLCPurchases_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDownloadableContentHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownloadableContentHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.DownloadableContentHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_DLC_RabbitForbiddenZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_DLC_RabbitForbiddenZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.EnvQueryTest_DLC_RabbitForbiddenZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_ObjectSweep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_ObjectSweep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.EnvQueryTest_ObjectSweep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.ToggleFullAIDisplay
	 * 		Flags  -> ()
	 */
	void Afnaf9GameModeBase::ToggleFullAIDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.ToggleFullAIDisplay");
		
		Afnaf9GameModeBase_ToggleFullAIDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.StartRepairGame
	 * 		Flags  -> ()
	 */
	void Afnaf9GameModeBase::StartRepairGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.StartRepairGame");
		
		Afnaf9GameModeBase_StartRepairGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.SetAIDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::SetAIDisplay(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.SetAIDisplay");
		
		Afnaf9GameModeBase_SetAIDisplay_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.RoomHeatDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::RoomHeatDisplay(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.RoomHeatDisplay");
		
		Afnaf9GameModeBase_RoomHeatDisplay_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.POIVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::POIVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.POIVisible");
		
		Afnaf9GameModeBase_POIVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.POIDetectionVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::POIDetectionVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.POIDetectionVisible");
		
		Afnaf9GameModeBase_POIDetectionVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.PlayerFlashlightVis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::PlayerFlashlightVis(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.PlayerFlashlightVis");
		
		Afnaf9GameModeBase_PlayerFlashlightVis_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.OnRoomHeatDisplayChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::OnRoomHeatDisplayChanged(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.OnRoomHeatDisplayChanged");
		
		Afnaf9GameModeBase_OnRoomHeatDisplayChanged_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.OnPlayerFlashlightVis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::OnPlayerFlashlightVis(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.OnPlayerFlashlightVis");
		
		Afnaf9GameModeBase_OnPlayerFlashlightVis_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.OnForceSpawnVanny
	 * 		Flags  -> ()
	 */
	void Afnaf9GameModeBase::OnForceSpawnVanny()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.OnForceSpawnVanny");
		
		Afnaf9GameModeBase_OnForceSpawnVanny_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.OnAIPawnsVis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::OnAIPawnsVis(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.OnAIPawnsVis");
		
		Afnaf9GameModeBase_OnAIPawnsVis_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.IsAIDisplayOn
	 * 		Flags  -> ()
	 */
	bool Afnaf9GameModeBase::IsAIDisplayOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.IsAIDisplayOn");
		
		Afnaf9GameModeBase_IsAIDisplayOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.ForceSpawnVanny
	 * 		Flags  -> ()
	 */
	void Afnaf9GameModeBase::ForceSpawnVanny()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.ForceSpawnVanny");
		
		Afnaf9GameModeBase_ForceSpawnVanny_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.FinishRepairGame
	 * 		Flags  -> ()
	 */
	void Afnaf9GameModeBase::FinishRepairGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.FinishRepairGame");
		
		Afnaf9GameModeBase_FinishRepairGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.AIPawnsVis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::AIPawnsVis(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.AIPawnsVis");
		
		Afnaf9GameModeBase_AIPawnsVis_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Afnaf9GameModeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Afnaf9GameModeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.fnaf9GameModeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFAchievementUtils.GetAllAchievements
	 * 		Flags  -> ()
	 */
	TArray<class FName> UFNAFAchievementUtils::GetAllAchievements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFAchievementUtils.GetAllAchievements");
		
		UFNAFAchievementUtils_GetAllAchievements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFAchievementUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFAchievementUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFAchievementUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFAISpawnPoint.GetAIType
	 * 		Flags  -> ()
	 */
	EFNAFAISpawnType AFNAFAISpawnPoint::GetAIType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFAISpawnPoint.GetAIType");
		
		AFNAFAISpawnPoint_GetAIType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFNAFAISpawnPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFNAFAISpawnPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFAISpawnPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AnimatronicTypeDataBlueprintFunctionLibrary.GetFNAFAISpawnTypeArrayFromAnimatronicTypeDataArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAnimatronicTypeData>                SpawnTypes                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<EFNAFAISpawnType> UAnimatronicTypeDataBlueprintFunctionLibrary::GetFNAFAISpawnTypeArrayFromAnimatronicTypeDataArray(TArray<struct FAnimatronicTypeData> SpawnTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AnimatronicTypeDataBlueprintFunctionLibrary.GetFNAFAISpawnTypeArrayFromAnimatronicTypeDataArray");
		
		UAnimatronicTypeDataBlueprintFunctionLibrary_GetFNAFAISpawnTypeArrayFromAnimatronicTypeDataArray_Params params {};
		params.SpawnTypes = SpawnTypes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.AnimatronicTypeDataBlueprintFunctionLibrary.GetAnimatronicTypeDataArrayFromFNAFAISpawnTypeArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EFNAFAISpawnType>                           SpawnTypes                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EFNAFAISubType                                     SpawnSubType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FAnimatronicTypeData> UAnimatronicTypeDataBlueprintFunctionLibrary::GetAnimatronicTypeDataArrayFromFNAFAISpawnTypeArray(TArray<EFNAFAISpawnType> SpawnTypes, EFNAFAISubType SpawnSubType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AnimatronicTypeDataBlueprintFunctionLibrary.GetAnimatronicTypeDataArrayFromFNAFAISpawnTypeArray");
		
		UAnimatronicTypeDataBlueprintFunctionLibrary_GetAnimatronicTypeDataArrayFromFNAFAISpawnTypeArray_Params params {};
		params.SpawnTypes = SpawnTypes;
		params.SpawnSubType = SpawnSubType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimatronicTypeDataBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimatronicTypeDataBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.AnimatronicTypeDataBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBaseCharacter.OnFellOutOfWorld
	 * 		Flags  -> ()
	 */
	void AFNAFBaseCharacter::OnFellOutOfWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBaseCharacter.OnFellOutOfWorld");
		
		AFNAFBaseCharacter_OnFellOutOfWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFNAFBaseCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFNAFBaseCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFBaseCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFNAFBaseAICharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFNAFBaseAICharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFBaseAICharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayerWithCameraLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     CameraWorldLocation                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFNAFBasePlayerCharacter::TeleportPlayerWithCameraLocation(const struct FVector& CameraWorldLocation, float Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayerWithCameraLocation");
		
		AFNAFBasePlayerCharacter_TeleportPlayerWithCameraLocation_Params params {};
		params.CameraWorldLocation = CameraWorldLocation;
		params.Yaw = Yaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFNAFBasePlayerCharacter::TeleportPlayer(const struct FVector& WorldLocation, float Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayer");
		
		AFNAFBasePlayerCharacter_TeleportPlayer_Params params {};
		params.WorldLocation = WorldLocation;
		params.Yaw = Yaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBasePlayerCharacter.OnKillZLevelsLoaded
	 * 		Flags  -> ()
	 */
	void AFNAFBasePlayerCharacter::OnKillZLevelsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerCharacter.OnKillZLevelsLoaded");
		
		AFNAFBasePlayerCharacter_OnKillZLevelsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBasePlayerCharacter.GetPlayerPawnType
	 * 		Flags  -> ()
	 */
	EPlayerPawnType AFNAFBasePlayerCharacter::GetPlayerPawnType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerCharacter.GetPlayerPawnType");
		
		AFNAFBasePlayerCharacter_GetPlayerPawnType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBasePlayerCharacter.GetLastSavedLocationAndRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LastSavedLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    LastSavedRotation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AFNAFBasePlayerCharacter::GetLastSavedLocationAndRotation(struct FVector* LastSavedLocation, struct FRotator* LastSavedRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerCharacter.GetLastSavedLocationAndRotation");
		
		AFNAFBasePlayerCharacter_GetLastSavedLocationAndRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LastSavedLocation != nullptr)
			*LastSavedLocation = params.LastSavedLocation;
		if (LastSavedRotation != nullptr)
			*LastSavedRotation = params.LastSavedRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFNAFBasePlayerCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFNAFBasePlayerCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFBasePlayerCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.OnUsingGamepadChanged
	 * 		Flags  -> ()
	 */
	void AFNAFBasePlayerController::OnUsingGamepadChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnUsingGamepadChanged");
		
		AFNAFBasePlayerController_OnUsingGamepadChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.OnUnlockEverything
	 * 		Flags  -> ()
	 */
	void AFNAFBasePlayerController::OnUnlockEverything()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnUnlockEverything");
		
		AFNAFBasePlayerController_OnUnlockEverything_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.OnTriggerVannyScare
	 * 		Flags  -> ()
	 */
	void AFNAFBasePlayerController::OnTriggerVannyScare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnTriggerVannyScare");
		
		AFNAFBasePlayerController_OnTriggerVannyScare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.OnToggleLocalizationQA
	 * 		Flags  -> ()
	 */
	void AFNAFBasePlayerController::OnToggleLocalizationQA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnToggleLocalizationQA");
		
		AFNAFBasePlayerController_OnToggleLocalizationQA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.OnToggleFlightMode
	 * 		Flags  -> ()
	 */
	void AFNAFBasePlayerController::OnToggleFlightMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnToggleFlightMode");
		
		AFNAFBasePlayerController_OnToggleFlightMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.OnToggleDevUI
	 * 		Flags  -> ()
	 */
	void AFNAFBasePlayerController::OnToggleDevUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnToggleDevUI");
		
		AFNAFBasePlayerController_OnToggleDevUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.OnToggleCinemaMode
	 * 		Flags  -> ()
	 */
	void AFNAFBasePlayerController::OnToggleCinemaMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnToggleCinemaMode");
		
		AFNAFBasePlayerController_OnToggleCinemaMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.OnDebugSequenceEntered
	 * 		Flags  -> ()
	 */
	void AFNAFBasePlayerController::OnDebugSequenceEntered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnDebugSequenceEntered");
		
		AFNAFBasePlayerController_OnDebugSequenceEntered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.IsUsingGamepad
	 * 		Flags  -> ()
	 */
	bool AFNAFBasePlayerController::IsUsingGamepad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.IsUsingGamepad");
		
		AFNAFBasePlayerController_IsUsingGamepad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.GiveVIPAchievement
	 * 		Flags  -> ()
	 */
	void AFNAFBasePlayerController::GiveVIPAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.GiveVIPAchievement");
		
		AFNAFBasePlayerController_GiveVIPAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.GetCurrentKeysDown
	 * 		Flags  -> ()
	 */
	TArray<struct FKey> AFNAFBasePlayerController::GetCurrentKeysDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.GetCurrentKeysDown");
		
		AFNAFBasePlayerController_GetCurrentKeysDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.AnyOtherKeysDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AFNAFBasePlayerController::AnyOtherKeysDown(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.AnyOtherKeysDown");
		
		AFNAFBasePlayerController_AnyOtherKeysDown_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFNAFBasePlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFNAFBasePlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFBasePlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFCheatManager.UpgradeFreddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFreddyUpgradeType                                 Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFCheatManager::UpgradeFreddy(EFreddyUpgradeType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFCheatManager.UpgradeFreddy");
		
		UFNAFCheatManager_UpgradeFreddy_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFCheatManager.ToggleDebugCloaking
	 * 		Flags  -> ()
	 */
	void UFNAFCheatManager::ToggleDebugCloaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFCheatManager.ToggleDebugCloaking");
		
		UFNAFCheatManager_ToggleDebugCloaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFCheatManager.SetDebugCloaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFCheatManager::SetDebugCloaking(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFCheatManager.SetDebugCloaking");
		
		UFNAFCheatManager_SetDebugCloaking_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFCheatManager.GetDebugCloaking
	 * 		Flags  -> ()
	 */
	bool UFNAFCheatManager::GetDebugCloaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFCheatManager.GetDebugCloaking");
		
		UFNAFCheatManager_GetDebugCloaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFCheatManager.ApplyQualitySettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            VisualQualityLevel                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RayTraceQualityLevel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFCheatManager::ApplyQualitySettings(int32_t VisualQualityLevel, int32_t RayTraceQualityLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFCheatManager.ApplyQualitySettings");
		
		UFNAFCheatManager_ApplyQualitySettings_Params params {};
		params.VisualQualityLevel = VisualQualityLevel;
		params.RayTraceQualityLevel = RayTraceQualityLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFCheatManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFCheatManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFCheatManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveData.SetHourOfCheckpoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InHour                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveData::SetHourOfCheckpoint(int32_t InHour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveData.SetHourOfCheckpoint");
		
		UFNAFSaveData_SetHourOfCheckpoint_Params params {};
		params.InHour = InHour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFSaveData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFSaveData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFSaveData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFChowdaSaveData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFChowdaSaveData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFChowdaSaveData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFEventObject.TriggerEvent
	 * 		Flags  -> ()
	 */
	void UFNAFEventObject::TriggerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventObject.TriggerEvent");
		
		UFNAFEventObject_TriggerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFEventObject.IsEventFinished
	 * 		Flags  -> ()
	 */
	bool UFNAFEventObject::IsEventFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventObject.IsEventFinished");
		
		UFNAFEventObject_IsEventFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFEventObject.CanPlayEvent
	 * 		Flags  -> ()
	 */
	bool UFNAFEventObject::CanPlayEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventObject.CanPlayEvent");
		
		UFNAFEventObject_CanPlayEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFEventObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFEventObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFEventObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFEventSystem.UnpauseEventSystem
	 * 		Flags  -> ()
	 */
	void UFNAFEventSystem::UnpauseEventSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.UnpauseEventSystem");
		
		UFNAFEventSystem_UnpauseEventSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFEventSystem.StoreEventTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventTag                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFEventSystem::StoreEventTriggered(const class FName& EventTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.StoreEventTriggered");
		
		UFNAFEventSystem_StoreEventTriggered_Params params {};
		params.EventTag = EventTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFEventSystem.StopEventTimer
	 * 		Flags  -> ()
	 */
	void UFNAFEventSystem::StopEventTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.StopEventTimer");
		
		UFNAFEventSystem_StopEventTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFEventSystem.StartEventTimer
	 * 		Flags  -> ()
	 */
	void UFNAFEventSystem::StartEventTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.StartEventTimer");
		
		UFNAFEventSystem_StartEventTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFEventSystem.SetEventTimeSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinTimeBetweenEvents                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxTimeBetweenEvents                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFEventSystem::SetEventTimeSeconds(float MinTimeBetweenEvents, float MaxTimeBetweenEvents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.SetEventTimeSeconds");
		
		UFNAFEventSystem_SetEventTimeSeconds_Params params {};
		params.MinTimeBetweenEvents = MinTimeBetweenEvents;
		params.MaxTimeBetweenEvents = MaxTimeBetweenEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFEventSystem.SetEventActorWeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewWeight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFEventSystem::SetEventActorWeight(float NewWeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.SetEventActorWeight");
		
		UFNAFEventSystem_SetEventActorWeight_Params params {};
		params.NewWeight = NewWeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFEventSystem.SetCurrentAudioComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             EventSoundCue                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFEventSystem::SetCurrentAudioComponent(class UAudioComponent* EventSoundCue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.SetCurrentAudioComponent");
		
		UFNAFEventSystem_SetCurrentAudioComponent_Params params {};
		params.EventSoundCue = EventSoundCue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFEventSystem.PauseEventSystem
	 * 		Flags  -> ()
	 */
	void UFNAFEventSystem::PauseEventSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.PauseEventSystem");
		
		UFNAFEventSystem_PauseEventSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFEventSystem.OnAudioFinished
	 * 		Flags  -> ()
	 */
	void UFNAFEventSystem::OnAudioFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.OnAudioFinished");
		
		UFNAFEventSystem_OnAudioFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFEventSystem.HasEventBeenTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EventTag                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFEventSystem::HasEventBeenTriggered(const class FName& EventTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.HasEventBeenTriggered");
		
		UFNAFEventSystem_HasEventBeenTriggered_Params params {};
		params.EventTag = EventTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFEventSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFEventSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFEventSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.StartGamePlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFGameType                                      GameType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFGameInstanceBase::StartGamePlay(EFNAFGameType GameType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.StartGamePlay");
		
		UFNAFGameInstanceBase_StartGamePlay_Params params {};
		params.GameType = GameType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.SetVisualQualityLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFGameInstanceBase::SetVisualQualityLevel(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.SetVisualQualityLevel");
		
		UFNAFGameInstanceBase_SetVisualQualityLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.SetSplashFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFinished                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFGameInstanceBase::SetSplashFinished(bool bFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.SetSplashFinished");
		
		UFNAFGameInstanceBase_SetSplashFinished_Params params {};
		params.bFinished = bFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.SetRayTraceQualityLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFGameInstanceBase::SetRayTraceQualityLevel(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.SetRayTraceQualityLevel");
		
		UFNAFGameInstanceBase_SetRayTraceQualityLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.SetPresenceForLocalPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StatusStr                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PresenceData                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFGameInstanceBase::SetPresenceForLocalPlayers(const class FString& StatusStr, const class FString& PresenceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.SetPresenceForLocalPlayers");
		
		UFNAFGameInstanceBase_SetPresenceForLocalPlayers_Params params {};
		params.StatusStr = StatusStr;
		params.PresenceData = PresenceData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.SetIsOnLoadingScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnLoadingScreen                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFGameInstanceBase::SetIsOnLoadingScreen(bool bOnLoadingScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.SetIsOnLoadingScreen");
		
		UFNAFGameInstanceBase_SetIsOnLoadingScreen_Params params {};
		params.bOnLoadingScreen = bOnLoadingScreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.SetIsFromTitleForChowda
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               In_FromTitle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFGameInstanceBase::SetIsFromTitleForChowda(bool In_FromTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.SetIsFromTitleForChowda");
		
		UFNAFGameInstanceBase_SetIsFromTitleForChowda_Params params {};
		params.In_FromTitle = In_FromTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.SetAllPlayersFocusToViewport
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceBase::SetAllPlayersFocusToViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.SetAllPlayersFocusToViewport");
		
		UFNAFGameInstanceBase_SetAllPlayersFocusToViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.ProcessActivityIntent
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceBase::ProcessActivityIntent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.ProcessActivityIntent");
		
		UFNAFGameInstanceBase_ProcessActivityIntent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.OnPlayerLoginChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLoggedIn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UserId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFGameInstanceBase::OnPlayerLoginChanged(bool bLoggedIn, int32_t UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.OnPlayerLoginChanged");
		
		UFNAFGameInstanceBase_OnPlayerLoginChanged_Params params {};
		params.bLoggedIn = bLoggedIn;
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.OnPlayerControllerPairingChanged
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceBase::OnPlayerControllerPairingChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.OnPlayerControllerPairingChanged");
		
		UFNAFGameInstanceBase_OnPlayerControllerPairingChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.OnLoadingScreenStart
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceBase::OnLoadingScreenStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.OnLoadingScreenStart");
		
		UFNAFGameInstanceBase_OnLoadingScreenStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.OnLoadingScreenEnd
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceBase::OnLoadingScreenEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.OnLoadingScreenEnd");
		
		UFNAFGameInstanceBase_OnLoadingScreenEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.OnGameActivityLoadComplete
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceBase::OnGameActivityLoadComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.OnGameActivityLoadComplete");
		
		UFNAFGameInstanceBase_OnGameActivityLoadComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.OnControllerConnectionChanged
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceBase::OnControllerConnectionChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.OnControllerConnectionChanged");
		
		UFNAFGameInstanceBase_OnControllerConnectionChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.OnApplicationReactivated
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceBase::OnApplicationReactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.OnApplicationReactivated");
		
		UFNAFGameInstanceBase_OnApplicationReactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.OnApplicationDeactivated
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceBase::OnApplicationDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.OnApplicationDeactivated");
		
		UFNAFGameInstanceBase_OnApplicationDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.LogGameClockDelegates
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceBase::LogGameClockDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.LogGameClockDelegates");
		
		UFNAFGameInstanceBase_LogGameClockDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.LoadGameTips
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFGameType                                      GameType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFGameInstanceBase::LoadGameTips(EFNAFGameType GameType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.LoadGameTips");
		
		UFNAFGameInstanceBase_LoadGameTips_Params params {};
		params.GameType = GameType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.IsOnLoadingScreen
	 * 		Flags  -> ()
	 */
	bool UFNAFGameInstanceBase::IsOnLoadingScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.IsOnLoadingScreen");
		
		UFNAFGameInstanceBase_IsOnLoadingScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.IsNormalPlay
	 * 		Flags  -> ()
	 */
	bool UFNAFGameInstanceBase::IsNormalPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.IsNormalPlay");
		
		UFNAFGameInstanceBase_IsNormalPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.IsLoadingActivity
	 * 		Flags  -> ()
	 */
	bool UFNAFGameInstanceBase::IsLoadingActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.IsLoadingActivity");
		
		UFNAFGameInstanceBase_IsLoadingActivity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.IsFromTitle
	 * 		Flags  -> ()
	 */
	bool UFNAFGameInstanceBase::IsFromTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.IsFromTitle");
		
		UFNAFGameInstanceBase_IsFromTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.HasSplashFinished
	 * 		Flags  -> ()
	 */
	bool UFNAFGameInstanceBase::HasSplashFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.HasSplashFinished");
		
		UFNAFGameInstanceBase_HasSplashFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetVisualQualityLevel
	 * 		Flags  -> ()
	 */
	int32_t UFNAFGameInstanceBase::GetVisualQualityLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetVisualQualityLevel");
		
		UFNAFGameInstanceBase_GetVisualQualityLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetRayTraceQualityLevel
	 * 		Flags  -> ()
	 */
	int32_t UFNAFGameInstanceBase::GetRayTraceQualityLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetRayTraceQualityLevel");
		
		UFNAFGameInstanceBase_GetRayTraceQualityLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetPlayerName
	 * 		Flags  -> ()
	 */
	class FString UFNAFGameInstanceBase::GetPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetPlayerName");
		
		UFNAFGameInstanceBase_GetPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetPlayerControllerID
	 * 		Flags  -> ()
	 */
	int32_t UFNAFGameInstanceBase::GetPlayerControllerID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetPlayerControllerID");
		
		UFNAFGameInstanceBase_GetPlayerControllerID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetIsShippingConfig
	 * 		Flags  -> ()
	 */
	bool UFNAFGameInstanceBase::GetIsShippingConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetIsShippingConfig");
		
		UFNAFGameInstanceBase_GetIsShippingConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetGPUBenchmarkResult
	 * 		Flags  -> ()
	 */
	float UFNAFGameInstanceBase::GetGPUBenchmarkResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetGPUBenchmarkResult");
		
		UFNAFGameInstanceBase_GetGPUBenchmarkResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetGameTipTextByIndexDLC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UFNAFGameInstanceBase::GetGameTipTextByIndexDLC(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetGameTipTextByIndexDLC");
		
		UFNAFGameInstanceBase_GetGameTipTextByIndexDLC_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetGameTipTextByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UFNAFGameInstanceBase::GetGameTipTextByIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetGameTipTextByIndex");
		
		UFNAFGameInstanceBase_GetGameTipTextByIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetCurrentGameType
	 * 		Flags  -> ()
	 */
	EFNAFGameType UFNAFGameInstanceBase::GetCurrentGameType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetCurrentGameType");
		
		UFNAFGameInstanceBase_GetCurrentGameType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetCPUBenchmarkResult
	 * 		Flags  -> ()
	 */
	float UFNAFGameInstanceBase::GetCPUBenchmarkResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetCPUBenchmarkResult");
		
		UFNAFGameInstanceBase_GetCPUBenchmarkResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetAllLoadedLevelsString
	 * 		Flags  -> ()
	 */
	class FString UFNAFGameInstanceBase::GetAllLoadedLevelsString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetAllLoadedLevelsString");
		
		UFNAFGameInstanceBase_GetAllLoadedLevelsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.EndLoadingScreenDLC
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceBase::EndLoadingScreenDLC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.EndLoadingScreenDLC");
		
		UFNAFGameInstanceBase_EndLoadingScreenDLC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.EndLoadingScreen
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceBase::EndLoadingScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.EndLoadingScreen");
		
		UFNAFGameInstanceBase_EndLoadingScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.CheckForPlayerLoginChanged
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceBase::CheckForPlayerLoginChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.CheckForPlayerLoginChanged");
		
		UFNAFGameInstanceBase_CheckForPlayerLoginChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.ChangeLocalPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UserId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFGameInstanceBase::ChangeLocalPlayerController(int32_t UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.ChangeLocalPlayerController");
		
		UFNAFGameInstanceBase_ChangeLocalPlayerController_Params params {};
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.BeginLoadingScreenDLC
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceBase::BeginLoadingScreenDLC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.BeginLoadingScreenDLC");
		
		UFNAFGameInstanceBase_BeginLoadingScreenDLC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.BeginLoadingScreen
	 * 		Flags  -> ()
	 */
	void UFNAFGameInstanceBase::BeginLoadingScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.BeginLoadingScreen");
		
		UFNAFGameInstanceBase_BeginLoadingScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.AsyncChowdaScan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseless                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutFinished                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentActionInfo                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UFNAFGameInstanceBase::AsyncChowdaScan(bool bUseless, bool* bOutFinished, const struct FLatentActionInfo& LatentActionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.AsyncChowdaScan");
		
		UFNAFGameInstanceBase_AsyncChowdaScan_Params params {};
		params.bUseless = bUseless;
		params.LatentActionInfo = LatentActionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutFinished != nullptr)
			*bOutFinished = params.bOutFinished;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFGameInstanceBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFGameInstanceBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFGameInstanceBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFGameUserSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFGameUserSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFGameUserSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFGeneralEditorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFGeneralEditorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFGeneralEditorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInputDeviceSystem.GetCurrentInputDevice
	 * 		Flags  -> ()
	 */
	ESWGInputDeviceType UFNAFInputDeviceSystem::GetCurrentInputDevice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInputDeviceSystem.GetCurrentInputDevice");
		
		UFNAFInputDeviceSystem_GetCurrentInputDevice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFInputDeviceSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFInputDeviceSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFInputDeviceSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFInputSystemDeveloperSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFInputSystemDeveloperSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFInputSystemDeveloperSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.UsePartyPass
	 * 		Flags  -> ()
	 */
	bool UFNAFInventorySystem::UsePartyPass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.UsePartyPass");
		
		UFNAFInventorySystem_UsePartyPass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.UseFlash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOutFlashUsed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::UseFlash(bool* bOutFlashUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.UseFlash");
		
		UFNAFInventorySystem_UseFlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutFlashUsed != nullptr)
			*bOutFlashUsed = params.bOutFlashUsed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetupNewGame
	 * 		Flags  -> ()
	 */
	void UFNAFInventorySystem::SetupNewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetupNewGame");
		
		UFNAFInventorySystem_SetupNewGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetupGameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFGameType                                      GameType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetupGameMode(EFNAFGameType GameType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetupGameMode");
		
		UFNAFInventorySystem_SetupGameMode_Params params {};
		params.GameType = GameType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetupDataTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  InDataTable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetupDataTable(class UDataTable* InDataTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetupDataTable");
		
		UFNAFInventorySystem_SetupDataTable_Params params {};
		params.InDataTable = InDataTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetSecurityLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewSecurityLevel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetSecurityLevel(int32_t NewSecurityLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetSecurityLevel");
		
		UFNAFInventorySystem_SetSecurityLevel_Params params {};
		params.NewSecurityLevel = NewSecurityLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetPowerLevel_Freddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InPowerLevel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetPowerLevel_Freddy(int32_t InPowerLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetPowerLevel_Freddy");
		
		UFNAFInventorySystem_SetPowerLevel_Freddy_Params params {};
		params.InPowerLevel = InPowerLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetPowerLevel_Fazwatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InPowerLevel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetPowerLevel_Fazwatch(int32_t InPowerLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetPowerLevel_Fazwatch");
		
		UFNAFInventorySystem_SetPowerLevel_Fazwatch_Params params {};
		params.InPowerLevel = InPowerLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetPartyLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewPartyLevel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetPartyLevel(int32_t NewPartyLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetPartyLevel");
		
		UFNAFInventorySystem_SetPartyLevel_Params params {};
		params.NewPartyLevel = NewPartyLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetMessageViewed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetMessageViewed(const class FName& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetMessageViewed");
		
		UFNAFInventorySystem_SetMessageViewed_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Freddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewMax                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetMaxPowerLevel_Freddy(int32_t NewMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Freddy");
		
		UFNAFInventorySystem_SetMaxPowerLevel_Freddy_Params params {};
		params.NewMax = NewMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Fazwatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewMax                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetMaxPowerLevel_Fazwatch(int32_t NewMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Fazwatch");
		
		UFNAFInventorySystem_SetMaxPowerLevel_Fazwatch_Params params {};
		params.NewMax = NewMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetItemViewed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetItemViewed(const class FName& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetItemViewed");
		
		UFNAFInventorySystem_SetItemViewed_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetFlashlightStationID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StationID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetFlashlightStationID(int32_t StationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetFlashlightStationID");
		
		UFNAFInventorySystem_SetFlashlightStationID_Params params {};
		params.StationID = StationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetCautionBotSoulsCollectedNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            inNumber                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFNAFInventorySystem::SetCautionBotSoulsCollectedNumber(int32_t inNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetCautionBotSoulsCollectedNumber");
		
		UFNAFInventorySystem_SetCautionBotSoulsCollectedNumber_Params params {};
		params.inNumber = inNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.ResetOnExitToMenu
	 * 		Flags  -> ()
	 */
	void UFNAFInventorySystem::ResetOnExitToMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.ResetOnExitToMenu");
		
		UFNAFInventorySystem_ResetOnExitToMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.ResetFreddyPower
	 * 		Flags  -> ()
	 */
	void UFNAFInventorySystem::ResetFreddyPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.ResetFreddyPower");
		
		UFNAFInventorySystem_ResetFreddyPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.ResetForChapterSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                CollectedItems                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            chapterSelected                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::ResetForChapterSelect(TArray<class FName> CollectedItems, int32_t chapterSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.ResetForChapterSelect");
		
		UFNAFInventorySystem_ResetForChapterSelect_Params params {};
		params.CollectedItems = CollectedItems;
		params.chapterSelected = chapterSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.ResetFlashlightPower
	 * 		Flags  -> ()
	 */
	void UFNAFInventorySystem::ResetFlashlightPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.ResetFlashlightPower");
		
		UFNAFInventorySystem_ResetFlashlightPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.ResetFlashes
	 * 		Flags  -> ()
	 */
	void UFNAFInventorySystem::ResetFlashes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.ResetFlashes");
		
		UFNAFInventorySystem_ResetFlashes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.RemoveMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::RemoveMessage(const class FName& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.RemoveMessage");
		
		UFNAFInventorySystem_RemoveMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.RemoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::RemoveItem(const class FName& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.RemoveItem");
		
		UFNAFInventorySystem_RemoveItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.RemoveEverything
	 * 		Flags  -> ()
	 */
	void UFNAFInventorySystem::RemoveEverything()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.RemoveEverything");
		
		UFNAFInventorySystem_RemoveEverything_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.RemoveCautionBotSouls
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfSouls                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFNAFInventorySystem::RemoveCautionBotSouls(int32_t NumberOfSouls)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.RemoveCautionBotSouls");
		
		UFNAFInventorySystem_RemoveCautionBotSouls_Params params {};
		params.NumberOfSouls = NumberOfSouls;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.IsVIPItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::IsVIPItem(const class FName& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.IsVIPItem");
		
		UFNAFInventorySystem_IsVIPItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.IsMessageValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::IsMessageValid(const class FName& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.IsMessageValid");
		
		UFNAFInventorySystem_IsMessageValid_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.IsItemValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::IsItemValid(const class FName& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.IsItemValid");
		
		UFNAFInventorySystem_IsItemValid_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.HasSecurityClearance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSecurityLevel                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::HasSecurityClearance(int32_t InSecurityLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasSecurityClearance");
		
		UFNAFInventorySystem_HasSecurityClearance_Params params {};
		params.InSecurityLevel = InSecurityLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.HasMessageBeenViewed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemOrMessage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::HasMessageBeenViewed(const class FName& ItemOrMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasMessageBeenViewed");
		
		UFNAFInventorySystem_HasMessageBeenViewed_Params params {};
		params.ItemOrMessage = ItemOrMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.HasMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SearchMessage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::HasMessage(const class FName& SearchMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasMessage");
		
		UFNAFInventorySystem_HasMessage_Params params {};
		params.SearchMessage = SearchMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.HasItemBeenViewed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemOrMessage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::HasItemBeenViewed(const class FName& ItemOrMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasItemBeenViewed");
		
		UFNAFInventorySystem_HasItemBeenViewed_Params params {};
		params.ItemOrMessage = ItemOrMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.HasItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        searchItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::HasItem(const class FName& searchItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasItem");
		
		UFNAFInventorySystem_HasItem_Params params {};
		params.searchItem = searchItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.HasEnoughPower_Freddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PowerRequired                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::HasEnoughPower_Freddy(int32_t PowerRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasEnoughPower_Freddy");
		
		UFNAFInventorySystem_HasEnoughPower_Freddy_Params params {};
		params.PowerRequired = PowerRequired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.HasEnoughPower_Fazwatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PowerRequired                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::HasEnoughPower_Fazwatch(int32_t PowerRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasEnoughPower_Fazwatch");
		
		UFNAFInventorySystem_HasEnoughPower_Fazwatch_Params params {};
		params.PowerRequired = PowerRequired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.HasAvailablePartyPass
	 * 		Flags  -> ()
	 */
	bool UFNAFInventorySystem::HasAvailablePartyPass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasAvailablePartyPass");
		
		UFNAFInventorySystem_HasAvailablePartyPass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetTapesListenedTo
	 * 		Flags  -> ()
	 */
	void UFNAFInventorySystem::GetTapesListenedTo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetTapesListenedTo");
		
		UFNAFInventorySystem_GetTapesListenedTo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetStaminaUpgradeMultiplier
	 * 		Flags  -> ()
	 */
	float UFNAFInventorySystem::GetStaminaUpgradeMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetStaminaUpgradeMultiplier");
		
		UFNAFInventorySystem_GetStaminaUpgradeMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetNumberOfUnreadMessages
	 * 		Flags  -> ()
	 */
	int32_t UFNAFInventorySystem::GetNumberOfUnreadMessages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetNumberOfUnreadMessages");
		
		UFNAFInventorySystem_GetNumberOfUnreadMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetMessageInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MessageName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFNAFMessageTableStruct                     OutMessageInfo                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               OutFound                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::GetMessageInfo(const class FName& MessageName, struct FFNAFMessageTableStruct* OutMessageInfo, bool* OutFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetMessageInfo");
		
		UFNAFInventorySystem_GetMessageInfo_Params params {};
		params.MessageName = MessageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMessageInfo != nullptr)
			*OutMessageInfo = params.OutMessageInfo;
		if (OutFound != nullptr)
			*OutFound = params.OutFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetMaxFlashes
	 * 		Flags  -> ()
	 */
	int32_t UFNAFInventorySystem::GetMaxFlashes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetMaxFlashes");
		
		UFNAFInventorySystem_GetMaxFlashes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFNAFInventoryTableStruct                   OutItemInfo                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               OutFound                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::GetItemInfo(const class FName& ItemName, struct FFNAFInventoryTableStruct* OutItemInfo, bool* OutFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetItemInfo");
		
		UFNAFInventorySystem_GetItemInfo_Params params {};
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItemInfo != nullptr)
			*OutItemInfo = params.OutItemInfo;
		if (OutFound != nullptr)
			*OutFound = params.OutFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetFreddyUpgradeMutliplier
	 * 		Flags  -> ()
	 */
	float UFNAFInventorySystem::GetFreddyUpgradeMutliplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetFreddyUpgradeMutliplier");
		
		UFNAFInventorySystem_GetFreddyUpgradeMutliplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetFreddyMaxPower
	 * 		Flags  -> ()
	 */
	int32_t UFNAFInventorySystem::GetFreddyMaxPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetFreddyMaxPower");
		
		UFNAFInventorySystem_GetFreddyMaxPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetFlashlightUpgradMultiplier
	 * 		Flags  -> ()
	 */
	float UFNAFInventorySystem::GetFlashlightUpgradMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetFlashlightUpgradMultiplier");
		
		UFNAFInventorySystem_GetFlashlightUpgradMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetFlashlightStationID
	 * 		Flags  -> ()
	 */
	int32_t UFNAFInventorySystem::GetFlashlightStationID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetFlashlightStationID");
		
		UFNAFInventorySystem_GetFlashlightStationID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetFlashlightMaxPower
	 * 		Flags  -> ()
	 */
	int32_t UFNAFInventorySystem::GetFlashlightMaxPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetFlashlightMaxPower");
		
		UFNAFInventorySystem_GetFlashlightMaxPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetCollectedPartyPasses
	 * 		Flags  -> ()
	 */
	TArray<class FName> UFNAFInventorySystem::GetCollectedPartyPasses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetCollectedPartyPasses");
		
		UFNAFInventorySystem_GetCollectedPartyPasses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetChapterProgression
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Chapter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UFNAFInventorySystem::GetChapterProgression(int32_t Chapter, class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetChapterProgression");
		
		UFNAFInventorySystem_GetChapterProgression_Params params {};
		params.Chapter = Chapter;
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetCautionBotSoulsCollectedNumber
	 * 		Flags  -> ()
	 */
	int32_t UFNAFInventorySystem::GetCautionBotSoulsCollectedNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetCautionBotSoulsCollectedNumber");
		
		UFNAFInventorySystem_GetCautionBotSoulsCollectedNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetCandyCadetStoriesDone
	 * 		Flags  -> ()
	 */
	void UFNAFInventorySystem::GetCandyCadetStoriesDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetCandyCadetStoriesDone");
		
		UFNAFInventorySystem_GetCandyCadetStoriesDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetAllSurvivalItemsOfType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryItemSurvivalCategory                     SurvivalCategory                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UFNAFInventorySystem::GetAllSurvivalItemsOfType(EInventoryItemSurvivalCategory SurvivalCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetAllSurvivalItemsOfType");
		
		UFNAFInventorySystem_GetAllSurvivalItemsOfType_Params params {};
		params.SurvivalCategory = SurvivalCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetAllItems
	 * 		Flags  -> ()
	 */
	TArray<class FName> UFNAFInventorySystem::GetAllItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetAllItems");
		
		UFNAFInventorySystem_GetAllItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetAllCurrentInventoryItems
	 * 		Flags  -> ()
	 */
	TArray<class FName> UFNAFInventorySystem::GetAllCurrentInventoryItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetAllCurrentInventoryItems");
		
		UFNAFInventorySystem_GetAllCurrentInventoryItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.ClearFlashlightStationID
	 * 		Flags  -> ()
	 */
	void UFNAFInventorySystem::ClearFlashlightStationID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.ClearFlashlightStationID");
		
		UFNAFInventorySystem_ClearFlashlightStationID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.CanUseFlashBeacon
	 * 		Flags  -> ()
	 */
	bool UFNAFInventorySystem::CanUseFlashBeacon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.CanUseFlashBeacon");
		
		UFNAFInventorySystem_CanUseFlashBeacon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.AwardMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNotify                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::AwardMessage(const class FName& Message, bool bNotify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AwardMessage");
		
		UFNAFInventorySystem_AwardMessage_Params params {};
		params.Message = Message;
		params.bNotify = bNotify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.AwardItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNotify                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::AwardItem(const class FName& Item, bool bNotify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AwardItem");
		
		UFNAFInventorySystem_AwardItem_Params params {};
		params.Item = Item;
		params.bNotify = bNotify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.AwardCautionBotSoul
	 * 		Flags  -> ()
	 */
	int32_t UFNAFInventorySystem::AwardCautionBotSoul()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AwardCautionBotSoul");
		
		UFNAFInventorySystem_AwardCautionBotSoul_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.AdjustPower_Freddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ChangeAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::AdjustPower_Freddy(int32_t ChangeAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AdjustPower_Freddy");
		
		UFNAFInventorySystem_AdjustPower_Freddy_Params params {};
		params.ChangeAmount = ChangeAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.AdjustPower_Fazwatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ChangeAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::AdjustPower_Fazwatch(int32_t ChangeAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AdjustPower_Fazwatch");
		
		UFNAFInventorySystem_AdjustPower_Fazwatch_Params params {};
		params.ChangeAmount = ChangeAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.AddTapeListenedTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTapeListenedTo                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::AddTapeListenedTo(const class FName& InTapeListenedTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AddTapeListenedTo");
		
		UFNAFInventorySystem_AddTapeListenedTo_Params params {};
		params.InTapeListenedTo = InTapeListenedTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.AddEverything
	 * 		Flags  -> ()
	 */
	void UFNAFInventorySystem::AddEverything()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AddEverything");
		
		UFNAFInventorySystem_AddEverything_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.AddCandyCadetStoryDone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InStory                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::AddCandyCadetStoryDone(const class FName& InStory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AddCandyCadetStoryDone");
		
		UFNAFInventorySystem_AddCandyCadetStoryDone_Params params {};
		params.InStory = InStory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.AddBrokenPlate
	 * 		Flags  -> ()
	 */
	int32_t UFNAFInventorySystem::AddBrokenPlate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AddBrokenPlate");
		
		UFNAFInventorySystem_AddBrokenPlate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFInventorySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFInventorySystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFInventorySystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFLevelManager.UnregisterStreamingSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::UnregisterStreamingSource(class USceneComponent* SceneComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.UnregisterStreamingSource");
		
		UFNAFLevelManager_UnregisterStreamingSource_Params params {};
		params.SceneComponent = SceneComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFLevelManager.UnregisterPawnStreamingSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::UnregisterPawnStreamingSource(class USceneComponent* SceneComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.UnregisterPawnStreamingSource");
		
		UFNAFLevelManager_UnregisterPawnStreamingSource_Params params {};
		params.SceneComponent = SceneComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFLevelManager.SetPlayerPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::SetPlayerPawn(class APawn* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.SetPlayerPawn");
		
		UFNAFLevelManager_SetPlayerPawn_Params params {};
		params.PlayerPawn = PlayerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFLevelManager.SetLevelStreamingEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::SetLevelStreamingEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.SetLevelStreamingEnable");
		
		UFNAFLevelManager_SetLevelStreamingEnable_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFLevelManager.RemoveLevelsFromStreamingSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             StreamingSource                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::RemoveLevelsFromStreamingSource(class USceneComponent* StreamingSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RemoveLevelsFromStreamingSource");
		
		UFNAFLevelManager_RemoveLevelsFromStreamingSource_Params params {};
		params.StreamingSource = StreamingSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFLevelManager.RemoveLevelArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ULevelStreaming*>                     Levels                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::RemoveLevelArray(TArray<class ULevelStreaming*> Levels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RemoveLevelArray");
		
		UFNAFLevelManager_RemoveLevelArray_Params params {};
		params.Levels = Levels;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFLevelManager.RemoveLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelStreaming*                             LevelToUnload                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::RemoveLevel(class ULevelStreaming* LevelToUnload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RemoveLevel");
		
		UFNAFLevelManager_RemoveLevel_Params params {};
		params.LevelToUnload = LevelToUnload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFLevelManager.RemoveAllLevels
	 * 		Flags  -> ()
	 */
	void UFNAFLevelManager::RemoveAllLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RemoveAllLevels");
		
		UFNAFLevelManager_RemoveAllLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFLevelManager.RegisterStreamingSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::RegisterStreamingSource(class USceneComponent* SceneComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RegisterStreamingSource");
		
		UFNAFLevelManager_RegisterStreamingSource_Params params {};
		params.SceneComponent = SceneComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFLevelManager.RegisterPawnStreamingSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::RegisterPawnStreamingSource(class USceneComponent* SceneComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RegisterPawnStreamingSource");
		
		UFNAFLevelManager_RegisterPawnStreamingSource_Params params {};
		params.SceneComponent = SceneComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFLevelManager.IsLevelStreamingEnable
	 * 		Flags  -> ()
	 */
	bool UFNAFLevelManager::IsLevelStreamingEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.IsLevelStreamingEnable");
		
		UFNAFLevelManager_IsLevelStreamingEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFLevelManager.GetStreamingSources
	 * 		Flags  -> ()
	 */
	TArray<class USceneComponent*> UFNAFLevelManager::GetStreamingSources()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.GetStreamingSources");
		
		UFNAFLevelManager_GetStreamingSources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFLevelManager.GetLevelNamesForComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UFNAFLevelManager::GetLevelNamesForComponent(class USceneComponent* SceneComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.GetLevelNamesForComponent");
		
		UFNAFLevelManager_GetLevelNamesForComponent_Params params {};
		params.SceneComponent = SceneComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFLevelManager.AddLevelToLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelStreaming*                             LevelToLoad                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::AddLevelToLoad(class ULevelStreaming* LevelToLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.AddLevelToLoad");
		
		UFNAFLevelManager_AddLevelToLoad_Params params {};
		params.LevelToLoad = LevelToLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFLevelManager.AddLevelsFromStreamingSourceToLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             StreamingSource                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::AddLevelsFromStreamingSourceToLoad(class USceneComponent* StreamingSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.AddLevelsFromStreamingSourceToLoad");
		
		UFNAFLevelManager_AddLevelsFromStreamingSourceToLoad_Params params {};
		params.StreamingSource = StreamingSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFLevelManager.AddLevelArrayToLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ULevelStreaming*>                     LevelsToLoad                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::AddLevelArrayToLoad(TArray<class ULevelStreaming*> LevelsToLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.AddLevelArrayToLoad");
		
		UFNAFLevelManager_AddLevelArrayToLoad_Params params {};
		params.LevelsToLoad = LevelsToLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFLevelManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFLevelManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFLevelManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFManagedAI.TeleportAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFManagedAI::TeleportAI(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.TeleportAI");
		
		UFNAFManagedAI_TeleportAI_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFManagedAI.StartMoveTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFManagedAI::StartMoveTo(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.StartMoveTo");
		
		UFNAFManagedAI_StartMoveTo_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFManagedAI.SendVanessaAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       VanessaPawn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFManagedAI::SendVanessaAlert(class APawn* VanessaPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.SendVanessaAlert");
		
		UFNAFManagedAI_SendVanessaAlert_Params params {};
		params.VanessaPawn = VanessaPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFManagedAI.SendPositionalAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFManagedAI::SendPositionalAlert(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.SendPositionalAlert");
		
		UFNAFManagedAI_SendPositionalAlert_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFManagedAI.IsShatteredVersion
	 * 		Flags  -> ()
	 */
	bool UFNAFManagedAI::IsShatteredVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.IsShatteredVersion");
		
		UFNAFManagedAI_IsShatteredVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFManagedAI.IsMeshVisible
	 * 		Flags  -> ()
	 */
	bool UFNAFManagedAI::IsMeshVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.IsMeshVisible");
		
		UFNAFManagedAI_IsMeshVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFManagedAI.GetManagedAIType
	 * 		Flags  -> ()
	 */
	EFNAFAISpawnType UFNAFManagedAI::GetManagedAIType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.GetManagedAIType");
		
		UFNAFManagedAI_GetManagedAIType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFManagedAI.GetCurrentPathName
	 * 		Flags  -> ()
	 */
	class FName UFNAFManagedAI::GetCurrentPathName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.GetCurrentPathName");
		
		UFNAFManagedAI_GetCurrentPathName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFManagedAI.ForceTrackToPlayer
	 * 		Flags  -> ()
	 */
	void UFNAFManagedAI::ForceTrackToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.ForceTrackToPlayer");
		
		UFNAFManagedAI_ForceTrackToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFManagedAI.ForceJumpscarePlayer
	 * 		Flags  -> ()
	 */
	void UFNAFManagedAI::ForceJumpscarePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.ForceJumpscarePlayer");
		
		UFNAFManagedAI_ForceJumpscarePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFManagedAI.EndTrackToPlayer
	 * 		Flags  -> ()
	 */
	void UFNAFManagedAI::EndTrackToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.EndTrackToPlayer");
		
		UFNAFManagedAI_EndTrackToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFManagedAI.CanReceiveAlert
	 * 		Flags  -> ()
	 */
	bool UFNAFManagedAI::CanReceiveAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.CanReceiveAlert");
		
		UFNAFManagedAI_CanReceiveAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFManagedAI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFManagedAI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFManagedAI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFMasterData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFMasterData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFMasterData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.SetupNewGame
	 * 		Flags  -> ()
	 */
	void UFNAFMissionSystem::SetupNewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.SetupNewGame");
		
		UFNAFMissionSystem_SetupNewGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.SetMissionInfoState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InfoState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::SetMissionInfoState(const class FName& MissionName, int32_t InfoState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.SetMissionInfoState");
		
		UFNAFMissionSystem_SetMissionInfoState_Params params {};
		params.MissionName = MissionName;
		params.InfoState = InfoState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.RemoveActiveMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::RemoveActiveMission(const class FName& MissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.RemoveActiveMission");
		
		UFNAFMissionSystem_RemoveActiveMission_Params params {};
		params.MissionName = MissionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.NotifyMissionUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::NotifyMissionUpdate(const class FName& MissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.NotifyMissionUpdate");
		
		UFNAFMissionSystem_NotifyMissionUpdate_Params params {};
		params.MissionName = MissionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.IsValidMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFMissionSystem::IsValidMission(const class FName& MissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.IsValidMission");
		
		UFNAFMissionSystem_IsValidMission_Params params {};
		params.MissionName = MissionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.IsMissionActiveOrCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFMissionSystem::IsMissionActiveOrCompleted(const class FName& MissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.IsMissionActiveOrCompleted");
		
		UFNAFMissionSystem_IsMissionActiveOrCompleted_Params params {};
		params.MissionName = MissionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.IsInSurvivalMode
	 * 		Flags  -> ()
	 */
	bool UFNAFMissionSystem::IsInSurvivalMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.IsInSurvivalMode");
		
		UFNAFMissionSystem_IsInSurvivalMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.IsCompletedMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFMissionSystem::IsCompletedMission(const class FName& MissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.IsCompletedMission");
		
		UFNAFMissionSystem_IsCompletedMission_Params params {};
		params.MissionName = MissionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.IsActiveMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFMissionSystem::IsActiveMission(const class FName& MissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.IsActiveMission");
		
		UFNAFMissionSystem_IsActiveMission_Params params {};
		params.MissionName = MissionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetTrackedMissions
	 * 		Flags  -> ()
	 */
	TArray<struct FFNAFMissionState> UFNAFMissionSystem::GetTrackedMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetTrackedMissions");
		
		UFNAFMissionSystem_GetTrackedMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetTaskTable
	 * 		Flags  -> ()
	 */
	class UDataTable* UFNAFMissionSystem::GetTaskTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetTaskTable");
		
		UFNAFMissionSystem_GetTaskTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetTaskInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TaskName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFNAFMissionTaskInfo                        OutMissionTaskInfo                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               OutValidTask                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::GetTaskInfo(const class FName& TaskName, struct FFNAFMissionTaskInfo* OutMissionTaskInfo, bool* OutValidTask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetTaskInfo");
		
		UFNAFMissionSystem_GetTaskInfo_Params params {};
		params.TaskName = TaskName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMissionTaskInfo != nullptr)
			*OutMissionTaskInfo = params.OutMissionTaskInfo;
		if (OutValidTask != nullptr)
			*OutValidTask = params.OutValidTask;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetTaskByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TaskIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFNAFMissionTaskInfo                        OutMissionTaskInfo                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               OutValidTask                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::GetTaskByIndex(const class FName& MissionName, int32_t TaskIndex, struct FFNAFMissionTaskInfo* OutMissionTaskInfo, bool* OutValidTask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetTaskByIndex");
		
		UFNAFMissionSystem_GetTaskByIndex_Params params {};
		params.MissionName = MissionName;
		params.TaskIndex = TaskIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMissionTaskInfo != nullptr)
			*OutMissionTaskInfo = params.OutMissionTaskInfo;
		if (OutValidTask != nullptr)
			*OutValidTask = params.OutValidTask;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetMissionTable
	 * 		Flags  -> ()
	 */
	class UDataTable* UFNAFMissionSystem::GetMissionTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetMissionTable");
		
		UFNAFMissionSystem_GetMissionTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetMissionState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFNAFMissionState                           OutMissionState                                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               OutValidMission                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::GetMissionState(const class FName& MissionName, struct FFNAFMissionState* OutMissionState, bool* OutValidMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetMissionState");
		
		UFNAFMissionSystem_GetMissionState_Params params {};
		params.MissionName = MissionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMissionState != nullptr)
			*OutMissionState = params.OutMissionState;
		if (OutValidMission != nullptr)
			*OutValidMission = params.OutValidMission;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetMissionInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFNAFMissionInfo                            OutMissionInfo                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               OutValidMission                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::GetMissionInfo(const class FName& MissionName, struct FFNAFMissionInfo* OutMissionInfo, bool* OutValidMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetMissionInfo");
		
		UFNAFMissionSystem_GetMissionInfo_Params params {};
		params.MissionName = MissionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMissionInfo != nullptr)
			*OutMissionInfo = params.OutMissionInfo;
		if (OutValidMission != nullptr)
			*OutValidMission = params.OutValidMission;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetMissionFromTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TaskName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFNAFMissionInfo                            OutMissionInfo                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               OutValidMission                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::GetMissionFromTask(const class FName& TaskName, struct FFNAFMissionInfo* OutMissionInfo, bool* OutValidMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetMissionFromTask");
		
		UFNAFMissionSystem_GetMissionFromTask_Params params {};
		params.TaskName = TaskName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMissionInfo != nullptr)
			*OutMissionInfo = params.OutMissionInfo;
		if (OutValidMission != nullptr)
			*OutValidMission = params.OutValidMission;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetMissionFromMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MessageName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OutMissionName                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutMissionStateIndex                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::GetMissionFromMessage(const class FName& MessageName, class FName* OutMissionName, int32_t* OutMissionStateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetMissionFromMessage");
		
		UFNAFMissionSystem_GetMissionFromMessage_Params params {};
		params.MessageName = MessageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMissionName != nullptr)
			*OutMissionName = params.OutMissionName;
		if (OutMissionStateIndex != nullptr)
			*OutMissionStateIndex = params.OutMissionStateIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetMarkersForMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MissionStateIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AMissionMarker*> UFNAFMissionSystem::GetMarkersForMission(const class FName& MissionName, int32_t MissionStateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetMarkersForMission");
		
		UFNAFMissionSystem_GetMarkersForMission_Params params {};
		params.MissionName = MissionName;
		params.MissionStateIndex = MissionStateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetCompletedMissions
	 * 		Flags  -> ()
	 */
	TArray<struct FFNAFMissionState> UFNAFMissionSystem::GetCompletedMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetCompletedMissions");
		
		UFNAFMissionSystem_GetCompletedMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetAreaMarkerCounts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<ELevelArea, int32_t>                          MapOfCounts                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::GetAreaMarkerCounts(TMap<ELevelArea, int32_t>* MapOfCounts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetAreaMarkerCounts");
		
		UFNAFMissionSystem_GetAreaMarkerCounts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapOfCounts != nullptr)
			*MapOfCounts = params.MapOfCounts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetAllMissionNames
	 * 		Flags  -> ()
	 */
	TArray<class FName> UFNAFMissionSystem::GetAllMissionNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetAllMissionNames");
		
		UFNAFMissionSystem_GetAllMissionNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetAllMissionMarkers
	 * 		Flags  -> ()
	 */
	TArray<class AMissionMarker*> UFNAFMissionSystem::GetAllMissionMarkers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetAllMissionMarkers");
		
		UFNAFMissionSystem_GetAllMissionMarkers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetAllCurrentMarkers
	 * 		Flags  -> ()
	 */
	TArray<class AMissionMarker*> UFNAFMissionSystem::GetAllCurrentMarkers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetAllCurrentMarkers");
		
		UFNAFMissionSystem_GetAllCurrentMarkers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetActiveMissions
	 * 		Flags  -> ()
	 */
	TArray<struct FFNAFMissionState> UFNAFMissionSystem::GetActiveMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetActiveMissions");
		
		UFNAFMissionSystem_GetActiveMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.CompleteMissionTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TaskIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::CompleteMissionTask(const class FName& MissionName, int32_t TaskIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.CompleteMissionTask");
		
		UFNAFMissionSystem_CompleteMissionTask_Params params {};
		params.MissionName = MissionName;
		params.TaskIndex = TaskIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.CompleteMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::CompleteMission(const class FName& MissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.CompleteMission");
		
		UFNAFMissionSystem_CompleteMission_Params params {};
		params.MissionName = MissionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.BranchMissionStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMissionStatus                                     Status                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::BranchMissionStatus(const class FName& MissionName, EMissionStatus* Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.BranchMissionStatus");
		
		UFNAFMissionSystem_BranchMissionStatus_Params params {};
		params.MissionName = MissionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Status != nullptr)
			*Status = params.Status;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.AddActiveMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::AddActiveMission(const class FName& MissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.AddActiveMission");
		
		UFNAFMissionSystem_AddActiveMission_Params params {};
		params.MissionName = MissionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFMissionSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFMissionSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFMissionSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFPawnTypeProviderInterface.GetPlayerPawnType
	 * 		Flags  -> ()
	 */
	EPlayerPawnType UFNAFPawnTypeProviderInterface::GetPlayerPawnType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFPawnTypeProviderInterface.GetPlayerPawnType");
		
		UFNAFPawnTypeProviderInterface_GetPlayerPawnType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFPawnTypeProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFPawnTypeProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFPawnTypeProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFPS5ControllerUtils.TurnOffAdaptiveTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ControllerId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFPS5Trigger                                    Trigger                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFPS5ControllerUtils::TurnOffAdaptiveTrigger(int32_t ControllerId, EFNAFPS5Trigger Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFPS5ControllerUtils.TurnOffAdaptiveTrigger");
		
		UFNAFPS5ControllerUtils_TurnOffAdaptiveTrigger_Params params {};
		params.ControllerId = ControllerId;
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFPS5ControllerUtils.SetupTriggerVibration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ControllerId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFPS5Trigger                                    Trigger                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Frequency                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Amplitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFPS5ControllerUtils::SetupTriggerVibration(int32_t ControllerId, EFNAFPS5Trigger Trigger, unsigned char Position, unsigned char Frequency, unsigned char Amplitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFPS5ControllerUtils.SetupTriggerVibration");
		
		UFNAFPS5ControllerUtils_SetupTriggerVibration_Params params {};
		params.ControllerId = ControllerId;
		params.Trigger = Trigger;
		params.Position = Position;
		params.Frequency = Frequency;
		params.Amplitude = Amplitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFPS5ControllerUtils.SetupTriggerFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ControllerId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFPS5Trigger                                    Trigger                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFPS5ControllerUtils::SetupTriggerFeedback(int32_t ControllerId, EFNAFPS5Trigger Trigger, unsigned char Position, unsigned char Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFPS5ControllerUtils.SetupTriggerFeedback");
		
		UFNAFPS5ControllerUtils_SetupTriggerFeedback_Params params {};
		params.ControllerId = ControllerId;
		params.Trigger = Trigger;
		params.Position = Position;
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFPS5ControllerUtils.SetupAdaptiveTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ControllerId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFPS5Trigger                                    Trigger                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      StartPosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      EndPosition                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFPS5ControllerUtils::SetupAdaptiveTrigger(int32_t ControllerId, EFNAFPS5Trigger Trigger, unsigned char StartPosition, unsigned char EndPosition, unsigned char Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFPS5ControllerUtils.SetupAdaptiveTrigger");
		
		UFNAFPS5ControllerUtils_SetupAdaptiveTrigger_Params params {};
		params.ControllerId = ControllerId;
		params.Trigger = Trigger;
		params.StartPosition = StartPosition;
		params.EndPosition = EndPosition;
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFPS5ControllerUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFPS5ControllerUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFPS5ControllerUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.ToggleDLCCallToAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::ToggleDLCCallToAction(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.ToggleDLCCallToAction");
		
		UFNAFSaveGameSystem_ToggleDLCCallToAction_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.ShowAutoSaveIcon
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::ShowAutoSaveIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.ShowAutoSaveIcon");
		
		UFNAFSaveGameSystem_ShowAutoSaveIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SetUserIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewUserIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::SetUserIndex(int32_t NewUserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetUserIndex");
		
		UFNAFSaveGameSystem_SetUserIndex_Params params {};
		params.NewUserIndex = NewUserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SetUseAutosaveMapArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseMapArea                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::SetUseAutosaveMapArea(bool UseMapArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetUseAutosaveMapArea");
		
		UFNAFSaveGameSystem_SetUseAutosaveMapArea_Params params {};
		params.UseMapArea = UseMapArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SetupPIE
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::SetupPIE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetupPIE");
		
		UFNAFSaveGameSystem_SetupPIE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SetupNewGameOnSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      originalSlotName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::SetupNewGameOnSlot(const class FString& originalSlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetupNewGameOnSlot");
		
		UFNAFSaveGameSystem_SetupNewGameOnSlot_Params params {};
		params.originalSlotName = originalSlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SetupNewGame
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::SetupNewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetupNewGame");
		
		UFNAFSaveGameSystem_SetupNewGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SetupNewChowdaGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ProfileIndexIn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::SetupNewChowdaGame(int32_t ProfileIndexIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetupNewChowdaGame");
		
		UFNAFSaveGameSystem_SetupNewChowdaGame_Params params {};
		params.ProfileIndexIn = ProfileIndexIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SetLoadIntoChapter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Load                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::SetLoadIntoChapter(bool Load)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetLoadIntoChapter");
		
		UFNAFSaveGameSystem_SetLoadIntoChapter_Params params {};
		params.Load = Load;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SetIsSavingAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSavingAllowed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::SetIsSavingAllowed(bool IsSavingAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetIsSavingAllowed");
		
		UFNAFSaveGameSystem_SetIsSavingAllowed_Params params {};
		params.IsSavingAllowed = IsSavingAllowed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SetInChapterReplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               inReplay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Chapter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::SetInChapterReplay(bool inReplay, int32_t Chapter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetInChapterReplay");
		
		UFNAFSaveGameSystem_SetInChapterReplay_Params params {};
		params.inReplay = inReplay;
		params.Chapter = Chapter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SetChowdaProfileIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            profileIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::SetChowdaProfileIndex(int32_t profileIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetChowdaProfileIndex");
		
		UFNAFSaveGameSystem_SetChowdaProfileIndex_Params params {};
		params.profileIndex = profileIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SaveCurrentGame
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::SaveCurrentGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SaveCurrentGame");
		
		UFNAFSaveGameSystem_SaveCurrentGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SaveCheckpoint
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::SaveCheckpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SaveCheckpoint");
		
		UFNAFSaveGameSystem_SaveCheckpoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SaveArcade
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::SaveArcade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SaveArcade");
		
		UFNAFSaveGameSystem_SaveArcade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.Reset_SaveSlots
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::Reset_SaveSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.Reset_SaveSlots");
		
		UFNAFSaveGameSystem_Reset_SaveSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.Rename_SaveSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      originalSlotName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      renamedSlotName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::Rename_SaveSlot(const class FString& originalSlotName, const class FString& renamedSlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.Rename_SaveSlot");
		
		UFNAFSaveGameSystem_Rename_SaveSlot_Params params {};
		params.originalSlotName = originalSlotName;
		params.renamedSlotName = renamedSlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.RemoveAutoSaveIcon
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::RemoveAutoSaveIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.RemoveAutoSaveIcon");
		
		UFNAFSaveGameSystem_RemoveAutoSaveIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.PreviousSaveIsAuto
	 * 		Flags  -> ()
	 */
	bool UFNAFSaveGameSystem::PreviousSaveIsAuto()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.PreviousSaveIsAuto");
		
		UFNAFSaveGameSystem_PreviousSaveIsAuto_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadWorldTransitSave
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::LoadWorldTransitSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadWorldTransitSave");
		
		UFNAFSaveGameSystem_LoadWorldTransitSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadSaveSlotData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SlotName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFNAFSaveData* UFNAFSaveGameSystem::LoadSaveSlotData(const class FString& SlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadSaveSlotData");
		
		UFNAFSaveGameSystem_LoadSaveSlotData_Params params {};
		params.SlotName = SlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadMasterSave
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::LoadMasterSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadMasterSave");
		
		UFNAFSaveGameSystem_LoadMasterSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadChowdaAutoSaveData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ProfileIndexIn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFNAFSaveData* UFNAFSaveGameSystem::LoadChowdaAutoSaveData(int32_t ProfileIndexIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadChowdaAutoSaveData");
		
		UFNAFSaveGameSystem_LoadChowdaAutoSaveData_Params params {};
		params.ProfileIndexIn = ProfileIndexIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadChowdaAutoSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ProfileIndexIn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::LoadChowdaAutoSave(int32_t ProfileIndexIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadChowdaAutoSave");
		
		UFNAFSaveGameSystem_LoadChowdaAutoSave_Params params {};
		params.ProfileIndexIn = ProfileIndexIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadCheckpoint
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::LoadCheckpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadCheckpoint");
		
		UFNAFSaveGameSystem_LoadCheckpoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadAutoSave
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::LoadAutoSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadAutoSave");
		
		UFNAFSaveGameSystem_LoadAutoSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadActivitySave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InActivityId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::LoadActivitySave(const class FString& InActivityId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadActivitySave");
		
		UFNAFSaveGameSystem_LoadActivitySave_Params params {};
		params.InActivityId = InActivityId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.IsSavingAllowed
	 * 		Flags  -> ()
	 */
	bool UFNAFSaveGameSystem::IsSavingAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.IsSavingAllowed");
		
		UFNAFSaveGameSystem_IsSavingAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.IsInChapterReplay
	 * 		Flags  -> ()
	 */
	bool UFNAFSaveGameSystem::IsInChapterReplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.IsInChapterReplay");
		
		UFNAFSaveGameSystem_IsInChapterReplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.HasSaveData
	 * 		Flags  -> ()
	 */
	bool UFNAFSaveGameSystem::HasSaveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.HasSaveData");
		
		UFNAFSaveGameSystem_HasSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.HasPreviousSave
	 * 		Flags  -> ()
	 */
	bool UFNAFSaveGameSystem::HasPreviousSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.HasPreviousSave");
		
		UFNAFSaveGameSystem_HasPreviousSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.HasChowdaSaveGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ProfileIndexIn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFSaveGameSystem::HasChowdaSaveGame(int32_t ProfileIndexIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.HasChowdaSaveGame");
		
		UFNAFSaveGameSystem_HasChowdaSaveGame_Params params {};
		params.ProfileIndexIn = ProfileIndexIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.HasAutoSave
	 * 		Flags  -> ()
	 */
	bool UFNAFSaveGameSystem::HasAutoSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.HasAutoSave");
		
		UFNAFSaveGameSystem_HasAutoSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.HasActivitySave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InActivityId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFSaveGameSystem::HasActivitySave(const class FString& InActivityId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.HasActivitySave");
		
		UFNAFSaveGameSystem_HasActivitySave_Params params {};
		params.InActivityId = InActivityId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.GetUserIndex
	 * 		Flags  -> ()
	 */
	int32_t UFNAFSaveGameSystem::GetUserIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.GetUserIndex");
		
		UFNAFSaveGameSystem_GetUserIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.GetUseAutosaveMapArea
	 * 		Flags  -> ()
	 */
	bool UFNAFSaveGameSystem::GetUseAutosaveMapArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.GetUseAutosaveMapArea");
		
		UFNAFSaveGameSystem_GetUseAutosaveMapArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.GetMapAreaToLoad
	 * 		Flags  -> ()
	 */
	EMapArea UFNAFSaveGameSystem::GetMapAreaToLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.GetMapAreaToLoad");
		
		UFNAFSaveGameSystem_GetMapAreaToLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.GetLoadIntoChapter
	 * 		Flags  -> ()
	 */
	bool UFNAFSaveGameSystem::GetLoadIntoChapter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.GetLoadIntoChapter");
		
		UFNAFSaveGameSystem_GetLoadIntoChapter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.GetLastSavedMapArea
	 * 		Flags  -> ()
	 */
	EMapArea UFNAFSaveGameSystem::GetLastSavedMapArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.GetLastSavedMapArea");
		
		UFNAFSaveGameSystem_GetLastSavedMapArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.GetLastSavedChapter
	 * 		Flags  -> ()
	 */
	int32_t UFNAFSaveGameSystem::GetLastSavedChapter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.GetLastSavedChapter");
		
		UFNAFSaveGameSystem_GetLastSavedChapter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.GetLastLoadedChowdaSlotName
	 * 		Flags  -> ()
	 */
	class FString UFNAFSaveGameSystem::GetLastLoadedChowdaSlotName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.GetLastLoadedChowdaSlotName");
		
		UFNAFSaveGameSystem_GetLastLoadedChowdaSlotName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.GetGameIteration
	 * 		Flags  -> ()
	 */
	int32_t UFNAFSaveGameSystem::GetGameIteration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.GetGameIteration");
		
		UFNAFSaveGameSystem_GetGameIteration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.GetCurrentChapter
	 * 		Flags  -> ()
	 */
	int32_t UFNAFSaveGameSystem::GetCurrentChapter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.GetCurrentChapter");
		
		UFNAFSaveGameSystem_GetCurrentChapter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.GetChowdaProfileIndex
	 * 		Flags  -> ()
	 */
	int32_t UFNAFSaveGameSystem::GetChowdaProfileIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.GetChowdaProfileIndex");
		
		UFNAFSaveGameSystem_GetChowdaProfileIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.Get_SaveSlotNameData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, class FString>                 SaveSlots_Map                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::Get_SaveSlotNameData(TMap<class FString, class FString>* SaveSlots_Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.Get_SaveSlotNameData");
		
		UFNAFSaveGameSystem_Get_SaveSlotNameData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SaveSlots_Map != nullptr)
			*SaveSlots_Map = params.SaveSlots_Map;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.Get_ChowdaSaveSlotNameData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FString, class FString>                 SaveSlots_Map                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::Get_ChowdaSaveSlotNameData(TMap<class FString, class FString>* SaveSlots_Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.Get_ChowdaSaveSlotNameData");
		
		UFNAFSaveGameSystem_Get_ChowdaSaveSlotNameData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SaveSlots_Map != nullptr)
			*SaveSlots_Map = params.SaveSlots_Map;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.FinalizeCheckpoint
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::FinalizeCheckpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.FinalizeCheckpoint");
		
		UFNAFSaveGameSystem_FinalizeCheckpoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.DLCCallToActionVisibility
	 * 		Flags  -> ()
	 */
	bool UFNAFSaveGameSystem::DLCCallToActionVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.DLCCallToActionVisibility");
		
		UFNAFSaveGameSystem_DLCCallToActionVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.DeleteSaveGameByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SlotName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::DeleteSaveGameByName(const class FString& SlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.DeleteSaveGameByName");
		
		UFNAFSaveGameSystem_DeleteSaveGameByName_Params params {};
		params.SlotName = SlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.DeleteSavedGame_BySlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            saveSlotNumber                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::DeleteSavedGame_BySlot(int32_t saveSlotNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.DeleteSavedGame_BySlot");
		
		UFNAFSaveGameSystem_DeleteSavedGame_BySlot_Params params {};
		params.saveSlotNumber = saveSlotNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.DeleteChowdaSaveGameByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SlotName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::DeleteChowdaSaveGameByName(const class FString& SlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.DeleteChowdaSaveGameByName");
		
		UFNAFSaveGameSystem_DeleteChowdaSaveGameByName_Params params {};
		params.SlotName = SlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.CreateWorldTransitSave
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::CreateWorldTransitSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.CreateWorldTransitSave");
		
		UFNAFSaveGameSystem_CreateWorldTransitSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.CreatePotentialCheckpoint
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::CreatePotentialCheckpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.CreatePotentialCheckpoint");
		
		UFNAFSaveGameSystem_CreatePotentialCheckpoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.ClearChowdaAutoSaves
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::ClearChowdaAutoSaves()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.ClearChowdaAutoSaves");
		
		UFNAFSaveGameSystem_ClearChowdaAutoSaves_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.ChowdaAutoSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Chapter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMapArea                                           MapAreaToSave                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SaveID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::ChowdaAutoSave(int32_t Chapter, EMapArea MapAreaToSave, const class FName& SaveID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.ChowdaAutoSave");
		
		UFNAFSaveGameSystem_ChowdaAutoSave_Params params {};
		params.Chapter = Chapter;
		params.MapAreaToSave = MapAreaToSave;
		params.SaveID = SaveID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.AutoSave
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::AutoSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.AutoSave");
		
		UFNAFSaveGameSystem_AutoSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.AsyncSaveGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      originalSlotName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isANewSlot                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isCurrentSlot                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Renamed_SaveSlot                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      internal_SlotName                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::AsyncSaveGame(const class FString& originalSlotName, bool isANewSlot, bool isCurrentSlot, const class FString& Renamed_SaveSlot, class FString* internal_SlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.AsyncSaveGame");
		
		UFNAFSaveGameSystem_AsyncSaveGame_Params params {};
		params.originalSlotName = originalSlotName;
		params.isANewSlot = isANewSlot;
		params.isCurrentSlot = isCurrentSlot;
		params.Renamed_SaveSlot = Renamed_SaveSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (internal_SlotName != nullptr)
			*internal_SlotName = params.internal_SlotName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.AsyncLoadGameLastLoaded
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::AsyncLoadGameLastLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.AsyncLoadGameLastLoaded");
		
		UFNAFSaveGameSystem_AsyncLoadGameLastLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.AsyncLoadGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      originalSlotName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isContinueSelected                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      internal_SlotName                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::AsyncLoadGame(const class FString& originalSlotName, bool isContinueSelected, class FString* internal_SlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.AsyncLoadGame");
		
		UFNAFSaveGameSystem_AsyncLoadGame_Params params {};
		params.originalSlotName = originalSlotName;
		params.isContinueSelected = isContinueSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (internal_SlotName != nullptr)
			*internal_SlotName = params.internal_SlotName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.AsyncLoadChowdaLastLoaded
	 * 		Flags  -> ()
	 */
	void UFNAFSaveGameSystem::AsyncLoadChowdaLastLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.AsyncLoadChowdaLastLoaded");
		
		UFNAFSaveGameSystem_AsyncLoadChowdaLastLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFSaveGameSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFSaveGameSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFSaveGameSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.FNAFSightSystem.SetSightSystemDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSightSystem::SetSightSystemDisplay(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSightSystem.SetSightSystemDisplay");
		
		UFNAFSightSystem_SetSightSystemDisplay_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFNAFSightSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAFSightSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.FNAFSightSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ForcedGCSubsystem.GetForceGCInProgrcess
	 * 		Flags  -> ()
	 */
	bool UForcedGCSubsystem::GetForceGCInProgrcess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ForcedGCSubsystem.GetForceGCInProgrcess");
		
		UForcedGCSubsystem_GetForceGCInProgrcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ForcedGCSubsystem.ForceGC
	 * 		Flags  -> ()
	 */
	void UForcedGCSubsystem::ForceGC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ForcedGCSubsystem.ForceGC");
		
		UForcedGCSubsystem_ForceGC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UForcedGCSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForcedGCSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.ForcedGCSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameClockSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameClockSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.GameClockSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameClockSystem.StartNextHour
	 * 		Flags  -> ()
	 */
	void UGameClockSystem::StartNextHour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.StartNextHour");
		
		UGameClockSystem_StartNextHour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameClockSystem.SetGameTimeEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Hour                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Minute                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameClockSystem::SetGameTimeEvent(const class FScriptDelegate& Delegate, int32_t Hour, int32_t Minute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetGameTimeEvent");
		
		UGameClockSystem_SetGameTimeEvent_Params params {};
		params.Delegate = Delegate;
		params.Hour = Hour;
		params.Minute = Minute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameClockSystem.SetGameEndEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameClockSystem::SetGameEndEvent(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetGameEndEvent");
		
		UGameClockSystem_SetGameEndEvent_Params params {};
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameClockSystem.SetCurrentTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Hour                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Minute                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPlayDelegates                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameClockSystem::SetCurrentTime(int32_t Hour, int32_t Minute, bool bPlayDelegates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetCurrentTime");
		
		UGameClockSystem_SetCurrentTime_Params params {};
		params.Hour = Hour;
		params.Minute = Minute;
		params.bPlayDelegates = bPlayDelegates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameClockSystem.SetCurrentMinute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Minute                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameClockSystem::SetCurrentMinute(int32_t Minute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetCurrentMinute");
		
		UGameClockSystem_SetCurrentMinute_Params params {};
		params.Minute = Minute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameClockSystem.SetCurrentHour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Hour                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameClockSystem::SetCurrentHour(int32_t Hour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetCurrentHour");
		
		UGameClockSystem_SetCurrentHour_Params params {};
		params.Hour = Hour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameClockSystem.SetClockRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bRunClock                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameClockSystem::SetClockRunning(bool bRunClock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetClockRunning");
		
		UGameClockSystem_SetClockRunning_Params params {};
		params.bRunClock = bRunClock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameClockSystem.SetClockRateInMinutesPerHour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinutesPerHour                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameClockSystem::SetClockRateInMinutesPerHour(int32_t MinutesPerHour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetClockRateInMinutesPerHour");
		
		UGameClockSystem_SetClockRateInMinutesPerHour_Params params {};
		params.MinutesPerHour = MinutesPerHour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameClockSystem.SetClockRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TotalRealHours                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameClockSystem::SetClockRate(int32_t TotalRealHours)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetClockRate");
		
		UGameClockSystem_SetClockRate_Params params {};
		params.TotalRealHours = TotalRealHours;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameClockSystem.ResetTimeDelegatesUpTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Hour                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Minute                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameClockSystem::ResetTimeDelegatesUpTo(int32_t Hour, int32_t Minute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.ResetTimeDelegatesUpTo");
		
		UGameClockSystem_ResetTimeDelegatesUpTo_Params params {};
		params.Hour = Hour;
		params.Minute = Minute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameClockSystem.OnNormalModeTriggered
	 * 		Flags  -> ()
	 */
	void UGameClockSystem::OnNormalModeTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.OnNormalModeTriggered");
		
		UGameClockSystem_OnNormalModeTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameClockSystem.OnMoonmanLiteTriggered
	 * 		Flags  -> ()
	 */
	void UGameClockSystem::OnMoonmanLiteTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.OnMoonmanLiteTriggered");
		
		UGameClockSystem_OnMoonmanLiteTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameClockSystem.OnMoonmanIntermediateTriggered
	 * 		Flags  -> ()
	 */
	void UGameClockSystem::OnMoonmanIntermediateTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.OnMoonmanIntermediateTriggered");
		
		UGameClockSystem_OnMoonmanIntermediateTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameClockSystem.OnMoonmanDangerTriggered
	 * 		Flags  -> ()
	 */
	void UGameClockSystem::OnMoonmanDangerTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.OnMoonmanDangerTriggered");
		
		UGameClockSystem_OnMoonmanDangerTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameClockSystem.IsClockRunning
	 * 		Flags  -> ()
	 */
	bool UGameClockSystem::IsClockRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.IsClockRunning");
		
		UGameClockSystem_IsClockRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameClockSystem.GetCurrentTimeInSeconds
	 * 		Flags  -> ()
	 */
	float UGameClockSystem::GetCurrentTimeInSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.GetCurrentTimeInSeconds");
		
		UGameClockSystem_GetCurrentTimeInSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameClockSystem.GetCurrentTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Hour                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Minute                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameClockSystem::GetCurrentTime(int32_t* Hour, int32_t* Minute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.GetCurrentTime");
		
		UGameClockSystem_GetCurrentTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hour != nullptr)
			*Hour = params.Hour;
		if (Minute != nullptr)
			*Minute = params.Minute;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameClockSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameClockSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.GameClockSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameTypeCheckComponent.OnNotAllowedGameType
	 * 		Flags  -> ()
	 */
	void UGameTypeCheckComponent::OnNotAllowedGameType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameTypeCheckComponent.OnNotAllowedGameType");
		
		UGameTypeCheckComponent_OnNotAllowedGameType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameTypeCheckComponent.OnAllowedGameType
	 * 		Flags  -> ()
	 */
	void UGameTypeCheckComponent::OnAllowedGameType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameTypeCheckComponent.OnAllowedGameType");
		
		UGameTypeCheckComponent_OnAllowedGameType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GameTypeCheckComponent.IsAllowed
	 * 		Flags  -> ()
	 */
	bool UGameTypeCheckComponent::IsAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameTypeCheckComponent.IsAllowed");
		
		UGameTypeCheckComponent_IsAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameTypeCheckComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameTypeCheckComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.GameTypeCheckComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameTypeCheckDestroy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameTypeCheckDestroy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.GameTypeCheckDestroy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GlitchInteractibleInterface.SetupGlitchInteractible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGlitchRandomItem*                           GlitchRandomItem                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      GlitchManager                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GlitchRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGlitchInteractibleInterface::SetupGlitchInteractible(class AGlitchRandomItem* GlitchRandomItem, class AActor* GlitchManager, float GlitchRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GlitchInteractibleInterface.SetupGlitchInteractible");
		
		UGlitchInteractibleInterface_SetupGlitchInteractible_Params params {};
		params.GlitchRandomItem = GlitchRandomItem;
		params.GlitchManager = GlitchManager;
		params.GlitchRadius = GlitchRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlitchInteractibleInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlitchInteractibleInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.GlitchInteractibleInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GlitchManagerInterface.SetupGlitchActivators
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              GlitchActivators                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UGlitchManagerInterface::SetupGlitchActivators(TArray<class AActor*> GlitchActivators)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GlitchManagerInterface.SetupGlitchActivators");
		
		UGlitchManagerInterface_SetupGlitchActivators_Params params {};
		params.GlitchActivators = GlitchActivators;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGlitchManagerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlitchManagerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.GlitchManagerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GlitchRandomItem.GlitchFixed
	 * 		Flags  -> ()
	 */
	void AGlitchRandomItem::GlitchFixed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GlitchRandomItem.GlitchFixed");
		
		AGlitchRandomItem_GlitchFixed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.GlitchRandomItem.GetActors
	 * 		Flags  -> ()
	 */
	void AGlitchRandomItem::GetActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GlitchRandomItem.GetActors");
		
		AGlitchRandomItem_GetActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGlitchRandomItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGlitchRandomItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.GlitchRandomItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGlobalAIPerception.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGlobalAIPerception::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.GlobalAIPerception");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.HideObjectInterface.StartSearch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       SearcherPawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHideObjectInterface::StartSearch(class APawn* SearcherPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.StartSearch");
		
		UHideObjectInterface_StartSearch_Params params {};
		params.SearcherPawn = SearcherPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.HideObjectInterface.PlayBotSearchSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SearcherActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHideObjectInterface::PlayBotSearchSound(class AActor* SearcherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.PlayBotSearchSound");
		
		UHideObjectInterface_PlayBotSearchSound_Params params {};
		params.SearcherActor = SearcherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.HideObjectInterface.OnPlayerLeave
	 * 		Flags  -> ()
	 */
	void UHideObjectInterface::OnPlayerLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.OnPlayerLeave");
		
		UHideObjectInterface_OnPlayerLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.HideObjectInterface.OnPlayerHide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  PlayerCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHideObjectInterface::OnPlayerHide(class ACharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.OnPlayerHide");
		
		UHideObjectInterface_OnPlayerHide_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.HideObjectInterface.IsEnterExitPlaying
	 * 		Flags  -> ()
	 */
	bool UHideObjectInterface::IsEnterExitPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.IsEnterExitPlaying");
		
		UHideObjectInterface_IsEnterExitPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.HideObjectInterface.GetSearchLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHideObjectInterface::GetSearchLocation(struct FVector* Location, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.GetSearchLocation");
		
		UHideObjectInterface_GetSearchLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.HideObjectInterface.GetHideType
	 * 		Flags  -> ()
	 */
	EHideObjectType UHideObjectInterface::GetHideType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.GetHideType");
		
		UHideObjectInterface_GetHideType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.HideObjectInterface.GetHideLocation
	 * 		Flags  -> ()
	 */
	struct FVector UHideObjectInterface::GetHideLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.GetHideLocation");
		
		UHideObjectInterface_GetHideLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.HideObjectInterface.GetHiddenPlayer
	 * 		Flags  -> ()
	 */
	class ACharacter* UHideObjectInterface::GetHiddenPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.GetHiddenPlayer");
		
		UHideObjectInterface_GetHiddenPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.HideObjectInterface.EndSearch
	 * 		Flags  -> ()
	 */
	void UHideObjectInterface::EndSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.EndSearch");
		
		UHideObjectInterface_EndSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHideObjectInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHideObjectInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.HideObjectInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.HUDProviderInterface.ShowHUD
	 * 		Flags  -> ()
	 */
	void UHUDProviderInterface::ShowHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HUDProviderInterface.ShowHUD");
		
		UHUDProviderInterface_ShowHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.HUDProviderInterface.ShowCinimaticSkip
	 * 		Flags  -> ()
	 */
	void UHUDProviderInterface::ShowCinimaticSkip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HUDProviderInterface.ShowCinimaticSkip");
		
		UHUDProviderInterface_ShowCinimaticSkip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.HUDProviderInterface.HideHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHideProgressWheel                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHUDProviderInterface::HideHUD(bool bHideProgressWheel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HUDProviderInterface.HideHUD");
		
		UHUDProviderInterface_HideHUD_Params params {};
		params.bHideProgressWheel = bHideProgressWheel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.HUDProviderInterface.BeginCinimaticSkipFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DelayDuration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHUDProviderInterface::BeginCinimaticSkipFade(float DelayDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HUDProviderInterface.BeginCinimaticSkipFade");
		
		UHUDProviderInterface_BeginCinimaticSkipFade_Params params {};
		params.DelayDuration = DelayDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDProviderInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDProviderInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.HUDProviderInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.InstructionCardRowBlueprintFunctionLibrary.GetControllerInstructionCard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInstructionCardRow                         MyStructRef                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UInstructionCardRowBlueprintFunctionLibrary::GetControllerInstructionCard(struct FInstructionCardRow* MyStructRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.InstructionCardRowBlueprintFunctionLibrary.GetControllerInstructionCard");
		
		UInstructionCardRowBlueprintFunctionLibrary_GetControllerInstructionCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MyStructRef != nullptr)
			*MyStructRef = params.MyStructRef;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInstructionCardRowBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstructionCardRowBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.InstructionCardRowBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.InventoryConditionalComponent.SetNewConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NewRequiredInventoryItem                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewRequiredSecurityLevel                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               NewRequiresPartyPass                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryConditionalComponent::SetNewConditions(const class FName& NewRequiredInventoryItem, int32_t NewRequiredSecurityLevel, bool NewRequiresPartyPass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.InventoryConditionalComponent.SetNewConditions");
		
		UInventoryConditionalComponent_SetNewConditions_Params params {};
		params.NewRequiredInventoryItem = NewRequiredInventoryItem;
		params.NewRequiredSecurityLevel = NewRequiredSecurityLevel;
		params.NewRequiresPartyPass = NewRequiresPartyPass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.InventoryConditionalComponent.OnMessageCollected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFNAFMessageTableStruct                     MessageTableStruct                                         (Parm, NativeAccessSpecifierPublic)
	 */
	void UInventoryConditionalComponent::OnMessageCollected(const class FName& ItemName, const struct FFNAFMessageTableStruct& MessageTableStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.InventoryConditionalComponent.OnMessageCollected");
		
		UInventoryConditionalComponent_OnMessageCollected_Params params {};
		params.ItemName = ItemName;
		params.MessageTableStruct = MessageTableStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.InventoryConditionalComponent.OnItemCollected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFNAFInventoryTableStruct                   InventoryTableStruct                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void UInventoryConditionalComponent::OnItemCollected(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryTableStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.InventoryConditionalComponent.OnItemCollected");
		
		UInventoryConditionalComponent_OnItemCollected_Params params {};
		params.ItemName = ItemName;
		params.InventoryTableStruct = InventoryTableStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.InventoryConditionalComponent.HasMetConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutConditionsMet                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EConditionFailReason                               OutFailReason                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryConditionalComponent::HasMetConditions(bool* OutConditionsMet, EConditionFailReason* OutFailReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.InventoryConditionalComponent.HasMetConditions");
		
		UInventoryConditionalComponent_HasMetConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConditionsMet != nullptr)
			*OutConditionsMet = params.OutConditionsMet;
		if (OutFailReason != nullptr)
			*OutFailReason = params.OutFailReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryConditionalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryConditionalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.InventoryConditionalComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ItemCollectListenerComponent.SetEventsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UItemCollectListenerComponent::SetEventsEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ItemCollectListenerComponent.SetEventsEnabled");
		
		UItemCollectListenerComponent_SetEventsEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ItemCollectListenerComponent.OnItemCollectedHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFNAFInventoryTableStruct                   InventoryItemInfo                                          (Parm, NativeAccessSpecifierPublic)
	 */
	void UItemCollectListenerComponent::OnItemCollectedHandler(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ItemCollectListenerComponent.OnItemCollectedHandler");
		
		UItemCollectListenerComponent_OnItemCollectedHandler_Params params {};
		params.ItemName = ItemName;
		params.InventoryItemInfo = InventoryItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ItemCollectListenerComponent.GetEventsEnabled
	 * 		Flags  -> ()
	 */
	bool UItemCollectListenerComponent::GetEventsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ItemCollectListenerComponent.GetEventsEnabled");
		
		UItemCollectListenerComponent_GetEventsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemCollectListenerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemCollectListenerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.ItemCollectListenerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.JsonHandler.GenerateJsonStringFromStruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStruct*                                     Struct                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutJsonString                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UJsonHandler::GenerateJsonStringFromStruct(class UStruct* Struct, class FString* OutJsonString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.JsonHandler.GenerateJsonStringFromStruct");
		
		UJsonHandler_GenerateJsonStringFromStruct_Params params {};
		params.Struct = Struct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutJsonString != nullptr)
			*OutJsonString = params.OutJsonString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJsonHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJsonHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.JsonHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelLoaderComponent.UnLoadCurrentScenario
	 * 		Flags  -> ()
	 */
	void ULevelLoaderComponent::UnLoadCurrentScenario()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelLoaderComponent.UnLoadCurrentScenario");
		
		ULevelLoaderComponent_UnLoadCurrentScenario_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelLoaderComponent.SetNextLightScenario
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Scenario                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULevelLoaderComponent::SetNextLightScenario(int32_t Scenario)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelLoaderComponent.SetNextLightScenario");
		
		ULevelLoaderComponent_SetNextLightScenario_Params params {};
		params.Scenario = Scenario;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelLoaderComponent.SetLevelsToUnLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                UnloadedLevels                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> ULevelLoaderComponent::SetLevelsToUnLoad(TArray<class FName> UnloadedLevels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelLoaderComponent.SetLevelsToUnLoad");
		
		ULevelLoaderComponent_SetLevelsToUnLoad_Params params {};
		params.UnloadedLevels = UnloadedLevels;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelLoaderComponent.SetLevelsToLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                LoadedLevels                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> ULevelLoaderComponent::SetLevelsToLoad(TArray<class FName> LoadedLevels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelLoaderComponent.SetLevelsToLoad");
		
		ULevelLoaderComponent_SetLevelsToLoad_Params params {};
		params.LoadedLevels = LoadedLevels;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelLoaderComponent.LoadTheNextScenario
	 * 		Flags  -> ()
	 */
	void ULevelLoaderComponent::LoadTheNextScenario()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelLoaderComponent.LoadTheNextScenario");
		
		ULevelLoaderComponent_LoadTheNextScenario_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelLoaderComponent.LoadTheNextArea
	 * 		Flags  -> ()
	 */
	void ULevelLoaderComponent::LoadTheNextArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelLoaderComponent.LoadTheNextArea");
		
		ULevelLoaderComponent_LoadTheNextArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelLoaderComponent.GetLevelsToLoad
	 * 		Flags  -> ()
	 */
	TArray<class FName> ULevelLoaderComponent::GetLevelsToLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelLoaderComponent.GetLevelsToLoad");
		
		ULevelLoaderComponent_GetLevelsToLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelLoaderComponent.DebugSkipToNextArea
	 * 		Flags  -> ()
	 */
	void ULevelLoaderComponent::DebugSkipToNextArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelLoaderComponent.DebugSkipToNextArea");
		
		ULevelLoaderComponent_DebugSkipToNextArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelLoaderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelLoaderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.LevelLoaderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelLoadSubsystem.LoadTheNextArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapArea                                           MapArea                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULevelLoadSubsystem::LoadTheNextArea(EMapArea MapArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelLoadSubsystem.LoadTheNextArea");
		
		ULevelLoadSubsystem_LoadTheNextArea_Params params {};
		params.MapArea = MapArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelLoadSubsystem.IsTickable
	 * 		Flags  -> ()
	 */
	bool ULevelLoadSubsystem::IsTickable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelLoadSubsystem.IsTickable");
		
		ULevelLoadSubsystem_IsTickable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelLoadSubsystem.GetVisibleLevels
	 * 		Flags  -> ()
	 */
	TArray<class FName> ULevelLoadSubsystem::GetVisibleLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelLoadSubsystem.GetVisibleLevels");
		
		ULevelLoadSubsystem_GetVisibleLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelLoadSubsystem.GetCurrentMapArea
	 * 		Flags  -> ()
	 */
	EMapArea ULevelLoadSubsystem::GetCurrentMapArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelLoadSubsystem.GetCurrentMapArea");
		
		ULevelLoadSubsystem_GetCurrentMapArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelLoadSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelLoadSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.LevelLoadSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelStreamViewpoint.SetStreamingEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULevelStreamViewpoint::SetStreamingEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelStreamViewpoint.SetStreamingEnable");
		
		ULevelStreamViewpoint_SetStreamingEnable_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelStreamViewpoint.OnLevelManagerUpdated
	 * 		Flags  -> ()
	 */
	void ULevelStreamViewpoint::OnLevelManagerUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelStreamViewpoint.OnLevelManagerUpdated");
		
		ULevelStreamViewpoint_OnLevelManagerUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelStreamViewpoint.GetStreamingLevelNames
	 * 		Flags  -> ()
	 */
	TArray<class FName> ULevelStreamViewpoint::GetStreamingLevelNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelStreamViewpoint.GetStreamingLevelNames");
		
		ULevelStreamViewpoint_GetStreamingLevelNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelStreamViewpoint.AnyLevelsLoaded
	 * 		Flags  -> ()
	 */
	bool ULevelStreamViewpoint::AnyLevelsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelStreamViewpoint.AnyLevelsLoaded");
		
		ULevelStreamViewpoint_AnyLevelsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelStreamViewpoint.AllLevelsLoaded
	 * 		Flags  -> ()
	 */
	bool ULevelStreamViewpoint::AllLevelsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelStreamViewpoint.AllLevelsLoaded");
		
		ULevelStreamViewpoint_AllLevelsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelStreamViewpoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelStreamViewpoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.LevelStreamViewpoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LevelStreamViewpointProvider.GetLevelStreamViewpoint
	 * 		Flags  -> ()
	 */
	class ULevelStreamViewpoint* ULevelStreamViewpointProvider::GetLevelStreamViewpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelStreamViewpointProvider.GetLevelStreamViewpoint");
		
		ULevelStreamViewpointProvider_GetLevelStreamViewpoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelStreamViewpointProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelStreamViewpointProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.LevelStreamViewpointProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightingMaterialManager.OnLevelVisible
	 * 		Flags  -> ()
	 */
	void ALightingMaterialManager::OnLevelVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightingMaterialManager.OnLevelVisible");
		
		ALightingMaterialManager_OnLevelVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightingMaterialManager.OnBeginLightScenarioChange
	 * 		Flags  -> ()
	 */
	void ALightingMaterialManager::OnBeginLightScenarioChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightingMaterialManager.OnBeginLightScenarioChange");
		
		ALightingMaterialManager_OnBeginLightScenarioChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightingMaterialManager.OnActivateSpecialLightingScenerio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALightingMaterialManager::OnActivateSpecialLightingScenerio(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightingMaterialManager.OnActivateSpecialLightingScenerio");
		
		ALightingMaterialManager_OnActivateSpecialLightingScenerio_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALightingMaterialManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALightingMaterialManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.LightingMaterialManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.UnloadArea
	 * 		Flags  -> ()
	 */
	void ULightScenarioManager::UnloadArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.UnloadArea");
		
		ULightScenarioManager_UnloadArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.UnbindOnEndScenarioChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULightScenarioManager::UnbindOnEndScenarioChange(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.UnbindOnEndScenarioChange");
		
		ULightScenarioManager_UnbindOnEndScenarioChange_Params params {};
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.UnbindOnBeginScenarioChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULightScenarioManager::UnbindOnBeginScenarioChange(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.UnbindOnBeginScenarioChange");
		
		ULightScenarioManager_UnbindOnBeginScenarioChange_Params params {};
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.SetInitialScenario
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Area                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELightingScenario                                  Scenario                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightScenarioManager::SetInitialScenario(int32_t Area, ELightingScenario Scenario)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.SetInitialScenario");
		
		ULightScenarioManager_SetInitialScenario_Params params {};
		params.Area = Area;
		params.Scenario = Scenario;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.OnUnloadFinished
	 * 		Flags  -> ()
	 */
	void ULightScenarioManager::OnUnloadFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnUnloadFinished");
		
		ULightScenarioManager_OnUnloadFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.OnTick
	 * 		Flags  -> ()
	 */
	void ULightScenarioManager::OnTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnTick");
		
		ULightScenarioManager_OnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.OnPropagate
	 * 		Flags  -> ()
	 */
	void ULightScenarioManager::OnPropagate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnPropagate");
		
		ULightScenarioManager_OnPropagate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.OnLoadFinished
	 * 		Flags  -> ()
	 */
	void ULightScenarioManager::OnLoadFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnLoadFinished");
		
		ULightScenarioManager_OnLoadFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.OnFadeoutFinished
	 * 		Flags  -> ()
	 */
	void ULightScenarioManager::OnFadeoutFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnFadeoutFinished");
		
		ULightScenarioManager_OnFadeoutFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.OnChangeAreaUnloadFinished
	 * 		Flags  -> ()
	 */
	void ULightScenarioManager::OnChangeAreaUnloadFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnChangeAreaUnloadFinished");
		
		ULightScenarioManager_OnChangeAreaUnloadFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.OnChangeAreaLoadFinished
	 * 		Flags  -> ()
	 */
	void ULightScenarioManager::OnChangeAreaLoadFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnChangeAreaLoadFinished");
		
		ULightScenarioManager_OnChangeAreaLoadFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.IsChangingScenario
	 * 		Flags  -> ()
	 */
	bool ULightScenarioManager::IsChangingScenario()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.IsChangingScenario");
		
		ULightScenarioManager_IsChangingScenario_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.GetLightScenarioAreaFromMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MapName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELightScenarioArea                                 OutArea                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELightingScenario                                  OutScenario                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightScenarioManager::GetLightScenarioAreaFromMap(const class FName& MapName, ELightScenarioArea* OutArea, ELightingScenario* OutScenario)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.GetLightScenarioAreaFromMap");
		
		ULightScenarioManager_GetLightScenarioAreaFromMap_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutArea != nullptr)
			*OutArea = params.OutArea;
		if (OutScenario != nullptr)
			*OutScenario = params.OutScenario;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.GetLevelNameFromAreaScenario
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Area                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELightingScenario                                  Scenario                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName ULightScenarioManager::GetLevelNameFromAreaScenario(int32_t Area, ELightingScenario Scenario)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.GetLevelNameFromAreaScenario");
		
		ULightScenarioManager_GetLevelNameFromAreaScenario_Params params {};
		params.Area = Area;
		params.Scenario = Scenario;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.GetCurrentLightingScenario
	 * 		Flags  -> ()
	 */
	ELightingScenario ULightScenarioManager::GetCurrentLightingScenario()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.GetCurrentLightingScenario");
		
		ULightScenarioManager_GetCurrentLightingScenario_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.GetCurrentArea
	 * 		Flags  -> ()
	 */
	int32_t ULightScenarioManager::GetCurrentArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.GetCurrentArea");
		
		ULightScenarioManager_GetCurrentArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.EndLoadSequence
	 * 		Flags  -> ()
	 */
	void ULightScenarioManager::EndLoadSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.EndLoadSequence");
		
		ULightScenarioManager_EndLoadSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.ChangeScenario
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELightingScenario                                  NewScenario                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseFade                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightScenarioManager::ChangeScenario(ELightingScenario NewScenario, bool bUseFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.ChangeScenario");
		
		ULightScenarioManager_ChangeScenario_Params params {};
		params.NewScenario = NewScenario;
		params.bUseFade = bUseFade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.ChangeArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Area                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightScenarioManager::ChangeArea(int32_t Area)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.ChangeArea");
		
		ULightScenarioManager_ChangeArea_Params params {};
		params.Area = Area;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.BindOnEndScenarioChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULightScenarioManager::BindOnEndScenarioChange(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.BindOnEndScenarioChange");
		
		ULightScenarioManager_BindOnEndScenarioChange_Params params {};
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.BindOnBeginScenarioChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULightScenarioManager::BindOnBeginScenarioChange(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.BindOnBeginScenarioChange");
		
		ULightScenarioManager_BindOnBeginScenarioChange_Params params {};
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LightScenarioManager.BeginLoadSequence
	 * 		Flags  -> ()
	 */
	void ULightScenarioManager::BeginLoadSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.BeginLoadSequence");
		
		ULightScenarioManager_BeginLoadSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightScenarioManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightScenarioManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.LightScenarioManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULightScenarioManagerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightScenarioManagerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.LightScenarioManagerSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALightStreamingVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALightStreamingVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.LightStreamingVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LoadingScreenComponent.SetPlayerCollider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InPlayerCollider                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadingScreenComponent::SetPlayerCollider(class UPrimitiveComponent* InPlayerCollider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LoadingScreenComponent.SetPlayerCollider");
		
		ULoadingScreenComponent_SetPlayerCollider_Params params {};
		params.InPlayerCollider = InPlayerCollider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LoadingScreenComponent.SetLevelStreamViewpoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelStreamViewpoint*                       Front                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULevelStreamViewpoint*                       Back                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadingScreenComponent::SetLevelStreamViewpoints(class ULevelStreamViewpoint* Front, class ULevelStreamViewpoint* Back)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LoadingScreenComponent.SetLevelStreamViewpoints");
		
		ULoadingScreenComponent_SetLevelStreamViewpoints_Params params {};
		params.Front = Front;
		params.Back = Back;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LoadingScreenComponent.OnPlayerExit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InPlayer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadingScreenComponent::OnPlayerExit(class AActor* InPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LoadingScreenComponent.OnPlayerExit");
		
		ULoadingScreenComponent_OnPlayerExit_Params params {};
		params.InPlayer = InPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.LoadingScreenComponent.OnPlayerEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InPlayer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadingScreenComponent::OnPlayerEnter(class AActor* InPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LoadingScreenComponent.OnPlayerEnter");
		
		ULoadingScreenComponent_OnPlayerEnter_Params params {};
		params.InPlayer = InPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadingScreenComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingScreenComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.LoadingScreenComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadingScreenComponent_DLC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingScreenComponent_DLC::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.LoadingScreenComponent_DLC");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.Localization.GetLocalizationCultureFromSteam
	 * 		Flags  -> ()
	 */
	ELocalizationCulture ULocalization::GetLocalizationCultureFromSteam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.Localization.GetLocalizationCultureFromSteam");
		
		ULocalization_GetLocalizationCultureFromSteam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.Localization.GetLocalizationCulture
	 * 		Flags  -> ()
	 */
	ELocalizationCulture ULocalization::GetLocalizationCulture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.Localization.GetLocalizationCulture");
		
		ULocalization_GetLocalizationCulture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.Localization.ChangeLocalizationCulture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELocalizationCulture                               Culture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULocalization::ChangeLocalizationCulture(ELocalizationCulture Culture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.Localization.ChangeLocalizationCulture");
		
		ULocalization_ChangeLocalizationCulture_Params params {};
		params.Culture = Culture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocalization.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocalization::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.Localization");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MissionDisplayQueueLibrary.PushMissionUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMissionUpdateType                                 UpdateType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FFNAFMissionState                           MissionState                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMissionDisplayQueueLibrary::PushMissionUpdate(EMissionUpdateType UpdateType, const class FName& MissionName, const struct FFNAFMissionInfo& MissionInfo, const struct FFNAFMissionState& MissionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MissionDisplayQueueLibrary.PushMissionUpdate");
		
		UMissionDisplayQueueLibrary_PushMissionUpdate_Params params {};
		params.UpdateType = UpdateType;
		params.MissionName = MissionName;
		params.MissionInfo = MissionInfo;
		params.MissionState = MissionState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MissionDisplayQueueLibrary.HasMissionUpdateInQueue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMissionInQueue                                    MissionInQueue                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionDisplayQueueLibrary::HasMissionUpdateInQueue(EMissionInQueue* MissionInQueue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MissionDisplayQueueLibrary.HasMissionUpdateInQueue");
		
		UMissionDisplayQueueLibrary_HasMissionUpdateInQueue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MissionInQueue != nullptr)
			*MissionInQueue = params.MissionInQueue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MissionDisplayQueueLibrary.GetNextMissionUpdate
	 * 		Flags  -> ()
	 */
	struct FMissionDisplayUpdateInfo UMissionDisplayQueueLibrary::GetNextMissionUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MissionDisplayQueueLibrary.GetNextMissionUpdate");
		
		UMissionDisplayQueueLibrary_GetNextMissionUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MissionDisplayQueueLibrary.ClearMissionUpdateQueue
	 * 		Flags  -> ()
	 */
	void UMissionDisplayQueueLibrary::ClearMissionUpdateQueue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MissionDisplayQueueLibrary.ClearMissionUpdateQueue");
		
		UMissionDisplayQueueLibrary_ClearMissionUpdateQueue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionDisplayQueueLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionDisplayQueueLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.MissionDisplayQueueLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MissionMarker.GetStateIndex
	 * 		Flags  -> ()
	 */
	int32_t AMissionMarker::GetStateIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MissionMarker.GetStateIndex");
		
		AMissionMarker_GetStateIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MissionMarker.GetMissionName
	 * 		Flags  -> ()
	 */
	class FName AMissionMarker::GetMissionName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MissionMarker.GetMissionName");
		
		AMissionMarker_GetMissionName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMissionMarker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMissionMarker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.MissionMarker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MissionStateCondition.OnMissionUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InMissionName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFNAFMissionState                           MissionState                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMissionStateCondition::OnMissionUpdated(const class FName& InMissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MissionStateCondition.OnMissionUpdated");
		
		UMissionStateCondition_OnMissionUpdated_Params params {};
		params.InMissionName = InMissionName;
		params.MissionState = MissionState;
		params.MissionInfo = MissionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MissionStateCondition.HasMetConditions
	 * 		Flags  -> ()
	 */
	bool UMissionStateCondition::HasMetConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MissionStateCondition.HasMetConditions");
		
		UMissionStateCondition_HasMetConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionStateCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionStateCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.MissionStateCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.UnRegisterSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMoonmanSpawnPoint*                          InSpawnPoint                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoonmanManagementSystem::UnRegisterSpawn(class AMoonmanSpawnPoint* InSpawnPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.UnRegisterSpawn");
		
		UMoonmanManagementSystem_UnRegisterSpawn_Params params {};
		params.InSpawnPoint = InSpawnPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.UnpauseMoonmanManager
	 * 		Flags  -> ()
	 */
	void UMoonmanManagementSystem::UnpauseMoonmanManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.UnpauseMoonmanManager");
		
		UMoonmanManagementSystem_UnpauseMoonmanManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.StartMoonmanLiteManager
	 * 		Flags  -> ()
	 */
	void UMoonmanManagementSystem::StartMoonmanLiteManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.StartMoonmanLiteManager");
		
		UMoonmanManagementSystem_StartMoonmanLiteManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.StartMoonmanDangerManager
	 * 		Flags  -> ()
	 */
	void UMoonmanManagementSystem::StartMoonmanDangerManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.StartMoonmanDangerManager");
		
		UMoonmanManagementSystem_StartMoonmanDangerManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.RegisterSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMoonmanSpawnPoint*                          InSpawnPoint                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoonmanManagementSystem::RegisterSpawn(class AMoonmanSpawnPoint* InSpawnPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.RegisterSpawn");
		
		UMoonmanManagementSystem_RegisterSpawn_Params params {};
		params.InSpawnPoint = InSpawnPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.PauseMoonmanManager
	 * 		Flags  -> ()
	 */
	void UMoonmanManagementSystem::PauseMoonmanManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.PauseMoonmanManager");
		
		UMoonmanManagementSystem_PauseMoonmanManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.OnWorldStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFGameState                                     NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFGameState                                     PrevState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoonmanManagementSystem::OnWorldStateChanged(EFNAFGameState NewState, EFNAFGameState PrevState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.OnWorldStateChanged");
		
		UMoonmanManagementSystem_OnWorldStateChanged_Params params {};
		params.NewState = NewState;
		params.PrevState = PrevState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPointsFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMMAnimCategory                                    MMAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AMoonmanSpawnPoint*> UMoonmanManagementSystem::GetAllMMSpawnPointsFor(EMMAnimCategory MMAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPointsFor");
		
		UMoonmanManagementSystem_GetAllMMSpawnPointsFor_Params params {};
		params.MMAnimation = MMAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPoints
	 * 		Flags  -> ()
	 */
	TArray<class AMoonmanSpawnPoint*> UMoonmanManagementSystem::GetAllMMSpawnPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPoints");
		
		UMoonmanManagementSystem_GetAllMMSpawnPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoonmanManagementSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoonmanManagementSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.MoonmanManagementSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetSpawnProbability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              tempProbability                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetSpawnProbability(float tempProbability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetSpawnProbability");
		
		AMoonmanSpawnPoint_SetSpawnProbability_Params params {};
		params.tempProbability = tempProbability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetShouldFollowPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetShouldFollowPlayer(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetShouldFollowPlayer");
		
		AMoonmanSpawnPoint_SetShouldFollowPlayer_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetMMAnimCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMMAnimCategory                                    In                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetMMAnimCategory(EMMAnimCategory In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetMMAnimCategory");
		
		AMoonmanSpawnPoint_SetMMAnimCategory_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isTriggered                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetIsTriggered(bool isTriggered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsTriggered");
		
		AMoonmanSpawnPoint_SetIsTriggered_Params params {};
		params.isTriggered = isTriggered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsStationary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetIsStationary(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsStationary");
		
		AMoonmanSpawnPoint_SetIsStationary_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsSpawned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSpawned                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetIsSpawned(bool IsSpawned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsSpawned");
		
		AMoonmanSpawnPoint_SetIsSpawned_Params params {};
		params.IsSpawned = IsSpawned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsSingleUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetIsSingleUse(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsSingleUse");
		
		AMoonmanSpawnPoint_SetIsSingleUse_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsMMDetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSkeletonDetected                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetIsMMDetected(bool IsSkeletonDetected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsMMDetected");
		
		AMoonmanSpawnPoint_SetIsMMDetected_Params params {};
		params.IsSkeletonDetected = IsSkeletonDetected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsAnimLoop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetIsAnimLoop(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsAnimLoop");
		
		AMoonmanSpawnPoint_SetIsAnimLoop_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetHasSpawnedOnce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasSpawnedOnce                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetHasSpawnedOnce(bool HasSpawnedOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetHasSpawnedOnce");
		
		AMoonmanSpawnPoint_SetHasSpawnedOnce_Params params {};
		params.HasSpawnedOnce = HasSpawnedOnce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetHasLookedOnce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasLookedOnce                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetHasLookedOnce(bool HasLookedOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetHasLookedOnce");
		
		AMoonmanSpawnPoint_SetHasLookedOnce_Params params {};
		params.HasLookedOnce = HasLookedOnce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetCanSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               canSpawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetCanSpawn(bool canSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetCanSpawn");
		
		AMoonmanSpawnPoint_SetCanSpawn_Params params {};
		params.canSpawn = canSpawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetCanPopUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetCanPopUp(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetCanPopUp");
		
		AMoonmanSpawnPoint_SetCanPopUp_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetAimHeadAtPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetAimHeadAtPlayer(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetAimHeadAtPlayer");
		
		AMoonmanSpawnPoint_SetAimHeadAtPlayer_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.OnSetAIDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::OnSetAIDisplay(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.OnSetAIDisplay");
		
		AMoonmanSpawnPoint_OnSetAIDisplay_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetSpawnProbability
	 * 		Flags  -> ()
	 */
	float AMoonmanSpawnPoint::GetSpawnProbability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetSpawnProbability");
		
		AMoonmanSpawnPoint_GetSpawnProbability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetOriginalProbability
	 * 		Flags  -> ()
	 */
	float AMoonmanSpawnPoint::GetOriginalProbability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetOriginalProbability");
		
		AMoonmanSpawnPoint_GetOriginalProbability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetMMAnimSeq_Array
	 * 		Flags  -> ()
	 */
	TArray<class UAnimSequence*> AMoonmanSpawnPoint::GetMMAnimSeq_Array()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetMMAnimSeq_Array");
		
		AMoonmanSpawnPoint_GetMMAnimSeq_Array_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetMMAnimCategory
	 * 		Flags  -> ()
	 */
	EMMAnimCategory AMoonmanSpawnPoint::GetMMAnimCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetMMAnimCategory");
		
		AMoonmanSpawnPoint_GetMMAnimCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsTriggered
	 * 		Flags  -> ()
	 */
	bool AMoonmanSpawnPoint::GetIsTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsTriggered");
		
		AMoonmanSpawnPoint_GetIsTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsStationary
	 * 		Flags  -> ()
	 */
	bool AMoonmanSpawnPoint::GetIsStationary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsStationary");
		
		AMoonmanSpawnPoint_GetIsStationary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsSpawned
	 * 		Flags  -> ()
	 */
	bool AMoonmanSpawnPoint::GetIsSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsSpawned");
		
		AMoonmanSpawnPoint_GetIsSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsSingleUse
	 * 		Flags  -> ()
	 */
	bool AMoonmanSpawnPoint::GetIsSingleUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsSingleUse");
		
		AMoonmanSpawnPoint_GetIsSingleUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsMMDetected
	 * 		Flags  -> ()
	 */
	bool AMoonmanSpawnPoint::GetIsMMDetected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsMMDetected");
		
		AMoonmanSpawnPoint_GetIsMMDetected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsFollowPlayerTrue
	 * 		Flags  -> ()
	 */
	bool AMoonmanSpawnPoint::GetIsFollowPlayerTrue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsFollowPlayerTrue");
		
		AMoonmanSpawnPoint_GetIsFollowPlayerTrue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsAnimLoop
	 * 		Flags  -> ()
	 */
	bool AMoonmanSpawnPoint::GetIsAnimLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsAnimLoop");
		
		AMoonmanSpawnPoint_GetIsAnimLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetHasSpawnedOnce
	 * 		Flags  -> ()
	 */
	bool AMoonmanSpawnPoint::GetHasSpawnedOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetHasSpawnedOnce");
		
		AMoonmanSpawnPoint_GetHasSpawnedOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetHasLookedOnce
	 * 		Flags  -> ()
	 */
	bool AMoonmanSpawnPoint::GetHasLookedOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetHasLookedOnce");
		
		AMoonmanSpawnPoint_GetHasLookedOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetCanSpawn
	 * 		Flags  -> ()
	 */
	bool AMoonmanSpawnPoint::GetCanSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetCanSpawn");
		
		AMoonmanSpawnPoint_GetCanSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetCanPopUp
	 * 		Flags  -> ()
	 */
	bool AMoonmanSpawnPoint::GetCanPopUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetCanPopUp");
		
		AMoonmanSpawnPoint_GetCanPopUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetAimHeadAtPlayer
	 * 		Flags  -> ()
	 */
	bool AMoonmanSpawnPoint::GetAimHeadAtPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetAimHeadAtPlayer");
		
		AMoonmanSpawnPoint_GetAimHeadAtPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.DetectTheSpawnPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMoonmanSpawnPoint*                          passed_HitActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               passed_bVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::DetectTheSpawnPoint(class AMoonmanSpawnPoint* passed_HitActor, bool passed_bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.DetectTheSpawnPoint");
		
		AMoonmanSpawnPoint_DetectTheSpawnPoint_Params params {};
		params.passed_HitActor = passed_HitActor;
		params.passed_bVisible = passed_bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMoonmanSpawnPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMoonmanSpawnPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.MoonmanSpawnPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.OptionsMenu.VolumeSliders
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MasterVolume                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MusicVolume                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VoiceVolume                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              JumpscareVolume                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SFXVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOptionsMenu::VolumeSliders(float MasterVolume, float MusicVolume, float VoiceVolume, float JumpscareVolume, float SFXVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.OptionsMenu.VolumeSliders");
		
		UOptionsMenu_VolumeSliders_Params params {};
		params.MasterVolume = MasterVolume;
		params.MusicVolume = MusicVolume;
		params.VoiceVolume = VoiceVolume;
		params.JumpscareVolume = JumpscareVolume;
		params.SFXVolume = SFXVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.OptionsMenu.UpdateSubtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SubtitlesValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SubtitlesOn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SubtitlesSmall                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SubtitlesLarge                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptionsMenu::UpdateSubtitles(int32_t SubtitlesValue, bool SubtitlesOn, bool SubtitlesSmall, bool SubtitlesLarge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.OptionsMenu.UpdateSubtitles");
		
		UOptionsMenu_UpdateSubtitles_Params params {};
		params.SubtitlesValue = SubtitlesValue;
		params.SubtitlesOn = SubtitlesOn;
		params.SubtitlesSmall = SubtitlesSmall;
		params.SubtitlesLarge = SubtitlesLarge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.OptionsMenu.RestoreVideoSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWindowMode                                        DefaultScreenMode                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DefaultRes                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DefaultColorblind                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VisualQuality                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOptionsMenu::RestoreVideoSettings(EWindowMode DefaultScreenMode, int32_t DefaultRes, int32_t DefaultColorblind, int32_t VisualQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.OptionsMenu.RestoreVideoSettings");
		
		UOptionsMenu_RestoreVideoSettings_Params params {};
		params.DefaultScreenMode = DefaultScreenMode;
		params.DefaultRes = DefaultRes;
		params.DefaultColorblind = DefaultColorblind;
		params.VisualQuality = VisualQuality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.OptionsMenu.RestoreAudioSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MasterVolume                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MusicVolume                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VoiceVolume                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              JumpscareVolume                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SFXVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UISubtitlesValue                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               UISubtitlesOn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               UISubtitlesSmall                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               UISubtitlesLarge                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOptionsMenu::RestoreAudioSettings(float MasterVolume, float MusicVolume, float VoiceVolume, float JumpscareVolume, float SFXVolume, int32_t UISubtitlesValue, bool UISubtitlesOn, bool UISubtitlesSmall, bool UISubtitlesLarge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.OptionsMenu.RestoreAudioSettings");
		
		UOptionsMenu_RestoreAudioSettings_Params params {};
		params.MasterVolume = MasterVolume;
		params.MusicVolume = MusicVolume;
		params.VoiceVolume = VoiceVolume;
		params.JumpscareVolume = JumpscareVolume;
		params.SFXVolume = SFXVolume;
		params.UISubtitlesValue = UISubtitlesValue;
		params.UISubtitlesOn = UISubtitlesOn;
		params.UISubtitlesSmall = UISubtitlesSmall;
		params.UISubtitlesLarge = UISubtitlesLarge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.OptionsMenu.ResolutionSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UIValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOptionsMenu::ResolutionSelection(int32_t UIValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.OptionsMenu.ResolutionSelection");
		
		UOptionsMenu_ResolutionSelection_Params params {};
		params.UIValue = UIValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.OptionsMenu.PSVideoSettings
	 * 		Flags  -> ()
	 */
	void UOptionsMenu::PSVideoSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.OptionsMenu.PSVideoSettings");
		
		UOptionsMenu_PSVideoSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.OptionsMenu.ColorBlindSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UIColorValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Severity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOptionsMenu::ColorBlindSelection(int32_t UIColorValue, float Severity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.OptionsMenu.ColorBlindSelection");
		
		UOptionsMenu_ColorBlindSelection_Params params {};
		params.UIColorValue = UIColorValue;
		params.Severity = Severity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.OptionsMenu.ApplyVideoSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UIResValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOptionsMenu::ApplyVideoSettings(int32_t UIResValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.OptionsMenu.ApplyVideoSettings");
		
		UOptionsMenu_ApplyVideoSettings_Params params {};
		params.UIResValue = UIResValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionsMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionsMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.OptionsMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PatrollerInterface.SetPatrolPath
	 * 		Flags  -> ()
	 */
	void UPatrollerInterface::SetPatrolPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PatrollerInterface.SetPatrolPath");
		
		UPatrollerInterface_SetPatrolPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PatrollerInterface.SetCurrentPatrolPointIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PatrolPointIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPatrollerInterface::SetCurrentPatrolPointIndex(int32_t PatrolPointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PatrollerInterface.SetCurrentPatrolPointIndex");
		
		UPatrollerInterface_SetCurrentPatrolPointIndex_Params params {};
		params.PatrolPointIndex = PatrolPointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PatrollerInterface.GetPatrolPath
	 * 		Flags  -> ()
	 */
	void UPatrollerInterface::GetPatrolPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PatrollerInterface.GetPatrolPath");
		
		UPatrollerInterface_GetPatrolPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.PatrollerInterface.GetCurrentPatrolPointIndex
	 * 		Flags  -> ()
	 */
	int32_t UPatrollerInterface::GetCurrentPatrolPointIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PatrollerInterface.GetCurrentPatrolPointIndex");
		
		UPatrollerInterface_GetCurrentPatrolPointIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPatrollerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPatrollerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.PatrollerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayerTriggerWithConditionComps.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerTriggerWithConditionComps::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.PlayerTriggerWithConditionComps");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.RaytracingUtils.SetSkeletalMeshRenderInRaytracing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bRenderInRaytracing                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      MeshComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URaytracingUtils::SetSkeletalMeshRenderInRaytracing(bool bRenderInRaytracing, class USkeletalMeshComponent* MeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.RaytracingUtils.SetSkeletalMeshRenderInRaytracing");
		
		URaytracingUtils_SetSkeletalMeshRenderInRaytracing_Params params {};
		params.bRenderInRaytracing = bRenderInRaytracing;
		params.MeshComponent = MeshComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaytracingUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaytracingUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.RaytracingUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URichTextControlButtonDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichTextControlButtonDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.RichTextControlButtonDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SaveHandlerInterface.PostSaveGame
	 * 		Flags  -> ()
	 */
	void USaveHandlerInterface::PostSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.PostSaveGame");
		
		USaveHandlerInterface_PostSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SaveHandlerInterface.PostGameLoad
	 * 		Flags  -> ()
	 */
	void USaveHandlerInterface::PostGameLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.PostGameLoad");
		
		USaveHandlerInterface_PostGameLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SaveHandlerInterface.OnStoreGameData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USaveHandlerInterface::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.OnStoreGameData");
		
		USaveHandlerInterface_OnStoreGameData_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SaveHandlerInterface.OnGameDataLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USaveHandlerInterface::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.OnGameDataLoaded");
		
		USaveHandlerInterface_OnGameDataLoaded_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SaveHandlerInterface.OnCheckpointSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USaveHandlerInterface::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.OnCheckpointSave");
		
		USaveHandlerInterface_OnCheckpointSave_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SaveHandlerInterface.OnCheckpointLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USaveHandlerInterface::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.OnCheckpointLoad");
		
		USaveHandlerInterface_OnCheckpointLoad_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USaveHandlerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USaveHandlerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.SaveHandlerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ScaledTimeSystem.UpdateScaledTimeDataRows
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FName, struct FScaledTimeDetails>       Rows                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void UScaledTimeSystem::UpdateScaledTimeDataRows(TMap<class FName, struct FScaledTimeDetails> Rows)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ScaledTimeSystem.UpdateScaledTimeDataRows");
		
		UScaledTimeSystem_UpdateScaledTimeDataRows_Params params {};
		params.Rows = Rows;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ScaledTimeSystem.UnpauseCurrentTimer
	 * 		Flags  -> ()
	 */
	void UScaledTimeSystem::UnpauseCurrentTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ScaledTimeSystem.UnpauseCurrentTimer");
		
		UScaledTimeSystem_UnpauseCurrentTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ScaledTimeSystem.StopCurrentTimer
	 * 		Flags  -> ()
	 */
	void UScaledTimeSystem::StopCurrentTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ScaledTimeSystem.StopCurrentTimer");
		
		UScaledTimeSystem_StopCurrentTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ScaledTimeSystem.StartTimerSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UScaledTimeSystem::StartTimerSeconds(float Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ScaledTimeSystem.StartTimerSeconds");
		
		UScaledTimeSystem_StartTimerSeconds_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ScaledTimeSystem.StartTimerFromRowName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TimerRowName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UScaledTimeSystem::StartTimerFromRowName(const class FName& TimerRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ScaledTimeSystem.StartTimerFromRowName");
		
		UScaledTimeSystem_StartTimerFromRowName_Params params {};
		params.TimerRowName = TimerRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ScaledTimeSystem.StartTimerFromNightNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NightNumber                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UScaledTimeSystem::StartTimerFromNightNumber(int32_t NightNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ScaledTimeSystem.StartTimerFromNightNumber");
		
		UScaledTimeSystem_StartTimerFromNightNumber_Params params {};
		params.NightNumber = NightNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ScaledTimeSystem.SetupNewGame
	 * 		Flags  -> ()
	 */
	void UScaledTimeSystem::SetupNewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ScaledTimeSystem.SetupNewGame");
		
		UScaledTimeSystem_SetupNewGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ScaledTimeSystem.RestartCurrentTimer
	 * 		Flags  -> ()
	 */
	void UScaledTimeSystem::RestartCurrentTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ScaledTimeSystem.RestartCurrentTimer");
		
		UScaledTimeSystem_RestartCurrentTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ScaledTimeSystem.PauseCurrentTimer
	 * 		Flags  -> ()
	 */
	void UScaledTimeSystem::PauseCurrentTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ScaledTimeSystem.PauseCurrentTimer");
		
		UScaledTimeSystem_PauseCurrentTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ScaledTimeSystem.OnAntiVirusMoonmanTriggered
	 * 		Flags  -> ()
	 */
	void UScaledTimeSystem::OnAntiVirusMoonmanTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ScaledTimeSystem.OnAntiVirusMoonmanTriggered");
		
		UScaledTimeSystem_OnAntiVirusMoonmanTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ScaledTimeSystem.IsTimerActive
	 * 		Flags  -> ()
	 */
	bool UScaledTimeSystem::IsTimerActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ScaledTimeSystem.IsTimerActive");
		
		UScaledTimeSystem_IsTimerActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ScaledTimeSystem.GetTimeLeftSeconds
	 * 		Flags  -> ()
	 */
	float UScaledTimeSystem::GetTimeLeftSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ScaledTimeSystem.GetTimeLeftSeconds");
		
		UScaledTimeSystem_GetTimeLeftSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ScaledTimeSystem.GetScaledTimeDataRows
	 * 		Flags  -> ()
	 */
	TMap<class FName, struct FScaledTimeDetails> UScaledTimeSystem::GetScaledTimeDataRows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ScaledTimeSystem.GetScaledTimeDataRows");
		
		UScaledTimeSystem_GetScaledTimeDataRows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.ScaledTimeSystem.GetIsTimerPaused
	 * 		Flags  -> ()
	 */
	void UScaledTimeSystem::GetIsTimerPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ScaledTimeSystem.GetIsTimerPaused");
		
		UScaledTimeSystem_GetIsTimerPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScaledTimeSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScaledTimeSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.ScaledTimeSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityCamera.StopOfficeMode
	 * 		Flags  -> ()
	 */
	void ASecurityCamera::StopOfficeMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.StopOfficeMode");
		
		ASecurityCamera_StopOfficeMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityCamera.StartOfficeMode
	 * 		Flags  -> ()
	 */
	void ASecurityCamera::StartOfficeMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.StartOfficeMode");
		
		ASecurityCamera_StartOfficeMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityCamera.SetPlayerDetectorEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASecurityCamera::SetPlayerDetectorEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.SetPlayerDetectorEnabled");
		
		ASecurityCamera_SetPlayerDetectorEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityCamera.SetEnemeyDetectorEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASecurityCamera::SetEnemeyDetectorEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.SetEnemeyDetectorEnabled");
		
		ASecurityCamera_SetEnemeyDetectorEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityCamera.OnPlayerDetectorSightChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      UpdatedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASecurityCamera::OnPlayerDetectorSightChanged(class AActor* UpdatedActor, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.OnPlayerDetectorSightChanged");
		
		ASecurityCamera_OnPlayerDetectorSightChanged_Params params {};
		params.UpdatedActor = UpdatedActor;
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityCamera.OnOfficeModeStarted
	 * 		Flags  -> ()
	 */
	void ASecurityCamera::OnOfficeModeStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.OnOfficeModeStarted");
		
		ASecurityCamera_OnOfficeModeStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityCamera.OnEnemyDetectorSightChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      UpdatedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASecurityCamera::OnEnemyDetectorSightChanged(class AActor* UpdatedActor, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.OnEnemyDetectorSightChanged");
		
		ASecurityCamera_OnEnemyDetectorSightChanged_Params params {};
		params.UpdatedActor = UpdatedActor;
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityCamera.IsCameraUnlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnlyShowCurrentMission                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ASecurityCamera::IsCameraUnlocked(bool OnlyShowCurrentMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.IsCameraUnlocked");
		
		ASecurityCamera_IsCameraUnlocked_Params params {};
		params.OnlyShowCurrentMission = OnlyShowCurrentMission;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityCamera.HasDetectedEnemies
	 * 		Flags  -> ()
	 */
	bool ASecurityCamera::HasDetectedEnemies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.HasDetectedEnemies");
		
		ASecurityCamera_HasDetectedEnemies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityCamera.GetVisibleEnemies
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> ASecurityCamera::GetVisibleEnemies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.GetVisibleEnemies");
		
		ASecurityCamera_GetVisibleEnemies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityCamera.GetPlayerSceneCapture
	 * 		Flags  -> ()
	 */
	class USceneCaptureComponent2D* ASecurityCamera::GetPlayerSceneCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.GetPlayerSceneCapture");
		
		ASecurityCamera_GetPlayerSceneCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityCamera.GetCaptureTarget
	 * 		Flags  -> ()
	 */
	class UTextureRenderTarget2D* ASecurityCamera::GetCaptureTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.GetCaptureTarget");
		
		ASecurityCamera_GetCaptureTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityCamera.CaptureView
	 * 		Flags  -> ()
	 */
	void ASecurityCamera::CaptureView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.CaptureView");
		
		ASecurityCamera_CaptureView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASecurityCamera.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASecurityCamera::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.SecurityCamera");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityCameraSystem.PlayerSpotted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASecurityCamera*                             SecurityCamera                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USecurityCameraSystem::PlayerSpotted(class ASecurityCamera* SecurityCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCameraSystem.PlayerSpotted");
		
		USecurityCameraSystem_PlayerSpotted_Params params {};
		params.SecurityCamera = SecurityCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityCameraSystem.GetAllSecurityCameras
	 * 		Flags  -> ()
	 */
	TArray<class ASecurityCamera*> USecurityCameraSystem::GetAllSecurityCameras()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCameraSystem.GetAllSecurityCameras");
		
		USecurityCameraSystem_GetAllSecurityCameras_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USecurityCameraSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecurityCameraSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.SecurityCameraSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityNodeComponent.DrawDebugGraph
	 * 		Flags  -> ()
	 */
	void USecurityNodeComponent::DrawDebugGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityNodeComponent.DrawDebugGraph");
		
		USecurityNodeComponent_DrawDebugGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USecurityNodeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecurityNodeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.SecurityNodeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityPuzzleJsonHandler.WriteAllPuzzleDataToFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSecurityNodePuzzle>                 Puzzles                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool USecurityPuzzleJsonHandler::WriteAllPuzzleDataToFile(TArray<struct FSecurityNodePuzzle> Puzzles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityPuzzleJsonHandler.WriteAllPuzzleDataToFile");
		
		USecurityPuzzleJsonHandler_WriteAllPuzzleDataToFile_Params params {};
		params.Puzzles = Puzzles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityPuzzleJsonHandler.ReadSecurityNodePuzzleData
	 * 		Flags  -> ()
	 */
	class FString USecurityPuzzleJsonHandler::ReadSecurityNodePuzzleData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityPuzzleJsonHandler.ReadSecurityNodePuzzleData");
		
		USecurityPuzzleJsonHandler_ReadSecurityNodePuzzleData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SecurityPuzzleJsonHandler.GenerateStructsArrayFromJsonStringSecurityNodePuzzle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSecurityNodePuzzle>                 Puzzles                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USecurityPuzzleJsonHandler::GenerateStructsArrayFromJsonStringSecurityNodePuzzle(const class FString& JsonString, TArray<struct FSecurityNodePuzzle>* Puzzles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityPuzzleJsonHandler.GenerateStructsArrayFromJsonStringSecurityNodePuzzle");
		
		USecurityPuzzleJsonHandler_GenerateStructsArrayFromJsonStringSecurityNodePuzzle_Params params {};
		params.JsonString = JsonString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Puzzles != nullptr)
			*Puzzles = params.Puzzles;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USecurityPuzzleJsonHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecurityPuzzleJsonHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.SecurityPuzzleJsonHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SeekerPatrolPath.GetSpawnType
	 * 		Flags  -> ()
	 */
	EFNAFAISpawnType USeekerPatrolPath::GetSpawnType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SeekerPatrolPath.GetSpawnType");
		
		USeekerPatrolPath_GetSpawnType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SeekerPatrolPath.GetPathName
	 * 		Flags  -> ()
	 */
	class FName USeekerPatrolPath::GetPathName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SeekerPatrolPath.GetPathName");
		
		USeekerPatrolPath_GetPathName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USeekerPatrolPath.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeekerPatrolPath::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.SeekerPatrolPath");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.SetSightType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESightType                                         InSightType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetSightType(ESightType InSightType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetSightType");
		
		USightComponent_SetSightType_Params params {};
		params.InSightType = InSightType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.SetSightParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetSightParams(float Angle, float MinDistance, float MaxDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetSightParams");
		
		USightComponent_SetSightParams_Params params {};
		params.Angle = Angle;
		params.MinDistance = MinDistance;
		params.MaxDistance = MaxDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.SetSightEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetSightEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetSightEnabled");
		
		USightComponent_SetSightEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.SetSightAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetSightAngle(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetSightAngle");
		
		USightComponent_SetSightAngle_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.SetIncludeTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                InIgnoreTags                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetIncludeTags(TArray<class FName> InIgnoreTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetIncludeTags");
		
		USightComponent_SetIncludeTags_Params params {};
		params.InIgnoreTags = InIgnoreTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.SetFrustumTypeParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMinYaw                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InMaxYaw                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InMinPitch                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InMaxPitch                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetFrustumTypeParams(float InMinYaw, float InMaxYaw, float InMinPitch, float InMaxPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetFrustumTypeParams");
		
		USightComponent_SetFrustumTypeParams_Params params {};
		params.InMinYaw = InMinYaw;
		params.InMaxYaw = InMaxYaw;
		params.InMinPitch = InMinPitch;
		params.InMaxPitch = InMaxPitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.SetEndDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetEndDistance(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetEndDistance");
		
		USightComponent_SetEndDistance_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.SetAspectRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetAspectRatio(float Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetAspectRatio");
		
		USightComponent_SetAspectRatio_Params params {};
		params.Ratio = Ratio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.OnVisualQueryResults
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<TWeakObjectPtr<class UVisualSourceComponent>> DetectedSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	 */
	void USightComponent::OnVisualQueryResults(TArray<TWeakObjectPtr<class UVisualSourceComponent>> DetectedSources)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.OnVisualQueryResults");
		
		USightComponent_OnVisualQueryResults_Params params {};
		params.DetectedSources = DetectedSources;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.OnVisibleActorDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::OnVisibleActorDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.OnVisibleActorDestroyed");
		
		USightComponent_OnVisibleActorDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.OnMoonManQueryResults
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<TWeakObjectPtr<class AMoonmanSpawnPoint>>   MoonManSpawnPoints                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	 */
	void USightComponent::OnMoonManQueryResults(TArray<TWeakObjectPtr<class AMoonmanSpawnPoint>> MoonManSpawnPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.OnMoonManQueryResults");
		
		USightComponent_OnMoonManQueryResults_Params params {};
		params.MoonManSpawnPoints = MoonManSpawnPoints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.IsUsingConeSight
	 * 		Flags  -> ()
	 */
	ESightType USightComponent::IsUsingConeSight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.IsUsingConeSight");
		
		USightComponent_IsUsingConeSight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.IsSightEnabled
	 * 		Flags  -> ()
	 */
	bool USightComponent::IsSightEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.IsSightEnabled");
		
		USightComponent_IsSightEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.IsActorVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USightComponent::IsActorVisible(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.IsActorVisible");
		
		USightComponent_IsActorVisible_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.GetVisibleActors
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> USightComponent::GetVisibleActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetVisibleActors");
		
		USightComponent_GetVisibleActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.GetStartDistance
	 * 		Flags  -> ()
	 */
	float USightComponent::GetStartDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetStartDistance");
		
		USightComponent_GetStartDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.GetSightAngle
	 * 		Flags  -> ()
	 */
	float USightComponent::GetSightAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetSightAngle");
		
		USightComponent_GetSightAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.GetMinYaw
	 * 		Flags  -> ()
	 */
	float USightComponent::GetMinYaw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetMinYaw");
		
		USightComponent_GetMinYaw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.GetMinPitch
	 * 		Flags  -> ()
	 */
	float USightComponent::GetMinPitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetMinPitch");
		
		USightComponent_GetMinPitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.GetMaxYaw
	 * 		Flags  -> ()
	 */
	float USightComponent::GetMaxYaw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetMaxYaw");
		
		USightComponent_GetMaxYaw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.GetMaxPitch
	 * 		Flags  -> ()
	 */
	float USightComponent::GetMaxPitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetMaxPitch");
		
		USightComponent_GetMaxPitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.GetIncludeTags
	 * 		Flags  -> ()
	 */
	TArray<class FName> USightComponent::GetIncludeTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetIncludeTags");
		
		USightComponent_GetIncludeTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.GetFrustumTypeParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OutMinYaw                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutMaxYaw                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutMinPitch                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutMaxPitch                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::GetFrustumTypeParams(float* OutMinYaw, float* OutMaxYaw, float* OutMinPitch, float* OutMaxPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetFrustumTypeParams");
		
		USightComponent_GetFrustumTypeParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMinYaw != nullptr)
			*OutMinYaw = params.OutMinYaw;
		if (OutMaxYaw != nullptr)
			*OutMaxYaw = params.OutMaxYaw;
		if (OutMinPitch != nullptr)
			*OutMinPitch = params.OutMinPitch;
		if (OutMaxPitch != nullptr)
			*OutMaxPitch = params.OutMaxPitch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.GetEndDistance
	 * 		Flags  -> ()
	 */
	float USightComponent::GetEndDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetEndDistance");
		
		USightComponent_GetEndDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SightComponent.GetAspectRatio
	 * 		Flags  -> ()
	 */
	float USightComponent::GetAspectRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetAspectRatio");
		
		USightComponent_GetAspectRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USightComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USightComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.SightComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SplineFollowMovementComponent.StopFollowingSpline
	 * 		Flags  -> ()
	 */
	void USplineFollowMovementComponent::StopFollowingSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.StopFollowingSpline");
		
		USplineFollowMovementComponent_StopFollowingSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SplineFollowMovementComponent.StartFollowingSpline
	 * 		Flags  -> ()
	 */
	void USplineFollowMovementComponent::StartFollowingSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.StartFollowingSpline");
		
		USplineFollowMovementComponent_StartFollowingSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SplineFollowMovementComponent.SetSplineToFollow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USplineComponent*                            Spline                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplineFollowMovementComponent::SetSplineToFollow(class USplineComponent* Spline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.SetSplineToFollow");
		
		USplineFollowMovementComponent_SetSplineToFollow_Params params {};
		params.Spline = Spline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SplineFollowMovementComponent.SetDistanceAlongSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplineFollowMovementComponent::SetDistanceAlongSpline(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.SetDistanceAlongSpline");
		
		USplineFollowMovementComponent_SetDistanceAlongSpline_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SplineFollowMovementComponent.SetDirectionAndSplineToFollow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USplineComponent*                            Spline                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplineFollowMovementComponent::SetDirectionAndSplineToFollow(class USplineComponent* Spline, bool Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.SetDirectionAndSplineToFollow");
		
		USplineFollowMovementComponent_SetDirectionAndSplineToFollow_Params params {};
		params.Spline = Spline;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SplineFollowMovementComponent.IsFollowingSpline
	 * 		Flags  -> ()
	 */
	bool USplineFollowMovementComponent::IsFollowingSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.IsFollowingSpline");
		
		USplineFollowMovementComponent_IsFollowingSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SplineFollowMovementComponent.GetCurrentDistance
	 * 		Flags  -> ()
	 */
	float USplineFollowMovementComponent::GetCurrentDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.GetCurrentDistance");
		
		USplineFollowMovementComponent_GetCurrentDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USplineFollowMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplineFollowMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.SplineFollowMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SplineUtils.GetApproxDistanceClosestToWorldLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Pos_WS                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USplineComponent*                            Spline                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USplineUtils::GetApproxDistanceClosestToWorldLocation(const struct FVector& Pos_WS, class USplineComponent* Spline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SplineUtils.GetApproxDistanceClosestToWorldLocation");
		
		USplineUtils_GetApproxDistanceClosestToWorldLocation_Params params {};
		params.Pos_WS = Pos_WS;
		params.Spline = Spline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USplineUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplineUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.SplineUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateComponent.SetObjectState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateComponent::SetObjectState(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateComponent.SetObjectState");
		
		UWorldStateComponent_SetObjectState_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateComponent.HasValidSaveName
	 * 		Flags  -> ()
	 */
	bool UWorldStateComponent::HasValidSaveName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateComponent.HasValidSaveName");
		
		UWorldStateComponent_HasValidSaveName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateComponent.GetObjectState
	 * 		Flags  -> ()
	 */
	bool UWorldStateComponent::GetObjectState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateComponent.GetObjectState");
		
		UWorldStateComponent_GetObjectState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldStateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldStateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.WorldStateComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.StoreActiveStateOnTrigger.OnActorTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStoreActiveStateOnTrigger::OnActorTriggered(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StoreActiveStateOnTrigger.OnActorTriggered");
		
		UStoreActiveStateOnTrigger_OnActorTriggered_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStoreActiveStateOnTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStoreActiveStateOnTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.StoreActiveStateOnTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.StreamingLevelUtil.LoadStreamingLevelsAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnableVolumesAfterLoad                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UStreamingLevelUtil::LoadStreamingLevelsAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation, bool bEnableVolumesAfterLoad, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.LoadStreamingLevelsAtLocation");
		
		UStreamingLevelUtil_LoadStreamingLevelsAtLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WorldLocation = WorldLocation;
		params.bEnableVolumesAfterLoad = bEnableVolumesAfterLoad;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumesAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ALevelStreamingVolume*> UStreamingLevelUtil::GetAllStreamingVolumesAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumesAtLocation");
		
		UStreamingLevelUtil_GetAllStreamingVolumesAtLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ALevelStreamingVolume*> UStreamingLevelUtil::GetAllStreamingVolumes(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumes");
		
		UStreamingLevelUtil_GetAllStreamingVolumes_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.StreamingLevelUtil.GetAllStreamingLevelsAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ULevelStreaming*> UStreamingLevelUtil::GetAllStreamingLevelsAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.GetAllStreamingLevelsAtLocation");
		
		UStreamingLevelUtil_GetAllStreamingLevelsAtLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.StreamingLevelUtil.GetAllStreamingLevels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ULevelStreaming*> UStreamingLevelUtil::GetAllStreamingLevels(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.GetAllStreamingLevels");
		
		UStreamingLevelUtil_GetAllStreamingLevels_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.StreamingLevelUtil.GetAllLevels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ULevel*> UStreamingLevelUtil::GetAllLevels(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.GetAllLevels");
		
		UStreamingLevelUtil_GetAllLevels_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.StreamingLevelUtil.EnableAllStreamingVolumes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStreamingLevelUtil::EnableAllStreamingVolumes(class UObject* WorldContextObject, bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.EnableAllStreamingVolumes");
		
		UStreamingLevelUtil_EnableAllStreamingVolumes_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStreamingLevelUtil.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStreamingLevelUtil::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.StreamingLevelUtil");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.StreamingLoadComponent.StartAsyncLoadForLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStreamingLoadComponent::StartAsyncLoadForLocation(const struct FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLoadComponent.StartAsyncLoadForLocation");
		
		UStreamingLoadComponent_StartAsyncLoadForLocation_Params params {};
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.StreamingLoadComponent.OnLevelLoaded
	 * 		Flags  -> ()
	 */
	void UStreamingLoadComponent::OnLevelLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLoadComponent.OnLevelLoaded");
		
		UStreamingLoadComponent_OnLevelLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.StreamingLoadComponent.IsStreamingLevels
	 * 		Flags  -> ()
	 */
	bool UStreamingLoadComponent::IsStreamingLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLoadComponent.IsStreamingLevels");
		
		UStreamingLoadComponent_IsStreamingLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.StreamingLoadComponent.EnableAllStreamingVolumes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStreamingLoadComponent::EnableAllStreamingVolumes(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLoadComponent.EnableAllStreamingVolumes");
		
		UStreamingLoadComponent_EnableAllStreamingVolumes_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStreamingLoadComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStreamingLoadComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.StreamingLoadComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASurvivalDoorConditionManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASurvivalDoorConditionManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.SurvivalDoorConditionManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SurvivalItemPackage.OnSetup
	 * 		Flags  -> ()
	 */
	void ASurvivalItemPackage::OnSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemPackage.OnSetup");
		
		ASurvivalItemPackage_OnSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SurvivalItemPackage.HasCollected
	 * 		Flags  -> ()
	 */
	bool ASurvivalItemPackage::HasCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemPackage.HasCollected");
		
		ASurvivalItemPackage_HasCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SurvivalItemPackage.Collect
	 * 		Flags  -> ()
	 */
	void ASurvivalItemPackage::Collect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemPackage.Collect");
		
		ASurvivalItemPackage_Collect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASurvivalItemPackage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASurvivalItemPackage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.SurvivalItemPackage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SurvivalItemRandomizer.RandomizeSurvivalItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSpawnAllLocations                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASurvivalItemRandomizer::RandomizeSurvivalItems(bool bSpawnAllLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.RandomizeSurvivalItems");
		
		ASurvivalItemRandomizer_RandomizeSurvivalItems_Params params {};
		params.bSpawnAllLocations = bSpawnAllLocations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SurvivalItemRandomizer.HasCollected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalItemPackage*                        Package                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ASurvivalItemRandomizer::HasCollected(class ASurvivalItemPackage* Package)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.HasCollected");
		
		ASurvivalItemRandomizer_HasCollected_Params params {};
		params.Package = Package;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SurvivalItemRandomizer.GetPackagesSortedByDistance
	 * 		Flags  -> ()
	 */
	TArray<class ASurvivalItemPackage*> ASurvivalItemRandomizer::GetPackagesSortedByDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.GetPackagesSortedByDistance");
		
		ASurvivalItemRandomizer_GetPackagesSortedByDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.SurvivalItemRandomizer.GetGlitchMaterial
	 * 		Flags  -> ()
	 */
	class UMaterialInterface* ASurvivalItemRandomizer::GetGlitchMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.GetGlitchMaterial");
		
		ASurvivalItemRandomizer_GetGlitchMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASurvivalItemRandomizer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASurvivalItemRandomizer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.SurvivalItemRandomizer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASurvivalRandomItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASurvivalRandomItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.SurvivalRandomItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.SpringArmEnabled
	 * 		Flags  -> ()
	 */
	void UTeleportationInterface::SpringArmEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.SpringArmEnabled");
		
		UTeleportationInterface_SpringArmEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.SpringArmDisabled
	 * 		Flags  -> ()
	 */
	void UTeleportationInterface::SpringArmDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.SpringArmDisabled");
		
		UTeleportationInterface_SpringArmDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.SpawnBlackRabbit
	 * 		Flags  -> ()
	 */
	void UTeleportationInterface::SpawnBlackRabbit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.SpawnBlackRabbit");
		
		UTeleportationInterface_SpawnBlackRabbit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.SetMaskIconOverlayActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeleportationInterface::SetMaskIconOverlayActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.SetMaskIconOverlayActive");
		
		UTeleportationInterface_SetMaskIconOverlayActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.PlayerFinishedTeleporting
	 * 		Flags  -> ()
	 */
	void UTeleportationInterface::PlayerFinishedTeleporting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.PlayerFinishedTeleporting");
		
		UTeleportationInterface_PlayerFinishedTeleporting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.PlayerCannotTeleport
	 * 		Flags  -> ()
	 */
	void UTeleportationInterface::PlayerCannotTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.PlayerCannotTeleport");
		
		UTeleportationInterface_PlayerCannotTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.MaskIconRemoveMask
	 * 		Flags  -> ()
	 */
	void UTeleportationInterface::MaskIconRemoveMask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.MaskIconRemoveMask");
		
		UTeleportationInterface_MaskIconRemoveMask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.MaskIconNearBlocker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NearBlocker                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeleportationInterface::MaskIconNearBlocker(bool NearBlocker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.MaskIconNearBlocker");
		
		UTeleportationInterface_MaskIconNearBlocker_Params params {};
		params.NearBlocker = NearBlocker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.MaskIconDefault
	 * 		Flags  -> ()
	 */
	void UTeleportationInterface::MaskIconDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.MaskIconDefault");
		
		UTeleportationInterface_MaskIconDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.MaskIconCantTeleport
	 * 		Flags  -> ()
	 */
	void UTeleportationInterface::MaskIconCantTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.MaskIconCantTeleport");
		
		UTeleportationInterface_MaskIconCantTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.IsPlayerMoving
	 * 		Flags  -> ()
	 */
	bool UTeleportationInterface::IsPlayerMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.IsPlayerMoving");
		
		UTeleportationInterface_IsPlayerMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.EnablePlayerInput
	 * 		Flags  -> ()
	 */
	void UTeleportationInterface::EnablePlayerInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.EnablePlayerInput");
		
		UTeleportationInterface_EnablePlayerInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.DisablePlayerInput
	 * 		Flags  -> ()
	 */
	void UTeleportationInterface::DisablePlayerInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.DisablePlayerInput");
		
		UTeleportationInterface_DisablePlayerInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.DeactivateGlitchUI
	 * 		Flags  -> ()
	 */
	void UTeleportationInterface::DeactivateGlitchUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.DeactivateGlitchUI");
		
		UTeleportationInterface_DeactivateGlitchUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.CanAITeleport
	 * 		Flags  -> ()
	 */
	bool UTeleportationInterface::CanAITeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.CanAITeleport");
		
		UTeleportationInterface_CanAITeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.AICapsuleHalfHeight
	 * 		Flags  -> ()
	 */
	float UTeleportationInterface::AICapsuleHalfHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.AICapsuleHalfHeight");
		
		UTeleportationInterface_AICapsuleHalfHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.ActivateTeleportFX
	 * 		Flags  -> ()
	 */
	void UTeleportationInterface::ActivateTeleportFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.ActivateTeleportFX");
		
		UTeleportationInterface_ActivateTeleportFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationInterface.ActivateGlitchUI
	 * 		Flags  -> ()
	 */
	void UTeleportationInterface::ActivateGlitchUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationInterface.ActivateGlitchUI");
		
		UTeleportationInterface_ActivateGlitchUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTeleportationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeleportationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.TeleportationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationSubsystem.TeleportAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CapsuleHeight                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeleportationSubsystem::TeleportAI(class APawn* AIPawn, float CapsuleHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationSubsystem.TeleportAI");
		
		UTeleportationSubsystem_TeleportAI_Params params {};
		params.AIPawn = AIPawn;
		params.CapsuleHeight = CapsuleHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationSubsystem.SetPlayerSaveInNormal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayerSaveInNormal                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeleportationSubsystem::SetPlayerSaveInNormal(bool PlayerSaveInNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationSubsystem.SetPlayerSaveInNormal");
		
		UTeleportationSubsystem_SetPlayerSaveInNormal_Params params {};
		params.PlayerSaveInNormal = PlayerSaveInNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationSubsystem.SetPlayerInNormalForChapterReplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayerInNormal                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeleportationSubsystem::SetPlayerInNormalForChapterReplay(bool PlayerInNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationSubsystem.SetPlayerInNormalForChapterReplay");
		
		UTeleportationSubsystem_SetPlayerInNormalForChapterReplay_Params params {};
		params.PlayerInNormal = PlayerInNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationSubsystem.SetPlayerInNormal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayerInNormal                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeleportationSubsystem::SetPlayerInNormal(bool PlayerInNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationSubsystem.SetPlayerInNormal");
		
		UTeleportationSubsystem_SetPlayerInNormal_Params params {};
		params.PlayerInNormal = PlayerInNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationSubsystem.IsPlayerInNormal
	 * 		Flags  -> ()
	 */
	bool UTeleportationSubsystem::IsPlayerInNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationSubsystem.IsPlayerInNormal");
		
		UTeleportationSubsystem_IsPlayerInNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationSubsystem.GetTeleportationDistance
	 * 		Flags  -> ()
	 */
	float UTeleportationSubsystem::GetTeleportationDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationSubsystem.GetTeleportationDistance");
		
		UTeleportationSubsystem_GetTeleportationDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationSubsystem.GetPlayerSaveInNormal
	 * 		Flags  -> ()
	 */
	bool UTeleportationSubsystem::GetPlayerSaveInNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationSubsystem.GetPlayerSaveInNormal");
		
		UTeleportationSubsystem_GetPlayerSaveInNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationSubsystem.GetCurrentAIPawn
	 * 		Flags  -> ()
	 */
	class APawn* UTeleportationSubsystem::GetCurrentAIPawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationSubsystem.GetCurrentAIPawn");
		
		UTeleportationSubsystem_GetCurrentAIPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationSubsystem.ForceTeleport
	 * 		Flags  -> ()
	 */
	void UTeleportationSubsystem::ForceTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationSubsystem.ForceTeleport");
		
		UTeleportationSubsystem_ForceTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationSubsystem.CheckIfPlayerCanTeleport
	 * 		Flags  -> ()
	 */
	bool UTeleportationSubsystem::CheckIfPlayerCanTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationSubsystem.CheckIfPlayerCanTeleport");
		
		UTeleportationSubsystem_CheckIfPlayerCanTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TeleportationSubsystem.CanTeleport
	 * 		Flags  -> ()
	 */
	bool UTeleportationSubsystem::CanTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TeleportationSubsystem.CanTeleport");
		
		UTeleportationSubsystem_CanTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTeleportationSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeleportationSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.TeleportationSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TemporarySnapshotSystem.SetUseSnapshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseSnapshot                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTemporarySnapshotSystem::SetUseSnapshot(bool UseSnapshot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TemporarySnapshotSystem.SetUseSnapshot");
		
		UTemporarySnapshotSystem_SetUseSnapshot_Params params {};
		params.UseSnapshot = UseSnapshot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TemporarySnapshotSystem.SetInitializeOnPost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Initialize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTemporarySnapshotSystem::SetInitializeOnPost(bool Initialize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TemporarySnapshotSystem.SetInitializeOnPost");
		
		UTemporarySnapshotSystem_SetInitializeOnPost_Params params {};
		params.Initialize = Initialize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TemporarySnapshotSystem.SetAlternativeTranform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  AltTranform                                                (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTemporarySnapshotSystem::SetAlternativeTranform(const struct FTransform& AltTranform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TemporarySnapshotSystem.SetAlternativeTranform");
		
		UTemporarySnapshotSystem_SetAlternativeTranform_Params params {};
		params.AltTranform = AltTranform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TemporarySnapshotSystem.GetUseSnapshot
	 * 		Flags  -> ()
	 */
	bool UTemporarySnapshotSystem::GetUseSnapshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TemporarySnapshotSystem.GetUseSnapshot");
		
		UTemporarySnapshotSystem_GetUseSnapshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TemporarySnapshotSystem.GetTemporaryGameStateSnapshot
	 * 		Flags  -> ()
	 */
	struct FDLCSaveSnapshotData UTemporarySnapshotSystem::GetTemporaryGameStateSnapshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TemporarySnapshotSystem.GetTemporaryGameStateSnapshot");
		
		UTemporarySnapshotSystem_GetTemporaryGameStateSnapshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.TemporarySnapshotSystem.CreateTemporaryGameStateSnapshot
	 * 		Flags  -> ()
	 */
	void UTemporarySnapshotSystem::CreateTemporaryGameStateSnapshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.TemporarySnapshotSystem.CreateTemporaryGameStateSnapshot");
		
		UTemporarySnapshotSystem_CreateTemporaryGameStateSnapshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTemporarySnapshotSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTemporarySnapshotSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.TemporarySnapshotSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.UpdateMissionComponent.UpdateMission
	 * 		Flags  -> ()
	 */
	void UUpdateMissionComponent::UpdateMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.UpdateMissionComponent.UpdateMission");
		
		UUpdateMissionComponent_UpdateMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.UpdateMissionComponent.IsMissionFinished
	 * 		Flags  -> ()
	 */
	bool UUpdateMissionComponent::IsMissionFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.UpdateMissionComponent.IsMissionFinished");
		
		UUpdateMissionComponent_IsMissionFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.UpdateMissionComponent.HasMetCondition
	 * 		Flags  -> ()
	 */
	bool UUpdateMissionComponent::HasMetCondition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.UpdateMissionComponent.HasMetCondition");
		
		UUpdateMissionComponent_HasMetCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.UpdateMissionComponent.GetMissionName
	 * 		Flags  -> ()
	 */
	class FName UUpdateMissionComponent::GetMissionName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.UpdateMissionComponent.GetMissionName");
		
		UUpdateMissionComponent_GetMissionName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpdateMissionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpdateMissionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.UpdateMissionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.UVEmitterInterface.GetUVLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InTargetLocation                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InOverridePrecision                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InPrecisionOverrideValue                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutStrength                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUVEmitterInterface::GetUVLight(const struct FVector& InTargetLocation, bool InOverridePrecision, float InPrecisionOverrideValue, struct FVector* OutLocation, float* OutStrength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.UVEmitterInterface.GetUVLight");
		
		UUVEmitterInterface_GetUVLight_Params params {};
		params.InTargetLocation = InTargetLocation;
		params.InOverridePrecision = InOverridePrecision;
		params.InPrecisionOverrideValue = InPrecisionOverrideValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		if (OutStrength != nullptr)
			*OutStrength = params.OutStrength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVEmitterInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVEmitterInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.UVEmitterInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.UVLightReactionComponent.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    InMaterial                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class USceneComponent*>                     InLocatorComponents                                        (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UUVLightReactionComponent::Setup(class UMaterialInstanceDynamic* InMaterial, TArray<class USceneComponent*> InLocatorComponents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.UVLightReactionComponent.Setup");
		
		UUVLightReactionComponent_Setup_Params params {};
		params.InMaterial = InMaterial;
		params.InLocatorComponents = InLocatorComponents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.UVLightReactionComponent.RemoveActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToRemove                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUVLightReactionComponent::RemoveActor(class AActor* ActorToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.UVLightReactionComponent.RemoveActor");
		
		UUVLightReactionComponent_RemoveActor_Params params {};
		params.ActorToRemove = ActorToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.UVLightReactionComponent.GetRadius
	 * 		Flags  -> ()
	 */
	float UUVLightReactionComponent::GetRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.UVLightReactionComponent.GetRadius");
		
		UUVLightReactionComponent_GetRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.UVLightReactionComponent.GetEmitterInRange
	 * 		Flags  -> ()
	 */
	bool UUVLightReactionComponent::GetEmitterInRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.UVLightReactionComponent.GetEmitterInRange");
		
		UUVLightReactionComponent_GetEmitterInRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.UVLightReactionComponent.CalculateUV
	 * 		Flags  -> ()
	 */
	void UUVLightReactionComponent::CalculateUV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.UVLightReactionComponent.CalculateUV");
		
		UUVLightReactionComponent_CalculateUV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.UVLightReactionComponent.AddActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUVLightReactionComponent::AddActor(class AActor* ActorToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.UVLightReactionComponent.AddActor");
		
		UUVLightReactionComponent_AddActor_Params params {};
		params.ActorToAdd = ActorToAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVLightReactionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVLightReactionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.UVLightReactionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.UVLightReactionFromOverlap.OnOwnerEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUVLightReactionFromOverlap::OnOwnerEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.UVLightReactionFromOverlap.OnOwnerEndOverlap");
		
		UUVLightReactionFromOverlap_OnOwnerEndOverlap_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.UVLightReactionFromOverlap.OnOwnerBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUVLightReactionFromOverlap::OnOwnerBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.UVLightReactionFromOverlap.OnOwnerBeginOverlap");
		
		UUVLightReactionFromOverlap_OnOwnerBeginOverlap_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUVLightReactionFromOverlap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUVLightReactionFromOverlap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.UVLightReactionFromOverlap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.VisualSourceComponent.SetVisualOffsetLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             InVisualOffsets                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVisualSourceComponent::SetVisualOffsetLocations(TArray<struct FVector> InVisualOffsets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.SetVisualOffsetLocations");
		
		UVisualSourceComponent_SetVisualOffsetLocations_Params params {};
		params.InVisualOffsets = InVisualOffsets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.VisualSourceComponent.SetVisualOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     visualOffset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVisualSourceComponent::SetVisualOffset(int32_t PointIndex, const struct FVector& visualOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.SetVisualOffset");
		
		UVisualSourceComponent_SetVisualOffset_Params params {};
		params.PointIndex = PointIndex;
		params.visualOffset = visualOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.VisualSourceComponent.SetSourceVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVisualSourceComponent::SetSourceVisibility(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.SetSourceVisibility");
		
		UVisualSourceComponent_SetSourceVisibility_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.VisualSourceComponent.RemoveVisualOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVisualSourceComponent::RemoveVisualOffset(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.RemoveVisualOffset");
		
		UVisualSourceComponent_RemoveVisualOffset_Params params {};
		params.PointIndex = PointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.VisualSourceComponent.GetVisualOffsets
	 * 		Flags  -> ()
	 */
	TArray<struct FVector> UVisualSourceComponent::GetVisualOffsets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.GetVisualOffsets");
		
		UVisualSourceComponent_GetVisualOffsets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.VisualSourceComponent.GetVisualLocations
	 * 		Flags  -> ()
	 */
	TArray<struct FVector> UVisualSourceComponent::GetVisualLocations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.GetVisualLocations");
		
		UVisualSourceComponent_GetVisualLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.VisualSourceComponent.GetSourceVisibility
	 * 		Flags  -> ()
	 */
	bool UVisualSourceComponent::GetSourceVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.GetSourceVisibility");
		
		UVisualSourceComponent_GetSourceVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.VisualSourceComponent.GetDetectedVisualLocation
	 * 		Flags  -> ()
	 */
	struct FVector UVisualSourceComponent::GetDetectedVisualLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.GetDetectedVisualLocation");
		
		UVisualSourceComponent_GetDetectedVisualLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.VisualSourceComponent.DetectTheSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     VSLocation                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      passed_HitActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               passed_bVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVisualSourceComponent::DetectTheSource(const struct FVector& VSLocation, class AActor* passed_HitActor, bool passed_bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.DetectTheSource");
		
		UVisualSourceComponent_DetectTheSource_Params params {};
		params.VSLocation = VSLocation;
		params.passed_HitActor = passed_HitActor;
		params.passed_bVisible = passed_bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualSourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualSourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.VisualSourceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateHandlerComponent.SetObjectState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateHandlerComponent::SetObjectState(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateHandlerComponent.SetObjectState");
		
		UWorldStateHandlerComponent_SetObjectState_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ObjectName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ObjectState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateHandlerComponent::OnObjectStateChangedHandle(const class FName& ObjectName, bool ObjectState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedHandle");
		
		UWorldStateHandlerComponent_OnObjectStateChangedHandle_Params params {};
		params.ObjectName = ObjectName;
		params.ObjectState = ObjectState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedEvent
	 * 		Flags  -> ()
	 */
	void UWorldStateHandlerComponent::OnObjectStateChangedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedEvent");
		
		UWorldStateHandlerComponent_OnObjectStateChangedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateHandlerComponent.HasValidSaveName
	 * 		Flags  -> ()
	 */
	bool UWorldStateHandlerComponent::HasValidSaveName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateHandlerComponent.HasValidSaveName");
		
		UWorldStateHandlerComponent_HasValidSaveName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateHandlerComponent.GetObjectState
	 * 		Flags  -> ()
	 */
	bool UWorldStateHandlerComponent::GetObjectState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateHandlerComponent.GetObjectState");
		
		UWorldStateHandlerComponent_GetObjectState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldStateHandlerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldStateHandlerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.WorldStateHandlerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.StartMinigame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MinigameName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFNAFGameState                                     GameState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      MinigameActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::StartMinigame(const class FString& MinigameName, EFNAFGameState GameState, class AActor* MinigameActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.StartMinigame");
		
		UWorldStateSystem_StartMinigame_Params params {};
		params.MinigameName = MinigameName;
		params.GameState = GameState;
		params.MinigameActor = MinigameActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetWorldState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFNAFGameState                                     NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetWorldState(EFNAFGameState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetWorldState");
		
		UWorldStateSystem_SetWorldState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetupNewGame
	 * 		Flags  -> ()
	 */
	void UWorldStateSystem::SetupNewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetupNewGame");
		
		UWorldStateSystem_SetupNewGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetSurvivalMaxDeaths
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxDeaths                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetSurvivalMaxDeaths(int32_t MaxDeaths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetSurvivalMaxDeaths");
		
		UWorldStateSystem_SetSurvivalMaxDeaths_Params params {};
		params.MaxDeaths = MaxDeaths;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetSurvivalDifficulty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESurvivalDifficulty                                Difficulty                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetSurvivalDifficulty(ESurvivalDifficulty Difficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetSurvivalDifficulty");
		
		UWorldStateSystem_SetSurvivalDifficulty_Params params {};
		params.Difficulty = Difficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetRuinAIState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFNAFRuinAISaveData                         InRuinAIState                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetRuinAIState(const struct FFNAFRuinAISaveData& InRuinAIState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetRuinAIState");
		
		UWorldStateSystem_SetRuinAIState_Params params {};
		params.InRuinAIState = InRuinAIState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetRandomSeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetRandomSeed(int32_t Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetRandomSeed");
		
		UWorldStateSystem_SetRandomSeed_Params params {};
		params.Seed = Seed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetPowerStationAvailable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAvailable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetPowerStationAvailable(bool bAvailable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetPowerStationAvailable");
		
		UWorldStateSystem_SetPowerStationAvailable_Params params {};
		params.bAvailable = bAvailable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetPlayerInPowerStation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InPowerStationID                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetPlayerInPowerStation(int32_t InPowerStationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetPlayerInPowerStation");
		
		UWorldStateSystem_SetPlayerInPowerStation_Params params {};
		params.InPowerStationID = InPowerStationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetPlayerInFreddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInFreddy                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetPlayerInFreddy(bool bInFreddy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetPlayerInFreddy");
		
		UWorldStateSystem_SetPlayerInFreddy_Params params {};
		params.bInFreddy = bInFreddy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetPlayerHasUsedHidingSpot
	 * 		Flags  -> ()
	 */
	void UWorldStateSystem::SetPlayerHasUsedHidingSpot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetPlayerHasUsedHidingSpot");
		
		UWorldStateSystem_SetPlayerHasUsedHidingSpot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetMazercisePanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Location                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetMazercisePanel(int32_t Index, const class FString& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetMazercisePanel");
		
		UWorldStateSystem_SetMazercisePanel_Params params {};
		params.Index = Index;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetInstructionCardShown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Shown                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetInstructionCardShown(bool Shown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetInstructionCardShown");
		
		UWorldStateSystem_SetInstructionCardShown_Params params {};
		params.Shown = Shown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetGoalPathName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        inGoalPathName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetGoalPathName(const class FName& inGoalPathName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetGoalPathName");
		
		UWorldStateSystem_SetGoalPathName_Params params {};
		params.inGoalPathName = inGoalPathName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetFreddySick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSick                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetFreddySick(bool bIsSick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetFreddySick");
		
		UWorldStateSystem_SetFreddySick_Params params {};
		params.bIsSick = bIsSick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetFreddyPatrolPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PatrolPointIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetFreddyPatrolPoint(int32_t PatrolPointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetFreddyPatrolPoint");
		
		UWorldStateSystem_SetFreddyPatrolPoint_Params params {};
		params.PatrolPointIndex = PatrolPointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetDeactivatedCautionBot_Map
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<int32_t, bool>                                In_DeactivatedCautionBots_Map                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetDeactivatedCautionBot_Map(TMap<int32_t, bool> In_DeactivatedCautionBots_Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetDeactivatedCautionBot_Map");
		
		UWorldStateSystem_SetDeactivatedCautionBot_Map_Params params {};
		params.In_DeactivatedCautionBots_Map = In_DeactivatedCautionBots_Map;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetCurrentActivityId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InActivityId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetCurrentActivityId(const class FString& InActivityId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetCurrentActivityId");
		
		UWorldStateSystem_SetCurrentActivityId_Params params {};
		params.InActivityId = InActivityId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetCanShowInstructionCards
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCanShowInstructionCards                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetCanShowInstructionCards(bool bCanShowInstructionCards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetCanShowInstructionCards");
		
		UWorldStateSystem_SetCanShowInstructionCards_Params params {};
		params.bCanShowInstructionCards = bCanShowInstructionCards;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetCanEnterExitFreddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCanEnterExit                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetCanEnterExitFreddy(bool bCanEnterExit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetCanEnterExitFreddy");
		
		UWorldStateSystem_SetCanEnterExitFreddy_Params params {};
		params.bCanEnterExit = bCanEnterExit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetCanCallFreddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCanCall                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetCanCallFreddy(bool bCanCall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetCanCallFreddy");
		
		UWorldStateSystem_SetCanCallFreddy_Params params {};
		params.bCanCall = bCanCall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetArcadeState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FArcadeSaveData                             InArcadeState                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetArcadeState(const struct FArcadeSaveData& InArcadeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetArcadeState");
		
		UWorldStateSystem_SetArcadeState_Params params {};
		params.InArcadeState = InArcadeState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetAIState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFNAFAISaveData                             InAIState                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetAIState(const struct FFNAFAISaveData& InAIState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetAIState");
		
		UWorldStateSystem_SetAIState_Params params {};
		params.InAIState = InAIState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.ResetForChapterSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                chapterActivatables                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                activatablesToKeepOnReplay                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            chapterSelected                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::ResetForChapterSelect(TArray<class FName> chapterActivatables, TArray<class FName> activatablesToKeepOnReplay, int32_t chapterSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.ResetForChapterSelect");
		
		UWorldStateSystem_ResetForChapterSelect_Params params {};
		params.chapterActivatables = chapterActivatables;
		params.activatablesToKeepOnReplay = activatablesToKeepOnReplay;
		params.chapterSelected = chapterSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.RemoveDeactivatedCautionBot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CautionBotID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isDeactivated                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::RemoveDeactivatedCautionBot(int32_t CautionBotID, bool isDeactivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.RemoveDeactivatedCautionBot");
		
		UWorldStateSystem_RemoveDeactivatedCautionBot_Params params {};
		params.CautionBotID = CautionBotID;
		params.isDeactivated = isDeactivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.RemoveBonnieBowlMMMJumpscareSaveID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        inSaveID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::RemoveBonnieBowlMMMJumpscareSaveID(const class FName& inSaveID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.RemoveBonnieBowlMMMJumpscareSaveID");
		
		UWorldStateSystem_RemoveBonnieBowlMMMJumpscareSaveID_Params params {};
		params.inSaveID = inSaveID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.RemoveActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActivatableName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::RemoveActivated(const class FName& ActivatableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.RemoveActivated");
		
		UWorldStateSystem_RemoveActivated_Params params {};
		params.ActivatableName = ActivatableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.IsPowerStationAvailable
	 * 		Flags  -> ()
	 */
	bool UWorldStateSystem::IsPowerStationAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.IsPowerStationAvailable");
		
		UWorldStateSystem_IsPowerStationAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.IsPlayerInFreddy
	 * 		Flags  -> ()
	 */
	bool UWorldStateSystem::IsPlayerInFreddy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.IsPlayerInFreddy");
		
		UWorldStateSystem_IsPlayerInFreddy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.IsInstructionCardShown
	 * 		Flags  -> ()
	 */
	bool UWorldStateSystem::IsInstructionCardShown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.IsInstructionCardShown");
		
		UWorldStateSystem_IsInstructionCardShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.IsFreddySick
	 * 		Flags  -> ()
	 */
	bool UWorldStateSystem::IsFreddySick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.IsFreddySick");
		
		UWorldStateSystem_IsFreddySick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.IsActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActivatableName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWorldStateSystem::IsActivated(const class FName& ActivatableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.IsActivated");
		
		UWorldStateSystem_IsActivated_Params params {};
		params.ActivatableName = ActivatableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.HasPlayerUsedHidingSpot
	 * 		Flags  -> ()
	 */
	bool UWorldStateSystem::HasPlayerUsedHidingSpot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.HasPlayerUsedHidingSpot");
		
		UWorldStateSystem_HasPlayerUsedHidingSpot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetWorldState
	 * 		Flags  -> ()
	 */
	EFNAFGameState UWorldStateSystem::GetWorldState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetWorldState");
		
		UWorldStateSystem_GetWorldState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetSurvivalMaxDeaths
	 * 		Flags  -> ()
	 */
	int32_t UWorldStateSystem::GetSurvivalMaxDeaths()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetSurvivalMaxDeaths");
		
		UWorldStateSystem_GetSurvivalMaxDeaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetSurvivalDifficulty
	 * 		Flags  -> ()
	 */
	ESurvivalDifficulty UWorldStateSystem::GetSurvivalDifficulty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetSurvivalDifficulty");
		
		UWorldStateSystem_GetSurvivalDifficulty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetSavedPlayerLocationAndRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     OutWorldLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    OutWorldRotation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::GetSavedPlayerLocationAndRotation(struct FVector* OutWorldLocation, struct FRotator* OutWorldRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetSavedPlayerLocationAndRotation");
		
		UWorldStateSystem_GetSavedPlayerLocationAndRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWorldLocation != nullptr)
			*OutWorldLocation = params.OutWorldLocation;
		if (OutWorldRotation != nullptr)
			*OutWorldRotation = params.OutWorldRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetSavedFreddyLocationAndRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutFreddyInWorld                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutWorldLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    OutWorldRotation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::GetSavedFreddyLocationAndRotation(bool* OutFreddyInWorld, struct FVector* OutWorldLocation, struct FRotator* OutWorldRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetSavedFreddyLocationAndRotation");
		
		UWorldStateSystem_GetSavedFreddyLocationAndRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFreddyInWorld != nullptr)
			*OutFreddyInWorld = params.OutFreddyInWorld;
		if (OutWorldLocation != nullptr)
			*OutWorldLocation = params.OutWorldLocation;
		if (OutWorldRotation != nullptr)
			*OutWorldRotation = params.OutWorldRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetRuinAIState
	 * 		Flags  -> ()
	 */
	struct FFNAFRuinAISaveData UWorldStateSystem::GetRuinAIState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetRuinAIState");
		
		UWorldStateSystem_GetRuinAIState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetRandomSeed
	 * 		Flags  -> ()
	 */
	int32_t UWorldStateSystem::GetRandomSeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetRandomSeed");
		
		UWorldStateSystem_GetRandomSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetPowerStationInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutPlayerInPowerStation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutPowerStationID                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::GetPowerStationInfo(bool* OutPlayerInPowerStation, int32_t* OutPowerStationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetPowerStationInfo");
		
		UWorldStateSystem_GetPowerStationInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlayerInPowerStation != nullptr)
			*OutPlayerInPowerStation = params.OutPlayerInPowerStation;
		if (OutPowerStationID != nullptr)
			*OutPowerStationID = params.OutPowerStationID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetMazercisePanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UWorldStateSystem::GetMazercisePanel(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetMazercisePanel");
		
		UWorldStateSystem_GetMazercisePanel_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetLivesRemaining
	 * 		Flags  -> ()
	 */
	int32_t UWorldStateSystem::GetLivesRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetLivesRemaining");
		
		UWorldStateSystem_GetLivesRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetGoalPathName
	 * 		Flags  -> ()
	 */
	class FName UWorldStateSystem::GetGoalPathName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetGoalPathName");
		
		UWorldStateSystem_GetGoalPathName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetFreddyPawn
	 * 		Flags  -> ()
	 */
	class AFNAFBasePlayerCharacter* UWorldStateSystem::GetFreddyPawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetFreddyPawn");
		
		UWorldStateSystem_GetFreddyPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetFreddyPatrolPoint
	 * 		Flags  -> ()
	 */
	int32_t UWorldStateSystem::GetFreddyPatrolPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetFreddyPatrolPoint");
		
		UWorldStateSystem_GetFreddyPatrolPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetDeactivatedCautionBots_Map
	 * 		Flags  -> ()
	 */
	TMap<int32_t, bool> UWorldStateSystem::GetDeactivatedCautionBots_Map()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetDeactivatedCautionBots_Map");
		
		UWorldStateSystem_GetDeactivatedCautionBots_Map_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetCurrentSpottedCount
	 * 		Flags  -> ()
	 */
	int32_t UWorldStateSystem::GetCurrentSpottedCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetCurrentSpottedCount");
		
		UWorldStateSystem_GetCurrentSpottedCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetCurrentMinigameActor
	 * 		Flags  -> ()
	 */
	class AActor* UWorldStateSystem::GetCurrentMinigameActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetCurrentMinigameActor");
		
		UWorldStateSystem_GetCurrentMinigameActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetCurrentMinigame
	 * 		Flags  -> ()
	 */
	class FString UWorldStateSystem::GetCurrentMinigame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetCurrentMinigame");
		
		UWorldStateSystem_GetCurrentMinigame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetCurrentDeathCount
	 * 		Flags  -> ()
	 */
	int32_t UWorldStateSystem::GetCurrentDeathCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetCurrentDeathCount");
		
		UWorldStateSystem_GetCurrentDeathCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetCurrentActivityId
	 * 		Flags  -> ()
	 */
	class FString UWorldStateSystem::GetCurrentActivityId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetCurrentActivityId");
		
		UWorldStateSystem_GetCurrentActivityId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetBonnieBowlMMMJumspscareData
	 * 		Flags  -> ()
	 */
	void UWorldStateSystem::GetBonnieBowlMMMJumspscareData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetBonnieBowlMMMJumspscareData");
		
		UWorldStateSystem_GetBonnieBowlMMMJumspscareData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetArcadeState
	 * 		Flags  -> ()
	 */
	struct FArcadeSaveData UWorldStateSystem::GetArcadeState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetArcadeState");
		
		UWorldStateSystem_GetArcadeState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetAllCurrentActivables
	 * 		Flags  -> ()
	 */
	TArray<class FName> UWorldStateSystem::GetAllCurrentActivables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetAllCurrentActivables");
		
		UWorldStateSystem_GetAllCurrentActivables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetAIState
	 * 		Flags  -> ()
	 */
	struct FFNAFAISaveData UWorldStateSystem::GetAIState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetAIState");
		
		UWorldStateSystem_GetAIState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.EndMinigame
	 * 		Flags  -> ()
	 */
	void UWorldStateSystem::EndMinigame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.EndMinigame");
		
		UWorldStateSystem_EndMinigame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.DebugSetPlayerHasUsedHidingSpot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasHid                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::DebugSetPlayerHasUsedHidingSpot(bool HasHid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.DebugSetPlayerHasUsedHidingSpot");
		
		UWorldStateSystem_DebugSetPlayerHasUsedHidingSpot_Params params {};
		params.HasHid = HasHid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.ClearPlayerInPowerStation
	 * 		Flags  -> ()
	 */
	void UWorldStateSystem::ClearPlayerInPowerStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.ClearPlayerInPowerStation");
		
		UWorldStateSystem_ClearPlayerInPowerStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.CanStartMinigame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanStart                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECantStartMinigameReason                           reason                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::CanStartMinigame(bool* CanStart, ECantStartMinigameReason* reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.CanStartMinigame");
		
		UWorldStateSystem_CanStartMinigame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanStart != nullptr)
			*CanStart = params.CanStart;
		if (reason != nullptr)
			*reason = params.reason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.CanShowInstructionCards
	 * 		Flags  -> ()
	 */
	bool UWorldStateSystem::CanShowInstructionCards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.CanShowInstructionCards");
		
		UWorldStateSystem_CanShowInstructionCards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.CanEnterExitFreddy
	 * 		Flags  -> ()
	 */
	bool UWorldStateSystem::CanEnterExitFreddy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.CanEnterExitFreddy");
		
		UWorldStateSystem_CanEnterExitFreddy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.CanCallFreddy
	 * 		Flags  -> ()
	 */
	bool UWorldStateSystem::CanCallFreddy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.CanCallFreddy");
		
		UWorldStateSystem_CanCallFreddy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.AddSpotted
	 * 		Flags  -> ()
	 */
	void UWorldStateSystem::AddSpotted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.AddSpotted");
		
		UWorldStateSystem_AddSpotted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.AddDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutRemainingLives                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::AddDeath(int32_t* OutRemainingLives)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.AddDeath");
		
		UWorldStateSystem_AddDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRemainingLives != nullptr)
			*OutRemainingLives = params.OutRemainingLives;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.AddDeactivatedCautionBot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CautionBotID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isDeactivated                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::AddDeactivatedCautionBot(int32_t CautionBotID, bool isDeactivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.AddDeactivatedCautionBot");
		
		UWorldStateSystem_AddDeactivatedCautionBot_Params params {};
		params.CautionBotID = CautionBotID;
		params.isDeactivated = isDeactivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.AddBonnieBowlMMMJumpscareSaveID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        inSaveID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::AddBonnieBowlMMMJumpscareSaveID(const class FName& inSaveID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.AddBonnieBowlMMMJumpscareSaveID");
		
		UWorldStateSystem_AddBonnieBowlMMMJumpscareSaveID_Params params {};
		params.inSaveID = inSaveID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.WorldStateSystem.AddActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActivatableName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::AddActivated(const class FName& ActivatableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.AddActivated");
		
		UWorldStateSystem_AddActivated_Params params {};
		params.ActivatableName = ActivatableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldStateSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldStateSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.WorldStateSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.XboxUtilities.XboxQuit
	 * 		Flags  -> ()
	 */
	void UXboxUtilities::XboxQuit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.XboxUtilities.XboxQuit");
		
		UXboxUtilities_XboxQuit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UXboxUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UXboxUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.XboxUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function fnaf9.XSXUtilities.GetXSXConsoleType
	 * 		Flags  -> ()
	 */
	class FString UXSXUtilities::GetXSXConsoleType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.XSXUtilities.GetXSXConsoleType");
		
		UXSXUtilities_GetXSXConsoleType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UXSXUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UXSXUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.XSXUtilities");
		return ptr;
	}

}


