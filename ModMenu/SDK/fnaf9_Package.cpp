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
	 * 		Name   -> Function fnaf9.AIHiderInterface.ExitHideMode
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      HideActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIHiderInterface::ExitHideMode(class AActor* HideActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIHiderInterface.ExitHideMode");

		UAIHiderInterface_ExitHideMode_Params params{};
		params.HideActor = HideActor;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.AIHiderInterface.EnterHideMode
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      HideActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIHiderInterface::EnterHideMode(class AActor* HideActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIHiderInterface.EnterHideMode");

		UAIHiderInterface_EnterHideMode_Params params{};
		params.HideActor = HideActor;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAIHiderInterface.StaticClass
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
	 * 		Offset -> 0x00B99070
	 * 		Name   -> Function fnaf9.AIManagementSystem.UnregisterSeekerPath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIManagementSystem::UnregisterSeekerPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.UnregisterSeekerPath");

		UAIManagementSystem_UnregisterSeekerPath_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B98FD0
	 * 		Name   -> Function fnaf9.AIManagementSystem.UnRegisterAI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::UnRegisterAI(class APawn* AIPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.UnRegisterAI");

		UAIManagementSystem_UnRegisterAI_Params params{};
		params.AIPawn = AIPawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B99050
	 * 		Name   -> Function fnaf9.AIManagementSystem.UnpauseManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIManagementSystem::UnpauseManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.UnpauseManager");

		UAIManagementSystem_UnpauseManager_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B98FB0
	 * 		Name   -> Function fnaf9.AIManagementSystem.StoreEndoStates
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIManagementSystem::StoreEndoStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.StoreEndoStates");

		UAIManagementSystem_StoreEndoStates_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B98F90
	 * 		Name   -> Function fnaf9.AIManagementSystem.StartManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIManagementSystem::StartManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.StartManager");

		UAIManagementSystem_StartManager_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B98E30
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnVannyOrVanessa
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
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

		UAIManagementSystem_SpawnVannyOrVanessa_Params params{};
		params.bSpawnVanny = bSpawnVanny;
		params.LatentActionInfo = LatentActionInfo;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (bOutSpawned != nullptr)
			*bOutSpawned = params.bOutSpawned;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B98D20
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnSpecificAIAtSpawnPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AFNAFAISpawnPoint*                           SpawnPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ForceShattered                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SpawnSpecificAIAtSpawnPoint(class AFNAFAISpawnPoint* SpawnPoint, fnaf9_EFNAFAISpawnType AIType, bool ForceShattered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnSpecificAIAtSpawnPoint");

		UAIManagementSystem_SpawnSpecificAIAtSpawnPoint_Params params{};
		params.SpawnPoint = SpawnPoint;
		params.AIType = AIType;
		params.ForceShattered = ForceShattered;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B98B70
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAIWithTransformAndPath
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceShattered                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SpawnTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnAIWithTransformAndPath(fnaf9_EFNAFAISpawnType AIType, bool bForceShattered, const struct FTransform& SpawnTransform, const class FName& PathName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIWithTransformAndPath");

		UAIManagementSystem_SpawnAIWithTransformAndPath_Params params{};
		params.AIType = AIType;
		params.bForceShattered = bForceShattered;
		params.SpawnTransform = SpawnTransform;
		params.PathName = PathName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B988F0
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAITypeWithTransformSafe
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SpawnTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ForceShattered                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		Engine_ESpawnActorCollisionHandlingMethod          CollisionOverrideMethod                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceRespawn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnAITypeWithTransformSafe(fnaf9_EFNAFAISpawnType AIType, const struct FTransform& SpawnTransform, bool ForceShattered, bool* success, Engine_ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, class AActor* Owner, bool bForceRespawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAITypeWithTransformSafe");

		UAIManagementSystem_SpawnAITypeWithTransformSafe_Params params{};
		params.AIType = AIType;
		params.SpawnTransform = SpawnTransform;
		params.ForceShattered = ForceShattered;
		params.CollisionOverrideMethod = CollisionOverrideMethod;
		params.Owner = Owner;
		params.bForceRespawn = bForceRespawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (success != nullptr)
			*success = params.success;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B986F0
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAITypeWithTransform
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SpawnTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ForceShattered                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		Engine_ESpawnActorCollisionHandlingMethod          CollisionOverrideMethod                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnAITypeWithTransform(fnaf9_EFNAFAISpawnType AIType, const struct FTransform& SpawnTransform, bool ForceShattered, Engine_ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, class AActor* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAITypeWithTransform");

		UAIManagementSystem_SpawnAITypeWithTransform_Params params{};
		params.AIType = AIType;
		params.SpawnTransform = SpawnTransform;
		params.ForceShattered = ForceShattered;
		params.CollisionOverrideMethod = CollisionOverrideMethod;
		params.Owner = Owner;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B985D0
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAITypeAtLocation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SpawnLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ForceShattered                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnAITypeAtLocation(fnaf9_EFNAFAISpawnType AIType, const struct FVector& SpawnLocation, bool ForceShattered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAITypeAtLocation");

		UAIManagementSystem_SpawnAITypeAtLocation_Params params{};
		params.AIType = AIType;
		params.SpawnLocation = SpawnLocation;
		params.ForceShattered = ForceShattered;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B984B0
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAIOnPathNearLocation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnAIOnPathNearLocation(fnaf9_EFNAFAISpawnType AIType, const struct FVector& Location, const class FName& PathName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIOnPathNearLocation");

		UAIManagementSystem_SpawnAIOnPathNearLocation_Params params{};
		params.AIType = AIType;
		params.Location = Location;
		params.PathName = PathName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B983A0
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAIOnPath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceShattered                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::SpawnAIOnPath(fnaf9_EFNAFAISpawnType AIType, bool bForceShattered, const class FName& PathName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIOnPath");

		UAIManagementSystem_SpawnAIOnPath_Params params{};
		params.AIType = AIType;
		params.bForceShattered = bForceShattered;
		params.PathName = PathName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B98380
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAINearPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIManagementSystem::SpawnAINearPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAINearPlayer");

		UAIManagementSystem_SpawnAINearPlayer_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B98360
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAIFar
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIManagementSystem::SpawnAIFar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIFar");

		UAIManagementSystem_SpawnAIFar_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B98290
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAIAtSpawnPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AFNAFAISpawnPoint*                           SpawnPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceShattered                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SpawnAIAtSpawnPoint(class AFNAFAISpawnPoint* SpawnPoint, bool bForceShattered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIAtSpawnPoint");

		UAIManagementSystem_SpawnAIAtSpawnPoint_Params params{};
		params.SpawnPoint = SpawnPoint;
		params.bForceShattered = bForceShattered;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B98210
	 * 		Name   -> Function fnaf9.AIManagementSystem.SpawnAIAtDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SpawnAIAtDistance(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIAtDistance");

		UAIManagementSystem_SpawnAIAtDistance_Params params{};
		params.Distance = Distance;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B98180
	 * 		Name   -> Function fnaf9.AIManagementSystem.SetWorldSpawnEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SetWorldSpawnEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetWorldSpawnEnabled");

		UAIManagementSystem_SetWorldSpawnEnabled_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B980F0
	 * 		Name   -> Function fnaf9.AIManagementSystem.SetVanessaSpawnEnable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SetVanessaSpawnEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetVanessaSpawnEnable");

		UAIManagementSystem_SetVanessaSpawnEnable_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B98070
	 * 		Name   -> Function fnaf9.AIManagementSystem.SetUseStagedSpawns
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SetUseStagedSpawns(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetUseStagedSpawns");

		UAIManagementSystem_SetUseStagedSpawns_Params params{};
		params.enable = enable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97FE0
	 * 		Name   -> Function fnaf9.AIManagementSystem.SetSpawningEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SetSpawningEnabled(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetSpawningEnabled");

		UAIManagementSystem_SetSpawningEnabled_Params params{};
		params.enable = enable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97F30
	 * 		Name   -> Function fnaf9.AIManagementSystem.SetExpectedAI
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FAnimatronicExpectedData>            AITypes                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SetExpectedAI(TArray<struct FAnimatronicExpectedData> AITypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetExpectedAI");

		UAIManagementSystem_SetExpectedAI_Params params{};
		params.AITypes = AITypes;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97F10
	 * 		Name   -> Function fnaf9.AIManagementSystem.SetAllAIExpected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIManagementSystem::SetAllAIExpected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetAllAIExpected");

		UAIManagementSystem_SetAllAIExpected_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97E80
	 * 		Name   -> Function fnaf9.AIManagementSystem.SetAITeleportEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SetAITeleportEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetAITeleportEnabled");

		UAIManagementSystem_SetAITeleportEnabled_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97D60
	 * 		Name   -> Function fnaf9.AIManagementSystem.SendVanessaAlert
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumberToAlert                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SendVanessaAlert(TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int32_t NumberToAlert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SendVanessaAlert");

		UAIManagementSystem_SendVanessaAlert_Params params{};
		params.TypesToAlert = TypesToAlert;
		params.NumberToAlert = NumberToAlert;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97BF0
	 * 		Name   -> Function fnaf9.AIManagementSystem.SendGeneralAlert
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     AlertLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumberToAlert                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::SendGeneralAlert(const struct FVector& AlertLocation, TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int32_t NumberToAlert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SendGeneralAlert");

		UAIManagementSystem_SendGeneralAlert_Params params{};
		params.AlertLocation = AlertLocation;
		params.TypesToAlert = TypesToAlert;
		params.NumberToAlert = NumberToAlert;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97BD0
	 * 		Name   -> Function fnaf9.AIManagementSystem.RespawnEndos
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIManagementSystem::RespawnEndos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RespawnEndos");

		UAIManagementSystem_RespawnEndos_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97BB0
	 * 		Name   -> Function fnaf9.AIManagementSystem.RespawnAnimatronics
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIManagementSystem::RespawnAnimatronics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RespawnAnimatronics");

		UAIManagementSystem_RespawnAnimatronics_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97B90
	 * 		Name   -> Function fnaf9.AIManagementSystem.RespawnAllAI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIManagementSystem::RespawnAllAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RespawnAllAI");

		UAIManagementSystem_RespawnAllAI_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97B70
	 * 		Name   -> Function fnaf9.AIManagementSystem.Reset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIManagementSystem::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.Reset");

		UAIManagementSystem_Reset_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97AF0
	 * 		Name   -> Function fnaf9.AIManagementSystem.RemoveExpectedAI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::RemoveExpectedAI(fnaf9_EFNAFAISpawnType AIType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RemoveExpectedAI");

		UAIManagementSystem_RemoveExpectedAI_Params params{};
		params.AIType = AIType;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97A70
	 * 		Name   -> Function fnaf9.AIManagementSystem.RemoveCharacterByType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::RemoveCharacterByType(fnaf9_EFNAFAISpawnType AIType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RemoveCharacterByType");

		UAIManagementSystem_RemoveCharacterByType_Params params{};
		params.AIType = AIType;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97A50
	 * 		Name   -> Function fnaf9.AIManagementSystem.RemoveAllCharacters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIManagementSystem::RemoveAllCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RemoveAllCharacters");

		UAIManagementSystem_RemoveAllCharacters_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B979B0
	 * 		Name   -> Function fnaf9.AIManagementSystem.RegisterSeekerPath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIManagementSystem::RegisterSeekerPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RegisterSeekerPath");

		UAIManagementSystem_RegisterSeekerPath_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97930
	 * 		Name   -> Function fnaf9.AIManagementSystem.RegisterAI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::RegisterAI(class APawn* AIPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RegisterAI");

		UAIManagementSystem_RegisterAI_Params params{};
		params.AIPawn = AIPawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97870
	 * 		Name   -> Function fnaf9.AIManagementSystem.PawnExitedRoom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::PawnExitedRoom(class APawn* AIPawn, class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.PawnExitedRoom");

		UAIManagementSystem_PawnExitedRoom_Params params{};
		params.AIPawn = AIPawn;
		params.Room = Room;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B977B0
	 * 		Name   -> Function fnaf9.AIManagementSystem.PawnEnteringRoom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::PawnEnteringRoom(class APawn* AIPawn, class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.PawnEnteringRoom");

		UAIManagementSystem_PawnEnteringRoom_Params params{};
		params.AIPawn = AIPawn;
		params.Room = Room;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B976F0
	 * 		Name   -> Function fnaf9.AIManagementSystem.PawnEnteredRoom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::PawnEnteredRoom(class APawn* AIPawn, class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.PawnEnteredRoom");

		UAIManagementSystem_PawnEnteredRoom_Params params{};
		params.AIPawn = AIPawn;
		params.Room = Room;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B976D0
	 * 		Name   -> Function fnaf9.AIManagementSystem.PauseManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIManagementSystem::PauseManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.PauseManager");

		UAIManagementSystem_PauseManager_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97610
	 * 		Name   -> Function fnaf9.AIManagementSystem.OnWorldStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		fnaf9_EFNAFGameState                               NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		fnaf9_EFNAFGameState                               OldState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::OnWorldStateChanged(fnaf9_EFNAFGameState NewState, fnaf9_EFNAFGameState OldState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.OnWorldStateChanged");

		UAIManagementSystem_OnWorldStateChanged_Params params{};
		params.NewState = NewState;
		params.OldState = OldState;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00875D50
	 * 		Name   -> Function fnaf9.AIManagementSystem.OnVannyPathsCollected
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAIManagementSystem::OnVannyPathsCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.OnVannyPathsCollected");

		UAIManagementSystem_OnVannyPathsCollected_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97550
	 * 		Name   -> Function fnaf9.AIManagementSystem.OnPawnEndPlay
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      DestroyedPawn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		Engine_EEndPlayReason                              EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::OnPawnEndPlay(class AActor* DestroyedPawn, Engine_EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.OnPawnEndPlay");

		UAIManagementSystem_OnPawnEndPlay_Params params{};
		params.DestroyedPawn = DestroyedPawn;
		params.EndPlayReason = EndPlayReason;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97530
	 * 		Name   -> Function fnaf9.AIManagementSystem.OnAlertDistancesCollected
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAIManagementSystem::OnAlertDistancesCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.OnAlertDistancesCollected");

		UAIManagementSystem_OnAlertDistancesCollected_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B974B0
	 * 		Name   -> Function fnaf9.AIManagementSystem.OnAIFellOutOfWorld
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::OnAIFellOutOfWorld(class APawn* AIPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.OnAIFellOutOfWorld");

		UAIManagementSystem_OnAIFellOutOfWorld_Params params{};
		params.AIPawn = AIPawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97490
	 * 		Name   -> Function fnaf9.AIManagementSystem.IsWorldSpawnEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAIManagementSystem::IsWorldSpawnEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsWorldSpawnEnabled");

		UAIManagementSystem_IsWorldSpawnEnabled_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97470
	 * 		Name   -> Function fnaf9.AIManagementSystem.IsUsingStagedSpawns
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAIManagementSystem::IsUsingStagedSpawns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsUsingStagedSpawns");

		UAIManagementSystem_IsUsingStagedSpawns_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97450
	 * 		Name   -> Function fnaf9.AIManagementSystem.IsSpawningEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAIManagementSystem::IsSpawningEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsSpawningEnabled");

		UAIManagementSystem_IsSpawningEnabled_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B973C0
	 * 		Name   -> Function fnaf9.AIManagementSystem.IsRoomOccupied
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIManagementSystem::IsRoomOccupied(class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsRoomOccupied");

		UAIManagementSystem_IsRoomOccupied_Params params{};
		params.Room = Room;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97330
	 * 		Name   -> Function fnaf9.AIManagementSystem.IsRoomBeingEntered
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIManagementSystem::IsRoomBeingEntered(class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsRoomBeingEntered");

		UAIManagementSystem_IsRoomBeingEntered_Params params{};
		params.Room = Room;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97300
	 * 		Name   -> Function fnaf9.AIManagementSystem.IsAITeleportEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAIManagementSystem::IsAITeleportEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsAITeleportEnabled");

		UAIManagementSystem_IsAITeleportEnabled_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B972E0
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetTimeSinceLastEncounter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UAIManagementSystem::GetTimeSinceLastEncounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetTimeSinceLastEncounter");

		UAIManagementSystem_GetTimeSinceLastEncounter_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B971E0
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetRoomDistancesToPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TMap<class APawn*, int32_t> UAIManagementSystem::GetRoomDistancesToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetRoomDistancesToPlayer");

		UAIManagementSystem_GetRoomDistancesToPlayer_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97150
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetRoomAIPawnIsIn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ARoomAreaBase* UAIManagementSystem::GetRoomAIPawnIsIn(class APawn* AIPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetRoomAIPawnIsIn");

		UAIManagementSystem_GetRoomAIPawnIsIn_Params params{};
		params.AIPawn = AIPawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B970C0
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetRoomAIPawnIsEntering
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ARoomAreaBase* UAIManagementSystem::GetRoomAIPawnIsEntering(class APawn* AIPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetRoomAIPawnIsEntering");

		UAIManagementSystem_GetRoomAIPawnIsEntering_Params params{};
		params.AIPawn = AIPawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B97030
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetPawnForType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::GetPawnForType(fnaf9_EFNAFAISpawnType AIType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetPawnForType");

		UAIManagementSystem_GetPawnForType_Params params{};
		params.AIType = AIType;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B96F60
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetPawnClassForType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceShattered                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UAIManagementSystem::GetPawnClassForType(fnaf9_EFNAFAISpawnType AIType, bool bForceShattered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetPawnClassForType");

		UAIManagementSystem_GetPawnClassForType_Params params{};
		params.AIType = AIType;
		params.bForceShattered = bForceShattered;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B96E80
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetPathForAI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::GetPathForAI(fnaf9_EFNAFAISpawnType AIType, const class FName& PathName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetPathForAI");

		UAIManagementSystem_GetPathForAI_Params params{};
		params.AIType = AIType;
		params.PathName = PathName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B96E00
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetExistingPawnTypes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<fnaf9_EFNAFAISpawnType> UAIManagementSystem::GetExistingPawnTypes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetExistingPawnTypes");

		UAIManagementSystem_GetExistingPawnTypes_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B96D70
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetExistingPawn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APawn* UAIManagementSystem::GetExistingPawn(fnaf9_EFNAFAISpawnType AIType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetExistingPawn");

		UAIManagementSystem_GetExistingPawn_Params params{};
		params.AIType = AIType;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B96C90
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetCurrentVannyMeterValuesAsPercentage
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              OutCurrentValuePercent                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutSoftMaxPercent                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::GetCurrentVannyMeterValuesAsPercentage(float* OutCurrentValuePercent, float* OutSoftMaxPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetCurrentVannyMeterValuesAsPercentage");

		UAIManagementSystem_GetCurrentVannyMeterValuesAsPercentage_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutCurrentValuePercent != nullptr)
			*OutCurrentValuePercent = params.OutCurrentValuePercent;
		if (OutSoftMaxPercent != nullptr)
			*OutSoftMaxPercent = params.OutSoftMaxPercent;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B96B50
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetCurrentVannyMeterValues
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
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

		UAIManagementSystem_GetCurrentVannyMeterValues_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		Offset -> 0x00B96B20
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetCurrentVannyMeterPercentage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UAIManagementSystem::GetCurrentVannyMeterPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetCurrentVannyMeterPercentage");

		UAIManagementSystem_GetCurrentVannyMeterPercentage_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B96A90
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetCachedDistances
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FAIDistanceResult> UAIManagementSystem::GetCachedDistances()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetCachedDistances");

		UAIManagementSystem_GetCachedDistances_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B96970
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetCachedDistanceFor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
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

		UAIManagementSystem_GetCachedDistanceFor_Params params{};
		params.Pawn = Pawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (bOutResultValid != nullptr)
			*bOutResultValid = params.bOutResultValid;
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B968A0
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAllSpawnPointsFor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AFNAFAISpawnPoint*> UAIManagementSystem::GetAllSpawnPointsFor(fnaf9_EFNAFAISpawnType AIType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllSpawnPointsFor");

		UAIManagementSystem_GetAllSpawnPointsFor_Params params{};
		params.AIType = AIType;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B96820
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAllSpawnPoints
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class AFNAFAISpawnPoint*> UAIManagementSystem::GetAllSpawnPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllSpawnPoints");

		UAIManagementSystem_GetAllSpawnPoints_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B965E0
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAllRegisteredAI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class APawn*> UAIManagementSystem::GetAllRegisteredAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllRegisteredAI");

		UAIManagementSystem_GetAllRegisteredAI_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B96770
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAllAnimatronicPawns
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
	 * Parameters:
	 * 		TArray<class APawn*>                               OutAnimatronicPawns                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::GetAllAnimatronicPawns(TArray<class APawn*>* OutAnimatronicPawns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllAnimatronicPawns");

		UAIManagementSystem_GetAllAnimatronicPawns_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutAnimatronicPawns != nullptr)
			*OutAnimatronicPawns = params.OutAnimatronicPawns;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B966A0
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAllAIInRoomAtMost
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            numRooms                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class APawn*> UAIManagementSystem::GetAllAIInRoomAtMost(int32_t numRooms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllAIInRoomAtMost");

		UAIManagementSystem_GetAllAIInRoomAtMost_Params params{};
		params.numRooms = numRooms;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B965E0
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAllAI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class APawn*> UAIManagementSystem::GetAllAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllAI");

		UAIManagementSystem_GetAllAI_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B96550
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAIPawnsWithSightToPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class APawn*> UAIManagementSystem::GetAIPawnsWithSightToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAIPawnsWithSightToPlayer");

		UAIManagementSystem_GetAIPawnsWithSightToPlayer_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B96470
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAIPawnsEnteringRoom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class APawn*> UAIManagementSystem::GetAIPawnsEnteringRoom(class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAIPawnsEnteringRoom");

		UAIManagementSystem_GetAIPawnsEnteringRoom_Params params{};
		params.Room = Room;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B96390
	 * 		Name   -> Function fnaf9.AIManagementSystem.GetAIPawnInRoom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class APawn*> UAIManagementSystem::GetAIPawnInRoom(class ARoomAreaBase* Room)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAIPawnInRoom");

		UAIManagementSystem_GetAIPawnInRoom_Params params{};
		params.Room = Room;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B96300
	 * 		Name   -> Function fnaf9.AIManagementSystem.FindSpawnPointClosestToDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AFNAFAISpawnPoint* UAIManagementSystem::FindSpawnPointClosestToDistance(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindSpawnPointClosestToDistance");

		UAIManagementSystem_FindSpawnPointClosestToDistance_Params params{};
		params.Distance = Distance;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B960D0
	 * 		Name   -> Function fnaf9.AIManagementSystem.FindSpawnNotVisibleAtDistance
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		fnaf9_EFNAFAISpawnType                             SpawnType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       PawnForNavProperties                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AFNAFAISpawnPoint*>                   OutSpawnPointsResult                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      OutDistances                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::FindSpawnNotVisibleAtDistance(float Distance, fnaf9_EFNAFAISpawnType SpawnType, class APawn* PawnForNavProperties, TArray<class AFNAFAISpawnPoint*>* OutSpawnPointsResult, TArray<float>* OutDistances, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindSpawnNotVisibleAtDistance");

		UAIManagementSystem_FindSpawnNotVisibleAtDistance_Params params{};
		params.Distance = Distance;
		params.SpawnType = SpawnType;
		params.PawnForNavProperties = PawnForNavProperties;
		params.LatentInfo = LatentInfo;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutSpawnPointsResult != nullptr)
			*OutSpawnPointsResult = params.OutSpawnPointsResult;
		if (OutDistances != nullptr)
			*OutDistances = params.OutDistances;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B95F90
	 * 		Name   -> Function fnaf9.AIManagementSystem.FindRandomPatrolPointOutOfView
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIManagementSystem::FindRandomPatrolPointOutOfView(fnaf9_EFNAFAISpawnType AIType, struct FVector* OutLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindRandomPatrolPointOutOfView");

		UAIManagementSystem_FindRandomPatrolPointOutOfView_Params params{};
		params.AIType = AIType;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B95F60
	 * 		Name   -> Function fnaf9.AIManagementSystem.FindFurthestSpawnPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AFNAFAISpawnPoint* UAIManagementSystem::FindFurthestSpawnPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindFurthestSpawnPoint");

		UAIManagementSystem_FindFurthestSpawnPoint_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B95F30
	 * 		Name   -> Function fnaf9.AIManagementSystem.FindClosestSpawnPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AFNAFAISpawnPoint* UAIManagementSystem::FindClosestSpawnPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindClosestSpawnPoint");

		UAIManagementSystem_FindClosestSpawnPoint_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B95D00
	 * 		Name   -> Function fnaf9.AIManagementSystem.FindClosestPatrolPointOutOfView
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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

		UAIManagementSystem_FindClosestPatrolPointOutOfView_Params params{};
		params.AIPawn = AIPawn;
		params.LatentActionInfo = LatentActionInfo;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		Offset -> 0x00B95AD0
	 * 		Name   -> Function fnaf9.AIManagementSystem.FindClosestPathPointForAI
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
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

		UAIManagementSystem_FindClosestPathPointForAI_Params params{};
		params.AIPawn = AIPawn;
		params.LatentInfo = LatentInfo;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		Offset -> 0x00B95A50
	 * 		Name   -> Function fnaf9.AIManagementSystem.ExitedHiding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::ExitedHiding(class APawn* AIPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.ExitedHiding");

		UAIManagementSystem_ExitedHiding_Params params{};
		params.AIPawn = AIPawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B95A30
	 * 		Name   -> Function fnaf9.AIManagementSystem.DestroyAllAINotVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIManagementSystem::DestroyAllAINotVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.DestroyAllAINotVisible");

		UAIManagementSystem_DestroyAllAINotVisible_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B959B0
	 * 		Name   -> Function fnaf9.AIManagementSystem.DestroyAllAIInRoomsAtleast
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            RoomDist                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::DestroyAllAIInRoomsAtleast(int32_t RoomDist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.DestroyAllAIInRoomsAtleast");

		UAIManagementSystem_DestroyAllAIInRoomsAtleast_Params params{};
		params.RoomDist = RoomDist;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B95990
	 * 		Name   -> Function fnaf9.AIManagementSystem.DestroyAllAI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIManagementSystem::DestroyAllAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.DestroyAllAI");

		UAIManagementSystem_DestroyAllAI_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B95970
	 * 		Name   -> Function fnaf9.AIManagementSystem.ClearExpectedAI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIManagementSystem::ClearExpectedAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.ClearExpectedAI");

		UAIManagementSystem_ClearExpectedAI_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B957C0
	 * 		Name   -> Function fnaf9.AIManagementSystem.CalculateAllAIDistances
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FAIDistanceResult>                   DistanceResults                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutClosestIsValid                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ClosestIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::CalculateAllAIDistances(TArray<struct FAIDistanceResult>* DistanceResults, bool* bOutClosestIsValid, int32_t* ClosestIndex, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.CalculateAllAIDistances");

		UAIManagementSystem_CalculateAllAIDistances_Params params{};
		params.LatentInfo = LatentInfo;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		Offset -> 0x00B956F0
	 * 		Name   -> Function fnaf9.AIManagementSystem.ApplySound
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::ApplySound(float Strength, const struct FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.ApplySound");

		UAIManagementSystem_ApplySound_Params params{};
		params.Strength = Strength;
		params.WorldLocation = WorldLocation;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B95660
	 * 		Name   -> Function fnaf9.AIManagementSystem.ApplyCollect
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::ApplyCollect(const struct FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.ApplyCollect");

		UAIManagementSystem_ApplyCollect_Params params{};
		params.WorldLocation = WorldLocation;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B95630
	 * 		Name   -> Function fnaf9.AIManagementSystem.AnyPawnInPlayerRoom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UAIManagementSystem::AnyPawnInPlayerRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.AnyPawnInPlayerRoom");

		UAIManagementSystem_AnyPawnInPlayerRoom_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B95490
	 * 		Name   -> Function fnaf9.AIManagementSystem.AISpottedPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::AISpottedPlayer(class APawn* AIPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.AISpottedPlayer");

		UAIManagementSystem_AISpottedPlayer_Params params{};
		params.AIPawn = AIPawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B95410
	 * 		Name   -> Function fnaf9.AIManagementSystem.AILostSightOfPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::AILostSightOfPlayer(class APawn* AIPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.AILostSightOfPlayer");

		UAIManagementSystem_AILostSightOfPlayer_Params params{};
		params.AIPawn = AIPawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B955B0
	 * 		Name   -> Function fnaf9.AIManagementSystem.AdjustVannyMeter
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::AdjustVannyMeter(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.AdjustVannyMeter");

		UAIManagementSystem_AdjustVannyMeter_Params params{};
		params.Amount = Amount;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B95510
	 * 		Name   -> Function fnaf9.AIManagementSystem.AddExpectedAI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimatronicExpectedData                    AIType                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAIManagementSystem::AddExpectedAI(const struct FAnimatronicExpectedData& AIType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.AddExpectedAI");

		UAIManagementSystem_AddExpectedAI_Params params{};
		params.AIType = AIType;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAIManagementSystem.StaticClass
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.PathPointProvider.SetPointType
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PointType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPathPointProvider::SetPointType(int32_t PointIndex, int32_t PointType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.SetPointType");

		UPathPointProvider_SetPointType_Params params{};
		params.PointIndex = PointIndex;
		params.PointType = PointType;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.PathPointProvider.SetPointLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPathPointProvider::SetPointLocation(int32_t PointIndex, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.SetPointLocation");

		UPathPointProvider_SetPointLocation_Params params{};
		params.PointIndex = PointIndex;
		params.Location = Location;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.PathPointProvider.RemovePointConnection
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PointToDisconnectIndex                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPathPointProvider::RemovePointConnection(int32_t PointIndex, int32_t PointToDisconnectIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.RemovePointConnection");

		UPathPointProvider_RemovePointConnection_Params params{};
		params.PointIndex = PointIndex;
		params.PointToDisconnectIndex = PointToDisconnectIndex;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.PathPointProvider.RemovePoint
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPathPointProvider::RemovePoint(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.RemovePoint");

		UPathPointProvider_RemovePoint_Params params{};
		params.PointIndex = PointIndex;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.PathPointProvider.GetPointType
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPathPointProvider::GetPointType(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetPointType");

		UPathPointProvider_GetPointType_Params params{};
		params.PointIndex = PointIndex;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.PathPointProvider.GetPointsConnectedTo
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> UPathPointProvider::GetPointsConnectedTo(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetPointsConnectedTo");

		UPathPointProvider_GetPointsConnectedTo_Params params{};
		params.PointIndex = PointIndex;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.PathPointProvider.GetPointLocation
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UPathPointProvider::GetPointLocation(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetPointLocation");

		UPathPointProvider_GetPointLocation_Params params{};
		params.PointIndex = PointIndex;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.PathPointProvider.GetPointColor
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UPathPointProvider::GetPointColor(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetPointColor");

		UPathPointProvider_GetPointColor_Params params{};
		params.PointIndex = PointIndex;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.PathPointProvider.GetNumberOfPathPoints
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	int32_t UPathPointProvider::GetNumberOfPathPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetNumberOfPathPoints");

		UPathPointProvider_GetNumberOfPathPoints_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.PathPointProvider.GetAvailablePointTypes
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class FText> UPathPointProvider::GetAvailablePointTypes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetAvailablePointTypes");

		UPathPointProvider_GetAvailablePointTypes_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.PathPointProvider.AddPointConnection
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PointToConnectIndex                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPathPointProvider::AddPointConnection(int32_t PointIndex, int32_t PointToConnectIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.AddPointConnection");

		UPathPointProvider_AddPointConnection_Params params{};
		params.PointIndex = PointIndex;
		params.PointToConnectIndex = PointToConnectIndex;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.PathPointProvider.AddPoint
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPathPointProvider::AddPoint(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.AddPoint");

		UPathPointProvider_AddPoint_Params params{};
		params.Location = Location;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPathPointProvider.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAIPathComponent.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISpawnPointComponent.StaticClass
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
	 * 		Offset -> 0x00BB5740
	 * 		Name   -> Function fnaf9.PlayerTrigger.SetTriggerActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlayerTrigger::SetTriggerActive(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.SetTriggerActive");

		APlayerTrigger_SetTriggerActive_Params params{};
		params.bActive = bActive;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4EA0
	 * 		Name   -> Function fnaf9.PlayerTrigger.SaveActivated
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void APlayerTrigger::SaveActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.SaveActivated");

		APlayerTrigger_SaveActivated_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4A70
	 * 		Name   -> Function fnaf9.PlayerTrigger.OnWorldObjectStateChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FName                                        ObjectName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ObjectState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APlayerTrigger::OnWorldObjectStateChanged(const class FName& ObjectName, bool ObjectState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.OnWorldObjectStateChanged");

		APlayerTrigger_OnWorldObjectStateChanged_Params params{};
		params.ObjectName = ObjectName;
		params.ObjectState = ObjectState;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4A30
	 * 		Name   -> Function fnaf9.PlayerTrigger.OnTriggerStay
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void APlayerTrigger::OnTriggerStay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.OnTriggerStay");

		APlayerTrigger_OnTriggerStay_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4A50
	 * 		Name   -> Function fnaf9.PlayerTrigger.OnTriggered
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void APlayerTrigger::OnTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.OnTriggered");

		APlayerTrigger_OnTriggered_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4710
	 * 		Name   -> Function fnaf9.PlayerTrigger.IsTriggerStateSet
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool APlayerTrigger::IsTriggerStateSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.IsTriggerStateSet");

		APlayerTrigger_IsTriggerStateSet_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB46E0
	 * 		Name   -> Function fnaf9.PlayerTrigger.IsTriggerActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool APlayerTrigger::IsTriggerActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.IsTriggerActive");

		APlayerTrigger_IsTriggerActive_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB3FD0
	 * 		Name   -> Function fnaf9.PlayerTrigger.ForceTrigger
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void APlayerTrigger::ForceTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.ForceTrigger");

		APlayerTrigger_ForceTrigger_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB3E40
	 * 		Name   -> Function fnaf9.PlayerTrigger.CanTrigger
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent, Const)
	 */
	bool APlayerTrigger::CanTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.CanTrigger");

		APlayerTrigger_CanTrigger_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APlayerTrigger.StaticClass
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
	 * 		Offset -> 0x00B9CB60
	 * 		Name   -> Function fnaf9.AISpawnTrigger.OnAISpawnedFailure
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       SpawnedPawn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAISpawnTrigger::OnAISpawnedFailure(class APawn* SpawnedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AISpawnTrigger.OnAISpawnedFailure");

		AAISpawnTrigger_OnAISpawnedFailure_Params params{};
		params.SpawnedPawn = SpawnedPawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9CAD0
	 * 		Name   -> Function fnaf9.AISpawnTrigger.OnAISpawned
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       SpawnedPawn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAISpawnTrigger::OnAISpawned(class APawn* SpawnedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.AISpawnTrigger.OnAISpawned");

		AAISpawnTrigger_OnAISpawned_Params params{};
		params.SpawnedPawn = SpawnedPawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAISpawnTrigger.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAISystemSettings.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABallPitVolume.StaticClass
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
	 * 		Offset -> 0x00B9C8C0
	 * 		Name   -> Function fnaf9.CameraHelperFunctions.IsLocationInCameraView
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		fnaf9_ECameraAngleFlags                            CameraAngles                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutHorizontalAngle                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutVerticalAngle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCameraHelperFunctions::STATIC_IsLocationInCameraView(class UObject* WorldContextObject, const struct FVector& Location, fnaf9_ECameraAngleFlags CameraAngles, float* OutHorizontalAngle, float* OutVerticalAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.CameraHelperFunctions.IsLocationInCameraView");

		UCameraHelperFunctions_IsLocationInCameraView_Params params{};
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		params.CameraAngles = CameraAngles;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		Offset -> 0x00B9C310
	 * 		Name   -> Function fnaf9.CameraHelperFunctions.GetLocationAnglesFromCamera
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutHorizontalAngle                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutVerticalAngle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraHelperFunctions::STATIC_GetLocationAnglesFromCamera(class UObject* WorldContextObject, const struct FVector& Location, float* OutHorizontalAngle, float* OutVerticalAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.CameraHelperFunctions.GetLocationAnglesFromCamera");

		UCameraHelperFunctions_GetLocationAnglesFromCamera_Params params{};
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutHorizontalAngle != nullptr)
			*OutHorizontalAngle = params.OutHorizontalAngle;
		if (OutVerticalAngle != nullptr)
			*OutVerticalAngle = params.OutVerticalAngle;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCameraHelperFunctions.StaticClass
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
	 * 		Offset -> 0x00B9C130
	 * 		Name   -> Function fnaf9.CameraTrigger.GetAlertType
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	fnaf9_EAlertType UCameraTrigger::GetAlertType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.CameraTrigger.GetAlertType");

		UCameraTrigger_GetAlertType_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCameraTrigger.StaticClass
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
	 * 		Offset -> 0x00B9CBF0
	 * 		Name   -> Function fnaf9.ConditionalCheckComponent.OnConditionUpdated
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UConditionalCheckComponent::OnConditionUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionalCheckComponent.OnConditionUpdated");

		UConditionalCheckComponent_OnConditionUpdated_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UConditionalCheckComponent.StaticClass
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
	 * 		Offset -> 0x00B9D1D0
	 * 		Name   -> Function fnaf9.ConditionCheckInterface.UnbindConditionUpdatedDelegate
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              OnConditionResultUpdated                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UConditionCheckInterface::UnbindConditionUpdatedDelegate(const class FScriptDelegate& OnConditionResultUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionCheckInterface.UnbindConditionUpdatedDelegate");

		UConditionCheckInterface_UnbindConditionUpdatedDelegate_Params params{};
		params.OnConditionResultUpdated = OnConditionResultUpdated;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C040
	 * 		Name   -> Function fnaf9.ConditionCheckInterface.ConditionsMet
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	bool UConditionCheckInterface::ConditionsMet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionCheckInterface.ConditionsMet");

		UConditionCheckInterface_ConditionsMet_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9BD70
	 * 		Name   -> Function fnaf9.ConditionCheckInterface.BindConditionUpdatedDelegate
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              OnConditionResultUpdated                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UConditionCheckInterface::BindConditionUpdatedDelegate(const class FScriptDelegate& OnConditionResultUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionCheckInterface.BindConditionUpdatedDelegate");

		UConditionCheckInterface_BindConditionUpdatedDelegate_Params params{};
		params.OnConditionResultUpdated = OnConditionResultUpdated;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UConditionCheckInterface.StaticClass
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
	 * 		Offset -> 0x00B9CD90
	 * 		Name   -> Function fnaf9.ConditionFunctionLibrary.RemoveConditionDelegate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FConditionResultDelegates                   DelegateHandle                                             (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UConditionFunctionLibrary::STATIC_RemoveConditionDelegate(struct FConditionResultDelegates* DelegateHandle, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.RemoveConditionDelegate");

		UConditionFunctionLibrary_RemoveConditionDelegate_Params params{};
		params.Delegate = Delegate;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (DelegateHandle != nullptr)
			*DelegateHandle = params.DelegateHandle;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C610
	 * 		Name   -> Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditionsWithGet
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ActorToCheck                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutConditionsMet                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UConditionFunctionLibrary::STATIC_HasMetComponentConditionsWithGet(class AActor* ActorToCheck, bool* bOutConditionsMet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditionsWithGet");

		UConditionFunctionLibrary_HasMetComponentConditionsWithGet_Params params{};
		params.ActorToCheck = ActorToCheck;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (bOutConditionsMet != nullptr)
			*bOutConditionsMet = params.bOutConditionsMet;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C590
	 * 		Name   -> Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ActorToCheck                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConditionFunctionLibrary::STATIC_HasMetComponentConditions(class AActor* ActorToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditions");

		UConditionFunctionLibrary_HasMetComponentConditions_Params params{};
		params.ActorToCheck = ActorToCheck;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C510
	 * 		Name   -> Function fnaf9.ConditionFunctionLibrary.HasMetAnyComponentConditions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ActorToCheck                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UConditionFunctionLibrary::STATIC_HasMetAnyComponentConditions(class AActor* ActorToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.HasMetAnyComponentConditions");

		UConditionFunctionLibrary_HasMetAnyComponentConditions_Params params{};
		params.ActorToCheck = ActorToCheck;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9BE20
	 * 		Name   -> Function fnaf9.ConditionFunctionLibrary.CallConditionUpdate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FConditionResultDelegates                   DelegateHandle                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UConditionFunctionLibrary::STATIC_CallConditionUpdate(const struct FConditionResultDelegates& DelegateHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.CallConditionUpdate");

		UConditionFunctionLibrary_CallConditionUpdate_Params params{};
		params.DelegateHandle = DelegateHandle;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9BC70
	 * 		Name   -> Function fnaf9.ConditionFunctionLibrary.AddConditionDelegate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FConditionResultDelegates                   DelegateHandle                                             (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UConditionFunctionLibrary::STATIC_AddConditionDelegate(struct FConditionResultDelegates* DelegateHandle, const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.AddConditionDelegate");

		UConditionFunctionLibrary_AddConditionDelegate_Params params{};
		params.Delegate = Delegate;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (DelegateHandle != nullptr)
			*DelegateHandle = params.DelegateHandle;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UConditionFunctionLibrary.StaticClass
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
	 * 		Offset -> 0x00B9D150
	 * 		Name   -> Function fnaf9.DoorComponent.SetSecurityLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewSecurityLevel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::SetSecurityLevel(int32_t NewSecurityLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetSecurityLevel");

		UDoorComponent_SetSecurityLevel_Params params{};
		params.NewSecurityLevel = NewSecurityLevel;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9D0D0
	 * 		Name   -> Function fnaf9.DoorComponent.SetPlayerBlocker
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         InPlayerBlocker                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::SetPlayerBlocker(class UPrimitiveComponent* InPlayerBlocker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetPlayerBlocker");

		UDoorComponent_SetPlayerBlocker_Params params{};
		params.InPlayerBlocker = InPlayerBlocker;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9D040
	 * 		Name   -> Function fnaf9.DoorComponent.SetLockedForPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bLocked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::SetLockedForPlayer(bool bLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetLockedForPlayer");

		UDoorComponent_SetLockedForPlayer_Params params{};
		params.bLocked = bLocked;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9CFB0
	 * 		Name   -> Function fnaf9.DoorComponent.SetLockedForAI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bLocked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::SetLockedForAI(bool bLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetLockedForAI");

		UDoorComponent_SetLockedForAI_Params params{};
		params.bLocked = bLocked;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9CF20
	 * 		Name   -> Function fnaf9.DoorComponent.SetAutomaticDoorEnableForPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::SetAutomaticDoorEnableForPlayer(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetAutomaticDoorEnableForPlayer");

		UDoorComponent_SetAutomaticDoorEnableForPlayer_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9CE90
	 * 		Name   -> Function fnaf9.DoorComponent.SetAutomaticDoorEnableForAI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::SetAutomaticDoorEnableForAI(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetAutomaticDoorEnableForAI");

		UDoorComponent_SetAutomaticDoorEnableForAI_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9CD10
	 * 		Name   -> Function fnaf9.DoorComponent.PawnExitedDoor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::PawnExitedDoor(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.PawnExitedDoor");

		UDoorComponent_PawnExitedDoor_Params params{};
		params.Pawn = Pawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9CC90
	 * 		Name   -> Function fnaf9.DoorComponent.PawnEnteredDoor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::PawnEnteredDoor(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.PawnEnteredDoor");

		UDoorComponent_PawnEnteredDoor_Params params{};
		params.Pawn = Pawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9CAB0
	 * 		Name   -> Function fnaf9.DoorComponent.IsLockedForPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDoorComponent::IsLockedForPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.IsLockedForPlayer");

		UDoorComponent_IsLockedForPlayer_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9CA90
	 * 		Name   -> Function fnaf9.DoorComponent.IsLockedForAI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDoorComponent::IsLockedForAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.IsLockedForAI");

		UDoorComponent_IsLockedForAI_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C7A0
	 * 		Name   -> Function fnaf9.DoorComponent.HasMetConditions
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AFNAFBasePlayerCharacter*                    BasePlayerCharacter                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConditionsMet                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		fnaf9_EConditionFailReason                         FailReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::HasMetConditions(class AFNAFBasePlayerCharacter* BasePlayerCharacter, bool* bConditionsMet, fnaf9_EConditionFailReason* FailReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.HasMetConditions");

		UDoorComponent_HasMetConditions_Params params{};
		params.BasePlayerCharacter = BasePlayerCharacter;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (bConditionsMet != nullptr)
			*bConditionsMet = params.bConditionsMet;
		if (FailReason != nullptr)
			*FailReason = params.FailReason;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C4F0
	 * 		Name   -> Function fnaf9.DoorComponent.HasDoorInitialized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDoorComponent::HasDoorInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.HasDoorInitialized");

		UDoorComponent_HasDoorInitialized_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C470
	 * 		Name   -> Function fnaf9.DoorComponent.GetPawnsInDoor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class APawn*> UDoorComponent::GetPawnsInDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetPawnsInDoor");

		UDoorComponent_GetPawnsInDoor_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C2F0
	 * 		Name   -> Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDoorComponent::GetIsAutomaticDoorEnabledForPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForPlayer");

		UDoorComponent_GetIsAutomaticDoorEnabledForPlayer_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C2D0
	 * 		Name   -> Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForAI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDoorComponent::GetIsAutomaticDoorEnabledForAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForAI");

		UDoorComponent_GetIsAutomaticDoorEnabledForAI_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C230
	 * 		Name   -> Function fnaf9.DoorComponent.GetDoorSideFromLocation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	fnaf9_EDoorSide UDoorComponent::GetDoorSideFromLocation(const struct FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetDoorSideFromLocation");

		UDoorComponent_GetDoorSideFromLocation_Params params{};
		params.WorldLocation = WorldLocation;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C1A0
	 * 		Name   -> Function fnaf9.DoorComponent.GetDoorSideFromActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	fnaf9_EDoorSide UDoorComponent::GetDoorSideFromActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetDoorSideFromActor");

		UDoorComponent_GetDoorSideFromActor_Params params{};
		params.Actor = Actor;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C160
	 * 		Name   -> Function fnaf9.DoorComponent.GetCurrentRequirements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FDoorEntryRequirements UDoorComponent::GetCurrentRequirements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetCurrentRequirements");

		UDoorComponent_GetCurrentRequirements_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C110
	 * 		Name   -> Function fnaf9.DoorComponent.ForceOpen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDoorComponent::ForceOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.ForceOpen");

		UDoorComponent_ForceOpen_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C0F0
	 * 		Name   -> Function fnaf9.DoorComponent.ForceClose
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDoorComponent::ForceClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.ForceClose");

		UDoorComponent_ForceClose_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C070
	 * 		Name   -> Function fnaf9.DoorComponent.CopyConditions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDoorComponent*                              OtherDoorComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::CopyConditions(class UDoorComponent* OtherDoorComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.CopyConditions");

		UDoorComponent_CopyConditions_Params params{};
		params.OtherDoorComponent = OtherDoorComponent;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9BF20
	 * 		Name   -> Function fnaf9.DoorComponent.CanPawnOpenDoor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutConditionsMet                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		fnaf9_EConditionFailReason                         OutFailReason                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorComponent::CanPawnOpenDoor(class APawn* Pawn, bool* bOutConditionsMet, fnaf9_EConditionFailReason* OutFailReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.CanPawnOpenDoor");

		UDoorComponent_CanPawnOpenDoor_Params params{};
		params.Pawn = Pawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (bOutConditionsMet != nullptr)
			*bOutConditionsMet = params.bOutConditionsMet;
		if (OutFailReason != nullptr)
			*OutFailReason = params.OutFailReason;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDoorComponent.StaticClass
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
	 * 		Offset -> 0x00BA2630
	 * 		Name   -> Function fnaf9.DoorInteractor.OnOverlappedDoor
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCanEnterDoor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		fnaf9_EConditionFailReason                         CantEnterReason                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDoorComponent*                              DoorComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoorInteractor::OnOverlappedDoor(bool bCanEnterDoor, fnaf9_EConditionFailReason CantEnterReason, class UDoorComponent* DoorComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorInteractor.OnOverlappedDoor");

		UDoorInteractor_OnOverlappedDoor_Params params{};
		params.bCanEnterDoor = bCanEnterDoor;
		params.CantEnterReason = CantEnterReason;
		params.DoorComponent = DoorComponent;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA25B0
	 * 		Name   -> Function fnaf9.DoorInteractor.OnEndOverlapDoor
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UDoorInteractor::OnEndOverlapDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorInteractor.OnEndOverlapDoor");

		UDoorInteractor_OnEndOverlapDoor_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA1D20
	 * 		Name   -> Function fnaf9.DoorInteractor.DoorEntryNotAllowed
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UDoorComponent*                              DoorComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDoorInteractor::DoorEntryNotAllowed(class UDoorComponent* DoorComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.DoorInteractor.DoorEntryNotAllowed");

		UDoorInteractor_DoorEntryNotAllowed_Params params{};
		params.DoorComponent = DoorComponent;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDoorInteractor.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEnvQueryTest_ObjectSweep.StaticClass
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
	 * 		Offset -> 0x00BA3180
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.ToggleFullAIDisplay
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void Afnaf9GameModeBase::ToggleFullAIDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.ToggleFullAIDisplay");

		Afnaf9GameModeBase_ToggleFullAIDisplay_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2EE0
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.StartRepairGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void Afnaf9GameModeBase::StartRepairGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.StartRepairGame");

		Afnaf9GameModeBase_StartRepairGame_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA29E0
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.SetAIDisplay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::SetAIDisplay(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.SetAIDisplay");

		Afnaf9GameModeBase_SetAIDisplay_Params params{};
		params.enable = enable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2950
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.RoomHeatDisplay
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::RoomHeatDisplay(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.RoomHeatDisplay");

		Afnaf9GameModeBase_RoomHeatDisplay_Params params{};
		params.enable = enable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA27F0
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.POIVisible
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::POIVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.POIVisible");

		Afnaf9GameModeBase_POIVisible_Params params{};
		params.bVisible = bVisible;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2760
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.POIDetectionVisible
	 * 		Flags  -> (Final, Exec, Native, Public, Const)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::POIDetectionVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.POIDetectionVisible");

		Afnaf9GameModeBase_POIDetectionVisible_Params params{};
		params.bVisible = bVisible;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA28A0
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.PlayerFlashlightVis
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::PlayerFlashlightVis(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.PlayerFlashlightVis");

		Afnaf9GameModeBase_PlayerFlashlightVis_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.OnRoomHeatDisplayChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::OnRoomHeatDisplayChanged(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.OnRoomHeatDisplayChanged");

		Afnaf9GameModeBase_OnRoomHeatDisplayChanged_Params params{};
		params.enable = enable;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.OnPlayerFlashlightVis
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::OnPlayerFlashlightVis(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.OnPlayerFlashlightVis");

		Afnaf9GameModeBase_OnPlayerFlashlightVis_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.OnForceSpawnVanny
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void Afnaf9GameModeBase::OnForceSpawnVanny()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.OnForceSpawnVanny");

		Afnaf9GameModeBase_OnForceSpawnVanny_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.OnAIPawnsVis
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::OnAIPawnsVis(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.OnAIPawnsVis");

		Afnaf9GameModeBase_OnAIPawnsVis_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2440
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.IsAIDisplayOn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool Afnaf9GameModeBase::IsAIDisplayOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.IsAIDisplayOn");

		Afnaf9GameModeBase_IsAIDisplayOn_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA1E00
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.ForceSpawnVanny
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void Afnaf9GameModeBase::ForceSpawnVanny()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.ForceSpawnVanny");

		Afnaf9GameModeBase_ForceSpawnVanny_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA1DE0
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.FinishRepairGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void Afnaf9GameModeBase::FinishRepairGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.FinishRepairGame");

		Afnaf9GameModeBase_FinishRepairGame_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA1AC0
	 * 		Name   -> Function fnaf9.fnaf9GameModeBase.AIPawnsVis
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Afnaf9GameModeBase::AIPawnsVis(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.AIPawnsVis");

		Afnaf9GameModeBase_AIPawnsVis_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction Afnaf9GameModeBase.StaticClass
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
	 * 		Offset -> 0x00BA1E40
	 * 		Name   -> Function fnaf9.FNAFAchievementUtils.GetAllAchievements
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class FName> UFNAFAchievementUtils::STATIC_GetAllAchievements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFAchievementUtils.GetAllAchievements");

		UFNAFAchievementUtils_GetAllAchievements_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFAchievementUtils.StaticClass
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
	 * 		Offset -> 0x00BA1E20
	 * 		Name   -> Function fnaf9.FNAFAISpawnPoint.GetAIType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	fnaf9_EFNAFAISpawnType AFNAFAISpawnPoint::GetAIType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFAISpawnPoint.GetAIType");

		AFNAFAISpawnPoint_GetAIType_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFNAFAISpawnPoint.StaticClass
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
	 * 		Offset -> 0x00BA25D0
	 * 		Name   -> Function fnaf9.FNAFBaseCharacter.OnFellOutOfWorld
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void AFNAFBaseCharacter::OnFellOutOfWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBaseCharacter.OnFellOutOfWorld");

		AFNAFBaseCharacter_OnFellOutOfWorld_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFNAFBaseCharacter.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFNAFBaseAICharacter.StaticClass
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
	 * 		Offset -> 0x00BA3080
	 * 		Name   -> Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayerWithCameraLocation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     CameraWorldLocation                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFNAFBasePlayerCharacter::TeleportPlayerWithCameraLocation(const struct FVector& CameraWorldLocation, float Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayerWithCameraLocation");

		AFNAFBasePlayerCharacter_TeleportPlayerWithCameraLocation_Params params{};
		params.CameraWorldLocation = CameraWorldLocation;
		params.Yaw = Yaw;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2FA0
	 * 		Name   -> Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayer
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFNAFBasePlayerCharacter::TeleportPlayer(const struct FVector& WorldLocation, float Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayer");

		AFNAFBasePlayerCharacter_TeleportPlayer_Params params{};
		params.WorldLocation = WorldLocation;
		params.Yaw = Yaw;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2610
	 * 		Name   -> Function fnaf9.FNAFBasePlayerCharacter.OnKillZLevelsLoaded
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AFNAFBasePlayerCharacter::OnKillZLevelsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerCharacter.OnKillZLevelsLoaded");

		AFNAFBasePlayerCharacter_OnKillZLevelsLoaded_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2300
	 * 		Name   -> Function fnaf9.FNAFBasePlayerCharacter.GetPlayerPawnType
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	fnaf9_EPlayerPawnType AFNAFBasePlayerCharacter::GetPlayerPawnType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerCharacter.GetPlayerPawnType");

		AFNAFBasePlayerCharacter_GetPlayerPawnType_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2220
	 * 		Name   -> Function fnaf9.FNAFBasePlayerCharacter.GetLastSavedLocationAndRotation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     LastSavedLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    LastSavedRotation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AFNAFBasePlayerCharacter::GetLastSavedLocationAndRotation(struct FVector* LastSavedLocation, struct FRotator* LastSavedRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerCharacter.GetLastSavedLocationAndRotation");

		AFNAFBasePlayerCharacter_GetLastSavedLocationAndRotation_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (LastSavedLocation != nullptr)
			*LastSavedLocation = params.LastSavedLocation;
		if (LastSavedRotation != nullptr)
			*LastSavedRotation = params.LastSavedRotation;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFNAFBasePlayerCharacter.StaticClass
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
	 * 		Offset -> 0x00BA2740
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.OnUsingGamepadChanged
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void AFNAFBasePlayerController::OnUsingGamepadChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnUsingGamepadChanged");

		AFNAFBasePlayerController_OnUsingGamepadChanged_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.OnTriggerVannyScare
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFNAFBasePlayerController::OnTriggerVannyScare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnTriggerVannyScare");

		AFNAFBasePlayerController_OnTriggerVannyScare_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.OnToggleLocalizationQA
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFNAFBasePlayerController::OnToggleLocalizationQA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnToggleLocalizationQA");

		AFNAFBasePlayerController_OnToggleLocalizationQA_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.OnToggleFlightMode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFNAFBasePlayerController::OnToggleFlightMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnToggleFlightMode");

		AFNAFBasePlayerController_OnToggleFlightMode_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.OnToggleDevUI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFNAFBasePlayerController::OnToggleDevUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnToggleDevUI");

		AFNAFBasePlayerController_OnToggleDevUI_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.OnToggleCinemaMode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFNAFBasePlayerController::OnToggleCinemaMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnToggleCinemaMode");

		AFNAFBasePlayerController_OnToggleCinemaMode_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.OnDebugSequenceEntered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AFNAFBasePlayerController::OnDebugSequenceEntered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnDebugSequenceEntered");

		AFNAFBasePlayerController_OnDebugSequenceEntered_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2510
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.IsUsingGamepad
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AFNAFBasePlayerController::IsUsingGamepad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.IsUsingGamepad");

		AFNAFBasePlayerController_IsUsingGamepad_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.GiveVIPAchievement
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AFNAFBasePlayerController::GiveVIPAchievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.GiveVIPAchievement");

		AFNAFBasePlayerController_GiveVIPAchievement_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA1FC0
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.GetCurrentKeysDown
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FKey> AFNAFBasePlayerController::GetCurrentKeysDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.GetCurrentKeysDown");

		AFNAFBasePlayerController_GetCurrentKeysDown_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA1B50
	 * 		Name   -> Function fnaf9.FNAFBasePlayerController.AnyOtherKeysDown
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AFNAFBasePlayerController::AnyOtherKeysDown(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.AnyOtherKeysDown");

		AFNAFBasePlayerController_AnyOtherKeysDown_Params params{};
		params.Key = Key;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFNAFBasePlayerController.StaticClass
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
	 * 		Offset -> 0x00BA31E0
	 * 		Name   -> Function fnaf9.FNAFCheatManager.UpgradeFreddy
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		fnaf9_EFreddyUpgradeType                           Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFCheatManager::UpgradeFreddy(fnaf9_EFreddyUpgradeType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFCheatManager.UpgradeFreddy");

		UFNAFCheatManager_UpgradeFreddy_Params params{};
		params.Type = Type;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA3160
	 * 		Name   -> Function fnaf9.FNAFCheatManager.ToggleDebugCloaking
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UFNAFCheatManager::ToggleDebugCloaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFCheatManager.ToggleDebugCloaking");

		UFNAFCheatManager_ToggleDebugCloaking_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2AF0
	 * 		Name   -> Function fnaf9.FNAFCheatManager.SetDebugCloaking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFCheatManager::SetDebugCloaking(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFCheatManager.SetDebugCloaking");

		UFNAFCheatManager_SetDebugCloaking_Params params{};
		params.Value = Value;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA20F0
	 * 		Name   -> Function fnaf9.FNAFCheatManager.GetDebugCloaking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UFNAFCheatManager::GetDebugCloaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFCheatManager.GetDebugCloaking");

		UFNAFCheatManager_GetDebugCloaking_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA1C40
	 * 		Name   -> Function fnaf9.FNAFCheatManager.ApplyQualitySettings
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            VisualQualityLevel                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RayTraceQualityLevel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFCheatManager::ApplyQualitySettings(int32_t VisualQualityLevel, int32_t RayTraceQualityLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFCheatManager.ApplyQualitySettings");

		UFNAFCheatManager_ApplyQualitySettings_Params params{};
		params.VisualQualityLevel = VisualQualityLevel;
		params.RayTraceQualityLevel = RayTraceQualityLevel;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFCheatManager.StaticClass
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
	 * 		Offset -> 0x00BA31A0
	 * 		Name   -> Function fnaf9.FNAFEventObject.TriggerEvent
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UFNAFEventObject::TriggerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventObject.TriggerEvent");

		UFNAFEventObject_TriggerEvent_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2460
	 * 		Name   -> Function fnaf9.FNAFEventObject.IsEventFinished
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	bool UFNAFEventObject::IsEventFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventObject.IsEventFinished");

		UFNAFEventObject_IsEventFinished_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C130
	 * 		Name   -> Function fnaf9.FNAFEventObject.CanPlayEvent
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	bool UFNAFEventObject::CanPlayEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventObject.CanPlayEvent");

		UFNAFEventObject_CanPlayEvent_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFEventObject.StaticClass
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
	 * 		Offset -> 0x00BA31C0
	 * 		Name   -> Function fnaf9.FNAFEventSystem.UnpauseEventSystem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFEventSystem::UnpauseEventSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.UnpauseEventSystem");

		UFNAFEventSystem_UnpauseEventSystem_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2F20
	 * 		Name   -> Function fnaf9.FNAFEventSystem.StoreEventTriggered
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        EventTag                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFEventSystem::StoreEventTriggered(const class FName& EventTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.StoreEventTriggered");

		UFNAFEventSystem_StoreEventTriggered_Params params{};
		params.EventTag = EventTag;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2F00
	 * 		Name   -> Function fnaf9.FNAFEventSystem.StopEventTimer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFEventSystem::StopEventTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.StopEventTimer");

		UFNAFEventSystem_StopEventTimer_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2E40
	 * 		Name   -> Function fnaf9.FNAFEventSystem.StartEventTimer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFEventSystem::StartEventTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.StartEventTimer");

		UFNAFEventSystem_StartEventTimer_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2C00
	 * 		Name   -> Function fnaf9.FNAFEventSystem.SetEventTimeSeconds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              MinTimeBetweenEvents                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxTimeBetweenEvents                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFEventSystem::SetEventTimeSeconds(float MinTimeBetweenEvents, float MaxTimeBetweenEvents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.SetEventTimeSeconds");

		UFNAFEventSystem_SetEventTimeSeconds_Params params{};
		params.MinTimeBetweenEvents = MinTimeBetweenEvents;
		params.MaxTimeBetweenEvents = MaxTimeBetweenEvents;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2B80
	 * 		Name   -> Function fnaf9.FNAFEventSystem.SetEventActorWeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewWeight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFEventSystem::SetEventActorWeight(float NewWeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.SetEventActorWeight");

		UFNAFEventSystem_SetEventActorWeight_Params params{};
		params.NewWeight = NewWeight;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2A70
	 * 		Name   -> Function fnaf9.FNAFEventSystem.SetCurrentAudioComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAudioComponent*                             EventSoundCue                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFEventSystem::SetCurrentAudioComponent(class UAudioComponent* EventSoundCue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.SetCurrentAudioComponent");

		UFNAFEventSystem_SetCurrentAudioComponent_Params params{};
		params.EventSoundCue = EventSoundCue;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2880
	 * 		Name   -> Function fnaf9.FNAFEventSystem.PauseEventSystem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFEventSystem::PauseEventSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.PauseEventSystem");

		UFNAFEventSystem_PauseEventSystem_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2590
	 * 		Name   -> Function fnaf9.FNAFEventSystem.OnAudioFinished
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFNAFEventSystem::OnAudioFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.OnAudioFinished");

		UFNAFEventSystem_OnAudioFinished_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2390
	 * 		Name   -> Function fnaf9.FNAFEventSystem.HasEventBeenTriggered
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        EventTag                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFEventSystem::HasEventBeenTriggered(const class FName& EventTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.HasEventBeenTriggered");

		UFNAFEventSystem_HasEventBeenTriggered_Params params{};
		params.EventTag = EventTag;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFEventSystem.StaticClass
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
	 * 		Offset -> 0x00BA2E60
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.StartGamePlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_EFNAFGameType                                GameType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFGameInstanceBase::StartGamePlay(fnaf9_EFNAFGameType GameType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.StartGamePlay");

		UFNAFGameInstanceBase_StartGamePlay_Params params{};
		params.GameType = GameType;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2DC0
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.SetVisualQualityLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFGameInstanceBase::SetVisualQualityLevel(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.SetVisualQualityLevel");

		UFNAFGameInstanceBase_SetVisualQualityLevel_Params params{};
		params.Level = Level;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2D40
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.SetSplashFinished
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bFinished                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFGameInstanceBase::SetSplashFinished(bool bFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.SetSplashFinished");

		UFNAFGameInstanceBase_SetSplashFinished_Params params{};
		params.bFinished = bFinished;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2CC0
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.SetRayTraceQualityLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFGameInstanceBase::SetRayTraceQualityLevel(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.SetRayTraceQualityLevel");

		UFNAFGameInstanceBase_SetRayTraceQualityLevel_Params params{};
		params.Level = Level;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2930
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.ProcessActivityIntent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFGameInstanceBase::ProcessActivityIntent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.ProcessActivityIntent");

		UFNAFGameInstanceBase_ProcessActivityIntent_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA25F0
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.OnGameActivityLoadComplete
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFNAFGameInstanceBase::OnGameActivityLoadComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.OnGameActivityLoadComplete");

		UFNAFGameInstanceBase_OnGameActivityLoadComplete_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2570
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.OnApplicationReactivated
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFNAFGameInstanceBase::OnApplicationReactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.OnApplicationReactivated");

		UFNAFGameInstanceBase_OnApplicationReactivated_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2550
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.OnApplicationDeactivated
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFNAFGameInstanceBase::OnApplicationDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.OnApplicationDeactivated");

		UFNAFGameInstanceBase_OnApplicationDeactivated_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2530
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.LogGameClockDelegates
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UFNAFGameInstanceBase::LogGameClockDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.LogGameClockDelegates");

		UFNAFGameInstanceBase_LogGameClockDelegates_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA24E0
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.IsNormalPlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFNAFGameInstanceBase::IsNormalPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.IsNormalPlay");

		UFNAFGameInstanceBase_IsNormalPlay_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA24C0
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.IsLoadingActivity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UFNAFGameInstanceBase::IsLoadingActivity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.IsLoadingActivity");

		UFNAFGameInstanceBase_IsLoadingActivity_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2490
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.IsFromTitle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFNAFGameInstanceBase::IsFromTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.IsFromTitle");

		UFNAFGameInstanceBase_IsFromTitle_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2420
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.HasSplashFinished
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFNAFGameInstanceBase::HasSplashFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.HasSplashFinished");

		UFNAFGameInstanceBase_HasSplashFinished_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2360
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetVisualQualityLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UFNAFGameInstanceBase::GetVisualQualityLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetVisualQualityLevel");

		UFNAFGameInstanceBase_GetVisualQualityLevel_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2330
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetRayTraceQualityLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UFNAFGameInstanceBase::GetRayTraceQualityLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetRayTraceQualityLevel");

		UFNAFGameInstanceBase_GetRayTraceQualityLevel_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA21F0
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetIsShippingConfig
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UFNAFGameInstanceBase::GetIsShippingConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetIsShippingConfig");

		UFNAFGameInstanceBase_GetIsShippingConfig_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2120
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetGPUBenchmarkResult
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UFNAFGameInstanceBase::GetGPUBenchmarkResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetGPUBenchmarkResult");

		UFNAFGameInstanceBase_GetGPUBenchmarkResult_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2150
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetGameTipTextByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UFNAFGameInstanceBase::GetGameTipTextByIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetGameTipTextByIndex");

		UFNAFGameInstanceBase_GetGameTipTextByIndex_Params params{};
		params.Index = Index;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA1F70
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetCurrentGameType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	fnaf9_EFNAFGameType UFNAFGameInstanceBase::GetCurrentGameType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetCurrentGameType");

		UFNAFGameInstanceBase_GetCurrentGameType_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA1F40
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetCPUBenchmarkResult
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UFNAFGameInstanceBase::GetCPUBenchmarkResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetCPUBenchmarkResult");

		UFNAFGameInstanceBase_GetCPUBenchmarkResult_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA1EC0
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.GetAllLoadedLevelsString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UFNAFGameInstanceBase::GetAllLoadedLevelsString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetAllLoadedLevelsString");

		UFNAFGameInstanceBase_GetAllLoadedLevelsString_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA1DC0
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.EndLoadingScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFGameInstanceBase::EndLoadingScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.EndLoadingScreen");

		UFNAFGameInstanceBase_EndLoadingScreen_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA1D00
	 * 		Name   -> Function fnaf9.FNAFGameInstanceBase.BeginLoadingScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFGameInstanceBase::BeginLoadingScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.BeginLoadingScreen");

		UFNAFGameInstanceBase_BeginLoadingScreen_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFGameInstanceBase.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFGameUserSettings.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFGeneralEditorSettings.StaticClass
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
	 * 		Offset -> 0x00BA1F90
	 * 		Name   -> Function fnaf9.FNAFInputDeviceSystem.GetCurrentInputDevice
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	fnaf9_ESWGInputDeviceType UFNAFInputDeviceSystem::GetCurrentInputDevice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInputDeviceSystem.GetCurrentInputDevice");

		UFNAFInputDeviceSystem_GetCurrentInputDevice_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFInputDeviceSystem.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFInputSystemDeveloperSettings.StaticClass
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
	 * 		Offset -> 0x00BA7840
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.UsePartyPass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UFNAFInventorySystem::UsePartyPass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.UsePartyPass");

		UFNAFInventorySystem_UsePartyPass_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA77B0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.UseFlash
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bOutFlashUsed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::UseFlash(bool* bOutFlashUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.UseFlash");

		UFNAFInventorySystem_UseFlash_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (bOutFlashUsed != nullptr)
			*bOutFlashUsed = params.bOutFlashUsed;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA7570
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetupNewGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFInventorySystem::SetupNewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetupNewGame");

		UFNAFInventorySystem_SetupNewGame_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA74F0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetSecurityLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewSecurityLevel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetSecurityLevel(int32_t NewSecurityLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetSecurityLevel");

		UFNAFInventorySystem_SetSecurityLevel_Params params{};
		params.NewSecurityLevel = NewSecurityLevel;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA7470
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetPowerLevel_Freddy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InPowerLevel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetPowerLevel_Freddy(int32_t InPowerLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetPowerLevel_Freddy");

		UFNAFInventorySystem_SetPowerLevel_Freddy_Params params{};
		params.InPowerLevel = InPowerLevel;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA73F0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetPowerLevel_Fazwatch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InPowerLevel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetPowerLevel_Fazwatch(int32_t InPowerLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetPowerLevel_Fazwatch");

		UFNAFInventorySystem_SetPowerLevel_Fazwatch_Params params{};
		params.InPowerLevel = InPowerLevel;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA72F0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetPartyLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewPartyLevel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetPartyLevel(int32_t NewPartyLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetPartyLevel");

		UFNAFInventorySystem_SetPartyLevel_Params params{};
		params.NewPartyLevel = NewPartyLevel;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA7270
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetMessageViewed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetMessageViewed(const class FName& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetMessageViewed");

		UFNAFInventorySystem_SetMessageViewed_Params params{};
		params.Message = Message;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA71F0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Freddy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewMax                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetMaxPowerLevel_Freddy(int32_t NewMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Freddy");

		UFNAFInventorySystem_SetMaxPowerLevel_Freddy_Params params{};
		params.NewMax = NewMax;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA7170
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Fazwatch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewMax                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetMaxPowerLevel_Fazwatch(int32_t NewMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Fazwatch");

		UFNAFInventorySystem_SetMaxPowerLevel_Fazwatch_Params params{};
		params.NewMax = NewMax;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA7060
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetItemViewed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetItemViewed(const class FName& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetItemViewed");

		UFNAFInventorySystem_SetItemViewed_Params params{};
		params.Item = Item;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6FE0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.SetFlashlightStationID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            StationID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::SetFlashlightStationID(int32_t StationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetFlashlightStationID");

		UFNAFInventorySystem_SetFlashlightStationID_Params params{};
		params.StationID = StationID;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6EA0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.ResetFreddyPower
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFInventorySystem::ResetFreddyPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.ResetFreddyPower");

		UFNAFInventorySystem_ResetFreddyPower_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6E80
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.ResetFlashlightPower
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFInventorySystem::ResetFlashlightPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.ResetFlashlightPower");

		UFNAFInventorySystem_ResetFlashlightPower_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6E60
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.ResetFlashes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFInventorySystem::ResetFlashes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.ResetFlashes");

		UFNAFInventorySystem_ResetFlashes_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6DE0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.RemoveMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::RemoveMessage(const class FName& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.RemoveMessage");

		UFNAFInventorySystem_RemoveMessage_Params params{};
		params.Message = Message;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6BB0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.RemoveItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::RemoveItem(const class FName& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.RemoveItem");

		UFNAFInventorySystem_RemoveItem_Params params{};
		params.Item = Item;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6B90
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.RemoveEverything
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFInventorySystem::RemoveEverything()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.RemoveEverything");

		UFNAFInventorySystem_RemoveEverything_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA69E0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.IsVIPItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::IsVIPItem(const class FName& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.IsVIPItem");

		UFNAFInventorySystem_IsVIPItem_Params params{};
		params.Item = Item;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6950
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.IsMessageValid
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::IsMessageValid(const class FName& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.IsMessageValid");

		UFNAFInventorySystem_IsMessageValid_Params params{};
		params.Message = Message;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6890
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.IsItemValid
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::IsItemValid(const class FName& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.IsItemValid");

		UFNAFInventorySystem_IsItemValid_Params params{};
		params.Item = Item;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6800
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.HasSecurityClearance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InSecurityLevel                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::HasSecurityClearance(int32_t InSecurityLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasSecurityClearance");

		UFNAFInventorySystem_HasSecurityClearance_Params params{};
		params.InSecurityLevel = InSecurityLevel;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6770
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.HasMessageBeenViewed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        ItemOrMessage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::HasMessageBeenViewed(const class FName& ItemOrMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasMessageBeenViewed");

		UFNAFInventorySystem_HasMessageBeenViewed_Params params{};
		params.ItemOrMessage = ItemOrMessage;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA66E0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.HasMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        SearchMessage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::HasMessage(const class FName& SearchMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasMessage");

		UFNAFInventorySystem_HasMessage_Params params{};
		params.SearchMessage = SearchMessage;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6650
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.HasItemBeenViewed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        ItemOrMessage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::HasItemBeenViewed(const class FName& ItemOrMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasItemBeenViewed");

		UFNAFInventorySystem_HasItemBeenViewed_Params params{};
		params.ItemOrMessage = ItemOrMessage;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA65C0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.HasItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        searchItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::HasItem(const class FName& searchItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasItem");

		UFNAFInventorySystem_HasItem_Params params{};
		params.searchItem = searchItem;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6530
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.HasEnoughPower_Freddy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            PowerRequired                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::HasEnoughPower_Freddy(int32_t PowerRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasEnoughPower_Freddy");

		UFNAFInventorySystem_HasEnoughPower_Freddy_Params params{};
		params.PowerRequired = PowerRequired;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA64A0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.HasEnoughPower_Fazwatch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            PowerRequired                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::HasEnoughPower_Fazwatch(int32_t PowerRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasEnoughPower_Fazwatch");

		UFNAFInventorySystem_HasEnoughPower_Fazwatch_Params params{};
		params.PowerRequired = PowerRequired;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6470
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.HasAvailablePartyPass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFNAFInventorySystem::HasAvailablePartyPass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasAvailablePartyPass");

		UFNAFInventorySystem_HasAvailablePartyPass_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6370
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetTapesListenedTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	void UFNAFInventorySystem::GetTapesListenedTo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetTapesListenedTo");

		UFNAFInventorySystem_GetTapesListenedTo_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA62B0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetStaminaUpgradeMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFNAFInventorySystem::GetStaminaUpgradeMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetStaminaUpgradeMultiplier");

		UFNAFInventorySystem_GetStaminaUpgradeMultiplier_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6280
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetNumberOfUnreadMessages
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UFNAFInventorySystem::GetNumberOfUnreadMessages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetNumberOfUnreadMessages");

		UFNAFInventorySystem_GetNumberOfUnreadMessages_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA60A0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetMessageInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
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

		UFNAFInventorySystem_GetMessageInfo_Params params{};
		params.MessageName = MessageName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutMessageInfo != nullptr)
			*OutMessageInfo = params.OutMessageInfo;
		if (OutFound != nullptr)
			*OutFound = params.OutFound;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6070
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetMaxFlashes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UFNAFInventorySystem::GetMaxFlashes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetMaxFlashes");

		UFNAFInventorySystem_GetMaxFlashes_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5DA0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetItemInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
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

		UFNAFInventorySystem_GetItemInfo_Params params{};
		params.ItemName = ItemName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutItemInfo != nullptr)
			*OutItemInfo = params.OutItemInfo;
		if (OutFound != nullptr)
			*OutFound = params.OutFound;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5D70
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetFreddyUpgradeMutliplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFNAFInventorySystem::GetFreddyUpgradeMutliplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetFreddyUpgradeMutliplier");

		UFNAFInventorySystem_GetFreddyUpgradeMutliplier_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5D40
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetFreddyMaxPower
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UFNAFInventorySystem::GetFreddyMaxPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetFreddyMaxPower");

		UFNAFInventorySystem_GetFreddyMaxPower_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5D10
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetFlashlightUpgradMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFNAFInventorySystem::GetFlashlightUpgradMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetFlashlightUpgradMultiplier");

		UFNAFInventorySystem_GetFlashlightUpgradMultiplier_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5CF0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetFlashlightStationID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UFNAFInventorySystem::GetFlashlightStationID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetFlashlightStationID");

		UFNAFInventorySystem_GetFlashlightStationID_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5CC0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetFlashlightMaxPower
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UFNAFInventorySystem::GetFlashlightMaxPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetFlashlightMaxPower");

		UFNAFInventorySystem_GetFlashlightMaxPower_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5C00
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetCollectedPartyPasses
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class FName> UFNAFInventorySystem::GetCollectedPartyPasses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetCollectedPartyPasses");

		UFNAFInventorySystem_GetCollectedPartyPasses_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5B30
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.GetAllSurvivalItemsOfType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		fnaf9_EInventoryItemSurvivalCategory               SurvivalCategory                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UFNAFInventorySystem::GetAllSurvivalItemsOfType(fnaf9_EInventoryItemSurvivalCategory SurvivalCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetAllSurvivalItemsOfType");

		UFNAFInventorySystem_GetAllSurvivalItemsOfType_Params params{};
		params.SurvivalCategory = SurvivalCategory;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5AD0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.ClearFlashlightStationID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFInventorySystem::ClearFlashlightStationID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.ClearFlashlightStationID");

		UFNAFInventorySystem_ClearFlashlightStationID_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5AA0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.CanUseFlashBeacon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFNAFInventorySystem::CanUseFlashBeacon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.CanUseFlashBeacon");

		UFNAFInventorySystem_CanUseFlashBeacon_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA59D0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.AwardMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNotify                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::AwardMessage(const class FName& Message, bool bNotify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AwardMessage");

		UFNAFInventorySystem_AwardMessage_Params params{};
		params.Message = Message;
		params.bNotify = bNotify;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5900
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.AwardItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNotify                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::AwardItem(const class FName& Item, bool bNotify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AwardItem");

		UFNAFInventorySystem_AwardItem_Params params{};
		params.Item = Item;
		params.bNotify = bNotify;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5870
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.AdjustPower_Freddy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ChangeAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::AdjustPower_Freddy(int32_t ChangeAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AdjustPower_Freddy");

		UFNAFInventorySystem_AdjustPower_Freddy_Params params{};
		params.ChangeAmount = ChangeAmount;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA57E0
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.AdjustPower_Fazwatch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ChangeAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFInventorySystem::AdjustPower_Fazwatch(int32_t ChangeAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AdjustPower_Fazwatch");

		UFNAFInventorySystem_AdjustPower_Fazwatch_Params params{};
		params.ChangeAmount = ChangeAmount;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5760
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.AddTapeListenedTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InTapeListenedTo                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFInventorySystem::AddTapeListenedTo(const class FName& InTapeListenedTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AddTapeListenedTo");

		UFNAFInventorySystem_AddTapeListenedTo_Params params{};
		params.InTapeListenedTo = InTapeListenedTo;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5590
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.AddEverything
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFInventorySystem::AddEverything()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AddEverything");

		UFNAFInventorySystem_AddEverything_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5560
	 * 		Name   -> Function fnaf9.FNAFInventorySystem.AddBrokenPlate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UFNAFInventorySystem::AddBrokenPlate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AddBrokenPlate");

		UFNAFInventorySystem_AddBrokenPlate_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFInventorySystem.StaticClass
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
	 * 		Offset -> 0x00BA7730
	 * 		Name   -> Function fnaf9.FNAFLevelManager.UnregisterStreamingSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::UnregisterStreamingSource(class USceneComponent* SceneComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.UnregisterStreamingSource");

		UFNAFLevelManager_UnregisterStreamingSource_Params params{};
		params.SceneComponent = SceneComponent;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA76B0
	 * 		Name   -> Function fnaf9.FNAFLevelManager.UnregisterPawnStreamingSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::UnregisterPawnStreamingSource(class USceneComponent* SceneComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.UnregisterPawnStreamingSource");

		UFNAFLevelManager_UnregisterPawnStreamingSource_Params params{};
		params.SceneComponent = SceneComponent;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA7370
	 * 		Name   -> Function fnaf9.FNAFLevelManager.SetPlayerPawn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::SetPlayerPawn(class APawn* PlayerPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.SetPlayerPawn");

		UFNAFLevelManager_SetPlayerPawn_Params params{};
		params.PlayerPawn = PlayerPawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA70E0
	 * 		Name   -> Function fnaf9.FNAFLevelManager.SetLevelStreamingEnable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::SetLevelStreamingEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.SetLevelStreamingEnable");

		UFNAFLevelManager_SetLevelStreamingEnable_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6D60
	 * 		Name   -> Function fnaf9.FNAFLevelManager.RemoveLevelsFromStreamingSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             StreamingSource                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::RemoveLevelsFromStreamingSource(class USceneComponent* StreamingSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RemoveLevelsFromStreamingSource");

		UFNAFLevelManager_RemoveLevelsFromStreamingSource_Params params{};
		params.StreamingSource = StreamingSource;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6CB0
	 * 		Name   -> Function fnaf9.FNAFLevelManager.RemoveLevelArray
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class ULevelStreaming*>                     Levels                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::RemoveLevelArray(TArray<class ULevelStreaming*> Levels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RemoveLevelArray");

		UFNAFLevelManager_RemoveLevelArray_Params params{};
		params.Levels = Levels;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6C30
	 * 		Name   -> Function fnaf9.FNAFLevelManager.RemoveLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULevelStreaming*                             LevelToUnload                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::RemoveLevel(class ULevelStreaming* LevelToUnload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RemoveLevel");

		UFNAFLevelManager_RemoveLevel_Params params{};
		params.LevelToUnload = LevelToUnload;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6B70
	 * 		Name   -> Function fnaf9.FNAFLevelManager.RemoveAllLevels
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFLevelManager::RemoveAllLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RemoveAllLevels");

		UFNAFLevelManager_RemoveAllLevels_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6AF0
	 * 		Name   -> Function fnaf9.FNAFLevelManager.RegisterStreamingSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::RegisterStreamingSource(class USceneComponent* SceneComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RegisterStreamingSource");

		UFNAFLevelManager_RegisterStreamingSource_Params params{};
		params.SceneComponent = SceneComponent;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6A70
	 * 		Name   -> Function fnaf9.FNAFLevelManager.RegisterPawnStreamingSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::RegisterPawnStreamingSource(class USceneComponent* SceneComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RegisterPawnStreamingSource");

		UFNAFLevelManager_RegisterPawnStreamingSource_Params params{};
		params.SceneComponent = SceneComponent;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6920
	 * 		Name   -> Function fnaf9.FNAFLevelManager.IsLevelStreamingEnable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UFNAFLevelManager::IsLevelStreamingEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.IsLevelStreamingEnable");

		UFNAFLevelManager_IsLevelStreamingEnable_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA62E0
	 * 		Name   -> Function fnaf9.FNAFLevelManager.GetStreamingSources
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class USceneComponent*> UFNAFLevelManager::GetStreamingSources()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.GetStreamingSources");

		UFNAFLevelManager_GetStreamingSources_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5F60
	 * 		Name   -> Function fnaf9.FNAFLevelManager.GetLevelNamesForComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UFNAFLevelManager::GetLevelNamesForComponent(class USceneComponent* SceneComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.GetLevelNamesForComponent");

		UFNAFLevelManager_GetLevelNamesForComponent_Params params{};
		params.SceneComponent = SceneComponent;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5660
	 * 		Name   -> Function fnaf9.FNAFLevelManager.AddLevelToLoad
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULevelStreaming*                             LevelToLoad                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::AddLevelToLoad(class ULevelStreaming* LevelToLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.AddLevelToLoad");

		UFNAFLevelManager_AddLevelToLoad_Params params{};
		params.LevelToLoad = LevelToLoad;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA56E0
	 * 		Name   -> Function fnaf9.FNAFLevelManager.AddLevelsFromStreamingSourceToLoad
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             StreamingSource                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::AddLevelsFromStreamingSourceToLoad(class USceneComponent* StreamingSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.AddLevelsFromStreamingSourceToLoad");

		UFNAFLevelManager_AddLevelsFromStreamingSourceToLoad_Params params{};
		params.StreamingSource = StreamingSource;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA55B0
	 * 		Name   -> Function fnaf9.FNAFLevelManager.AddLevelArrayToLoad
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class ULevelStreaming*>                     LevelsToLoad                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFLevelManager::AddLevelArrayToLoad(TArray<class ULevelStreaming*> LevelsToLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.AddLevelArrayToLoad");

		UFNAFLevelManager_AddLevelArrayToLoad_Params params{};
		params.LevelsToLoad = LevelsToLoad;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFLevelManager.StaticClass
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
	 * 		Offset -> 0x00BA7620
	 * 		Name   -> Function fnaf9.FNAFManagedAI.TeleportAI
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFManagedAI::TeleportAI(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.TeleportAI");

		UFNAFManagedAI_TeleportAI_Params params{};
		params.Location = Location;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA7590
	 * 		Name   -> Function fnaf9.FNAFManagedAI.StartMoveTo
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFManagedAI::StartMoveTo(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.StartMoveTo");

		UFNAFManagedAI_StartMoveTo_Params params{};
		params.Location = Location;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6F50
	 * 		Name   -> Function fnaf9.FNAFManagedAI.SendVanessaAlert
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       VanessaPawn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFManagedAI::SendVanessaAlert(class APawn* VanessaPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.SendVanessaAlert");

		UFNAFManagedAI_SendVanessaAlert_Params params{};
		params.VanessaPawn = VanessaPawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6EC0
	 * 		Name   -> Function fnaf9.FNAFManagedAI.SendPositionalAlert
	 * 		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFManagedAI::SendPositionalAlert(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.SendPositionalAlert");

		UFNAFManagedAI_SendPositionalAlert_Params params{};
		params.Location = Location;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C130
	 * 		Name   -> Function fnaf9.FNAFManagedAI.IsShatteredVersion
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	bool UFNAFManagedAI::IsShatteredVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.IsShatteredVersion");

		UFNAFManagedAI_IsShatteredVersion_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6040
	 * 		Name   -> Function fnaf9.FNAFManagedAI.GetManagedAIType
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	fnaf9_EFNAFAISpawnType UFNAFManagedAI::GetManagedAIType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.GetManagedAIType");

		UFNAFManagedAI_GetManagedAIType_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5C80
	 * 		Name   -> Function fnaf9.FNAFManagedAI.GetCurrentPathName
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class FName UFNAFManagedAI::GetCurrentPathName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.GetCurrentPathName");

		UFNAFManagedAI_GetCurrentPathName_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5B10
	 * 		Name   -> Function fnaf9.FNAFManagedAI.ForceTrackToPlayer
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFManagedAI::ForceTrackToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.ForceTrackToPlayer");

		UFNAFManagedAI_ForceTrackToPlayer_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA5AF0
	 * 		Name   -> Function fnaf9.FNAFManagedAI.EndTrackToPlayer
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UFNAFManagedAI::EndTrackToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.EndTrackToPlayer");

		UFNAFManagedAI_EndTrackToPlayer_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA2460
	 * 		Name   -> Function fnaf9.FNAFManagedAI.CanReceiveAlert
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	bool UFNAFManagedAI::CanReceiveAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.CanReceiveAlert");

		UFNAFManagedAI_CanReceiveAlert_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFManagedAI.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFMasterData.StaticClass
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
	 * 		Offset -> 0x00BABF30
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.SetupNewGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFMissionSystem::SetupNewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.SetupNewGame");

		UFNAFMissionSystem_SetupNewGame_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BABDE0
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.SetMissionInfoState
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InfoState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::SetMissionInfoState(const class FName& MissionName, int32_t InfoState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.SetMissionInfoState");

		UFNAFMissionSystem_SetMissionInfoState_Params params{};
		params.MissionName = MissionName;
		params.InfoState = InfoState;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BABA50
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.RemoveActiveMission
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::RemoveActiveMission(const class FName& MissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.RemoveActiveMission");

		UFNAFMissionSystem_RemoveActiveMission_Params params{};
		params.MissionName = MissionName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB990
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.NotifyMissionUpdate
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::NotifyMissionUpdate(const class FName& MissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.NotifyMissionUpdate");

		UFNAFMissionSystem_NotifyMissionUpdate_Params params{};
		params.MissionName = MissionName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB700
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.IsValidMission
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFMissionSystem::IsValidMission(const class FName& MissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.IsValidMission");

		UFNAFMissionSystem_IsValidMission_Params params{};
		params.MissionName = MissionName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB630
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.IsMissionActiveOrCompleted
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFMissionSystem::IsMissionActiveOrCompleted(const class FName& MissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.IsMissionActiveOrCompleted");

		UFNAFMissionSystem_IsMissionActiveOrCompleted_Params params{};
		params.MissionName = MissionName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB600
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.IsInSurvivalMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFNAFMissionSystem::IsInSurvivalMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.IsInSurvivalMode");

		UFNAFMissionSystem_IsInSurvivalMode_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB560
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.IsCompletedMission
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFMissionSystem::IsCompletedMission(const class FName& MissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.IsCompletedMission");

		UFNAFMissionSystem_IsCompletedMission_Params params{};
		params.MissionName = MissionName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB4C0
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.IsActiveMission
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFMissionSystem::IsActiveMission(const class FName& MissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.IsActiveMission");

		UFNAFMissionSystem_IsActiveMission_Params params{};
		params.MissionName = MissionName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB1F0
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetTrackedMissions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FFNAFMissionState> UFNAFMissionSystem::GetTrackedMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetTrackedMissions");

		UFNAFMissionSystem_GetTrackedMissions_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB1D0
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetTaskTable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UDataTable* UFNAFMissionSystem::GetTaskTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetTaskTable");

		UFNAFMissionSystem_GetTaskTable_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB060
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetTaskInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
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

		UFNAFMissionSystem_GetTaskInfo_Params params{};
		params.TaskName = TaskName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutMissionTaskInfo != nullptr)
			*OutMissionTaskInfo = params.OutMissionTaskInfo;
		if (OutValidTask != nullptr)
			*OutValidTask = params.OutValidTask;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAAEA0
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetTaskByIndex
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
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

		UFNAFMissionSystem_GetTaskByIndex_Params params{};
		params.MissionName = MissionName;
		params.TaskIndex = TaskIndex;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutMissionTaskInfo != nullptr)
			*OutMissionTaskInfo = params.OutMissionTaskInfo;
		if (OutValidTask != nullptr)
			*OutValidTask = params.OutValidTask;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAAE80
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetMissionTable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UDataTable* UFNAFMissionSystem::GetMissionTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetMissionTable");

		UFNAFMissionSystem_GetMissionTable_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAAD30
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetMissionState
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
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

		UFNAFMissionSystem_GetMissionState_Params params{};
		params.MissionName = MissionName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutMissionState != nullptr)
			*OutMissionState = params.OutMissionState;
		if (OutValidMission != nullptr)
			*OutValidMission = params.OutValidMission;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAAB60
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetMissionInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
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

		UFNAFMissionSystem_GetMissionInfo_Params params{};
		params.MissionName = MissionName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutMissionInfo != nullptr)
			*OutMissionInfo = params.OutMissionInfo;
		if (OutValidMission != nullptr)
			*OutValidMission = params.OutValidMission;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAA990
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetMissionFromTask
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
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

		UFNAFMissionSystem_GetMissionFromTask_Params params{};
		params.TaskName = TaskName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutMissionInfo != nullptr)
			*OutMissionInfo = params.OutMissionInfo;
		if (OutValidMission != nullptr)
			*OutValidMission = params.OutValidMission;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAA850
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetMissionFromMessage
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
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

		UFNAFMissionSystem_GetMissionFromMessage_Params params{};
		params.MessageName = MessageName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutMissionName != nullptr)
			*OutMissionName = params.OutMissionName;
		if (OutMissionStateIndex != nullptr)
			*OutMissionStateIndex = params.OutMissionStateIndex;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAA730
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetMarkersForMission
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MissionStateIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AMissionMarker*> UFNAFMissionSystem::GetMarkersForMission(const class FName& MissionName, int32_t MissionStateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetMarkersForMission");

		UFNAFMissionSystem_GetMarkersForMission_Params params{};
		params.MissionName = MissionName;
		params.MissionStateIndex = MissionStateIndex;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAA680
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetCompletedMissions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FFNAFMissionState> UFNAFMissionSystem::GetCompletedMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetCompletedMissions");

		UFNAFMissionSystem_GetCompletedMissions_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAA4F0
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetAreaMarkerCounts
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TMap<fnaf9_ELevelArea, int32_t>                    MapOfCounts                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::GetAreaMarkerCounts(TMap<fnaf9_ELevelArea, int32_t>* MapOfCounts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetAreaMarkerCounts");

		UFNAFMissionSystem_GetAreaMarkerCounts_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (MapOfCounts != nullptr)
			*MapOfCounts = params.MapOfCounts;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAA470
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetAllMissionNames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class FName> UFNAFMissionSystem::GetAllMissionNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetAllMissionNames");

		UFNAFMissionSystem_GetAllMissionNames_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAA3E0
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetAllMissionMarkers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class AMissionMarker*> UFNAFMissionSystem::GetAllMissionMarkers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetAllMissionMarkers");

		UFNAFMissionSystem_GetAllMissionMarkers_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAA360
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetAllCurrentMarkers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class AMissionMarker*> UFNAFMissionSystem::GetAllCurrentMarkers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetAllCurrentMarkers");

		UFNAFMissionSystem_GetAllCurrentMarkers_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAA2E0
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.GetActiveMissions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FFNAFMissionState> UFNAFMissionSystem::GetActiveMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetActiveMissions");

		UFNAFMissionSystem_GetActiveMissions_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAA090
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.CompleteMissionTask
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TaskIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::CompleteMissionTask(const class FName& MissionName, int32_t TaskIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.CompleteMissionTask");

		UFNAFMissionSystem_CompleteMissionTask_Params params{};
		params.MissionName = MissionName;
		params.TaskIndex = TaskIndex;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAA000
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.CompleteMission
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::CompleteMission(const class FName& MissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.CompleteMission");

		UFNAFMissionSystem_CompleteMission_Params params{};
		params.MissionName = MissionName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA9F20
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.BranchMissionStatus
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		fnaf9_EMissionStatus                               Status                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::BranchMissionStatus(const class FName& MissionName, fnaf9_EMissionStatus* Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.BranchMissionStatus");

		UFNAFMissionSystem_BranchMissionStatus_Params params{};
		params.MissionName = MissionName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (Status != nullptr)
			*Status = params.Status;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA9A70
	 * 		Name   -> Function fnaf9.FNAFMissionSystem.AddActiveMission
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFMissionSystem::AddActiveMission(const class FName& MissionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.AddActiveMission");

		UFNAFMissionSystem_AddActiveMission_Params params{};
		params.MissionName = MissionName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFMissionSystem.StaticClass
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.FNAFPawnTypeProviderInterface.GetPlayerPawnType
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	fnaf9_EPlayerPawnType UFNAFPawnTypeProviderInterface::GetPlayerPawnType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFPawnTypeProviderInterface.GetPlayerPawnType");

		UFNAFPawnTypeProviderInterface_GetPlayerPawnType_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFPawnTypeProviderInterface.StaticClass
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
	 * 		Offset -> 0x00BABCD0
	 * 		Name   -> Function fnaf9.FNAFSaveData.SetHourOfCheckpoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InHour                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveData::SetHourOfCheckpoint(int32_t InHour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveData.SetHourOfCheckpoint");

		UFNAFSaveData_SetHourOfCheckpoint_Params params{};
		params.InHour = InHour;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFSaveData.StaticClass
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
	 * 		Offset -> 0x00BAC070
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SetupPIE
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFSaveGameSystem::SetupPIE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetupPIE");

		UFNAFSaveGameSystem_SetupPIE_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAC050
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SetupNewSurvivalGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFSaveGameSystem::SetupNewSurvivalGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetupNewSurvivalGame");

		UFNAFSaveGameSystem_SetupNewSurvivalGame_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BABF70
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SetupNewGameOnSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      originalSlotName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::SetupNewGameOnSlot(const class FString& originalSlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetupNewGameOnSlot");

		UFNAFSaveGameSystem_SetupNewGameOnSlot_Params params{};
		params.originalSlotName = originalSlotName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BABF50
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SetupNewGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFSaveGameSystem::SetupNewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetupNewGame");

		UFNAFSaveGameSystem_SetupNewGame_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BABD50
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SetIsSavingAllowed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsSavingAllowed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::SetIsSavingAllowed(bool IsSavingAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetIsSavingAllowed");

		UFNAFSaveGameSystem_SetIsSavingAllowed_Params params{};
		params.IsSavingAllowed = IsSavingAllowed;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BABCB0
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SaveCurrentGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFSaveGameSystem::SaveCurrentGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SaveCurrentGame");

		UFNAFSaveGameSystem_SaveCurrentGame_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BABC90
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SaveCheckpoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFSaveGameSystem::SaveCheckpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SaveCheckpoint");

		UFNAFSaveGameSystem_SaveCheckpoint_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BABC70
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.SaveArcade
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFSaveGameSystem::SaveArcade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SaveArcade");

		UFNAFSaveGameSystem_SaveArcade_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BABC50
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.Reset_SaveSlots
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFSaveGameSystem::Reset_SaveSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.Reset_SaveSlots");

		UFNAFSaveGameSystem_Reset_SaveSlots_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BABAE0
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.Rename_SaveSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      originalSlotName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      renamedSlotName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::Rename_SaveSlot(const class FString& originalSlotName, const class FString& renamedSlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.Rename_SaveSlot");

		UFNAFSaveGameSystem_Rename_SaveSlot_Params params{};
		params.originalSlotName = originalSlotName;
		params.renamedSlotName = renamedSlotName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BABA20
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.PreviousSaveIsAuto
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFNAFSaveGameSystem::PreviousSaveIsAuto()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.PreviousSaveIsAuto");

		UFNAFSaveGameSystem_PreviousSaveIsAuto_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB970
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadWorldTransitSave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFSaveGameSystem::LoadWorldTransitSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadWorldTransitSave");

		UFNAFSaveGameSystem_LoadWorldTransitSave_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB880
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadSaveSlotData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      SlotName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFNAFSaveData* UFNAFSaveGameSystem::LoadSaveSlotData(const class FString& SlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadSaveSlotData");

		UFNAFSaveGameSystem_LoadSaveSlotData_Params params{};
		params.SlotName = SlotName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB860
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadCheckpoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFSaveGameSystem::LoadCheckpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadCheckpoint");

		UFNAFSaveGameSystem_LoadCheckpoint_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB840
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadAutoSave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFSaveGameSystem::LoadAutoSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadAutoSave");

		UFNAFSaveGameSystem_LoadAutoSave_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB7A0
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadActivitySave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InActivityId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::LoadActivitySave(const class FString& InActivityId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadActivitySave");

		UFNAFSaveGameSystem_LoadActivitySave_Params params{};
		params.InActivityId = InActivityId;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB6D0
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.IsSavingAllowed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFNAFSaveGameSystem::IsSavingAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.IsSavingAllowed");

		UFNAFSaveGameSystem_IsSavingAllowed_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB490
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.HasSaveData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFNAFSaveGameSystem::HasSaveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.HasSaveData");

		UFNAFSaveGameSystem_HasSaveData_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB460
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.HasPreviousSave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFNAFSaveGameSystem::HasPreviousSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.HasPreviousSave");

		UFNAFSaveGameSystem_HasPreviousSave_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB430
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.HasAutoSave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFNAFSaveGameSystem::HasAutoSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.HasAutoSave");

		UFNAFSaveGameSystem_HasAutoSave_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB380
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.HasActivitySave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InActivityId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFNAFSaveGameSystem::HasActivitySave(const class FString& InActivityId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.HasActivitySave");

		UFNAFSaveGameSystem_HasActivitySave_Params params{};
		params.InActivityId = InActivityId;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAA700
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.GetGameIteration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UFNAFSaveGameSystem::GetGameIteration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.GetGameIteration");

		UFNAFSaveGameSystem_GetGameIteration_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAB270
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.Get_SaveSlotNameData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, class FString>                 SaveSlots_Map                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::Get_SaveSlotNameData(TMap<class FString, class FString>* SaveSlots_Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.Get_SaveSlotNameData");

		UFNAFSaveGameSystem_Get_SaveSlotNameData_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (SaveSlots_Map != nullptr)
			*SaveSlots_Map = params.SaveSlots_Map;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAA2C0
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.FinalizeCheckpoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFSaveGameSystem::FinalizeCheckpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.FinalizeCheckpoint");

		UFNAFSaveGameSystem_FinalizeCheckpoint_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAA1A0
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.DeleteSaveGameByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      SlotName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::DeleteSaveGameByName(const class FString& SlotName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.DeleteSaveGameByName");

		UFNAFSaveGameSystem_DeleteSaveGameByName_Params params{};
		params.SlotName = SlotName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAA240
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.DeleteSavedGame_BySlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            saveSlotNumber                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSaveGameSystem::DeleteSavedGame_BySlot(int32_t saveSlotNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.DeleteSavedGame_BySlot");

		UFNAFSaveGameSystem_DeleteSavedGame_BySlot_Params params{};
		params.saveSlotNumber = saveSlotNumber;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAA180
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.CreateWorldTransitSave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFSaveGameSystem::CreateWorldTransitSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.CreateWorldTransitSave");

		UFNAFSaveGameSystem_CreateWorldTransitSave_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAA160
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.CreatePotentialCheckpoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFSaveGameSystem::CreatePotentialCheckpoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.CreatePotentialCheckpoint");

		UFNAFSaveGameSystem_CreatePotentialCheckpoint_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA9F00
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.AutoSave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFSaveGameSystem::AutoSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.AutoSave");

		UFNAFSaveGameSystem_AutoSave_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA9CA0
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.AsyncSaveGame
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
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

		UFNAFSaveGameSystem_AsyncSaveGame_Params params{};
		params.originalSlotName = originalSlotName;
		params.isANewSlot = isANewSlot;
		params.isCurrentSlot = isCurrentSlot;
		params.Renamed_SaveSlot = Renamed_SaveSlot;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (internal_SlotName != nullptr)
			*internal_SlotName = params.internal_SlotName;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA9C80
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.AsyncLoadGameLastLoaded
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFNAFSaveGameSystem::AsyncLoadGameLastLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.AsyncLoadGameLastLoaded");

		UFNAFSaveGameSystem_AsyncLoadGameLastLoaded_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA9B00
	 * 		Name   -> Function fnaf9.FNAFSaveGameSystem.AsyncLoadGame
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
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

		UFNAFSaveGameSystem_AsyncLoadGame_Params params{};
		params.originalSlotName = originalSlotName;
		params.isContinueSelected = isContinueSelected;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (internal_SlotName != nullptr)
			*internal_SlotName = params.internal_SlotName;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFSaveGameSystem.StaticClass
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
	 * 		Offset -> 0x00BABEB0
	 * 		Name   -> Function fnaf9.FNAFSightSystem.SetSightSystemDisplay
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFNAFSightSystem::SetSightSystemDisplay(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSightSystem.SetSightSystemDisplay");

		UFNAFSightSystem_SetSightSystemDisplay_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAFSightSystem.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGameClockSettings.StaticClass
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
	 * 		Offset -> 0x00BB0AA0
	 * 		Name   -> Function fnaf9.GameClockSystem.StartNextHour
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameClockSystem::StartNextHour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.StartNextHour");

		UGameClockSystem_StartNextHour_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB0730
	 * 		Name   -> Function fnaf9.GameClockSystem.SetGameTimeEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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

		UGameClockSystem_SetGameTimeEvent_Params params{};
		params.Delegate = Delegate;
		params.Hour = Hour;
		params.Minute = Minute;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB0690
	 * 		Name   -> Function fnaf9.GameClockSystem.SetGameEndEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGameClockSystem::SetGameEndEvent(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetGameEndEvent");

		UGameClockSystem_SetGameEndEvent_Params params{};
		params.Delegate = Delegate;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB0500
	 * 		Name   -> Function fnaf9.GameClockSystem.SetCurrentTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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

		UGameClockSystem_SetCurrentTime_Params params{};
		params.Hour = Hour;
		params.Minute = Minute;
		params.bPlayDelegates = bPlayDelegates;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB0480
	 * 		Name   -> Function fnaf9.GameClockSystem.SetCurrentMinute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Minute                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameClockSystem::SetCurrentMinute(int32_t Minute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetCurrentMinute");

		UGameClockSystem_SetCurrentMinute_Params params{};
		params.Minute = Minute;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB0400
	 * 		Name   -> Function fnaf9.GameClockSystem.SetCurrentHour
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Hour                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameClockSystem::SetCurrentHour(int32_t Hour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetCurrentHour");

		UGameClockSystem_SetCurrentHour_Params params{};
		params.Hour = Hour;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB0370
	 * 		Name   -> Function fnaf9.GameClockSystem.SetClockRunning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bRunClock                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameClockSystem::SetClockRunning(bool bRunClock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetClockRunning");

		UGameClockSystem_SetClockRunning_Params params{};
		params.bRunClock = bRunClock;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB02F0
	 * 		Name   -> Function fnaf9.GameClockSystem.SetClockRateInMinutesPerHour
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            MinutesPerHour                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameClockSystem::SetClockRateInMinutesPerHour(int32_t MinutesPerHour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetClockRateInMinutesPerHour");

		UGameClockSystem_SetClockRateInMinutesPerHour_Params params{};
		params.MinutesPerHour = MinutesPerHour;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB0270
	 * 		Name   -> Function fnaf9.GameClockSystem.SetClockRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            TotalRealHours                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameClockSystem::SetClockRate(int32_t TotalRealHours)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetClockRate");

		UGameClockSystem_SetClockRate_Params params{};
		params.TotalRealHours = TotalRealHours;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB01B0
	 * 		Name   -> Function fnaf9.GameClockSystem.ResetTimeDelegatesUpTo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Hour                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Minute                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameClockSystem::ResetTimeDelegatesUpTo(int32_t Hour, int32_t Minute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.ResetTimeDelegatesUpTo");

		UGameClockSystem_ResetTimeDelegatesUpTo_Params params{};
		params.Hour = Hour;
		params.Minute = Minute;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAFFF0
	 * 		Name   -> Function fnaf9.GameClockSystem.OnNormalModeTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGameClockSystem::OnNormalModeTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.OnNormalModeTriggered");

		UGameClockSystem_OnNormalModeTriggered_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAFFD0
	 * 		Name   -> Function fnaf9.GameClockSystem.OnMoonmanLiteTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGameClockSystem::OnMoonmanLiteTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.OnMoonmanLiteTriggered");

		UGameClockSystem_OnMoonmanLiteTriggered_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAFFB0
	 * 		Name   -> Function fnaf9.GameClockSystem.OnMoonmanIntermediateTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGameClockSystem::OnMoonmanIntermediateTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.OnMoonmanIntermediateTriggered");

		UGameClockSystem_OnMoonmanIntermediateTriggered_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAFF90
	 * 		Name   -> Function fnaf9.GameClockSystem.OnMoonmanDangerTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGameClockSystem::OnMoonmanDangerTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.OnMoonmanDangerTriggered");

		UGameClockSystem_OnMoonmanDangerTriggered_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF810
	 * 		Name   -> Function fnaf9.GameClockSystem.IsClockRunning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGameClockSystem::IsClockRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.IsClockRunning");

		UGameClockSystem_IsClockRunning_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF280
	 * 		Name   -> Function fnaf9.GameClockSystem.GetCurrentTimeInSeconds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGameClockSystem::GetCurrentTimeInSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.GetCurrentTimeInSeconds");

		UGameClockSystem_GetCurrentTimeInSeconds_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF1A0
	 * 		Name   -> Function fnaf9.GameClockSystem.GetCurrentTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Hour                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Minute                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	 //void UGameClockSystem::GetCurrentTime(int32_t* Hour, int32_t* Minute)
	 //{
	 //	static UFunction* fn = nullptr;
	 //	if (!fn)
	 //		fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.GetCurrentTime");
	 //	
	 //	UGameClockSystem_GetCurrentTime_Params params {};
	 //	
	 //	auto flags = fn->FunctionFlags;
	 //	fn->FunctionFlags |= 0x00000400;
	 //	UObject::ProcessEvent(fn, &params);
	 //	fn->FunctionFlags = flags;
	 //	
	 //	if (Hour != nullptr)
	 //		*Hour = params.Hour;
	 //	if (Minute != nullptr)
	 //		*Minute = params.Minute;
	 //}

	 /**
	  * Function:
	  * 		Offset -> 0x00000000
	  * 		Name   -> PredefindFunction UGameClockSystem.StaticClass
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
	 * 		Offset -> 0x00BB0010
	 * 		Name   -> Function fnaf9.GameTypeCheckComponent.OnNotAllowedGameType
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UGameTypeCheckComponent::OnNotAllowedGameType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameTypeCheckComponent.OnNotAllowedGameType");

		UGameTypeCheckComponent_OnNotAllowedGameType_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF910
	 * 		Name   -> Function fnaf9.GameTypeCheckComponent.OnAllowedGameType
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UGameTypeCheckComponent::OnAllowedGameType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameTypeCheckComponent.OnAllowedGameType");

		UGameTypeCheckComponent_OnAllowedGameType_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF7C0
	 * 		Name   -> Function fnaf9.GameTypeCheckComponent.IsAllowed
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGameTypeCheckComponent::IsAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.GameTypeCheckComponent.IsAllowed");

		UGameTypeCheckComponent_IsAllowed_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGameTypeCheckComponent.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGameTypeCheckDestroy.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AGlobalAIPerception.StaticClass
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
	 * 		Offset -> 0x00BA6F50
	 * 		Name   -> Function fnaf9.HideObjectInterface.StartSearch
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       SearcherPawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHideObjectInterface::StartSearch(class APawn* SearcherPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.StartSearch");

		UHideObjectInterface_StartSearch_Params params{};
		params.SearcherPawn = SearcherPawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB0120
	 * 		Name   -> Function fnaf9.HideObjectInterface.PlayBotSearchSound
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      SearcherActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHideObjectInterface::PlayBotSearchSound(class AActor* SearcherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.PlayBotSearchSound");

		UHideObjectInterface_PlayBotSearchSound_Params params{};
		params.SearcherActor = SearcherActor;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB00C0
	 * 		Name   -> Function fnaf9.HideObjectInterface.OnPlayerLeave
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHideObjectInterface::OnPlayerLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.OnPlayerLeave");

		UHideObjectInterface_OnPlayerLeave_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB0030
	 * 		Name   -> Function fnaf9.HideObjectInterface.OnPlayerHide
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ACharacter*                                  PlayerCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHideObjectInterface::OnPlayerHide(class ACharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.OnPlayerHide");

		UHideObjectInterface_OnPlayerHide_Params params{};
		params.PlayerCharacter = PlayerCharacter;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B9C130
	 * 		Name   -> Function fnaf9.HideObjectInterface.IsEnterExitPlaying
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UHideObjectInterface::IsEnterExitPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.IsEnterExitPlaying");

		UHideObjectInterface_IsEnterExitPlaying_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF570
	 * 		Name   -> Function fnaf9.HideObjectInterface.GetSearchLocation
	 * 		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHideObjectInterface::GetSearchLocation(struct FVector* Location, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.GetSearchLocation");

		UHideObjectInterface_GetSearchLocation_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (Location != nullptr)
			*Location = params.Location;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF330
	 * 		Name   -> Function fnaf9.HideObjectInterface.GetHideType
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	fnaf9_EHideObjectType UHideObjectInterface::GetHideType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.GetHideType");

		UHideObjectInterface_GetHideType_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF2F0
	 * 		Name   -> Function fnaf9.HideObjectInterface.GetHideLocation
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FVector UHideObjectInterface::GetHideLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.GetHideLocation");

		UHideObjectInterface_GetHideLocation_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF2C0
	 * 		Name   -> Function fnaf9.HideObjectInterface.GetHiddenPlayer
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	class ACharacter* UHideObjectInterface::GetHiddenPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.GetHiddenPlayer");

		UHideObjectInterface_GetHiddenPlayer_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA31A0
	 * 		Name   -> Function fnaf9.HideObjectInterface.EndSearch
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHideObjectInterface::EndSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.EndSearch");

		UHideObjectInterface_EndSearch_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHideObjectInterface.StaticClass
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
	 * 		Offset -> 0x00BAEF40
	 * 		Name   -> Function fnaf9.InstructionCardRowBlueprintFunctionLibrary.GetControllerInstructionCard
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FInstructionCardRow                         MyStructRef                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UInstructionCardRowBlueprintFunctionLibrary::STATIC_GetControllerInstructionCard(struct FInstructionCardRow* MyStructRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.InstructionCardRowBlueprintFunctionLibrary.GetControllerInstructionCard");

		UInstructionCardRowBlueprintFunctionLibrary_GetControllerInstructionCard_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (MyStructRef != nullptr)
			*MyStructRef = params.MyStructRef;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInstructionCardRowBlueprintFunctionLibrary.StaticClass
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
	 * 		Offset -> 0x00BB0910
	 * 		Name   -> Function fnaf9.InventoryConditionalComponent.SetNewConditions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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

		UInventoryConditionalComponent_SetNewConditions_Params params{};
		params.NewRequiredInventoryItem = NewRequiredInventoryItem;
		params.NewRequiredSecurityLevel = NewRequiredSecurityLevel;
		params.NewRequiresPartyPass = NewRequiresPartyPass;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAFD70
	 * 		Name   -> Function fnaf9.InventoryConditionalComponent.OnMessageCollected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFNAFMessageTableStruct                     MessageTableStruct                                         (Parm, NativeAccessSpecifierPublic)
	 */
	void UInventoryConditionalComponent::OnMessageCollected(const class FName& ItemName, const struct FFNAFMessageTableStruct& MessageTableStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.InventoryConditionalComponent.OnMessageCollected");

		UInventoryConditionalComponent_OnMessageCollected_Params params{};
		params.ItemName = ItemName;
		params.MessageTableStruct = MessageTableStruct;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF9B0
	 * 		Name   -> Function fnaf9.InventoryConditionalComponent.OnItemCollected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFNAFInventoryTableStruct                   InventoryTableStruct                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void UInventoryConditionalComponent::OnItemCollected(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryTableStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.InventoryConditionalComponent.OnItemCollected");

		UInventoryConditionalComponent_OnItemCollected_Params params{};
		params.ItemName = ItemName;
		params.InventoryTableStruct = InventoryTableStruct;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF6E0
	 * 		Name   -> Function fnaf9.InventoryConditionalComponent.HasMetConditions
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               OutConditionsMet                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		fnaf9_EConditionFailReason                         OutFailReason                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryConditionalComponent::HasMetConditions(bool* OutConditionsMet, fnaf9_EConditionFailReason* OutFailReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.InventoryConditionalComponent.HasMetConditions");

		UInventoryConditionalComponent_HasMetConditions_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutConditionsMet != nullptr)
			*OutConditionsMet = params.OutConditionsMet;
		if (OutFailReason != nullptr)
			*OutFailReason = params.OutFailReason;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInventoryConditionalComponent.StaticClass
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
	 * 		Offset -> 0x00BB0600
	 * 		Name   -> Function fnaf9.ItemCollectListenerComponent.SetEventsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UItemCollectListenerComponent::SetEventsEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ItemCollectListenerComponent.SetEventsEnabled");

		UItemCollectListenerComponent_SetEventsEnabled_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAFB70
	 * 		Name   -> Function fnaf9.ItemCollectListenerComponent.OnItemCollectedHandler
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFNAFInventoryTableStruct                   InventoryItemInfo                                          (Parm, NativeAccessSpecifierPublic)
	 */
	void UItemCollectListenerComponent::OnItemCollectedHandler(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ItemCollectListenerComponent.OnItemCollectedHandler");

		UItemCollectListenerComponent_OnItemCollectedHandler_Params params{};
		params.ItemName = ItemName;
		params.InventoryItemInfo = InventoryItemInfo;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF2A0
	 * 		Name   -> Function fnaf9.ItemCollectListenerComponent.GetEventsEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UItemCollectListenerComponent::GetEventsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.ItemCollectListenerComponent.GetEventsEnabled");

		UItemCollectListenerComponent_GetEventsEnabled_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UItemCollectListenerComponent.StaticClass
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
	 * 		Offset -> 0x00BB0A10
	 * 		Name   -> Function fnaf9.LevelStreamViewpoint.SetStreamingEnable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULevelStreamViewpoint::SetStreamingEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelStreamViewpoint.SetStreamingEnable");

		ULevelStreamViewpoint_SetStreamingEnable_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAFD30
	 * 		Name   -> Function fnaf9.LevelStreamViewpoint.OnLevelManagerUpdated
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULevelStreamViewpoint::OnLevelManagerUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelStreamViewpoint.OnLevelManagerUpdated");

		ULevelStreamViewpoint_OnLevelManagerUpdated_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF660
	 * 		Name   -> Function fnaf9.LevelStreamViewpoint.GetStreamingLevelNames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class FName> ULevelStreamViewpoint::GetStreamingLevelNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelStreamViewpoint.GetStreamingLevelNames");

		ULevelStreamViewpoint_GetStreamingLevelNames_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAEC40
	 * 		Name   -> Function fnaf9.LevelStreamViewpoint.AnyLevelsLoaded
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ULevelStreamViewpoint::AnyLevelsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LevelStreamViewpoint.AnyLevelsLoaded");

		ULevelStreamViewpoint_AnyLevelsLoaded_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULevelStreamViewpoint.StaticClass
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
	 * 		Offset -> 0x00BAF930
	 * 		Name   -> Function fnaf9.LightingMaterialManager.OnLevelVisible
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ALightingMaterialManager::OnLevelVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightingMaterialManager.OnLevelVisible");

		ALightingMaterialManager_OnLevelVisible_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF930
	 * 		Name   -> Function fnaf9.LightingMaterialManager.OnBeginLightScenarioChange
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ALightingMaterialManager::OnBeginLightScenarioChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightingMaterialManager.OnBeginLightScenarioChange");

		ALightingMaterialManager_OnBeginLightScenarioChange_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF830
	 * 		Name   -> Function fnaf9.LightingMaterialManager.OnActivateSpecialLightingScenerio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALightingMaterialManager::OnActivateSpecialLightingScenerio(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightingMaterialManager.OnActivateSpecialLightingScenerio");

		ALightingMaterialManager_OnActivateSpecialLightingScenerio_Params params{};
		params.Key = Key;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ALightingMaterialManager.StaticClass
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
	 * 		Offset -> 0x00BB0B60
	 * 		Name   -> Function fnaf9.LightScenarioManager.UnbindOnEndScenarioChange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULightScenarioManager::UnbindOnEndScenarioChange(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.UnbindOnEndScenarioChange");

		ULightScenarioManager_UnbindOnEndScenarioChange_Params params{};
		params.Delegate = Delegate;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB0AC0
	 * 		Name   -> Function fnaf9.LightScenarioManager.UnbindOnBeginScenarioChange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULightScenarioManager::UnbindOnBeginScenarioChange(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.UnbindOnBeginScenarioChange");

		ULightScenarioManager_UnbindOnBeginScenarioChange_Params params{};
		params.Delegate = Delegate;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB0850
	 * 		Name   -> Function fnaf9.LightScenarioManager.SetInitialScenario
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Area                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		fnaf9_ELightingScenario                            Scenario                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightScenarioManager::SetInitialScenario(int32_t Area, fnaf9_ELightingScenario Scenario)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.SetInitialScenario");

		ULightScenarioManager_SetInitialScenario_Params params{};
		params.Area = Area;
		params.Scenario = Scenario;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB0100
	 * 		Name   -> Function fnaf9.LightScenarioManager.OnUnloadFinished
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULightScenarioManager::OnUnloadFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnUnloadFinished");

		ULightScenarioManager_OnUnloadFinished_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB00E0
	 * 		Name   -> Function fnaf9.LightScenarioManager.OnTick
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULightScenarioManager::OnTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnTick");

		ULightScenarioManager_OnTick_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAFD50
	 * 		Name   -> Function fnaf9.LightScenarioManager.OnLoadFinished
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULightScenarioManager::OnLoadFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnLoadFinished");

		ULightScenarioManager_OnLoadFinished_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF990
	 * 		Name   -> Function fnaf9.LightScenarioManager.OnFadeoutFinished
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULightScenarioManager::OnFadeoutFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnFadeoutFinished");

		ULightScenarioManager_OnFadeoutFinished_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF970
	 * 		Name   -> Function fnaf9.LightScenarioManager.OnChangeAreaUnloadFinished
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULightScenarioManager::OnChangeAreaUnloadFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnChangeAreaUnloadFinished");

		ULightScenarioManager_OnChangeAreaUnloadFinished_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF950
	 * 		Name   -> Function fnaf9.LightScenarioManager.OnChangeAreaLoadFinished
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULightScenarioManager::OnChangeAreaLoadFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnChangeAreaLoadFinished");

		ULightScenarioManager_OnChangeAreaLoadFinished_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF7F0
	 * 		Name   -> Function fnaf9.LightScenarioManager.IsChangingScenario
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ULightScenarioManager::IsChangingScenario()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.IsChangingScenario");

		ULightScenarioManager_IsChangingScenario_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF430
	 * 		Name   -> Function fnaf9.LightScenarioManager.GetLightScenarioAreaFromMap
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        MapName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		fnaf9_ELightScenarioArea                           OutArea                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		fnaf9_ELightingScenario                            OutScenario                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightScenarioManager::GetLightScenarioAreaFromMap(const class FName& MapName, fnaf9_ELightScenarioArea* OutArea, fnaf9_ELightingScenario* OutScenario)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.GetLightScenarioAreaFromMap");

		ULightScenarioManager_GetLightScenarioAreaFromMap_Params params{};
		params.MapName = MapName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutArea != nullptr)
			*OutArea = params.OutArea;
		if (OutScenario != nullptr)
			*OutScenario = params.OutScenario;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF360
	 * 		Name   -> Function fnaf9.LightScenarioManager.GetLevelNameFromAreaScenario
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Area                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		fnaf9_ELightingScenario                            Scenario                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName ULightScenarioManager::GetLevelNameFromAreaScenario(int32_t Area, fnaf9_ELightingScenario Scenario)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.GetLevelNameFromAreaScenario");

		ULightScenarioManager_GetLevelNameFromAreaScenario_Params params{};
		params.Area = Area;
		params.Scenario = Scenario;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF180
	 * 		Name   -> Function fnaf9.LightScenarioManager.GetCurrentLightingScenario
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	fnaf9_ELightingScenario ULightScenarioManager::GetCurrentLightingScenario()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.GetCurrentLightingScenario");

		ULightScenarioManager_GetCurrentLightingScenario_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF160
	 * 		Name   -> Function fnaf9.LightScenarioManager.GetCurrentArea
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ULightScenarioManager::GetCurrentArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.GetCurrentArea");

		ULightScenarioManager_GetCurrentArea_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAEF20
	 * 		Name   -> Function fnaf9.LightScenarioManager.EndLoadSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULightScenarioManager::EndLoadSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.EndLoadSequence");

		ULightScenarioManager_EndLoadSequence_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAEE50
	 * 		Name   -> Function fnaf9.LightScenarioManager.ChangeScenario
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_ELightingScenario                            NewScenario                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseFade                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightScenarioManager::ChangeScenario(fnaf9_ELightingScenario NewScenario, bool bUseFade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.ChangeScenario");

		ULightScenarioManager_ChangeScenario_Params params{};
		params.NewScenario = NewScenario;
		params.bUseFade = bUseFade;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAEDD0
	 * 		Name   -> Function fnaf9.LightScenarioManager.ChangeArea
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Area                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightScenarioManager::ChangeArea(int32_t Area)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.ChangeArea");

		ULightScenarioManager_ChangeArea_Params params{};
		params.Area = Area;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAED30
	 * 		Name   -> Function fnaf9.LightScenarioManager.BindOnEndScenarioChange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULightScenarioManager::BindOnEndScenarioChange(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.BindOnEndScenarioChange");

		ULightScenarioManager_BindOnEndScenarioChange_Params params{};
		params.Delegate = Delegate;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAEC90
	 * 		Name   -> Function fnaf9.LightScenarioManager.BindOnBeginScenarioChange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULightScenarioManager::BindOnBeginScenarioChange(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.BindOnBeginScenarioChange");

		ULightScenarioManager_BindOnBeginScenarioChange_Params params{};
		params.Delegate = Delegate;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAEC70
	 * 		Name   -> Function fnaf9.LightScenarioManager.BeginLoadSequence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULightScenarioManager::BeginLoadSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.BeginLoadSequence");

		ULightScenarioManager_BeginLoadSequence_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULightScenarioManager.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULightScenarioManagerSettings.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ALightStreamingVolume.StaticClass
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
	 * 		Offset -> 0x00BB42F0
	 * 		Name   -> Function fnaf9.Localization.GetLocalizationCulture
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 */
	fnaf9_ELocalizationCulture ULocalization::STATIC_GetLocalizationCulture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.Localization.GetLocalizationCulture");

		ULocalization_GetLocalizationCulture_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB3E70
	 * 		Name   -> Function fnaf9.Localization.ChangeLocalizationCulture
	 * 		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_ELocalizationCulture                         Culture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULocalization::STATIC_ChangeLocalizationCulture(fnaf9_ELocalizationCulture Culture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.Localization.ChangeLocalizationCulture");

		ULocalization_ChangeLocalizationCulture_Params params{};
		params.Culture = Culture;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULocalization.StaticClass
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
	 * 		Offset -> 0x00BB4C20
	 * 		Name   -> Function fnaf9.MissionDisplayQueueLibrary.PushMissionUpdate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_EMissionUpdateType                           UpdateType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FFNAFMissionState                           MissionState                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMissionDisplayQueueLibrary::STATIC_PushMissionUpdate(fnaf9_EMissionUpdateType UpdateType, const class FName& MissionName, const struct FFNAFMissionInfo& MissionInfo, const struct FFNAFMissionState& MissionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MissionDisplayQueueLibrary.PushMissionUpdate");

		UMissionDisplayQueueLibrary_PushMissionUpdate_Params params{};
		params.UpdateType = UpdateType;
		params.MissionName = MissionName;
		params.MissionInfo = MissionInfo;
		params.MissionState = MissionState;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4660
	 * 		Name   -> Function fnaf9.MissionDisplayQueueLibrary.HasMissionUpdateInQueue
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_EMissionInQueue                              MissionInQueue                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMissionDisplayQueueLibrary::STATIC_HasMissionUpdateInQueue(fnaf9_EMissionInQueue* MissionInQueue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MissionDisplayQueueLibrary.HasMissionUpdateInQueue");

		UMissionDisplayQueueLibrary_HasMissionUpdateInQueue_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (MissionInQueue != nullptr)
			*MissionInQueue = params.MissionInQueue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4420
	 * 		Name   -> Function fnaf9.MissionDisplayQueueLibrary.GetNextMissionUpdate
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct FMissionDisplayUpdateInfo UMissionDisplayQueueLibrary::STATIC_GetNextMissionUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MissionDisplayQueueLibrary.GetNextMissionUpdate");

		UMissionDisplayQueueLibrary_GetNextMissionUpdate_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB3EE0
	 * 		Name   -> Function fnaf9.MissionDisplayQueueLibrary.ClearMissionUpdateQueue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UMissionDisplayQueueLibrary::STATIC_ClearMissionUpdateQueue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MissionDisplayQueueLibrary.ClearMissionUpdateQueue");

		UMissionDisplayQueueLibrary_ClearMissionUpdateQueue_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMissionDisplayQueueLibrary.StaticClass
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
	 * 		Offset -> 0x00BB4610
	 * 		Name   -> Function fnaf9.MissionMarker.GetStateIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AMissionMarker::GetStateIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MissionMarker.GetStateIndex");

		AMissionMarker_GetStateIndex_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4400
	 * 		Name   -> Function fnaf9.MissionMarker.GetMissionName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName AMissionMarker::GetMissionName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MissionMarker.GetMissionName");

		AMissionMarker_GetMissionName_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMissionMarker.StaticClass
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
	 * 		Offset -> 0x00BB47C0
	 * 		Name   -> Function fnaf9.MissionStateCondition.OnMissionUpdated
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
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

		UMissionStateCondition_OnMissionUpdated_Params params{};
		params.InMissionName = InMissionName;
		params.MissionState = MissionState;
		params.MissionInfo = MissionInfo;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4630
	 * 		Name   -> Function fnaf9.MissionStateCondition.HasMetConditions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMissionStateCondition::HasMetConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MissionStateCondition.HasMetConditions");

		UMissionStateCondition_HasMetConditions_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMissionStateCondition.StaticClass
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
	 * 		Offset -> 0x00BB5810
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.UnRegisterSpawn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AMoonmanSpawnPoint*                          InSpawnPoint                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoonmanManagementSystem::UnRegisterSpawn(class AMoonmanSpawnPoint* InSpawnPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.UnRegisterSpawn");

		UMoonmanManagementSystem_UnRegisterSpawn_Params params{};
		params.InSpawnPoint = InSpawnPoint;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB5890
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.UnpauseMoonmanManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMoonmanManagementSystem::UnpauseMoonmanManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.UnpauseMoonmanManager");

		UMoonmanManagementSystem_UnpauseMoonmanManager_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB57F0
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.StartMoonmanLiteManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMoonmanManagementSystem::StartMoonmanLiteManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.StartMoonmanLiteManager");

		UMoonmanManagementSystem_StartMoonmanLiteManager_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB57D0
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.StartMoonmanDangerManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMoonmanManagementSystem::StartMoonmanDangerManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.StartMoonmanDangerManager");

		UMoonmanManagementSystem_StartMoonmanDangerManager_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4E20
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.RegisterSpawn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AMoonmanSpawnPoint*                          InSpawnPoint                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoonmanManagementSystem::RegisterSpawn(class AMoonmanSpawnPoint* InSpawnPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.RegisterSpawn");

		UMoonmanManagementSystem_RegisterSpawn_Params params{};
		params.InSpawnPoint = InSpawnPoint;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4C00
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.PauseMoonmanManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMoonmanManagementSystem::PauseMoonmanManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.PauseMoonmanManager");

		UMoonmanManagementSystem_PauseMoonmanManager_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4B40
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.OnWorldStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		fnaf9_EFNAFGameState                               NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		fnaf9_EFNAFGameState                               PrevState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoonmanManagementSystem::OnWorldStateChanged(fnaf9_EFNAFGameState NewState, fnaf9_EFNAFGameState PrevState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.OnWorldStateChanged");

		UMoonmanManagementSystem_OnWorldStateChanged_Params params{};
		params.NewState = NewState;
		params.PrevState = PrevState;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4090
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPointsFor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		fnaf9_EMMAnimCategory                              MMAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AMoonmanSpawnPoint*> UMoonmanManagementSystem::GetAllMMSpawnPointsFor(fnaf9_EMMAnimCategory MMAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPointsFor");

		UMoonmanManagementSystem_GetAllMMSpawnPointsFor_Params params{};
		params.MMAnimation = MMAnimation;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4010
	 * 		Name   -> Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPoints
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class AMoonmanSpawnPoint*> UMoonmanManagementSystem::GetAllMMSpawnPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPoints");

		UMoonmanManagementSystem_GetAllMMSpawnPoints_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMoonmanManagementSystem.StaticClass
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
	 * 		Offset -> 0x00BB56C0
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetSpawnProbability
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              tempProbability                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetSpawnProbability(float tempProbability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetSpawnProbability");

		AMoonmanSpawnPoint_SetSpawnProbability_Params params{};
		params.tempProbability = tempProbability;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB5640
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetShouldFollowPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetShouldFollowPlayer(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetShouldFollowPlayer");

		AMoonmanSpawnPoint_SetShouldFollowPlayer_Params params{};
		params.In = In;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB5520
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetMMAnimCategory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_EMMAnimCategory                              In                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetMMAnimCategory(fnaf9_EMMAnimCategory In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetMMAnimCategory");

		AMoonmanSpawnPoint_SetMMAnimCategory_Params params{};
		params.In = In;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB5490
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsTriggered
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isTriggered                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetIsTriggered(bool isTriggered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsTriggered");

		AMoonmanSpawnPoint_SetIsTriggered_Params params{};
		params.isTriggered = isTriggered;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB5410
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsStationary
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetIsStationary(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsStationary");

		AMoonmanSpawnPoint_SetIsStationary_Params params{};
		params.In = In;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB5380
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsSpawned
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsSpawned                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetIsSpawned(bool IsSpawned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsSpawned");

		AMoonmanSpawnPoint_SetIsSpawned_Params params{};
		params.IsSpawned = IsSpawned;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB5300
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsSingleUse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetIsSingleUse(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsSingleUse");

		AMoonmanSpawnPoint_SetIsSingleUse_Params params{};
		params.In = In;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB5270
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsMMDetected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsSkeletonDetected                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetIsMMDetected(bool IsSkeletonDetected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsMMDetected");

		AMoonmanSpawnPoint_SetIsMMDetected_Params params{};
		params.IsSkeletonDetected = IsSkeletonDetected;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB51F0
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsAnimLoop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetIsAnimLoop(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsAnimLoop");

		AMoonmanSpawnPoint_SetIsAnimLoop_Params params{};
		params.In = In;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB5160
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetHasSpawnedOnce
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               HasSpawnedOnce                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetHasSpawnedOnce(bool HasSpawnedOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetHasSpawnedOnce");

		AMoonmanSpawnPoint_SetHasSpawnedOnce_Params params{};
		params.HasSpawnedOnce = HasSpawnedOnce;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB50D0
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetHasLookedOnce
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               HasLookedOnce                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetHasLookedOnce(bool HasLookedOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetHasLookedOnce");

		AMoonmanSpawnPoint_SetHasLookedOnce_Params params{};
		params.HasLookedOnce = HasLookedOnce;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4FC0
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetCanSpawn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               canSpawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetCanSpawn(bool canSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetCanSpawn");

		AMoonmanSpawnPoint_SetCanSpawn_Params params{};
		params.canSpawn = canSpawn;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4F40
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetCanPopUp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetCanPopUp(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetCanPopUp");

		AMoonmanSpawnPoint_SetCanPopUp_Params params{};
		params.In = In;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4EC0
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.SetAimHeadAtPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::SetAimHeadAtPlayer(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetAimHeadAtPlayer");

		AMoonmanSpawnPoint_SetAimHeadAtPlayer_Params params{};
		params.In = In;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB49A0
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.OnSetAIDisplay
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::OnSetAIDisplay(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.OnSetAIDisplay");

		AMoonmanSpawnPoint_OnSetAIDisplay_Params params{};
		params.enable = enable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB45F0
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetSpawnProbability
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AMoonmanSpawnPoint::GetSpawnProbability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetSpawnProbability");

		AMoonmanSpawnPoint_GetSpawnProbability_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4590
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetOriginalProbability
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AMoonmanSpawnPoint::GetOriginalProbability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetOriginalProbability");

		AMoonmanSpawnPoint_GetOriginalProbability_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4340
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetMMAnimSeq_Array
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UAnimSequence*> AMoonmanSpawnPoint::GetMMAnimSeq_Array()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetMMAnimSeq_Array");

		AMoonmanSpawnPoint_GetMMAnimSeq_Array_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4320
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetMMAnimCategory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	fnaf9_EMMAnimCategory AMoonmanSpawnPoint::GetMMAnimCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetMMAnimCategory");

		AMoonmanSpawnPoint_GetMMAnimCategory_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB42D0
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsTriggered
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AMoonmanSpawnPoint::GetIsTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsTriggered");

		AMoonmanSpawnPoint_GetIsTriggered_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB42B0
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsStationary
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AMoonmanSpawnPoint::GetIsStationary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsStationary");

		AMoonmanSpawnPoint_GetIsStationary_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4290
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsSpawned
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AMoonmanSpawnPoint::GetIsSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsSpawned");

		AMoonmanSpawnPoint_GetIsSpawned_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4270
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsSingleUse
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AMoonmanSpawnPoint::GetIsSingleUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsSingleUse");

		AMoonmanSpawnPoint_GetIsSingleUse_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4250
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsMMDetected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AMoonmanSpawnPoint::GetIsMMDetected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsMMDetected");

		AMoonmanSpawnPoint_GetIsMMDetected_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4230
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsFollowPlayerTrue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AMoonmanSpawnPoint::GetIsFollowPlayerTrue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsFollowPlayerTrue");

		AMoonmanSpawnPoint_GetIsFollowPlayerTrue_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4210
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsAnimLoop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AMoonmanSpawnPoint::GetIsAnimLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsAnimLoop");

		AMoonmanSpawnPoint_GetIsAnimLoop_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB41F0
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetHasSpawnedOnce
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AMoonmanSpawnPoint::GetHasSpawnedOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetHasSpawnedOnce");

		AMoonmanSpawnPoint_GetHasSpawnedOnce_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB41D0
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetHasLookedOnce
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AMoonmanSpawnPoint::GetHasLookedOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetHasLookedOnce");

		AMoonmanSpawnPoint_GetHasLookedOnce_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4180
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetCanSpawn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AMoonmanSpawnPoint::GetCanSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetCanSpawn");

		AMoonmanSpawnPoint_GetCanSpawn_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4160
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetCanPopUp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AMoonmanSpawnPoint::GetCanPopUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetCanPopUp");

		AMoonmanSpawnPoint_GetCanPopUp_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB3FF0
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.GetAimHeadAtPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AMoonmanSpawnPoint::GetAimHeadAtPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetAimHeadAtPlayer");

		AMoonmanSpawnPoint_GetAimHeadAtPlayer_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB3F00
	 * 		Name   -> Function fnaf9.MoonmanSpawnPoint.DetectTheSpawnPoint
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AMoonmanSpawnPoint*                          passed_HitActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               passed_bVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMoonmanSpawnPoint::DetectTheSpawnPoint(class AMoonmanSpawnPoint* passed_HitActor, bool passed_bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.DetectTheSpawnPoint");

		AMoonmanSpawnPoint_DetectTheSpawnPoint_Params params{};
		params.passed_HitActor = passed_HitActor;
		params.passed_bVisible = passed_bVisible;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMoonmanSpawnPoint.StaticClass
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
	 * 		Offset -> 0x00BB55A0
	 * 		Name   -> Function fnaf9.PatrollerInterface.SetPatrolPath
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void UPatrollerInterface::SetPatrolPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PatrollerInterface.SetPatrolPath");

		UPatrollerInterface_SetPatrolPath_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB5050
	 * 		Name   -> Function fnaf9.PatrollerInterface.SetCurrentPatrolPointIndex
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PatrolPointIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPatrollerInterface::SetCurrentPatrolPointIndex(int32_t PatrolPointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PatrollerInterface.SetCurrentPatrolPointIndex");

		UPatrollerInterface_SetCurrentPatrolPointIndex_Params params{};
		params.PatrolPointIndex = PatrolPointIndex;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB45B0
	 * 		Name   -> Function fnaf9.PatrollerInterface.GetPatrolPath
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	void UPatrollerInterface::GetPatrolPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PatrollerInterface.GetPatrolPath");

		UPatrollerInterface_GetPatrolPath_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB41A0
	 * 		Name   -> Function fnaf9.PatrollerInterface.GetCurrentPatrolPointIndex
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	int32_t UPatrollerInterface::GetCurrentPatrolPointIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.PatrollerInterface.GetCurrentPatrolPointIndex");

		UPatrollerInterface_GetCurrentPatrolPointIndex_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPatrollerInterface.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APlayerTriggerWithConditionComps.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URichTextControlButtonDecorator.StaticClass
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
	 * 		Offset -> 0x00BB00C0
	 * 		Name   -> Function fnaf9.SaveHandlerInterface.PostSaveGame
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USaveHandlerInterface::PostSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.PostSaveGame");

		USaveHandlerInterface_PostSaveGame_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA31A0
	 * 		Name   -> Function fnaf9.SaveHandlerInterface.PostGameLoad
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USaveHandlerInterface::PostGameLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.PostGameLoad");

		USaveHandlerInterface_PostGameLoad_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB0030
	 * 		Name   -> Function fnaf9.SaveHandlerInterface.OnStoreGameData
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USaveHandlerInterface::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.OnStoreGameData");

		USaveHandlerInterface_OnStoreGameData_Params params{};
		params.SaveDataObject = SaveDataObject;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BA6F50
	 * 		Name   -> Function fnaf9.SaveHandlerInterface.OnGameDataLoaded
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USaveHandlerInterface::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.OnGameDataLoaded");

		USaveHandlerInterface_OnGameDataLoaded_Params params{};
		params.SaveDataObject = SaveDataObject;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB0120
	 * 		Name   -> Function fnaf9.SaveHandlerInterface.OnCheckpointSave
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USaveHandlerInterface::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.OnCheckpointSave");

		USaveHandlerInterface_OnCheckpointSave_Params params{};
		params.SaveDataObject = SaveDataObject;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB4740
	 * 		Name   -> Function fnaf9.SaveHandlerInterface.OnCheckpointLoad
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USaveHandlerInterface::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.OnCheckpointLoad");

		USaveHandlerInterface_OnCheckpointLoad_Params params{};
		params.SaveDataObject = SaveDataObject;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USaveHandlerInterface.StaticClass
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
	 * 		Offset -> 0x00BB9F00
	 * 		Name   -> Function fnaf9.SecurityCamera.StopOfficeMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ASecurityCamera::StopOfficeMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.StopOfficeMode");

		ASecurityCamera_StopOfficeMode_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB9EC0
	 * 		Name   -> Function fnaf9.SecurityCamera.StartOfficeMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ASecurityCamera::StartOfficeMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.StartOfficeMode");

		ASecurityCamera_StartOfficeMode_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB9A60
	 * 		Name   -> Function fnaf9.SecurityCamera.SetPlayerDetectorEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASecurityCamera::SetPlayerDetectorEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.SetPlayerDetectorEnabled");

		ASecurityCamera_SetPlayerDetectorEnabled_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB97D0
	 * 		Name   -> Function fnaf9.SecurityCamera.SetEnemeyDetectorEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASecurityCamera::SetEnemeyDetectorEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.SetEnemeyDetectorEnabled");

		ASecurityCamera_SetEnemeyDetectorEnabled_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB9320
	 * 		Name   -> Function fnaf9.SecurityCamera.OnPlayerDetectorSightChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      UpdatedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASecurityCamera::OnPlayerDetectorSightChanged(class AActor* UpdatedActor, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.OnPlayerDetectorSightChanged");

		ASecurityCamera_OnPlayerDetectorSightChanged_Params params{};
		params.UpdatedActor = UpdatedActor;
		params.bVisible = bVisible;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.SecurityCamera.OnOfficeModeStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASecurityCamera::OnOfficeModeStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.OnOfficeModeStarted");

		ASecurityCamera_OnOfficeModeStarted_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB9180
	 * 		Name   -> Function fnaf9.SecurityCamera.OnEnemyDetectorSightChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      UpdatedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASecurityCamera::OnEnemyDetectorSightChanged(class AActor* UpdatedActor, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.OnEnemyDetectorSightChanged");

		ASecurityCamera_OnEnemyDetectorSightChanged_Params params{};
		params.UpdatedActor = UpdatedActor;
		params.bVisible = bVisible;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8E50
	 * 		Name   -> Function fnaf9.SecurityCamera.IsCameraUnlocked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               OnlyShowCurrentMission                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ASecurityCamera::IsCameraUnlocked(bool OnlyShowCurrentMission)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.IsCameraUnlocked");

		ASecurityCamera_IsCameraUnlocked_Params params{};
		params.OnlyShowCurrentMission = OnlyShowCurrentMission;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8D90
	 * 		Name   -> Function fnaf9.SecurityCamera.HasDetectedEnemies
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ASecurityCamera::HasDetectedEnemies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.HasDetectedEnemies");

		ASecurityCamera_HasDetectedEnemies_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8B50
	 * 		Name   -> Function fnaf9.SecurityCamera.GetVisibleEnemies
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class AActor*> ASecurityCamera::GetVisibleEnemies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.GetVisibleEnemies");

		ASecurityCamera_GetVisibleEnemies_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.SecurityCamera.GetPlayerSceneCapture
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class USceneCaptureComponent2D* ASecurityCamera::GetPlayerSceneCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.GetPlayerSceneCapture");

		ASecurityCamera_GetPlayerSceneCapture_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8180
	 * 		Name   -> Function fnaf9.SecurityCamera.GetCaptureTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTextureRenderTarget2D* ASecurityCamera::GetCaptureTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.GetCaptureTarget");

		ASecurityCamera_GetCaptureTarget_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.SecurityCamera.CaptureView
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASecurityCamera::CaptureView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.CaptureView");

		ASecurityCamera_CaptureView_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASecurityCamera.StaticClass
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
	 * 		Offset -> 0x00BB9540
	 * 		Name   -> Function fnaf9.SecurityCameraSystem.PlayerSpotted
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ASecurityCamera*                             SecurityCamera                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USecurityCameraSystem::PlayerSpotted(class ASecurityCamera* SecurityCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCameraSystem.PlayerSpotted");

		USecurityCameraSystem_PlayerSpotted_Params params{};
		params.SecurityCamera = SecurityCamera;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB7C40
	 * 		Name   -> Function fnaf9.SecurityCameraSystem.GetAllSecurityCameras
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class ASecurityCamera*> USecurityCameraSystem::GetAllSecurityCameras()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCameraSystem.GetAllSecurityCameras");

		USecurityCameraSystem_GetAllSecurityCameras_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USecurityCameraSystem.StaticClass
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
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.SeekerPatrolPath.GetSpawnType
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	fnaf9_EFNAFAISpawnType USeekerPatrolPath::GetSpawnType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SeekerPatrolPath.GetSpawnType");

		USeekerPatrolPath_GetSpawnType_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function fnaf9.SeekerPatrolPath.GetPathName
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	class FName USeekerPatrolPath::GetPathName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SeekerPatrolPath.GetPathName");

		USeekerPatrolPath_GetPathName_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USeekerPatrolPath.StaticClass
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
	 * 		Offset -> 0x00BB9D10
	 * 		Name   -> Function fnaf9.SightComponent.SetSightType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_ESightType                                   InSightType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetSightType(fnaf9_ESightType InSightType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetSightType");

		USightComponent_SetSightType_Params params{};
		params.InSightType = InSightType;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB9C00
	 * 		Name   -> Function fnaf9.SightComponent.SetSightParams
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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

		USightComponent_SetSightParams_Params params{};
		params.Angle = Angle;
		params.MinDistance = MinDistance;
		params.MaxDistance = MaxDistance;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB9B70
	 * 		Name   -> Function fnaf9.SightComponent.SetSightEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetSightEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetSightEnabled");

		USightComponent_SetSightEnabled_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB9AF0
	 * 		Name   -> Function fnaf9.SightComponent.SetSightAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetSightAngle(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetSightAngle");

		USightComponent_SetSightAngle_Params params{};
		params.Angle = Angle;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB99B0
	 * 		Name   -> Function fnaf9.SightComponent.SetIncludeTags
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FName>                                InIgnoreTags                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetIncludeTags(TArray<class FName> InIgnoreTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetIncludeTags");

		USightComponent_SetIncludeTags_Params params{};
		params.InIgnoreTags = InIgnoreTags;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB9860
	 * 		Name   -> Function fnaf9.SightComponent.SetFrustumTypeParams
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
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

		USightComponent_SetFrustumTypeParams_Params params{};
		params.InMinYaw = InMinYaw;
		params.InMaxYaw = InMaxYaw;
		params.InMinPitch = InMinPitch;
		params.InMaxPitch = InMaxPitch;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB9750
	 * 		Name   -> Function fnaf9.SightComponent.SetEndDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetEndDistance(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetEndDistance");

		USightComponent_SetEndDistance_Params params{};
		params.Distance = Distance;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB9650
	 * 		Name   -> Function fnaf9.SightComponent.SetAspectRatio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::SetAspectRatio(float Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetAspectRatio");

		USightComponent_SetAspectRatio_Params params{};
		params.Ratio = Ratio;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB9490
	 * 		Name   -> Function fnaf9.SightComponent.OnVisualQueryResults
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		TArray<TWeakObjectPtr<class UVisualSourceComponent>> DetectedSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::OnVisualQueryResults(TArray<TWeakObjectPtr<class UVisualSourceComponent>> DetectedSources)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.OnVisualQueryResults");

		USightComponent_OnVisualQueryResults_Params params{};
		params.DetectedSources = DetectedSources;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB9410
	 * 		Name   -> Function fnaf9.SightComponent.OnVisibleActorDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::OnVisibleActorDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.OnVisibleActorDestroyed");

		USightComponent_OnVisibleActorDestroyed_Params params{};
		params.DestroyedActor = DestroyedActor;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB9270
	 * 		Name   -> Function fnaf9.SightComponent.OnMoonManQueryResults
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		TArray<TWeakObjectPtr<class AMoonmanSpawnPoint>>   MoonManSpawnPoints                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USightComponent::OnMoonManQueryResults(TArray<TWeakObjectPtr<class AMoonmanSpawnPoint>> MoonManSpawnPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.OnMoonManQueryResults");

		USightComponent_OnMoonManQueryResults_Params params{};
		params.MoonManSpawnPoints = MoonManSpawnPoints;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8F20
	 * 		Name   -> Function fnaf9.SightComponent.IsUsingConeSight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	fnaf9_ESightType USightComponent::IsUsingConeSight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.IsUsingConeSight");

		USightComponent_IsUsingConeSight_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8EE0
	 * 		Name   -> Function fnaf9.SightComponent.IsSightEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USightComponent::IsSightEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.IsSightEnabled");

		USightComponent_IsSightEnabled_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8DC0
	 * 		Name   -> Function fnaf9.SightComponent.IsActorVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USightComponent::IsActorVisible(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.IsActorVisible");

		USightComponent_IsActorVisible_Params params{};
		params.Actor = Actor;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8B20
	 * 		Name   -> Function fnaf9.SightComponent.GetVisibleActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class AActor*> USightComponent::GetVisibleActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetVisibleActors");

		USightComponent_GetVisibleActors_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8B00
	 * 		Name   -> Function fnaf9.SightComponent.GetStartDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USightComponent::GetStartDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetStartDistance");

		USightComponent_GetStartDistance_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8AE0
	 * 		Name   -> Function fnaf9.SightComponent.GetSightAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USightComponent::GetSightAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetSightAngle");

		USightComponent_GetSightAngle_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8680
	 * 		Name   -> Function fnaf9.SightComponent.GetMinYaw
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USightComponent::GetMinYaw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetMinYaw");

		USightComponent_GetMinYaw_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8660
	 * 		Name   -> Function fnaf9.SightComponent.GetMinPitch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USightComponent::GetMinPitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetMinPitch");

		USightComponent_GetMinPitch_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8640
	 * 		Name   -> Function fnaf9.SightComponent.GetMaxYaw
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USightComponent::GetMaxYaw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetMaxYaw");

		USightComponent_GetMaxYaw_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8620
	 * 		Name   -> Function fnaf9.SightComponent.GetMaxPitch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USightComponent::GetMaxPitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetMaxPitch");

		USightComponent_GetMaxPitch_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB85F0
	 * 		Name   -> Function fnaf9.SightComponent.GetIncludeTags
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class FName> USightComponent::GetIncludeTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetIncludeTags");

		USightComponent_GetIncludeTags_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB81D0
	 * 		Name   -> Function fnaf9.SightComponent.GetFrustumTypeParams
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
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

		USightComponent_GetFrustumTypeParams_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		Offset -> 0x00B972E0
	 * 		Name   -> Function fnaf9.SightComponent.GetEndDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USightComponent::GetEndDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetEndDistance");

		USightComponent_GetEndDistance_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8160
	 * 		Name   -> Function fnaf9.SightComponent.GetAspectRatio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USightComponent::GetAspectRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetAspectRatio");

		USightComponent_GetAspectRatio_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USightComponent.StaticClass
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
	 * 		Offset -> 0x00BB9EE0
	 * 		Name   -> Function fnaf9.SplineFollowMovementComponent.StopFollowingSpline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USplineFollowMovementComponent::StopFollowingSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.StopFollowingSpline");

		USplineFollowMovementComponent_StopFollowingSpline_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB9EA0
	 * 		Name   -> Function fnaf9.SplineFollowMovementComponent.StartFollowingSpline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USplineFollowMovementComponent::StartFollowingSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.StartFollowingSpline");

		USplineFollowMovementComponent_StartFollowingSpline_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB9D90
	 * 		Name   -> Function fnaf9.SplineFollowMovementComponent.SetSplineToFollow
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USplineComponent*                            Spline                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplineFollowMovementComponent::SetSplineToFollow(class USplineComponent* Spline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.SetSplineToFollow");

		USplineFollowMovementComponent_SetSplineToFollow_Params params{};
		params.Spline = Spline;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB96D0
	 * 		Name   -> Function fnaf9.SplineFollowMovementComponent.SetDistanceAlongSpline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplineFollowMovementComponent::SetDistanceAlongSpline(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.SetDistanceAlongSpline");

		USplineFollowMovementComponent_SetDistanceAlongSpline_Params params{};
		params.Distance = Distance;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF2A0
	 * 		Name   -> Function fnaf9.SplineFollowMovementComponent.IsFollowingSpline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USplineFollowMovementComponent::IsFollowingSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.IsFollowingSpline");

		USplineFollowMovementComponent_IsFollowingSpline_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB81B0
	 * 		Name   -> Function fnaf9.SplineFollowMovementComponent.GetCurrentDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USplineFollowMovementComponent::GetCurrentDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.GetCurrentDistance");

		USplineFollowMovementComponent_GetCurrentDistance_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USplineFollowMovementComponent.StaticClass
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
	 * 		Offset -> 0x00BB8090
	 * 		Name   -> Function fnaf9.SplineUtils.GetApproxDistanceClosestToWorldLocation
	 * 		Flags  -> (Final, Native, Static, Private, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Pos_WS                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USplineComponent*                            Spline                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USplineUtils::STATIC_GetApproxDistanceClosestToWorldLocation(const struct FVector& Pos_WS, class USplineComponent* Spline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SplineUtils.GetApproxDistanceClosestToWorldLocation");

		USplineUtils_GetApproxDistanceClosestToWorldLocation_Params params{};
		params.Pos_WS = Pos_WS;
		params.Spline = Spline;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USplineUtils.StaticClass
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
	 * 		Offset -> 0x00BBCD70
	 * 		Name   -> Function fnaf9.WorldStateComponent.SetObjectState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateComponent::SetObjectState(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateComponent.SetObjectState");

		UWorldStateComponent_SetObjectState_Params params{};
		params.bEnabled = bEnabled;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC400
	 * 		Name   -> Function fnaf9.WorldStateComponent.HasValidSaveName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWorldStateComponent::HasValidSaveName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateComponent.HasValidSaveName");

		UWorldStateComponent_HasValidSaveName_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBF40
	 * 		Name   -> Function fnaf9.WorldStateComponent.GetObjectState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWorldStateComponent::GetObjectState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateComponent.GetObjectState");

		UWorldStateComponent_GetObjectState_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWorldStateComponent.StaticClass
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
	 * 		Offset -> 0x00BB90C0
	 * 		Name   -> Function fnaf9.StoreActiveStateOnTrigger.OnActorTriggered
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStoreActiveStateOnTrigger::OnActorTriggered(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StoreActiveStateOnTrigger.OnActorTriggered");

		UStoreActiveStateOnTrigger_OnActorTriggered_Params params{};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStoreActiveStateOnTrigger.StaticClass
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
	 * 		Offset -> 0x00BB8F40
	 * 		Name   -> Function fnaf9.StreamingLevelUtil.LoadStreamingLevelsAtLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnableVolumesAfterLoad                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UStreamingLevelUtil::STATIC_LoadStreamingLevelsAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation, bool bEnableVolumesAfterLoad, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.LoadStreamingLevelsAtLocation");

		UStreamingLevelUtil_LoadStreamingLevelsAtLocation_Params params{};
		params.WorldContextObject = WorldContextObject;
		params.WorldLocation = WorldLocation;
		params.bEnableVolumesAfterLoad = bEnableVolumesAfterLoad;
		params.LatentInfo = LatentInfo;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB7F80
	 * 		Name   -> Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumesAtLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ALevelStreamingVolume*> UStreamingLevelUtil::STATIC_GetAllStreamingVolumesAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumesAtLocation");

		UStreamingLevelUtil_GetAllStreamingVolumesAtLocation_Params params{};
		params.WorldContextObject = WorldContextObject;
		params.WorldLocation = WorldLocation;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB7EB0
	 * 		Name   -> Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ALevelStreamingVolume*> UStreamingLevelUtil::STATIC_GetAllStreamingVolumes(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumes");

		UStreamingLevelUtil_GetAllStreamingVolumes_Params params{};
		params.WorldContextObject = WorldContextObject;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB7DA0
	 * 		Name   -> Function fnaf9.StreamingLevelUtil.GetAllStreamingLevelsAtLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ULevelStreaming*> UStreamingLevelUtil::STATIC_GetAllStreamingLevelsAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.GetAllStreamingLevelsAtLocation");

		UStreamingLevelUtil_GetAllStreamingLevelsAtLocation_Params params{};
		params.WorldContextObject = WorldContextObject;
		params.WorldLocation = WorldLocation;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB7CD0
	 * 		Name   -> Function fnaf9.StreamingLevelUtil.GetAllStreamingLevels
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ULevelStreaming*> UStreamingLevelUtil::STATIC_GetAllStreamingLevels(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.GetAllStreamingLevels");

		UStreamingLevelUtil_GetAllStreamingLevels_Params params{};
		params.WorldContextObject = WorldContextObject;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB7B70
	 * 		Name   -> Function fnaf9.StreamingLevelUtil.GetAllLevels
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ULevel*> UStreamingLevelUtil::STATIC_GetAllLevels(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.GetAllLevels");

		UStreamingLevelUtil_GetAllLevels_Params params{};
		params.WorldContextObject = WorldContextObject;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB7A20
	 * 		Name   -> Function fnaf9.StreamingLevelUtil.EnableAllStreamingVolumes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStreamingLevelUtil::STATIC_EnableAllStreamingVolumes(class UObject* WorldContextObject, bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.EnableAllStreamingVolumes");

		UStreamingLevelUtil_EnableAllStreamingVolumes_Params params{};
		params.WorldContextObject = WorldContextObject;
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStreamingLevelUtil.StaticClass
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
	 * 		Offset -> 0x00BB9E10
	 * 		Name   -> Function fnaf9.StreamingLoadComponent.StartAsyncLoadForLocation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStreamingLoadComponent::StartAsyncLoadForLocation(const struct FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLoadComponent.StartAsyncLoadForLocation");

		UStreamingLoadComponent_StartAsyncLoadForLocation_Params params{};
		params.WorldLocation = WorldLocation;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB9250
	 * 		Name   -> Function fnaf9.StreamingLoadComponent.OnLevelLoaded
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UStreamingLoadComponent::OnLevelLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLoadComponent.OnLevelLoaded");

		UStreamingLoadComponent_OnLevelLoaded_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8F00
	 * 		Name   -> Function fnaf9.StreamingLoadComponent.IsStreamingLevels
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UStreamingLoadComponent::IsStreamingLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLoadComponent.IsStreamingLevels");

		UStreamingLoadComponent_IsStreamingLevels_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB7AE0
	 * 		Name   -> Function fnaf9.StreamingLoadComponent.EnableAllStreamingVolumes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStreamingLoadComponent::EnableAllStreamingVolumes(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLoadComponent.EnableAllStreamingVolumes");

		UStreamingLoadComponent_EnableAllStreamingVolumes_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStreamingLoadComponent.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASurvivalDoorConditionManager.StaticClass
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
	 * 		Offset -> 0x00BB93F0
	 * 		Name   -> Function fnaf9.SurvivalItemPackage.OnSetup
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void ASurvivalItemPackage::OnSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemPackage.OnSetup");

		ASurvivalItemPackage_OnSetup_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8CD0
	 * 		Name   -> Function fnaf9.SurvivalItemPackage.HasCollected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ASurvivalItemPackage::HasCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemPackage.HasCollected");

		ASurvivalItemPackage_HasCollected_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB7A00
	 * 		Name   -> Function fnaf9.SurvivalItemPackage.Collect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ASurvivalItemPackage::Collect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemPackage.Collect");

		ASurvivalItemPackage_Collect_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASurvivalItemPackage.StaticClass
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
	 * 		Offset -> 0x00BB95C0
	 * 		Name   -> Function fnaf9.SurvivalItemRandomizer.RandomizeSurvivalItems
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSpawnAllLocations                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASurvivalItemRandomizer::RandomizeSurvivalItems(bool bSpawnAllLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.RandomizeSurvivalItems");

		ASurvivalItemRandomizer_RandomizeSurvivalItems_Params params{};
		params.bSpawnAllLocations = bSpawnAllLocations;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8D00
	 * 		Name   -> Function fnaf9.SurvivalItemRandomizer.HasCollected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ASurvivalItemPackage*                        Package                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ASurvivalItemRandomizer::HasCollected(class ASurvivalItemPackage* Package)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.HasCollected");

		ASurvivalItemRandomizer_HasCollected_Params params{};
		params.Package = Package;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8B90
	 * 		Name   -> Function fnaf9.SurvivalItemRandomizer.GetYellowScore
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            OutCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutPointsPerPackage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutScore                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASurvivalItemRandomizer::GetYellowScore(int32_t* OutCount, int32_t* OutPointsPerPackage, int32_t* OutScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.GetYellowScore");

		ASurvivalItemRandomizer_GetYellowScore_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutCount != nullptr)
			*OutCount = params.OutCount;
		if (OutPointsPerPackage != nullptr)
			*OutPointsPerPackage = params.OutPointsPerPackage;
		if (OutScore != nullptr)
			*OutScore = params.OutScore;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB89A0
	 * 		Name   -> Function fnaf9.SurvivalItemRandomizer.GetRedScore
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            OutCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutPointsPerPackage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutScore                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASurvivalItemRandomizer::GetRedScore(int32_t* OutCount, int32_t* OutPointsPerPackage, int32_t* OutScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.GetRedScore");

		ASurvivalItemRandomizer_GetRedScore_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutCount != nullptr)
			*OutCount = params.OutCount;
		if (OutPointsPerPackage != nullptr)
			*OutPointsPerPackage = params.OutPointsPerPackage;
		if (OutScore != nullptr)
			*OutScore = params.OutScore;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8860
	 * 		Name   -> Function fnaf9.SurvivalItemRandomizer.GetPurpleScore
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            OutCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutPointsPerPackage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutScore                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASurvivalItemRandomizer::GetPurpleScore(int32_t* OutCount, int32_t* OutPointsPerPackage, int32_t* OutScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.GetPurpleScore");

		ASurvivalItemRandomizer_GetPurpleScore_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutCount != nullptr)
			*OutCount = params.OutCount;
		if (OutPointsPerPackage != nullptr)
			*OutPointsPerPackage = params.OutPointsPerPackage;
		if (OutScore != nullptr)
			*OutScore = params.OutScore;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8720
	 * 		Name   -> Function fnaf9.SurvivalItemRandomizer.GetPinkScore
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            OutCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutPointsPerPackage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutScore                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASurvivalItemRandomizer::GetPinkScore(int32_t* OutCount, int32_t* OutPointsPerPackage, int32_t* OutScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.GetPinkScore");

		ASurvivalItemRandomizer_GetPinkScore_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutCount != nullptr)
			*OutCount = params.OutCount;
		if (OutPointsPerPackage != nullptr)
			*OutPointsPerPackage = params.OutPointsPerPackage;
		if (OutScore != nullptr)
			*OutScore = params.OutScore;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB86A0
	 * 		Name   -> Function fnaf9.SurvivalItemRandomizer.GetPackagesSortedByDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class ASurvivalItemPackage*> ASurvivalItemRandomizer::GetPackagesSortedByDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.GetPackagesSortedByDistance");

		ASurvivalItemRandomizer_GetPackagesSortedByDistance_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB84B0
	 * 		Name   -> Function fnaf9.SurvivalItemRandomizer.GetGreenScore
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            OutCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutPointsPerPackage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutScore                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASurvivalItemRandomizer::GetGreenScore(int32_t* OutCount, int32_t* OutPointsPerPackage, int32_t* OutScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.GetGreenScore");

		ASurvivalItemRandomizer_GetGreenScore_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutCount != nullptr)
			*OutCount = params.OutCount;
		if (OutPointsPerPackage != nullptr)
			*OutPointsPerPackage = params.OutPointsPerPackage;
		if (OutScore != nullptr)
			*OutScore = params.OutScore;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BB8370
	 * 		Name   -> Function fnaf9.SurvivalItemRandomizer.GetGoldScore
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            OutCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutPointsPerPackage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutScore                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASurvivalItemRandomizer::GetGoldScore(int32_t* OutCount, int32_t* OutPointsPerPackage, int32_t* OutScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.GetGoldScore");

		ASurvivalItemRandomizer_GetGoldScore_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutCount != nullptr)
			*OutCount = params.OutCount;
		if (OutPointsPerPackage != nullptr)
			*OutPointsPerPackage = params.OutPointsPerPackage;
		if (OutScore != nullptr)
			*OutScore = params.OutScore;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASurvivalItemRandomizer.StaticClass
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASurvivalRandomItem.StaticClass
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
	 * 		Offset -> 0x00BBD580
	 * 		Name   -> Function fnaf9.UpdateMissionComponent.UpdateMission
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUpdateMissionComponent::UpdateMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.UpdateMissionComponent.UpdateMission");

		UUpdateMissionComponent_UpdateMission_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC550
	 * 		Name   -> Function fnaf9.UpdateMissionComponent.IsMissionFinished
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUpdateMissionComponent::IsMissionFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.UpdateMissionComponent.IsMissionFinished");

		UUpdateMissionComponent_IsMissionFinished_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC3B0
	 * 		Name   -> Function fnaf9.UpdateMissionComponent.HasMetCondition
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UUpdateMissionComponent::HasMetCondition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.UpdateMissionComponent.HasMetCondition");

		UUpdateMissionComponent_HasMetCondition_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBF20
	 * 		Name   -> Function fnaf9.UpdateMissionComponent.GetMissionName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UUpdateMissionComponent::GetMissionName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.UpdateMissionComponent.GetMissionName");

		UUpdateMissionComponent_GetMissionName_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUpdateMissionComponent.StaticClass
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
	 * 		Offset -> 0x00BBD310
	 * 		Name   -> Function fnaf9.VisualSourceComponent.SetVisualOffsetLocations
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVector>                             InVisualOffsets                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVisualSourceComponent::SetVisualOffsetLocations(TArray<struct FVector> InVisualOffsets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.SetVisualOffsetLocations");

		UVisualSourceComponent_SetVisualOffsetLocations_Params params{};
		params.InVisualOffsets = InVisualOffsets;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBD240
	 * 		Name   -> Function fnaf9.VisualSourceComponent.SetVisualOffset
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     visualOffset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVisualSourceComponent::SetVisualOffset(int32_t PointIndex, const struct FVector& visualOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.SetVisualOffset");

		UVisualSourceComponent_SetVisualOffset_Params params{};
		params.PointIndex = PointIndex;
		params.visualOffset = visualOffset;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBD0B0
	 * 		Name   -> Function fnaf9.VisualSourceComponent.SetSourceVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVisualSourceComponent::SetSourceVisibility(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.SetSourceVisibility");

		UVisualSourceComponent_SetSourceVisibility_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC710
	 * 		Name   -> Function fnaf9.VisualSourceComponent.RemoveVisualOffset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVisualSourceComponent::RemoveVisualOffset(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.RemoveVisualOffset");

		UVisualSourceComponent_RemoveVisualOffset_Params params{};
		params.PointIndex = PointIndex;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC360
	 * 		Name   -> Function fnaf9.VisualSourceComponent.GetVisualOffsets
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FVector> UVisualSourceComponent::GetVisualOffsets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.GetVisualOffsets");

		UVisualSourceComponent_GetVisualOffsets_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC310
	 * 		Name   -> Function fnaf9.VisualSourceComponent.GetVisualLocations
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FVector> UVisualSourceComponent::GetVisualLocations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.GetVisualLocations");

		UVisualSourceComponent_GetVisualLocations_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC2B0
	 * 		Name   -> Function fnaf9.VisualSourceComponent.GetSourceVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UVisualSourceComponent::GetSourceVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.GetSourceVisibility");

		UVisualSourceComponent_GetSourceVisibility_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBE70
	 * 		Name   -> Function fnaf9.VisualSourceComponent.GetDetectedVisualLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UVisualSourceComponent::GetDetectedVisualLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.GetDetectedVisualLocation");

		UVisualSourceComponent_GetDetectedVisualLocation_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBC00
	 * 		Name   -> Function fnaf9.VisualSourceComponent.DetectTheSource
	 * 		Flags  -> (Final, Native, Public, HasDefaults)
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

		UVisualSourceComponent_DetectTheSource_Params params{};
		params.VSLocation = VSLocation;
		params.passed_HitActor = passed_HitActor;
		params.passed_bVisible = passed_bVisible;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVisualSourceComponent.StaticClass
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
	 * 		Offset -> 0x00BBCE00
	 * 		Name   -> Function fnaf9.WorldStateHandlerComponent.SetObjectState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateHandlerComponent::SetObjectState(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateHandlerComponent.SetObjectState");

		UWorldStateHandlerComponent_SetObjectState_Params params{};
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC5C0
	 * 		Name   -> Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedHandle
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class FName                                        ObjectName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ObjectState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateHandlerComponent::OnObjectStateChangedHandle(const class FName& ObjectName, bool ObjectState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedHandle");

		UWorldStateHandlerComponent_OnObjectStateChangedHandle_Params params{};
		params.ObjectName = ObjectName;
		params.ObjectState = ObjectState;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF910
	 * 		Name   -> Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedEvent
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UWorldStateHandlerComponent::OnObjectStateChangedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedEvent");

		UWorldStateHandlerComponent_OnObjectStateChangedEvent_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC450
	 * 		Name   -> Function fnaf9.WorldStateHandlerComponent.HasValidSaveName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWorldStateHandlerComponent::HasValidSaveName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateHandlerComponent.HasValidSaveName");

		UWorldStateHandlerComponent_HasValidSaveName_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBF70
	 * 		Name   -> Function fnaf9.WorldStateHandlerComponent.GetObjectState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWorldStateHandlerComponent::GetObjectState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateHandlerComponent.GetObjectState");

		UWorldStateHandlerComponent_GetObjectState_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWorldStateHandlerComponent.StaticClass
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
	 * 		Offset -> 0x00BBD460
	 * 		Name   -> Function fnaf9.WorldStateSystem.StartMinigame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MinigameName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		fnaf9_EFNAFGameState                               GameState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      MinigameActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::StartMinigame(const class FString& MinigameName, fnaf9_EFNAFGameState GameState, class AActor* MinigameActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.StartMinigame");

		UWorldStateSystem_StartMinigame_Params params{};
		params.MinigameName = MinigameName;
		params.GameState = GameState;
		params.MinigameActor = MinigameActor;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBD3C0
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetWorldState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_EFNAFGameState                               NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetWorldState(fnaf9_EFNAFGameState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetWorldState");

		UWorldStateSystem_SetWorldState_Params params{};
		params.NewState = NewState;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBD440
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetupNewGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWorldStateSystem::SetupNewGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetupNewGame");

		UWorldStateSystem_SetupNewGame_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBD1C0
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetSurvivalMaxDeaths
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            MaxDeaths                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetSurvivalMaxDeaths(int32_t MaxDeaths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetSurvivalMaxDeaths");

		UWorldStateSystem_SetSurvivalMaxDeaths_Params params{};
		params.MaxDeaths = MaxDeaths;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBD140
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetSurvivalDifficulty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		fnaf9_ESurvivalDifficulty                          Difficulty                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetSurvivalDifficulty(fnaf9_ESurvivalDifficulty Difficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetSurvivalDifficulty");

		UWorldStateSystem_SetSurvivalDifficulty_Params params{};
		params.Difficulty = Difficulty;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBD030
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetRandomSeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetRandomSeed(int32_t Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetRandomSeed");

		UWorldStateSystem_SetRandomSeed_Params params{};
		params.Seed = Seed;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBCFB0
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetPowerStationAvailable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAvailable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetPowerStationAvailable(bool bAvailable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetPowerStationAvailable");

		UWorldStateSystem_SetPowerStationAvailable_Params params{};
		params.bAvailable = bAvailable;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBCF30
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetPlayerInPowerStation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InPowerStationID                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetPlayerInPowerStation(int32_t InPowerStationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetPlayerInPowerStation");

		UWorldStateSystem_SetPlayerInPowerStation_Params params{};
		params.InPowerStationID = InPowerStationID;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBCEB0
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetPlayerInFreddy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInFreddy                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetPlayerInFreddy(bool bInFreddy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetPlayerInFreddy");

		UWorldStateSystem_SetPlayerInFreddy_Params params{};
		params.bInFreddy = bInFreddy;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBCE90
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetPlayerHasUsedHidingSpot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWorldStateSystem::SetPlayerHasUsedHidingSpot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetPlayerHasUsedHidingSpot");

		UWorldStateSystem_SetPlayerHasUsedHidingSpot_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBCCF0
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetFreddySick
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsSick                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetFreddySick(bool bIsSick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetFreddySick");

		UWorldStateSystem_SetFreddySick_Params params{};
		params.bIsSick = bIsSick;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBCC70
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetFreddyPatrolPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            PatrolPointIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetFreddyPatrolPoint(int32_t PatrolPointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetFreddyPatrolPoint");

		UWorldStateSystem_SetFreddyPatrolPoint_Params params{};
		params.PatrolPointIndex = PatrolPointIndex;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBCB80
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetCurrentActivityId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InActivityId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetCurrentActivityId(const class FString& InActivityId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetCurrentActivityId");

		UWorldStateSystem_SetCurrentActivityId_Params params{};
		params.InActivityId = InActivityId;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBCB00
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetCanShowInstructionCards
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bCanShowInstructionCards                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetCanShowInstructionCards(bool bCanShowInstructionCards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetCanShowInstructionCards");

		UWorldStateSystem_SetCanShowInstructionCards_Params params{};
		params.bCanShowInstructionCards = bCanShowInstructionCards;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBCA80
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetCanEnterExitFreddy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bCanEnterExit                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetCanEnterExitFreddy(bool bCanEnterExit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetCanEnterExitFreddy");

		UWorldStateSystem_SetCanEnterExitFreddy_Params params{};
		params.bCanEnterExit = bCanEnterExit;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBCA00
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetCanCallFreddy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bCanCall                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetCanCallFreddy(bool bCanCall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetCanCallFreddy");

		UWorldStateSystem_SetCanCallFreddy_Params params{};
		params.bCanCall = bCanCall;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC940
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetArcadeState
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FArcadeSaveData                             InArcadeState                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetArcadeState(const struct FArcadeSaveData& InArcadeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetArcadeState");

		UWorldStateSystem_SetArcadeState_Params params{};
		params.InArcadeState = InArcadeState;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC790
	 * 		Name   -> Function fnaf9.WorldStateSystem.SetAIState
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FFNAFAISaveData                             InAIState                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::SetAIState(const struct FFNAFAISaveData& InAIState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetAIState");

		UWorldStateSystem_SetAIState_Params params{};
		params.InAIState = InAIState;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC690
	 * 		Name   -> Function fnaf9.WorldStateSystem.RemoveActivated
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ActivatableName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::RemoveActivated(const class FName& ActivatableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.RemoveActivated");

		UWorldStateSystem_RemoveActivated_Params params{};
		params.ActivatableName = ActivatableName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC5A0
	 * 		Name   -> Function fnaf9.WorldStateSystem.IsPowerStationAvailable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWorldStateSystem::IsPowerStationAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.IsPowerStationAvailable");

		UWorldStateSystem_IsPowerStationAvailable_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC580
	 * 		Name   -> Function fnaf9.WorldStateSystem.IsPlayerInFreddy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWorldStateSystem::IsPlayerInFreddy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.IsPlayerInFreddy");

		UWorldStateSystem_IsPlayerInFreddy_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC530
	 * 		Name   -> Function fnaf9.WorldStateSystem.IsFreddySick
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWorldStateSystem::IsFreddySick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.IsFreddySick");

		UWorldStateSystem_IsFreddySick_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC4A0
	 * 		Name   -> Function fnaf9.WorldStateSystem.IsActivated
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        ActivatableName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UWorldStateSystem::IsActivated(const class FName& ActivatableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.IsActivated");

		UWorldStateSystem_IsActivated_Params params{};
		params.ActivatableName = ActivatableName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC3E0
	 * 		Name   -> Function fnaf9.WorldStateSystem.HasPlayerUsedHidingSpot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWorldStateSystem::HasPlayerUsedHidingSpot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.HasPlayerUsedHidingSpot");

		UWorldStateSystem_HasPlayerUsedHidingSpot_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BAF180
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetWorldState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	fnaf9_EFNAFGameState UWorldStateSystem::GetWorldState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetWorldState");

		UWorldStateSystem_GetWorldState_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC2F0
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetSurvivalMaxDeaths
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UWorldStateSystem::GetSurvivalMaxDeaths()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetSurvivalMaxDeaths");

		UWorldStateSystem_GetSurvivalMaxDeaths_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC2D0
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetSurvivalDifficulty
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	fnaf9_ESurvivalDifficulty UWorldStateSystem::GetSurvivalDifficulty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetSurvivalDifficulty");

		UWorldStateSystem_GetSurvivalDifficulty_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC1D0
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetSavedPlayerLocationAndRotation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     OutWorldLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    OutWorldRotation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::GetSavedPlayerLocationAndRotation(struct FVector* OutWorldLocation, struct FRotator* OutWorldRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetSavedPlayerLocationAndRotation");

		UWorldStateSystem_GetSavedPlayerLocationAndRotation_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutWorldLocation != nullptr)
			*OutWorldLocation = params.OutWorldLocation;
		if (OutWorldRotation != nullptr)
			*OutWorldRotation = params.OutWorldRotation;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBC0A0
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetSavedFreddyLocationAndRotation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
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

		UWorldStateSystem_GetSavedFreddyLocationAndRotation_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
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
	 * 		Offset -> 0x00BBC080
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetRandomSeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UWorldStateSystem::GetRandomSeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetRandomSeed");

		UWorldStateSystem_GetRandomSeed_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBFA0
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetPowerStationInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               OutPlayerInPowerStation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutPowerStationID                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::GetPowerStationInfo(bool* OutPlayerInPowerStation, int32_t* OutPowerStationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetPowerStationInfo");

		UWorldStateSystem_GetPowerStationInfo_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutPlayerInPowerStation != nullptr)
			*OutPlayerInPowerStation = params.OutPlayerInPowerStation;
		if (OutPowerStationID != nullptr)
			*OutPowerStationID = params.OutPowerStationID;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBEF0
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetLivesRemaining
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UWorldStateSystem::GetLivesRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetLivesRemaining");

		UWorldStateSystem_GetLivesRemaining_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBED0
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetFreddyPawn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AFNAFBasePlayerCharacter* UWorldStateSystem::GetFreddyPawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetFreddyPawn");

		UWorldStateSystem_GetFreddyPawn_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBEB0
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetFreddyPatrolPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UWorldStateSystem::GetFreddyPatrolPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetFreddyPatrolPoint");

		UWorldStateSystem_GetFreddyPatrolPoint_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBE50
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetCurrentSpottedCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UWorldStateSystem::GetCurrentSpottedCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetCurrentSpottedCount");

		UWorldStateSystem_GetCurrentSpottedCount_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBE30
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetCurrentMinigameActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* UWorldStateSystem::GetCurrentMinigameActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetCurrentMinigameActor");

		UWorldStateSystem_GetCurrentMinigameActor_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBE00
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetCurrentMinigame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UWorldStateSystem::GetCurrentMinigame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetCurrentMinigame");

		UWorldStateSystem_GetCurrentMinigame_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBDE0
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetCurrentDeathCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UWorldStateSystem::GetCurrentDeathCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetCurrentDeathCount");

		UWorldStateSystem_GetCurrentDeathCount_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBDB0
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetCurrentActivityId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UWorldStateSystem::GetCurrentActivityId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetCurrentActivityId");

		UWorldStateSystem_GetCurrentActivityId_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBD70
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetArcadeState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FArcadeSaveData UWorldStateSystem::GetArcadeState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetArcadeState");

		UWorldStateSystem_GetArcadeState_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBD40
	 * 		Name   -> Function fnaf9.WorldStateSystem.GetAIState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FFNAFAISaveData UWorldStateSystem::GetAIState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetAIState");

		UWorldStateSystem_GetAIState_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBD20
	 * 		Name   -> Function fnaf9.WorldStateSystem.EndMinigame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWorldStateSystem::EndMinigame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.EndMinigame");

		UWorldStateSystem_EndMinigame_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBB70
	 * 		Name   -> Function fnaf9.WorldStateSystem.DebugSetPlayerHasUsedHidingSpot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               HasHid                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::DebugSetPlayerHasUsedHidingSpot(bool HasHid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.DebugSetPlayerHasUsedHidingSpot");

		UWorldStateSystem_DebugSetPlayerHasUsedHidingSpot_Params params{};
		params.HasHid = HasHid;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBB50
	 * 		Name   -> Function fnaf9.WorldStateSystem.ClearPlayerInPowerStation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWorldStateSystem::ClearPlayerInPowerStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.ClearPlayerInPowerStation");

		UWorldStateSystem_ClearPlayerInPowerStation_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBA70
	 * 		Name   -> Function fnaf9.WorldStateSystem.CanStartMinigame
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               CanStart                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		fnaf9_ECantStartMinigameReason                     reason                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::CanStartMinigame(bool* CanStart, fnaf9_ECantStartMinigameReason* reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.CanStartMinigame");

		UWorldStateSystem_CanStartMinigame_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (CanStart != nullptr)
			*CanStart = params.CanStart;
		if (reason != nullptr)
			*reason = params.reason;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBA50
	 * 		Name   -> Function fnaf9.WorldStateSystem.CanShowInstructionCards
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWorldStateSystem::CanShowInstructionCards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.CanShowInstructionCards");

		UWorldStateSystem_CanShowInstructionCards_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBA30
	 * 		Name   -> Function fnaf9.WorldStateSystem.CanEnterExitFreddy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWorldStateSystem::CanEnterExitFreddy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.CanEnterExitFreddy");

		UWorldStateSystem_CanEnterExitFreddy_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBBA10
	 * 		Name   -> Function fnaf9.WorldStateSystem.CanCallFreddy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWorldStateSystem::CanCallFreddy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.CanCallFreddy");

		UWorldStateSystem_CanCallFreddy_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBB9F0
	 * 		Name   -> Function fnaf9.WorldStateSystem.AddSpotted
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWorldStateSystem::AddSpotted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.AddSpotted");

		UWorldStateSystem_AddSpotted_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBB960
	 * 		Name   -> Function fnaf9.WorldStateSystem.AddDeath
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            OutRemainingLives                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::AddDeath(int32_t* OutRemainingLives)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.AddDeath");

		UWorldStateSystem_AddDeath_Params params{};

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutRemainingLives != nullptr)
			*OutRemainingLives = params.OutRemainingLives;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BBB8E0
	 * 		Name   -> Function fnaf9.WorldStateSystem.AddActivated
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ActivatableName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWorldStateSystem::AddActivated(const class FName& ActivatableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.AddActivated");

		UWorldStateSystem_AddActivated_Params params{};
		params.ActivatableName = ActivatableName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWorldStateSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldStateSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class fnaf9.WorldStateSystem");
		return ptr;
	}

}

