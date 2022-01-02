// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.AIHiderInterface.ExitHideMode
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      HideActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIHiderInterface::ExitHideMode(class AActor* HideActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIHiderInterface.ExitHideMode");

	UAIHiderInterface_ExitHideMode_Params params {};
	params.HideActor = HideActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.AIHiderInterface.EnterHideMode
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      HideActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIHiderInterface::EnterHideMode(class AActor* HideActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIHiderInterface.EnterHideMode");

	UAIHiderInterface_EnterHideMode_Params params {};
	params.HideActor = HideActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B98760
//		Name   -> Function fnaf9.AIManagementSystem.UnregisterSeekerPath
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIManagementSystem::UnregisterSeekerPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.UnregisterSeekerPath");

	UAIManagementSystem_UnregisterSeekerPath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B986C0
//		Name   -> Function fnaf9.AIManagementSystem.UnRegisterAI
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::UnRegisterAI(class APawn* AIPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.UnRegisterAI");

	UAIManagementSystem_UnRegisterAI_Params params {};
	params.AIPawn = AIPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B98740
//		Name   -> Function fnaf9.AIManagementSystem.UnpauseManager
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIManagementSystem::UnpauseManager()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.UnpauseManager");

	UAIManagementSystem_UnpauseManager_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B986A0
//		Name   -> Function fnaf9.AIManagementSystem.StoreEndoStates
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIManagementSystem::StoreEndoStates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.StoreEndoStates");

	UAIManagementSystem_StoreEndoStates_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B98680
//		Name   -> Function fnaf9.AIManagementSystem.StartManager
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIManagementSystem::StartManager()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.StartManager");

	UAIManagementSystem_StartManager_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B98520
//		Name   -> Function fnaf9.AIManagementSystem.SpawnVannyOrVanessa
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               bSpawnVanny                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bOutSpawned                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentActionInfo                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UAIManagementSystem::SpawnVannyOrVanessa(bool bSpawnVanny, bool* bOutSpawned, const struct FLatentActionInfo& LatentActionInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnVannyOrVanessa");

	UAIManagementSystem_SpawnVannyOrVanessa_Params params {};
	params.bSpawnVanny = bSpawnVanny;
	params.LatentActionInfo = LatentActionInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bOutSpawned != nullptr)
		*bOutSpawned = params.bOutSpawned;

}


// Function:
//		Offset -> 0x00B98410
//		Name   -> Function fnaf9.AIManagementSystem.SpawnSpecificAIAtSpawnPoint
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AFNAFAISpawnPoint*                           SpawnPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ForceShattered                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::SpawnSpecificAIAtSpawnPoint(class AFNAFAISpawnPoint* SpawnPoint, fnaf9_EFNAFAISpawnType AIType, bool ForceShattered)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnSpecificAIAtSpawnPoint");

	UAIManagementSystem_SpawnSpecificAIAtSpawnPoint_Params params {};
	params.SpawnPoint = SpawnPoint;
	params.AIType = AIType;
	params.ForceShattered = ForceShattered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B98260
//		Name   -> Function fnaf9.AIManagementSystem.SpawnAIWithTransformAndPath
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bForceShattered                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  SpawnTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FName                                       PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UAIManagementSystem::SpawnAIWithTransformAndPath(fnaf9_EFNAFAISpawnType AIType, bool bForceShattered, const struct FTransform& SpawnTransform, const struct FName& PathName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIWithTransformAndPath");

	UAIManagementSystem_SpawnAIWithTransformAndPath_Params params {};
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


// Function:
//		Offset -> 0x00B97FE0
//		Name   -> Function fnaf9.AIManagementSystem.SpawnAITypeWithTransformSafe
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  SpawnTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ForceShattered                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Engine_ESpawnActorCollisionHandlingMethod          CollisionOverrideMethod                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bForceRespawn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UAIManagementSystem::SpawnAITypeWithTransformSafe(fnaf9_EFNAFAISpawnType AIType, const struct FTransform& SpawnTransform, bool ForceShattered, bool* success, Engine_ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, class AActor* Owner, bool bForceRespawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAITypeWithTransformSafe");

	UAIManagementSystem_SpawnAITypeWithTransformSafe_Params params {};
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


// Function:
//		Offset -> 0x00B97DE0
//		Name   -> Function fnaf9.AIManagementSystem.SpawnAITypeWithTransform
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  SpawnTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ForceShattered                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Engine_ESpawnActorCollisionHandlingMethod          CollisionOverrideMethod                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UAIManagementSystem::SpawnAITypeWithTransform(fnaf9_EFNAFAISpawnType AIType, const struct FTransform& SpawnTransform, bool ForceShattered, Engine_ESpawnActorCollisionHandlingMethod CollisionOverrideMethod, class AActor* Owner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAITypeWithTransform");

	UAIManagementSystem_SpawnAITypeWithTransform_Params params {};
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


// Function:
//		Offset -> 0x00B97CC0
//		Name   -> Function fnaf9.AIManagementSystem.SpawnAITypeAtLocation
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     SpawnLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ForceShattered                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UAIManagementSystem::SpawnAITypeAtLocation(fnaf9_EFNAFAISpawnType AIType, const struct FVector& SpawnLocation, bool ForceShattered)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAITypeAtLocation");

	UAIManagementSystem_SpawnAITypeAtLocation_Params params {};
	params.AIType = AIType;
	params.SpawnLocation = SpawnLocation;
	params.ForceShattered = ForceShattered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B97BA0
//		Name   -> Function fnaf9.AIManagementSystem.SpawnAIOnPathNearLocation
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UAIManagementSystem::SpawnAIOnPathNearLocation(fnaf9_EFNAFAISpawnType AIType, const struct FVector& Location, const struct FName& PathName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIOnPathNearLocation");

	UAIManagementSystem_SpawnAIOnPathNearLocation_Params params {};
	params.AIType = AIType;
	params.Location = Location;
	params.PathName = PathName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B97A90
//		Name   -> Function fnaf9.AIManagementSystem.SpawnAIOnPath
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bForceShattered                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UAIManagementSystem::SpawnAIOnPath(fnaf9_EFNAFAISpawnType AIType, bool bForceShattered, const struct FName& PathName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIOnPath");

	UAIManagementSystem_SpawnAIOnPath_Params params {};
	params.AIType = AIType;
	params.bForceShattered = bForceShattered;
	params.PathName = PathName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B97A70
//		Name   -> Function fnaf9.AIManagementSystem.SpawnAINearPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIManagementSystem::SpawnAINearPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAINearPlayer");

	UAIManagementSystem_SpawnAINearPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B97A50
//		Name   -> Function fnaf9.AIManagementSystem.SpawnAIFar
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIManagementSystem::SpawnAIFar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIFar");

	UAIManagementSystem_SpawnAIFar_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B97980
//		Name   -> Function fnaf9.AIManagementSystem.SpawnAIAtSpawnPoint
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AFNAFAISpawnPoint*                           SpawnPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bForceShattered                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::SpawnAIAtSpawnPoint(class AFNAFAISpawnPoint* SpawnPoint, bool bForceShattered)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIAtSpawnPoint");

	UAIManagementSystem_SpawnAIAtSpawnPoint_Params params {};
	params.SpawnPoint = SpawnPoint;
	params.bForceShattered = bForceShattered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B97900
//		Name   -> Function fnaf9.AIManagementSystem.SpawnAIAtDistance
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::SpawnAIAtDistance(float Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SpawnAIAtDistance");

	UAIManagementSystem_SpawnAIAtDistance_Params params {};
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B97870
//		Name   -> Function fnaf9.AIManagementSystem.SetWorldSpawnEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::SetWorldSpawnEnabled(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetWorldSpawnEnabled");

	UAIManagementSystem_SetWorldSpawnEnabled_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B977E0
//		Name   -> Function fnaf9.AIManagementSystem.SetVanessaSpawnEnable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::SetVanessaSpawnEnable(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetVanessaSpawnEnable");

	UAIManagementSystem_SetVanessaSpawnEnable_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B97760
//		Name   -> Function fnaf9.AIManagementSystem.SetUseStagedSpawns
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::SetUseStagedSpawns(bool enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetUseStagedSpawns");

	UAIManagementSystem_SetUseStagedSpawns_Params params {};
	params.enable = enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B976D0
//		Name   -> Function fnaf9.AIManagementSystem.SetSpawningEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::SetSpawningEnabled(bool enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetSpawningEnabled");

	UAIManagementSystem_SetSpawningEnabled_Params params {};
	params.enable = enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B97620
//		Name   -> Function fnaf9.AIManagementSystem.SetExpectedAI
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FAnimatronicExpectedData>            AITypes                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::SetExpectedAI(TArray<struct FAnimatronicExpectedData> AITypes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetExpectedAI");

	UAIManagementSystem_SetExpectedAI_Params params {};
	params.AITypes = AITypes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B97600
//		Name   -> Function fnaf9.AIManagementSystem.SetAllAIExpected
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIManagementSystem::SetAllAIExpected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetAllAIExpected");

	UAIManagementSystem_SetAllAIExpected_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B97570
//		Name   -> Function fnaf9.AIManagementSystem.SetAITeleportEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::SetAITeleportEnabled(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SetAITeleportEnabled");

	UAIManagementSystem_SetAITeleportEnabled_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B97450
//		Name   -> Function fnaf9.AIManagementSystem.SendVanessaAlert
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumberToAlert                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::SendVanessaAlert(TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int NumberToAlert)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SendVanessaAlert");

	UAIManagementSystem_SendVanessaAlert_Params params {};
	params.TypesToAlert = TypesToAlert;
	params.NumberToAlert = NumberToAlert;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B972E0
//		Name   -> Function fnaf9.AIManagementSystem.SendGeneralAlert
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     AlertLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumberToAlert                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::SendGeneralAlert(const struct FVector& AlertLocation, TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int NumberToAlert)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.SendGeneralAlert");

	UAIManagementSystem_SendGeneralAlert_Params params {};
	params.AlertLocation = AlertLocation;
	params.TypesToAlert = TypesToAlert;
	params.NumberToAlert = NumberToAlert;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B972C0
//		Name   -> Function fnaf9.AIManagementSystem.RespawnEndos
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIManagementSystem::RespawnEndos()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RespawnEndos");

	UAIManagementSystem_RespawnEndos_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B972A0
//		Name   -> Function fnaf9.AIManagementSystem.RespawnAnimatronics
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIManagementSystem::RespawnAnimatronics()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RespawnAnimatronics");

	UAIManagementSystem_RespawnAnimatronics_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B97280
//		Name   -> Function fnaf9.AIManagementSystem.RespawnAllAI
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIManagementSystem::RespawnAllAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RespawnAllAI");

	UAIManagementSystem_RespawnAllAI_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B97260
//		Name   -> Function fnaf9.AIManagementSystem.Reset
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIManagementSystem::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.Reset");

	UAIManagementSystem_Reset_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B971E0
//		Name   -> Function fnaf9.AIManagementSystem.RemoveExpectedAI
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::RemoveExpectedAI(fnaf9_EFNAFAISpawnType AIType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RemoveExpectedAI");

	UAIManagementSystem_RemoveExpectedAI_Params params {};
	params.AIType = AIType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B97160
//		Name   -> Function fnaf9.AIManagementSystem.RemoveCharacterByType
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::RemoveCharacterByType(fnaf9_EFNAFAISpawnType AIType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RemoveCharacterByType");

	UAIManagementSystem_RemoveCharacterByType_Params params {};
	params.AIType = AIType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B97140
//		Name   -> Function fnaf9.AIManagementSystem.RemoveAllCharacters
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIManagementSystem::RemoveAllCharacters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RemoveAllCharacters");

	UAIManagementSystem_RemoveAllCharacters_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B970A0
//		Name   -> Function fnaf9.AIManagementSystem.RegisterSeekerPath
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIManagementSystem::RegisterSeekerPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RegisterSeekerPath");

	UAIManagementSystem_RegisterSeekerPath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B97020
//		Name   -> Function fnaf9.AIManagementSystem.RegisterAI
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::RegisterAI(class APawn* AIPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.RegisterAI");

	UAIManagementSystem_RegisterAI_Params params {};
	params.AIPawn = AIPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B96F60
//		Name   -> Function fnaf9.AIManagementSystem.PawnExitedRoom
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::PawnExitedRoom(class APawn* AIPawn, class ARoomAreaBase* Room)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.PawnExitedRoom");

	UAIManagementSystem_PawnExitedRoom_Params params {};
	params.AIPawn = AIPawn;
	params.Room = Room;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B96EA0
//		Name   -> Function fnaf9.AIManagementSystem.PawnEnteringRoom
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::PawnEnteringRoom(class APawn* AIPawn, class ARoomAreaBase* Room)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.PawnEnteringRoom");

	UAIManagementSystem_PawnEnteringRoom_Params params {};
	params.AIPawn = AIPawn;
	params.Room = Room;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B96DE0
//		Name   -> Function fnaf9.AIManagementSystem.PawnEnteredRoom
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::PawnEnteredRoom(class APawn* AIPawn, class ARoomAreaBase* Room)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.PawnEnteredRoom");

	UAIManagementSystem_PawnEnteredRoom_Params params {};
	params.AIPawn = AIPawn;
	params.Room = Room;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B96DC0
//		Name   -> Function fnaf9.AIManagementSystem.PauseManager
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIManagementSystem::PauseManager()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.PauseManager");

	UAIManagementSystem_PauseManager_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B96D00
//		Name   -> Function fnaf9.AIManagementSystem.OnWorldStateChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		fnaf9_EFNAFGameState                               NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_EFNAFGameState                               OldState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::OnWorldStateChanged(fnaf9_EFNAFGameState NewState, fnaf9_EFNAFGameState OldState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.OnWorldStateChanged");

	UAIManagementSystem_OnWorldStateChanged_Params params {};
	params.NewState = NewState;
	params.OldState = OldState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00875D10
//		Name   -> Function fnaf9.AIManagementSystem.OnVannyPathsCollected
//		Flags  -> (Final, Native, Private)
void UAIManagementSystem::OnVannyPathsCollected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.OnVannyPathsCollected");

	UAIManagementSystem_OnVannyPathsCollected_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B96C40
//		Name   -> Function fnaf9.AIManagementSystem.OnPawnEndPlay
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      DestroyedPawn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::OnPawnEndPlay(class AActor* DestroyedPawn, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.OnPawnEndPlay");

	UAIManagementSystem_OnPawnEndPlay_Params params {};
	params.DestroyedPawn = DestroyedPawn;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B96C20
//		Name   -> Function fnaf9.AIManagementSystem.OnAlertDistancesCollected
//		Flags  -> (Final, Native, Private)
void UAIManagementSystem::OnAlertDistancesCollected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.OnAlertDistancesCollected");

	UAIManagementSystem_OnAlertDistancesCollected_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B96BA0
//		Name   -> Function fnaf9.AIManagementSystem.OnAIFellOutOfWorld
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::OnAIFellOutOfWorld(class APawn* AIPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.OnAIFellOutOfWorld");

	UAIManagementSystem_OnAIFellOutOfWorld_Params params {};
	params.AIPawn = AIPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B96B80
//		Name   -> Function fnaf9.AIManagementSystem.IsWorldSpawnEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIManagementSystem::IsWorldSpawnEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsWorldSpawnEnabled");

	UAIManagementSystem_IsWorldSpawnEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B96B60
//		Name   -> Function fnaf9.AIManagementSystem.IsUsingStagedSpawns
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIManagementSystem::IsUsingStagedSpawns()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsUsingStagedSpawns");

	UAIManagementSystem_IsUsingStagedSpawns_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B96B40
//		Name   -> Function fnaf9.AIManagementSystem.IsSpawningEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIManagementSystem::IsSpawningEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsSpawningEnabled");

	UAIManagementSystem_IsSpawningEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B96AB0
//		Name   -> Function fnaf9.AIManagementSystem.IsRoomOccupied
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIManagementSystem::IsRoomOccupied(class ARoomAreaBase* Room)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsRoomOccupied");

	UAIManagementSystem_IsRoomOccupied_Params params {};
	params.Room = Room;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B96A20
//		Name   -> Function fnaf9.AIManagementSystem.IsRoomBeingEntered
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIManagementSystem::IsRoomBeingEntered(class ARoomAreaBase* Room)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsRoomBeingEntered");

	UAIManagementSystem_IsRoomBeingEntered_Params params {};
	params.Room = Room;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B969F0
//		Name   -> Function fnaf9.AIManagementSystem.IsAITeleportEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIManagementSystem::IsAITeleportEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.IsAITeleportEnabled");

	UAIManagementSystem_IsAITeleportEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B969D0
//		Name   -> Function fnaf9.AIManagementSystem.GetTimeSinceLastEncounter
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAIManagementSystem::GetTimeSinceLastEncounter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetTimeSinceLastEncounter");

	UAIManagementSystem_GetTimeSinceLastEncounter_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B968D0
//		Name   -> Function fnaf9.AIManagementSystem.GetRoomDistancesToPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TMap<class APawn*, int>                            ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
TMap<class APawn*, int> UAIManagementSystem::GetRoomDistancesToPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetRoomDistancesToPlayer");

	UAIManagementSystem_GetRoomDistancesToPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B96840
//		Name   -> Function fnaf9.AIManagementSystem.GetRoomAIPawnIsIn
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ARoomAreaBase*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARoomAreaBase* UAIManagementSystem::GetRoomAIPawnIsIn(class APawn* AIPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetRoomAIPawnIsIn");

	UAIManagementSystem_GetRoomAIPawnIsIn_Params params {};
	params.AIPawn = AIPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B967B0
//		Name   -> Function fnaf9.AIManagementSystem.GetRoomAIPawnIsEntering
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ARoomAreaBase*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ARoomAreaBase* UAIManagementSystem::GetRoomAIPawnIsEntering(class APawn* AIPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetRoomAIPawnIsEntering");

	UAIManagementSystem_GetRoomAIPawnIsEntering_Params params {};
	params.AIPawn = AIPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B96720
//		Name   -> Function fnaf9.AIManagementSystem.GetPawnForType
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UAIManagementSystem::GetPawnForType(fnaf9_EFNAFAISpawnType AIType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetPawnForType");

	UAIManagementSystem_GetPawnForType_Params params {};
	params.AIType = AIType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B96650
//		Name   -> Function fnaf9.AIManagementSystem.GetPawnClassForType
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bForceShattered                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UAIManagementSystem::GetPawnClassForType(fnaf9_EFNAFAISpawnType AIType, bool bForceShattered)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetPawnClassForType");

	UAIManagementSystem_GetPawnClassForType_Params params {};
	params.AIType = AIType;
	params.bForceShattered = bForceShattered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B96570
//		Name   -> Function fnaf9.AIManagementSystem.GetPathForAI
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       PathName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::GetPathForAI(fnaf9_EFNAFAISpawnType AIType, const struct FName& PathName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetPathForAI");

	UAIManagementSystem_GetPathForAI_Params params {};
	params.AIType = AIType;
	params.PathName = PathName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B964F0
//		Name   -> Function fnaf9.AIManagementSystem.GetExistingPawnTypes
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<fnaf9_EFNAFAISpawnType>                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<fnaf9_EFNAFAISpawnType> UAIManagementSystem::GetExistingPawnTypes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetExistingPawnTypes");

	UAIManagementSystem_GetExistingPawnTypes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B96460
//		Name   -> Function fnaf9.AIManagementSystem.GetExistingPawn
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UAIManagementSystem::GetExistingPawn(fnaf9_EFNAFAISpawnType AIType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetExistingPawn");

	UAIManagementSystem_GetExistingPawn_Params params {};
	params.AIType = AIType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B96380
//		Name   -> Function fnaf9.AIManagementSystem.GetCurrentVannyMeterValuesAsPercentage
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              OutCurrentValuePercent                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              OutSoftMaxPercent                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::GetCurrentVannyMeterValuesAsPercentage(float* OutCurrentValuePercent, float* OutSoftMaxPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetCurrentVannyMeterValuesAsPercentage");

	UAIManagementSystem_GetCurrentVannyMeterValuesAsPercentage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCurrentValuePercent != nullptr)
		*OutCurrentValuePercent = params.OutCurrentValuePercent;
	if (OutSoftMaxPercent != nullptr)
		*OutSoftMaxPercent = params.OutSoftMaxPercent;

}


// Function:
//		Offset -> 0x00B96240
//		Name   -> Function fnaf9.AIManagementSystem.GetCurrentVannyMeterValues
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              CurrentValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Max                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              SoftMax                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::GetCurrentVannyMeterValues(float* CurrentValue, float* Max, float* SoftMax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetCurrentVannyMeterValues");

	UAIManagementSystem_GetCurrentVannyMeterValues_Params params {};

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


// Function:
//		Offset -> 0x00B96210
//		Name   -> Function fnaf9.AIManagementSystem.GetCurrentVannyMeterPercentage
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAIManagementSystem::GetCurrentVannyMeterPercentage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetCurrentVannyMeterPercentage");

	UAIManagementSystem_GetCurrentVannyMeterPercentage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B96180
//		Name   -> Function fnaf9.AIManagementSystem.GetCachedDistances
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FAIDistanceResult>                   ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FAIDistanceResult> UAIManagementSystem::GetCachedDistances()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetCachedDistances");

	UAIManagementSystem_GetCachedDistances_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B96060
//		Name   -> Function fnaf9.AIManagementSystem.GetCachedDistanceFor
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bOutResultValid                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAIDistanceResult                           OutResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UAIManagementSystem::GetCachedDistanceFor(class APawn* Pawn, bool* bOutResultValid, struct FAIDistanceResult* OutResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetCachedDistanceFor");

	UAIManagementSystem_GetCachedDistanceFor_Params params {};
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


// Function:
//		Offset -> 0x00B95F90
//		Name   -> Function fnaf9.AIManagementSystem.GetAllSpawnPointsFor
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class AFNAFAISpawnPoint*>                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class AFNAFAISpawnPoint*> UAIManagementSystem::GetAllSpawnPointsFor(fnaf9_EFNAFAISpawnType AIType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllSpawnPointsFor");

	UAIManagementSystem_GetAllSpawnPointsFor_Params params {};
	params.AIType = AIType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B95F10
//		Name   -> Function fnaf9.AIManagementSystem.GetAllSpawnPoints
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class AFNAFAISpawnPoint*>                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class AFNAFAISpawnPoint*> UAIManagementSystem::GetAllSpawnPoints()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllSpawnPoints");

	UAIManagementSystem_GetAllSpawnPoints_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B95CD0
//		Name   -> Function fnaf9.AIManagementSystem.GetAllRegisteredAI
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class APawn*>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class APawn*> UAIManagementSystem::GetAllRegisteredAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllRegisteredAI");

	UAIManagementSystem_GetAllRegisteredAI_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B95E60
//		Name   -> Function fnaf9.AIManagementSystem.GetAllAnimatronicPawns
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
//		TArray<class APawn*>                               OutAnimatronicPawns                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::GetAllAnimatronicPawns(TArray<class APawn*>* OutAnimatronicPawns)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllAnimatronicPawns");

	UAIManagementSystem_GetAllAnimatronicPawns_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAnimatronicPawns != nullptr)
		*OutAnimatronicPawns = params.OutAnimatronicPawns;

}


// Function:
//		Offset -> 0x00B95D90
//		Name   -> Function fnaf9.AIManagementSystem.GetAllAIInRoomAtMost
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                numRooms                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class APawn*>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class APawn*> UAIManagementSystem::GetAllAIInRoomAtMost(int numRooms)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllAIInRoomAtMost");

	UAIManagementSystem_GetAllAIInRoomAtMost_Params params {};
	params.numRooms = numRooms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B95CD0
//		Name   -> Function fnaf9.AIManagementSystem.GetAllAI
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class APawn*>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class APawn*> UAIManagementSystem::GetAllAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAllAI");

	UAIManagementSystem_GetAllAI_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B95C40
//		Name   -> Function fnaf9.AIManagementSystem.GetAIPawnsWithSightToPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class APawn*>                               ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class APawn*> UAIManagementSystem::GetAIPawnsWithSightToPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAIPawnsWithSightToPlayer");

	UAIManagementSystem_GetAIPawnsWithSightToPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B95B60
//		Name   -> Function fnaf9.AIManagementSystem.GetAIPawnsEnteringRoom
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class APawn*>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class APawn*> UAIManagementSystem::GetAIPawnsEnteringRoom(class ARoomAreaBase* Room)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAIPawnsEnteringRoom");

	UAIManagementSystem_GetAIPawnsEnteringRoom_Params params {};
	params.Room = Room;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B95A80
//		Name   -> Function fnaf9.AIManagementSystem.GetAIPawnInRoom
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ARoomAreaBase*                               Room                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class APawn*>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class APawn*> UAIManagementSystem::GetAIPawnInRoom(class ARoomAreaBase* Room)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.GetAIPawnInRoom");

	UAIManagementSystem_GetAIPawnInRoom_Params params {};
	params.Room = Room;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B959F0
//		Name   -> Function fnaf9.AIManagementSystem.FindSpawnPointClosestToDistance
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AFNAFAISpawnPoint*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AFNAFAISpawnPoint* UAIManagementSystem::FindSpawnPointClosestToDistance(float Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindSpawnPointClosestToDistance");

	UAIManagementSystem_FindSpawnPointClosestToDistance_Params params {};
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B957C0
//		Name   -> Function fnaf9.AIManagementSystem.FindSpawnNotVisibleAtDistance
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_EFNAFAISpawnType                             SpawnType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APawn*                                       PawnForNavProperties                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class AFNAFAISpawnPoint*>                   OutSpawnPointsResult                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<float>                                      OutDistances                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UAIManagementSystem::FindSpawnNotVisibleAtDistance(float Distance, fnaf9_EFNAFAISpawnType SpawnType, class APawn* PawnForNavProperties, TArray<class AFNAFAISpawnPoint*>* OutSpawnPointsResult, TArray<float>* OutDistances, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindSpawnNotVisibleAtDistance");

	UAIManagementSystem_FindSpawnNotVisibleAtDistance_Params params {};
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


// Function:
//		Offset -> 0x00B95680
//		Name   -> Function fnaf9.AIManagementSystem.FindRandomPatrolPointOutOfView
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             AIType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIManagementSystem::FindRandomPatrolPointOutOfView(fnaf9_EFNAFAISpawnType AIType, struct FVector* OutLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindRandomPatrolPointOutOfView");

	UAIManagementSystem_FindRandomPatrolPointOutOfView_Params params {};
	params.AIType = AIType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B95650
//		Name   -> Function fnaf9.AIManagementSystem.FindFurthestSpawnPoint
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AFNAFAISpawnPoint*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AFNAFAISpawnPoint* UAIManagementSystem::FindFurthestSpawnPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindFurthestSpawnPoint");

	UAIManagementSystem_FindFurthestSpawnPoint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B95620
//		Name   -> Function fnaf9.AIManagementSystem.FindClosestSpawnPoint
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AFNAFAISpawnPoint*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AFNAFAISpawnPoint* UAIManagementSystem::FindClosestSpawnPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindClosestSpawnPoint");

	UAIManagementSystem_FindClosestSpawnPoint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B953F0
//		Name   -> Function fnaf9.AIManagementSystem.FindClosestPatrolPointOutOfView
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bOutResultValid                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentActionInfo                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                OutPointIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::FindClosestPatrolPointOutOfView(class APawn* AIPawn, bool* bOutResultValid, struct FVector* OutLocation, const struct FLatentActionInfo& LatentActionInfo, int* OutPointIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindClosestPatrolPointOutOfView");

	UAIManagementSystem_FindClosestPatrolPointOutOfView_Params params {};
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


// Function:
//		Offset -> 0x00B951C0
//		Name   -> Function fnaf9.AIManagementSystem.FindClosestPathPointForAI
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               OutResultValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OutPointIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UAIManagementSystem::FindClosestPathPointForAI(class APawn* AIPawn, bool* OutResultValid, int* OutPointIndex, struct FVector* OutLocation, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.FindClosestPathPointForAI");

	UAIManagementSystem_FindClosestPathPointForAI_Params params {};
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


// Function:
//		Offset -> 0x00B95140
//		Name   -> Function fnaf9.AIManagementSystem.ExitedHiding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::ExitedHiding(class APawn* AIPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.ExitedHiding");

	UAIManagementSystem_ExitedHiding_Params params {};
	params.AIPawn = AIPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B95120
//		Name   -> Function fnaf9.AIManagementSystem.DestroyAllAINotVisible
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIManagementSystem::DestroyAllAINotVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.DestroyAllAINotVisible");

	UAIManagementSystem_DestroyAllAINotVisible_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B950A0
//		Name   -> Function fnaf9.AIManagementSystem.DestroyAllAIInRoomsAtleast
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                RoomDist                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::DestroyAllAIInRoomsAtleast(int RoomDist)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.DestroyAllAIInRoomsAtleast");

	UAIManagementSystem_DestroyAllAIInRoomsAtleast_Params params {};
	params.RoomDist = RoomDist;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B95080
//		Name   -> Function fnaf9.AIManagementSystem.DestroyAllAI
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIManagementSystem::DestroyAllAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.DestroyAllAI");

	UAIManagementSystem_DestroyAllAI_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B95060
//		Name   -> Function fnaf9.AIManagementSystem.ClearExpectedAI
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIManagementSystem::ClearExpectedAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.ClearExpectedAI");

	UAIManagementSystem_ClearExpectedAI_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B94EB0
//		Name   -> Function fnaf9.AIManagementSystem.CalculateAllAIDistances
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FAIDistanceResult>                   DistanceResults                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bOutClosestIsValid                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ClosestIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UAIManagementSystem::CalculateAllAIDistances(TArray<struct FAIDistanceResult>* DistanceResults, bool* bOutClosestIsValid, int* ClosestIndex, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.CalculateAllAIDistances");

	UAIManagementSystem_CalculateAllAIDistances_Params params {};
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


// Function:
//		Offset -> 0x00B94DE0
//		Name   -> Function fnaf9.AIManagementSystem.ApplySound
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		float                                              Strength                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::ApplySound(float Strength, const struct FVector& WorldLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.ApplySound");

	UAIManagementSystem_ApplySound_Params params {};
	params.Strength = Strength;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B94D50
//		Name   -> Function fnaf9.AIManagementSystem.ApplyCollect
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::ApplyCollect(const struct FVector& WorldLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.ApplyCollect");

	UAIManagementSystem_ApplyCollect_Params params {};
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B94D20
//		Name   -> Function fnaf9.AIManagementSystem.AnyPawnInPlayerRoom
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAIManagementSystem::AnyPawnInPlayerRoom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.AnyPawnInPlayerRoom");

	UAIManagementSystem_AnyPawnInPlayerRoom_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B94B80
//		Name   -> Function fnaf9.AIManagementSystem.AISpottedPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::AISpottedPlayer(class APawn* AIPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.AISpottedPlayer");

	UAIManagementSystem_AISpottedPlayer_Params params {};
	params.AIPawn = AIPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B94B00
//		Name   -> Function fnaf9.AIManagementSystem.AILostSightOfPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APawn*                                       AIPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::AILostSightOfPlayer(class APawn* AIPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.AILostSightOfPlayer");

	UAIManagementSystem_AILostSightOfPlayer_Params params {};
	params.AIPawn = AIPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B94CA0
//		Name   -> Function fnaf9.AIManagementSystem.AdjustVannyMeter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAIManagementSystem::AdjustVannyMeter(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.AdjustVannyMeter");

	UAIManagementSystem_AdjustVannyMeter_Params params {};
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B94C00
//		Name   -> Function fnaf9.AIManagementSystem.AddExpectedAI
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FAnimatronicExpectedData                    AIType                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UAIManagementSystem::AddExpectedAI(const struct FAnimatronicExpectedData& AIType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AIManagementSystem.AddExpectedAI");

	UAIManagementSystem_AddExpectedAI_Params params {};
	params.AIType = AIType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.PathPointProvider.SetPointType
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PointType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPathPointProvider::SetPointType(int PointIndex, int PointType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.SetPointType");

	UPathPointProvider_SetPointType_Params params {};
	params.PointIndex = PointIndex;
	params.PointType = PointType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.PathPointProvider.SetPointLocation
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPathPointProvider::SetPointLocation(int PointIndex, const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.SetPointLocation");

	UPathPointProvider_SetPointLocation_Params params {};
	params.PointIndex = PointIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.PathPointProvider.RemovePointConnection
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PointToDisconnectIndex                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPathPointProvider::RemovePointConnection(int PointIndex, int PointToDisconnectIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.RemovePointConnection");

	UPathPointProvider_RemovePointConnection_Params params {};
	params.PointIndex = PointIndex;
	params.PointToDisconnectIndex = PointToDisconnectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.PathPointProvider.RemovePoint
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPathPointProvider::RemovePoint(int PointIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.RemovePoint");

	UPathPointProvider_RemovePoint_Params params {};
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.PathPointProvider.GetPointType
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPathPointProvider::GetPointType(int PointIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetPointType");

	UPathPointProvider_GetPointType_Params params {};
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.PathPointProvider.GetPointsConnectedTo
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<int> UPathPointProvider::GetPointsConnectedTo(int PointIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetPointsConnectedTo");

	UPathPointProvider_GetPointsConnectedTo_Params params {};
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.PathPointProvider.GetPointLocation
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UPathPointProvider::GetPointLocation(int PointIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetPointLocation");

	UPathPointProvider_GetPointLocation_Params params {};
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.PathPointProvider.GetPointColor
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPathPointProvider::GetPointColor(int PointIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetPointColor");

	UPathPointProvider_GetPointColor_Params params {};
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.PathPointProvider.GetNumberOfPathPoints
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPathPointProvider::GetNumberOfPathPoints()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetNumberOfPathPoints");

	UPathPointProvider_GetNumberOfPathPoints_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.PathPointProvider.GetAvailablePointTypes
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FText>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FText> UPathPointProvider::GetAvailablePointTypes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.GetAvailablePointTypes");

	UPathPointProvider_GetAvailablePointTypes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.PathPointProvider.AddPointConnection
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PointToConnectIndex                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPathPointProvider::AddPointConnection(int PointIndex, int PointToConnectIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.AddPointConnection");

	UPathPointProvider_AddPointConnection_Params params {};
	params.PointIndex = PointIndex;
	params.PointToConnectIndex = PointToConnectIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.PathPointProvider.AddPoint
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPathPointProvider::AddPoint(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PathPointProvider.AddPoint");

	UPathPointProvider_AddPoint_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB7610
//		Name   -> Function fnaf9.PlayerTrigger.SetTriggerActive
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APlayerTrigger::SetTriggerActive(bool bActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.SetTriggerActive");

	APlayerTrigger_SetTriggerActive_Params params {};
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB6D10
//		Name   -> Function fnaf9.PlayerTrigger.SaveActivated
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void APlayerTrigger::SaveActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.SaveActivated");

	APlayerTrigger_SaveActivated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB6BA0
//		Name   -> Function fnaf9.PlayerTrigger.OnWorldObjectStateChanged
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		struct FName                                       ObjectName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ObjectState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APlayerTrigger::OnWorldObjectStateChanged(const struct FName& ObjectName, bool ObjectState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.OnWorldObjectStateChanged");

	APlayerTrigger_OnWorldObjectStateChanged_Params params {};
	params.ObjectName = ObjectName;
	params.ObjectState = ObjectState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB6A30
//		Name   -> Function fnaf9.PlayerTrigger.OnTriggerStay
//		Flags  -> (Native, Event, Protected, BlueprintEvent)
void APlayerTrigger::OnTriggerStay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.OnTriggerStay");

	APlayerTrigger_OnTriggerStay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB6A50
//		Name   -> Function fnaf9.PlayerTrigger.OnTriggered
//		Flags  -> (Native, Event, Protected, BlueprintEvent)
void APlayerTrigger::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.OnTriggered");

	APlayerTrigger_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB65B0
//		Name   -> Function fnaf9.PlayerTrigger.IsTriggerStateSet
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APlayerTrigger::IsTriggerStateSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.IsTriggerStateSet");

	APlayerTrigger_IsTriggerStateSet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB6580
//		Name   -> Function fnaf9.PlayerTrigger.IsTriggerActive
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APlayerTrigger::IsTriggerActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.IsTriggerActive");

	APlayerTrigger_IsTriggerActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB5EB0
//		Name   -> Function fnaf9.PlayerTrigger.ForceTrigger
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void APlayerTrigger::ForceTrigger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.ForceTrigger");

	APlayerTrigger_ForceTrigger_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB5E80
//		Name   -> Function fnaf9.PlayerTrigger.CanTrigger
//		Flags  -> (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool APlayerTrigger::CanTrigger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PlayerTrigger.CanTrigger");

	APlayerTrigger_CanTrigger_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9C250
//		Name   -> Function fnaf9.AISpawnTrigger.OnAISpawnedFailure
//		Flags  -> (Native, Event, Protected, BlueprintEvent)
// Parameters:
//		class APawn*                                       SpawnedPawn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAISpawnTrigger::OnAISpawnedFailure(class APawn* SpawnedPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AISpawnTrigger.OnAISpawnedFailure");

	AAISpawnTrigger_OnAISpawnedFailure_Params params {};
	params.SpawnedPawn = SpawnedPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9C1C0
//		Name   -> Function fnaf9.AISpawnTrigger.OnAISpawned
//		Flags  -> (Native, Event, Protected, BlueprintEvent)
// Parameters:
//		class APawn*                                       SpawnedPawn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAISpawnTrigger::OnAISpawned(class APawn* SpawnedPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.AISpawnTrigger.OnAISpawned");

	AAISpawnTrigger_OnAISpawned_Params params {};
	params.SpawnedPawn = SpawnedPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9BFB0
//		Name   -> Function fnaf9.CameraHelperFunctions.IsLocationInCameraView
//		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_ECameraAngleFlags                            CameraAngles                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              OutHorizontalAngle                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              OutVerticalAngle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCameraHelperFunctions::STATIC_IsLocationInCameraView(class UObject* WorldContextObject, const struct FVector& Location, fnaf9_ECameraAngleFlags CameraAngles, float* OutHorizontalAngle, float* OutVerticalAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.CameraHelperFunctions.IsLocationInCameraView");

	UCameraHelperFunctions_IsLocationInCameraView_Params params {};
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


// Function:
//		Offset -> 0x00B9BA00
//		Name   -> Function fnaf9.CameraHelperFunctions.GetLocationAnglesFromCamera
//		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              OutHorizontalAngle                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              OutVerticalAngle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCameraHelperFunctions::STATIC_GetLocationAnglesFromCamera(class UObject* WorldContextObject, const struct FVector& Location, float* OutHorizontalAngle, float* OutVerticalAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.CameraHelperFunctions.GetLocationAnglesFromCamera");

	UCameraHelperFunctions_GetLocationAnglesFromCamera_Params params {};
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


// Function:
//		Offset -> 0x00B9B820
//		Name   -> Function fnaf9.CameraTrigger.GetAlertType
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		fnaf9_EAlertType                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
fnaf9_EAlertType UCameraTrigger::GetAlertType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.CameraTrigger.GetAlertType");

	UCameraTrigger_GetAlertType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9C2E0
//		Name   -> Function fnaf9.ConditionalCheckComponent.OnConditionUpdated
//		Flags  -> (Final, Native, Private)
void UConditionalCheckComponent::OnConditionUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionalCheckComponent.OnConditionUpdated");

	UConditionalCheckComponent_OnConditionUpdated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9C8C0
//		Name   -> Function fnaf9.ConditionCheckInterface.UnbindConditionUpdatedDelegate
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FScriptDelegate                             OnConditionResultUpdated                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UConditionCheckInterface::UnbindConditionUpdatedDelegate(const struct FScriptDelegate& OnConditionResultUpdated)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionCheckInterface.UnbindConditionUpdatedDelegate");

	UConditionCheckInterface_UnbindConditionUpdatedDelegate_Params params {};
	params.OnConditionResultUpdated = OnConditionResultUpdated;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9B730
//		Name   -> Function fnaf9.ConditionCheckInterface.ConditionsMet
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UConditionCheckInterface::ConditionsMet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionCheckInterface.ConditionsMet");

	UConditionCheckInterface_ConditionsMet_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9B460
//		Name   -> Function fnaf9.ConditionCheckInterface.BindConditionUpdatedDelegate
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FScriptDelegate                             OnConditionResultUpdated                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UConditionCheckInterface::BindConditionUpdatedDelegate(const struct FScriptDelegate& OnConditionResultUpdated)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionCheckInterface.BindConditionUpdatedDelegate");

	UConditionCheckInterface_BindConditionUpdatedDelegate_Params params {};
	params.OnConditionResultUpdated = OnConditionResultUpdated;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9C480
//		Name   -> Function fnaf9.ConditionFunctionLibrary.RemoveConditionDelegate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FConditionResultDelegates                   DelegateHandle                                             (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UConditionFunctionLibrary::STATIC_RemoveConditionDelegate(struct FConditionResultDelegates* DelegateHandle, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.RemoveConditionDelegate");

	UConditionFunctionLibrary_RemoveConditionDelegate_Params params {};
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DelegateHandle != nullptr)
		*DelegateHandle = params.DelegateHandle;

}


// Function:
//		Offset -> 0x00B9BD00
//		Name   -> Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditionsWithGet
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class AActor*                                      ActorToCheck                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bOutConditionsMet                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UConditionFunctionLibrary::STATIC_HasMetComponentConditionsWithGet(class AActor* ActorToCheck, bool* bOutConditionsMet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditionsWithGet");

	UConditionFunctionLibrary_HasMetComponentConditionsWithGet_Params params {};
	params.ActorToCheck = ActorToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bOutConditionsMet != nullptr)
		*bOutConditionsMet = params.bOutConditionsMet;

}


// Function:
//		Offset -> 0x00B9BC80
//		Name   -> Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditions
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      ActorToCheck                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UConditionFunctionLibrary::STATIC_HasMetComponentConditions(class AActor* ActorToCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.HasMetComponentConditions");

	UConditionFunctionLibrary_HasMetComponentConditions_Params params {};
	params.ActorToCheck = ActorToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9BC00
//		Name   -> Function fnaf9.ConditionFunctionLibrary.HasMetAnyComponentConditions
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      ActorToCheck                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UConditionFunctionLibrary::STATIC_HasMetAnyComponentConditions(class AActor* ActorToCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.HasMetAnyComponentConditions");

	UConditionFunctionLibrary_HasMetAnyComponentConditions_Params params {};
	params.ActorToCheck = ActorToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9B510
//		Name   -> Function fnaf9.ConditionFunctionLibrary.CallConditionUpdate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FConditionResultDelegates                   DelegateHandle                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UConditionFunctionLibrary::STATIC_CallConditionUpdate(const struct FConditionResultDelegates& DelegateHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.CallConditionUpdate");

	UConditionFunctionLibrary_CallConditionUpdate_Params params {};
	params.DelegateHandle = DelegateHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9B360
//		Name   -> Function fnaf9.ConditionFunctionLibrary.AddConditionDelegate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FConditionResultDelegates                   DelegateHandle                                             (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UConditionFunctionLibrary::STATIC_AddConditionDelegate(struct FConditionResultDelegates* DelegateHandle, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.ConditionFunctionLibrary.AddConditionDelegate");

	UConditionFunctionLibrary_AddConditionDelegate_Params params {};
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DelegateHandle != nullptr)
		*DelegateHandle = params.DelegateHandle;

}


// Function:
//		Offset -> 0x00B9C840
//		Name   -> Function fnaf9.DoorComponent.SetSecurityLevel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                NewSecurityLevel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDoorComponent::SetSecurityLevel(int NewSecurityLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetSecurityLevel");

	UDoorComponent_SetSecurityLevel_Params params {};
	params.NewSecurityLevel = NewSecurityLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9C7C0
//		Name   -> Function fnaf9.DoorComponent.SetPlayerBlocker
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UPrimitiveComponent*                         InPlayerBlocker                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDoorComponent::SetPlayerBlocker(class UPrimitiveComponent* InPlayerBlocker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetPlayerBlocker");

	UDoorComponent_SetPlayerBlocker_Params params {};
	params.InPlayerBlocker = InPlayerBlocker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9C730
//		Name   -> Function fnaf9.DoorComponent.SetLockedForPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bLocked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDoorComponent::SetLockedForPlayer(bool bLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetLockedForPlayer");

	UDoorComponent_SetLockedForPlayer_Params params {};
	params.bLocked = bLocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9C6A0
//		Name   -> Function fnaf9.DoorComponent.SetLockedForAI
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bLocked                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDoorComponent::SetLockedForAI(bool bLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetLockedForAI");

	UDoorComponent_SetLockedForAI_Params params {};
	params.bLocked = bLocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9C610
//		Name   -> Function fnaf9.DoorComponent.SetAutomaticDoorEnableForPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDoorComponent::SetAutomaticDoorEnableForPlayer(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetAutomaticDoorEnableForPlayer");

	UDoorComponent_SetAutomaticDoorEnableForPlayer_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9C580
//		Name   -> Function fnaf9.DoorComponent.SetAutomaticDoorEnableForAI
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDoorComponent::SetAutomaticDoorEnableForAI(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.SetAutomaticDoorEnableForAI");

	UDoorComponent_SetAutomaticDoorEnableForAI_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9C400
//		Name   -> Function fnaf9.DoorComponent.PawnExitedDoor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDoorComponent::PawnExitedDoor(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.PawnExitedDoor");

	UDoorComponent_PawnExitedDoor_Params params {};
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9C380
//		Name   -> Function fnaf9.DoorComponent.PawnEnteredDoor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDoorComponent::PawnEnteredDoor(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.PawnEnteredDoor");

	UDoorComponent_PawnEnteredDoor_Params params {};
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9C1A0
//		Name   -> Function fnaf9.DoorComponent.IsLockedForPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDoorComponent::IsLockedForPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.IsLockedForPlayer");

	UDoorComponent_IsLockedForPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9C180
//		Name   -> Function fnaf9.DoorComponent.IsLockedForAI
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDoorComponent::IsLockedForAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.IsLockedForAI");

	UDoorComponent_IsLockedForAI_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9BE90
//		Name   -> Function fnaf9.DoorComponent.HasMetConditions
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AFNAFBasePlayerCharacter*                    BasePlayerCharacter                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bConditionsMet                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_EConditionFailReason                         FailReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDoorComponent::HasMetConditions(class AFNAFBasePlayerCharacter* BasePlayerCharacter, bool* bConditionsMet, fnaf9_EConditionFailReason* FailReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.HasMetConditions");

	UDoorComponent_HasMetConditions_Params params {};
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


// Function:
//		Offset -> 0x00B9BBE0
//		Name   -> Function fnaf9.DoorComponent.HasDoorInitialized
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDoorComponent::HasDoorInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.HasDoorInitialized");

	UDoorComponent_HasDoorInitialized_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9BB60
//		Name   -> Function fnaf9.DoorComponent.GetPawnsInDoor
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class APawn*>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class APawn*> UDoorComponent::GetPawnsInDoor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetPawnsInDoor");

	UDoorComponent_GetPawnsInDoor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9B9E0
//		Name   -> Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDoorComponent::GetIsAutomaticDoorEnabledForPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForPlayer");

	UDoorComponent_GetIsAutomaticDoorEnabledForPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9B9C0
//		Name   -> Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForAI
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDoorComponent::GetIsAutomaticDoorEnabledForAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetIsAutomaticDoorEnabledForAI");

	UDoorComponent_GetIsAutomaticDoorEnabledForAI_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9B920
//		Name   -> Function fnaf9.DoorComponent.GetDoorSideFromLocation
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_EDoorSide                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
fnaf9_EDoorSide UDoorComponent::GetDoorSideFromLocation(const struct FVector& WorldLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetDoorSideFromLocation");

	UDoorComponent_GetDoorSideFromLocation_Params params {};
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9B890
//		Name   -> Function fnaf9.DoorComponent.GetDoorSideFromActor
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_EDoorSide                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
fnaf9_EDoorSide UDoorComponent::GetDoorSideFromActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetDoorSideFromActor");

	UDoorComponent_GetDoorSideFromActor_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9B850
//		Name   -> Function fnaf9.DoorComponent.GetCurrentRequirements
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FDoorEntryRequirements                      ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FDoorEntryRequirements UDoorComponent::GetCurrentRequirements()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.GetCurrentRequirements");

	UDoorComponent_GetCurrentRequirements_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9B800
//		Name   -> Function fnaf9.DoorComponent.ForceOpen
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UDoorComponent::ForceOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.ForceOpen");

	UDoorComponent_ForceOpen_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9B7E0
//		Name   -> Function fnaf9.DoorComponent.ForceClose
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UDoorComponent::ForceClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.ForceClose");

	UDoorComponent_ForceClose_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9B760
//		Name   -> Function fnaf9.DoorComponent.CopyConditions
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UDoorComponent*                              OtherDoorComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDoorComponent::CopyConditions(class UDoorComponent* OtherDoorComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.CopyConditions");

	UDoorComponent_CopyConditions_Params params {};
	params.OtherDoorComponent = OtherDoorComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9B610
//		Name   -> Function fnaf9.DoorComponent.CanPawnOpenDoor
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bOutConditionsMet                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_EConditionFailReason                         OutFailReason                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDoorComponent::CanPawnOpenDoor(class APawn* Pawn, bool* bOutConditionsMet, fnaf9_EConditionFailReason* OutFailReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorComponent.CanPawnOpenDoor");

	UDoorComponent_CanPawnOpenDoor_Params params {};
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


// Function:
//		Offset -> 0x00BA1F20
//		Name   -> Function fnaf9.DoorInteractor.OnOverlappedDoor
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bCanEnterDoor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_EConditionFailReason                         CantEnterReason                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UDoorComponent*                              DoorComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDoorInteractor::OnOverlappedDoor(bool bCanEnterDoor, fnaf9_EConditionFailReason CantEnterReason, class UDoorComponent* DoorComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorInteractor.OnOverlappedDoor");

	UDoorInteractor_OnOverlappedDoor_Params params {};
	params.bCanEnterDoor = bCanEnterDoor;
	params.CantEnterReason = CantEnterReason;
	params.DoorComponent = DoorComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1EA0
//		Name   -> Function fnaf9.DoorInteractor.OnEndOverlapDoor
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void UDoorInteractor::OnEndOverlapDoor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorInteractor.OnEndOverlapDoor");

	UDoorInteractor_OnEndOverlapDoor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA16F0
//		Name   -> Function fnaf9.DoorInteractor.DoorEntryNotAllowed
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class UDoorComponent*                              DoorComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDoorInteractor::DoorEntryNotAllowed(class UDoorComponent* DoorComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.DoorInteractor.DoorEntryNotAllowed");

	UDoorInteractor_DoorEntryNotAllowed_Params params {};
	params.DoorComponent = DoorComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA2A70
//		Name   -> Function fnaf9.fnaf9GameModeBase.ToggleFullAIDisplay
//		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
void Afnaf9GameModeBase::ToggleFullAIDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.ToggleFullAIDisplay");

	Afnaf9GameModeBase_ToggleFullAIDisplay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA27D0
//		Name   -> Function fnaf9.fnaf9GameModeBase.StartRepairGame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void Afnaf9GameModeBase::StartRepairGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.StartRepairGame");

	Afnaf9GameModeBase_StartRepairGame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA22D0
//		Name   -> Function fnaf9.fnaf9GameModeBase.SetAIDisplay
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Afnaf9GameModeBase::SetAIDisplay(bool enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.SetAIDisplay");

	Afnaf9GameModeBase_SetAIDisplay_Params params {};
	params.enable = enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA2240
//		Name   -> Function fnaf9.fnaf9GameModeBase.RoomHeatDisplay
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Afnaf9GameModeBase::RoomHeatDisplay(bool enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.RoomHeatDisplay");

	Afnaf9GameModeBase_RoomHeatDisplay_Params params {};
	params.enable = enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA20E0
//		Name   -> Function fnaf9.fnaf9GameModeBase.POIVisible
//		Flags  -> (Final, Exec, Native, Public, Const)
// Parameters:
//		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Afnaf9GameModeBase::POIVisible(bool bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.POIVisible");

	Afnaf9GameModeBase_POIVisible_Params params {};
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA2050
//		Name   -> Function fnaf9.fnaf9GameModeBase.POIDetectionVisible
//		Flags  -> (Final, Exec, Native, Public, Const)
// Parameters:
//		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Afnaf9GameModeBase::POIDetectionVisible(bool bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.POIDetectionVisible");

	Afnaf9GameModeBase_POIDetectionVisible_Params params {};
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA2190
//		Name   -> Function fnaf9.fnaf9GameModeBase.PlayerFlashlightVis
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Afnaf9GameModeBase::PlayerFlashlightVis(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.PlayerFlashlightVis");

	Afnaf9GameModeBase_PlayerFlashlightVis_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.fnaf9GameModeBase.OnRoomHeatDisplayChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Afnaf9GameModeBase::OnRoomHeatDisplayChanged(bool enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.OnRoomHeatDisplayChanged");

	Afnaf9GameModeBase_OnRoomHeatDisplayChanged_Params params {};
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.fnaf9GameModeBase.OnPlayerFlashlightVis
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Afnaf9GameModeBase::OnPlayerFlashlightVis(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.OnPlayerFlashlightVis");

	Afnaf9GameModeBase_OnPlayerFlashlightVis_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.fnaf9GameModeBase.OnForceSpawnVanny
//		Flags  -> (Event, Public, BlueprintEvent)
void Afnaf9GameModeBase::OnForceSpawnVanny()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.OnForceSpawnVanny");

	Afnaf9GameModeBase_OnForceSpawnVanny_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.fnaf9GameModeBase.OnAIPawnsVis
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Afnaf9GameModeBase::OnAIPawnsVis(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.OnAIPawnsVis");

	Afnaf9GameModeBase_OnAIPawnsVis_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1D30
//		Name   -> Function fnaf9.fnaf9GameModeBase.IsAIDisplayOn
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool Afnaf9GameModeBase::IsAIDisplayOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.IsAIDisplayOn");

	Afnaf9GameModeBase_IsAIDisplayOn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA17B0
//		Name   -> Function fnaf9.fnaf9GameModeBase.ForceSpawnVanny
//		Flags  -> (Final, Exec, Native, Public)
void Afnaf9GameModeBase::ForceSpawnVanny()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.ForceSpawnVanny");

	Afnaf9GameModeBase_ForceSpawnVanny_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1790
//		Name   -> Function fnaf9.fnaf9GameModeBase.FinishRepairGame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void Afnaf9GameModeBase::FinishRepairGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.FinishRepairGame");

	Afnaf9GameModeBase_FinishRepairGame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA14B0
//		Name   -> Function fnaf9.fnaf9GameModeBase.AIPawnsVis
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Afnaf9GameModeBase::AIPawnsVis(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.fnaf9GameModeBase.AIPawnsVis");

	Afnaf9GameModeBase_AIPawnsVis_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA17F0
//		Name   -> Function fnaf9.FNAFAchievementUtils.GetAllAchievements
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FName>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FName> UFNAFAchievementUtils::STATIC_GetAllAchievements()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFAchievementUtils.GetAllAchievements");

	UFNAFAchievementUtils_GetAllAchievements_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA17D0
//		Name   -> Function fnaf9.FNAFAISpawnPoint.GetAIType
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
fnaf9_EFNAFAISpawnType AFNAFAISpawnPoint::GetAIType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFAISpawnPoint.GetAIType");

	AFNAFAISpawnPoint_GetAIType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA1EC0
//		Name   -> Function fnaf9.FNAFBaseCharacter.OnFellOutOfWorld
//		Flags  -> (Native, Event, Protected, BlueprintEvent)
void AFNAFBaseCharacter::OnFellOutOfWorld()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBaseCharacter.OnFellOutOfWorld");

	AFNAFBaseCharacter_OnFellOutOfWorld_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA2970
//		Name   -> Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayerWithCameraLocation
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     CameraWorldLocation                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFNAFBasePlayerCharacter::TeleportPlayerWithCameraLocation(const struct FVector& CameraWorldLocation, float Yaw)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayerWithCameraLocation");

	AFNAFBasePlayerCharacter_TeleportPlayerWithCameraLocation_Params params {};
	params.CameraWorldLocation = CameraWorldLocation;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA2890
//		Name   -> Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayer
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFNAFBasePlayerCharacter::TeleportPlayer(const struct FVector& WorldLocation, float Yaw)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerCharacter.TeleportPlayer");

	AFNAFBasePlayerCharacter_TeleportPlayer_Params params {};
	params.WorldLocation = WorldLocation;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1F00
//		Name   -> Function fnaf9.FNAFBasePlayerCharacter.OnKillZLevelsLoaded
//		Flags  -> (Final, Native, Private)
void AFNAFBasePlayerCharacter::OnKillZLevelsLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerCharacter.OnKillZLevelsLoaded");

	AFNAFBasePlayerCharacter_OnKillZLevelsLoaded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1BF0
//		Name   -> Function fnaf9.FNAFBasePlayerCharacter.GetPlayerPawnType
//		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
//		fnaf9_EPlayerPawnType                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
fnaf9_EPlayerPawnType AFNAFBasePlayerCharacter::GetPlayerPawnType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerCharacter.GetPlayerPawnType");

	AFNAFBasePlayerCharacter_GetPlayerPawnType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA1B10
//		Name   -> Function fnaf9.FNAFBasePlayerCharacter.GetLastSavedLocationAndRotation
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     LastSavedLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    LastSavedRotation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AFNAFBasePlayerCharacter::GetLastSavedLocationAndRotation(struct FVector* LastSavedLocation, struct FRotator* LastSavedRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerCharacter.GetLastSavedLocationAndRotation");

	AFNAFBasePlayerCharacter_GetLastSavedLocationAndRotation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LastSavedLocation != nullptr)
		*LastSavedLocation = params.LastSavedLocation;
	if (LastSavedRotation != nullptr)
		*LastSavedRotation = params.LastSavedRotation;

}


// Function:
//		Offset -> 0x00BA2030
//		Name   -> Function fnaf9.FNAFBasePlayerController.OnUsingGamepadChanged
//		Flags  -> (Native, Event, Protected, BlueprintEvent)
void AFNAFBasePlayerController::OnUsingGamepadChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnUsingGamepadChanged");

	AFNAFBasePlayerController_OnUsingGamepadChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.FNAFBasePlayerController.OnTriggerVannyScare
//		Flags  -> (Event, Protected, BlueprintEvent)
void AFNAFBasePlayerController::OnTriggerVannyScare()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnTriggerVannyScare");

	AFNAFBasePlayerController_OnTriggerVannyScare_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.FNAFBasePlayerController.OnToggleLocalizationQA
//		Flags  -> (Event, Protected, BlueprintEvent)
void AFNAFBasePlayerController::OnToggleLocalizationQA()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnToggleLocalizationQA");

	AFNAFBasePlayerController_OnToggleLocalizationQA_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.FNAFBasePlayerController.OnToggleFlightMode
//		Flags  -> (Event, Protected, BlueprintEvent)
void AFNAFBasePlayerController::OnToggleFlightMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnToggleFlightMode");

	AFNAFBasePlayerController_OnToggleFlightMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.FNAFBasePlayerController.OnToggleDevUI
//		Flags  -> (Event, Protected, BlueprintEvent)
void AFNAFBasePlayerController::OnToggleDevUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnToggleDevUI");

	AFNAFBasePlayerController_OnToggleDevUI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.FNAFBasePlayerController.OnToggleCinemaMode
//		Flags  -> (Event, Protected, BlueprintEvent)
void AFNAFBasePlayerController::OnToggleCinemaMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnToggleCinemaMode");

	AFNAFBasePlayerController_OnToggleCinemaMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.FNAFBasePlayerController.OnDebugSequenceEntered
//		Flags  -> (Event, Protected, BlueprintEvent)
void AFNAFBasePlayerController::OnDebugSequenceEntered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.OnDebugSequenceEntered");

	AFNAFBasePlayerController_OnDebugSequenceEntered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1E00
//		Name   -> Function fnaf9.FNAFBasePlayerController.IsUsingGamepad
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFNAFBasePlayerController::IsUsingGamepad()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.IsUsingGamepad");

	AFNAFBasePlayerController_IsUsingGamepad_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.FNAFBasePlayerController.GiveVIPAchievement
//		Flags  -> (Event, Public, BlueprintEvent)
void AFNAFBasePlayerController::GiveVIPAchievement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.GiveVIPAchievement");

	AFNAFBasePlayerController_GiveVIPAchievement_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1950
//		Name   -> Function fnaf9.FNAFBasePlayerController.GetCurrentKeysDown
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FKey>                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FKey> AFNAFBasePlayerController::GetCurrentKeysDown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.GetCurrentKeysDown");

	AFNAFBasePlayerController_GetCurrentKeysDown_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA1540
//		Name   -> Function fnaf9.FNAFBasePlayerController.AnyOtherKeysDown
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFNAFBasePlayerController::AnyOtherKeysDown(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFBasePlayerController.AnyOtherKeysDown");

	AFNAFBasePlayerController_AnyOtherKeysDown_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA2AD0
//		Name   -> Function fnaf9.FNAFCheatManager.UpgradeFreddy
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		fnaf9_EFreddyUpgradeType                           Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFCheatManager::UpgradeFreddy(fnaf9_EFreddyUpgradeType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFCheatManager.UpgradeFreddy");

	UFNAFCheatManager_UpgradeFreddy_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA2A50
//		Name   -> Function fnaf9.FNAFCheatManager.ToggleDebugCloaking
//		Flags  -> (Final, Exec, Native, Public)
void UFNAFCheatManager::ToggleDebugCloaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFCheatManager.ToggleDebugCloaking");

	UFNAFCheatManager_ToggleDebugCloaking_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA23E0
//		Name   -> Function fnaf9.FNAFCheatManager.SetDebugCloaking
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFCheatManager::SetDebugCloaking(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFCheatManager.SetDebugCloaking");

	UFNAFCheatManager_SetDebugCloaking_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1A80
//		Name   -> Function fnaf9.FNAFCheatManager.GetDebugCloaking
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFCheatManager::GetDebugCloaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFCheatManager.GetDebugCloaking");

	UFNAFCheatManager_GetDebugCloaking_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA1630
//		Name   -> Function fnaf9.FNAFCheatManager.ApplyQualitySettings
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		int                                                VisualQualityLevel                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                RayTraceQualityLevel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFCheatManager::ApplyQualitySettings(int VisualQualityLevel, int RayTraceQualityLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFCheatManager.ApplyQualitySettings");

	UFNAFCheatManager_ApplyQualitySettings_Params params {};
	params.VisualQualityLevel = VisualQualityLevel;
	params.RayTraceQualityLevel = RayTraceQualityLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA2A90
//		Name   -> Function fnaf9.FNAFEventObject.TriggerEvent
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void UFNAFEventObject::TriggerEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventObject.TriggerEvent");

	UFNAFEventObject_TriggerEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1D50
//		Name   -> Function fnaf9.FNAFEventObject.IsEventFinished
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFEventObject::IsEventFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventObject.IsEventFinished");

	UFNAFEventObject_IsEventFinished_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9B820
//		Name   -> Function fnaf9.FNAFEventObject.CanPlayEvent
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFEventObject::CanPlayEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventObject.CanPlayEvent");

	UFNAFEventObject_CanPlayEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA2AB0
//		Name   -> Function fnaf9.FNAFEventSystem.UnpauseEventSystem
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFEventSystem::UnpauseEventSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.UnpauseEventSystem");

	UFNAFEventSystem_UnpauseEventSystem_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA2810
//		Name   -> Function fnaf9.FNAFEventSystem.StoreEventTriggered
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       EventTag                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFEventSystem::StoreEventTriggered(const struct FName& EventTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.StoreEventTriggered");

	UFNAFEventSystem_StoreEventTriggered_Params params {};
	params.EventTag = EventTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA27F0
//		Name   -> Function fnaf9.FNAFEventSystem.StopEventTimer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFEventSystem::StopEventTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.StopEventTimer");

	UFNAFEventSystem_StopEventTimer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA2730
//		Name   -> Function fnaf9.FNAFEventSystem.StartEventTimer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFEventSystem::StartEventTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.StartEventTimer");

	UFNAFEventSystem_StartEventTimer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA24F0
//		Name   -> Function fnaf9.FNAFEventSystem.SetEventTimeSeconds
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              MinTimeBetweenEvents                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MaxTimeBetweenEvents                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFEventSystem::SetEventTimeSeconds(float MinTimeBetweenEvents, float MaxTimeBetweenEvents)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.SetEventTimeSeconds");

	UFNAFEventSystem_SetEventTimeSeconds_Params params {};
	params.MinTimeBetweenEvents = MinTimeBetweenEvents;
	params.MaxTimeBetweenEvents = MaxTimeBetweenEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA2470
//		Name   -> Function fnaf9.FNAFEventSystem.SetEventActorWeight
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              NewWeight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFEventSystem::SetEventActorWeight(float NewWeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.SetEventActorWeight");

	UFNAFEventSystem_SetEventActorWeight_Params params {};
	params.NewWeight = NewWeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA2360
//		Name   -> Function fnaf9.FNAFEventSystem.SetCurrentAudioComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UAudioComponent*                             EventSoundCue                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFEventSystem::SetCurrentAudioComponent(class UAudioComponent* EventSoundCue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.SetCurrentAudioComponent");

	UFNAFEventSystem_SetCurrentAudioComponent_Params params {};
	params.EventSoundCue = EventSoundCue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA2170
//		Name   -> Function fnaf9.FNAFEventSystem.PauseEventSystem
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFEventSystem::PauseEventSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.PauseEventSystem");

	UFNAFEventSystem_PauseEventSystem_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1E80
//		Name   -> Function fnaf9.FNAFEventSystem.OnAudioFinished
//		Flags  -> (Final, Native, Private)
void UFNAFEventSystem::OnAudioFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.OnAudioFinished");

	UFNAFEventSystem_OnAudioFinished_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1C80
//		Name   -> Function fnaf9.FNAFEventSystem.HasEventBeenTriggered
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       EventTag                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFEventSystem::HasEventBeenTriggered(const struct FName& EventTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFEventSystem.HasEventBeenTriggered");

	UFNAFEventSystem_HasEventBeenTriggered_Params params {};
	params.EventTag = EventTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA2750
//		Name   -> Function fnaf9.FNAFGameInstanceBase.StartGamePlay
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		fnaf9_EFNAFGameType                                GameType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFGameInstanceBase::StartGamePlay(fnaf9_EFNAFGameType GameType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.StartGamePlay");

	UFNAFGameInstanceBase_StartGamePlay_Params params {};
	params.GameType = GameType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA26B0
//		Name   -> Function fnaf9.FNAFGameInstanceBase.SetVisualQualityLevel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFGameInstanceBase::SetVisualQualityLevel(int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.SetVisualQualityLevel");

	UFNAFGameInstanceBase_SetVisualQualityLevel_Params params {};
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA2630
//		Name   -> Function fnaf9.FNAFGameInstanceBase.SetSplashFinished
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bFinished                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFGameInstanceBase::SetSplashFinished(bool bFinished)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.SetSplashFinished");

	UFNAFGameInstanceBase_SetSplashFinished_Params params {};
	params.bFinished = bFinished;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA25B0
//		Name   -> Function fnaf9.FNAFGameInstanceBase.SetRayTraceQualityLevel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFGameInstanceBase::SetRayTraceQualityLevel(int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.SetRayTraceQualityLevel");

	UFNAFGameInstanceBase_SetRayTraceQualityLevel_Params params {};
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA2220
//		Name   -> Function fnaf9.FNAFGameInstanceBase.ProcessActivityIntent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFGameInstanceBase::ProcessActivityIntent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.ProcessActivityIntent");

	UFNAFGameInstanceBase_ProcessActivityIntent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1EE0
//		Name   -> Function fnaf9.FNAFGameInstanceBase.OnGameActivityLoadComplete
//		Flags  -> (Final, Native, Private)
void UFNAFGameInstanceBase::OnGameActivityLoadComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.OnGameActivityLoadComplete");

	UFNAFGameInstanceBase_OnGameActivityLoadComplete_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1E60
//		Name   -> Function fnaf9.FNAFGameInstanceBase.OnApplicationReactivated
//		Flags  -> (Final, Native, Private)
void UFNAFGameInstanceBase::OnApplicationReactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.OnApplicationReactivated");

	UFNAFGameInstanceBase_OnApplicationReactivated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1E40
//		Name   -> Function fnaf9.FNAFGameInstanceBase.OnApplicationDeactivated
//		Flags  -> (Final, Native, Private)
void UFNAFGameInstanceBase::OnApplicationDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.OnApplicationDeactivated");

	UFNAFGameInstanceBase_OnApplicationDeactivated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1E20
//		Name   -> Function fnaf9.FNAFGameInstanceBase.LogGameClockDelegates
//		Flags  -> (Final, Exec, Native, Public)
void UFNAFGameInstanceBase::LogGameClockDelegates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.LogGameClockDelegates");

	UFNAFGameInstanceBase_LogGameClockDelegates_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1DD0
//		Name   -> Function fnaf9.FNAFGameInstanceBase.IsNormalPlay
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFGameInstanceBase::IsNormalPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.IsNormalPlay");

	UFNAFGameInstanceBase_IsNormalPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA1DB0
//		Name   -> Function fnaf9.FNAFGameInstanceBase.IsLoadingActivity
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFGameInstanceBase::IsLoadingActivity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.IsLoadingActivity");

	UFNAFGameInstanceBase_IsLoadingActivity_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA1D80
//		Name   -> Function fnaf9.FNAFGameInstanceBase.IsFromTitle
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFGameInstanceBase::IsFromTitle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.IsFromTitle");

	UFNAFGameInstanceBase_IsFromTitle_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA1D10
//		Name   -> Function fnaf9.FNAFGameInstanceBase.HasSplashFinished
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFGameInstanceBase::HasSplashFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.HasSplashFinished");

	UFNAFGameInstanceBase_HasSplashFinished_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA1C50
//		Name   -> Function fnaf9.FNAFGameInstanceBase.GetVisualQualityLevel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFNAFGameInstanceBase::GetVisualQualityLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetVisualQualityLevel");

	UFNAFGameInstanceBase_GetVisualQualityLevel_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA1C20
//		Name   -> Function fnaf9.FNAFGameInstanceBase.GetRayTraceQualityLevel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFNAFGameInstanceBase::GetRayTraceQualityLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetRayTraceQualityLevel");

	UFNAFGameInstanceBase_GetRayTraceQualityLevel_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA1AE0
//		Name   -> Function fnaf9.FNAFGameInstanceBase.GetIsShippingConfig
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFGameInstanceBase::GetIsShippingConfig()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetIsShippingConfig");

	UFNAFGameInstanceBase_GetIsShippingConfig_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA1AB0
//		Name   -> Function fnaf9.FNAFGameInstanceBase.GetGPUBenchmarkResult
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFNAFGameInstanceBase::GetGPUBenchmarkResult()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetGPUBenchmarkResult");

	UFNAFGameInstanceBase_GetGPUBenchmarkResult_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9C180
//		Name   -> Function fnaf9.FNAFGameInstanceBase.GetCurrentGameType
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		fnaf9_EFNAFGameType                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
fnaf9_EFNAFGameType UFNAFGameInstanceBase::GetCurrentGameType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetCurrentGameType");

	UFNAFGameInstanceBase_GetCurrentGameType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA18F0
//		Name   -> Function fnaf9.FNAFGameInstanceBase.GetCPUBenchmarkResult
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFNAFGameInstanceBase::GetCPUBenchmarkResult()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetCPUBenchmarkResult");

	UFNAFGameInstanceBase_GetCPUBenchmarkResult_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA1870
//		Name   -> Function fnaf9.FNAFGameInstanceBase.GetAllLoadedLevelsString
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFNAFGameInstanceBase::GetAllLoadedLevelsString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFGameInstanceBase.GetAllLoadedLevelsString");

	UFNAFGameInstanceBase_GetAllLoadedLevelsString_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA1920
//		Name   -> Function fnaf9.FNAFInputDeviceSystem.GetCurrentInputDevice
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		fnaf9_ESWGInputDeviceType                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
fnaf9_ESWGInputDeviceType UFNAFInputDeviceSystem::GetCurrentInputDevice()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInputDeviceSystem.GetCurrentInputDevice");

	UFNAFInputDeviceSystem_GetCurrentInputDevice_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA9420
//		Name   -> Function fnaf9.FNAFInventorySystem.UsePartyPass
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFInventorySystem::UsePartyPass()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.UsePartyPass");

	UFNAFInventorySystem_UsePartyPass_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA9390
//		Name   -> Function fnaf9.FNAFInventorySystem.UseFlash
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		bool                                               bOutFlashUsed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFInventorySystem::UseFlash(bool* bOutFlashUsed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.UseFlash");

	UFNAFInventorySystem_UseFlash_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bOutFlashUsed != nullptr)
		*bOutFlashUsed = params.bOutFlashUsed;

}


// Function:
//		Offset -> 0x00BA9130
//		Name   -> Function fnaf9.FNAFInventorySystem.SetupNewGame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFInventorySystem::SetupNewGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetupNewGame");

	UFNAFInventorySystem_SetupNewGame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA90B0
//		Name   -> Function fnaf9.FNAFInventorySystem.SetSecurityLevel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                NewSecurityLevel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFInventorySystem::SetSecurityLevel(int NewSecurityLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetSecurityLevel");

	UFNAFInventorySystem_SetSecurityLevel_Params params {};
	params.NewSecurityLevel = NewSecurityLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA9030
//		Name   -> Function fnaf9.FNAFInventorySystem.SetPowerLevel_Freddy
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InPowerLevel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFInventorySystem::SetPowerLevel_Freddy(int InPowerLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetPowerLevel_Freddy");

	UFNAFInventorySystem_SetPowerLevel_Freddy_Params params {};
	params.InPowerLevel = InPowerLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8FB0
//		Name   -> Function fnaf9.FNAFInventorySystem.SetPowerLevel_Fazwatch
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InPowerLevel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFInventorySystem::SetPowerLevel_Fazwatch(int InPowerLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetPowerLevel_Fazwatch");

	UFNAFInventorySystem_SetPowerLevel_Fazwatch_Params params {};
	params.InPowerLevel = InPowerLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8EB0
//		Name   -> Function fnaf9.FNAFInventorySystem.SetPartyLevel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                NewPartyLevel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFInventorySystem::SetPartyLevel(int NewPartyLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetPartyLevel");

	UFNAFInventorySystem_SetPartyLevel_Params params {};
	params.NewPartyLevel = NewPartyLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8D60
//		Name   -> Function fnaf9.FNAFInventorySystem.SetMessageViewed
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFInventorySystem::SetMessageViewed(const struct FName& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetMessageViewed");

	UFNAFInventorySystem_SetMessageViewed_Params params {};
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8CE0
//		Name   -> Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Freddy
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                NewMax                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFInventorySystem::SetMaxPowerLevel_Freddy(int NewMax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Freddy");

	UFNAFInventorySystem_SetMaxPowerLevel_Freddy_Params params {};
	params.NewMax = NewMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8C60
//		Name   -> Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Fazwatch
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                NewMax                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFInventorySystem::SetMaxPowerLevel_Fazwatch(int NewMax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetMaxPowerLevel_Fazwatch");

	UFNAFInventorySystem_SetMaxPowerLevel_Fazwatch_Params params {};
	params.NewMax = NewMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8B50
//		Name   -> Function fnaf9.FNAFInventorySystem.SetItemViewed
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFInventorySystem::SetItemViewed(const struct FName& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetItemViewed");

	UFNAFInventorySystem_SetItemViewed_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8AD0
//		Name   -> Function fnaf9.FNAFInventorySystem.SetFlashlightStationID
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                StationID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFInventorySystem::SetFlashlightStationID(int StationID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.SetFlashlightStationID");

	UFNAFInventorySystem_SetFlashlightStationID_Params params {};
	params.StationID = StationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8990
//		Name   -> Function fnaf9.FNAFInventorySystem.ResetFreddyPower
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFInventorySystem::ResetFreddyPower()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.ResetFreddyPower");

	UFNAFInventorySystem_ResetFreddyPower_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8970
//		Name   -> Function fnaf9.FNAFInventorySystem.ResetFlashlightPower
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFInventorySystem::ResetFlashlightPower()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.ResetFlashlightPower");

	UFNAFInventorySystem_ResetFlashlightPower_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8950
//		Name   -> Function fnaf9.FNAFInventorySystem.ResetFlashes
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFInventorySystem::ResetFlashes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.ResetFlashes");

	UFNAFInventorySystem_ResetFlashes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA88D0
//		Name   -> Function fnaf9.FNAFInventorySystem.RemoveMessage
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFInventorySystem::RemoveMessage(const struct FName& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.RemoveMessage");

	UFNAFInventorySystem_RemoveMessage_Params params {};
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA86A0
//		Name   -> Function fnaf9.FNAFInventorySystem.RemoveItem
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFInventorySystem::RemoveItem(const struct FName& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.RemoveItem");

	UFNAFInventorySystem_RemoveItem_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8680
//		Name   -> Function fnaf9.FNAFInventorySystem.RemoveEverything
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFInventorySystem::RemoveEverything()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.RemoveEverything");

	UFNAFInventorySystem_RemoveEverything_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8310
//		Name   -> Function fnaf9.FNAFInventorySystem.IsVIPItem
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFInventorySystem::IsVIPItem(const struct FName& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.IsVIPItem");

	UFNAFInventorySystem_IsVIPItem_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA81E0
//		Name   -> Function fnaf9.FNAFInventorySystem.IsMessageValid
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFInventorySystem::IsMessageValid(const struct FName& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.IsMessageValid");

	UFNAFInventorySystem_IsMessageValid_Params params {};
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA8120
//		Name   -> Function fnaf9.FNAFInventorySystem.IsItemValid
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFInventorySystem::IsItemValid(const struct FName& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.IsItemValid");

	UFNAFInventorySystem_IsItemValid_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7F20
//		Name   -> Function fnaf9.FNAFInventorySystem.HasSecurityClearance
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                InSecurityLevel                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFInventorySystem::HasSecurityClearance(int InSecurityLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasSecurityClearance");

	UFNAFInventorySystem_HasSecurityClearance_Params params {};
	params.InSecurityLevel = InSecurityLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7E90
//		Name   -> Function fnaf9.FNAFInventorySystem.HasMessageBeenViewed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ItemOrMessage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFInventorySystem::HasMessageBeenViewed(const struct FName& ItemOrMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasMessageBeenViewed");

	UFNAFInventorySystem_HasMessageBeenViewed_Params params {};
	params.ItemOrMessage = ItemOrMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7E00
//		Name   -> Function fnaf9.FNAFInventorySystem.HasMessage
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       SearchMessage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFInventorySystem::HasMessage(const struct FName& SearchMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasMessage");

	UFNAFInventorySystem_HasMessage_Params params {};
	params.SearchMessage = SearchMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7D70
//		Name   -> Function fnaf9.FNAFInventorySystem.HasItemBeenViewed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ItemOrMessage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFInventorySystem::HasItemBeenViewed(const struct FName& ItemOrMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasItemBeenViewed");

	UFNAFInventorySystem_HasItemBeenViewed_Params params {};
	params.ItemOrMessage = ItemOrMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7CE0
//		Name   -> Function fnaf9.FNAFInventorySystem.HasItem
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       searchItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFInventorySystem::HasItem(const struct FName& searchItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasItem");

	UFNAFInventorySystem_HasItem_Params params {};
	params.searchItem = searchItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7C50
//		Name   -> Function fnaf9.FNAFInventorySystem.HasEnoughPower_Freddy
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                PowerRequired                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFInventorySystem::HasEnoughPower_Freddy(int PowerRequired)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasEnoughPower_Freddy");

	UFNAFInventorySystem_HasEnoughPower_Freddy_Params params {};
	params.PowerRequired = PowerRequired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7BC0
//		Name   -> Function fnaf9.FNAFInventorySystem.HasEnoughPower_Fazwatch
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                PowerRequired                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFInventorySystem::HasEnoughPower_Fazwatch(int PowerRequired)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasEnoughPower_Fazwatch");

	UFNAFInventorySystem_HasEnoughPower_Fazwatch_Params params {};
	params.PowerRequired = PowerRequired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7B90
//		Name   -> Function fnaf9.FNAFInventorySystem.HasAvailablePartyPass
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFInventorySystem::HasAvailablePartyPass()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.HasAvailablePartyPass");

	UFNAFInventorySystem_HasAvailablePartyPass_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA76C0
//		Name   -> Function fnaf9.FNAFInventorySystem.GetTapesListenedTo
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
void UFNAFInventorySystem::GetTapesListenedTo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetTapesListenedTo");

	UFNAFInventorySystem_GetTapesListenedTo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA7600
//		Name   -> Function fnaf9.FNAFInventorySystem.GetStaminaUpgradeMultiplier
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFNAFInventorySystem::GetStaminaUpgradeMultiplier()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetStaminaUpgradeMultiplier");

	UFNAFInventorySystem_GetStaminaUpgradeMultiplier_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA75D0
//		Name   -> Function fnaf9.FNAFInventorySystem.GetNumberOfUnreadMessages
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFNAFInventorySystem::GetNumberOfUnreadMessages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetNumberOfUnreadMessages");

	UFNAFInventorySystem_GetNumberOfUnreadMessages_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA6DA0
//		Name   -> Function fnaf9.FNAFInventorySystem.GetMessageInfo
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       MessageName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFNAFMessageTableStruct                     OutMessageInfo                                             (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               OutFound                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFInventorySystem::GetMessageInfo(const struct FName& MessageName, struct FFNAFMessageTableStruct* OutMessageInfo, bool* OutFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetMessageInfo");

	UFNAFInventorySystem_GetMessageInfo_Params params {};
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


// Function:
//		Offset -> 0x00BA6D70
//		Name   -> Function fnaf9.FNAFInventorySystem.GetMaxFlashes
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFNAFInventorySystem::GetMaxFlashes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetMaxFlashes");

	UFNAFInventorySystem_GetMaxFlashes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA6980
//		Name   -> Function fnaf9.FNAFInventorySystem.GetItemInfo
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ItemName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFNAFInventoryTableStruct                   OutItemInfo                                                (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               OutFound                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFInventorySystem::GetItemInfo(const struct FName& ItemName, struct FFNAFInventoryTableStruct* OutItemInfo, bool* OutFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetItemInfo");

	UFNAFInventorySystem_GetItemInfo_Params params {};
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


// Function:
//		Offset -> 0x00BA6950
//		Name   -> Function fnaf9.FNAFInventorySystem.GetFreddyUpgradeMutliplier
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFNAFInventorySystem::GetFreddyUpgradeMutliplier()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetFreddyUpgradeMutliplier");

	UFNAFInventorySystem_GetFreddyUpgradeMutliplier_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA6920
//		Name   -> Function fnaf9.FNAFInventorySystem.GetFreddyMaxPower
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFNAFInventorySystem::GetFreddyMaxPower()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetFreddyMaxPower");

	UFNAFInventorySystem_GetFreddyMaxPower_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA68F0
//		Name   -> Function fnaf9.FNAFInventorySystem.GetFlashlightUpgradMultiplier
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFNAFInventorySystem::GetFlashlightUpgradMultiplier()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetFlashlightUpgradMultiplier");

	UFNAFInventorySystem_GetFlashlightUpgradMultiplier_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA68D0
//		Name   -> Function fnaf9.FNAFInventorySystem.GetFlashlightStationID
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFNAFInventorySystem::GetFlashlightStationID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetFlashlightStationID");

	UFNAFInventorySystem_GetFlashlightStationID_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA68A0
//		Name   -> Function fnaf9.FNAFInventorySystem.GetFlashlightMaxPower
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFNAFInventorySystem::GetFlashlightMaxPower()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetFlashlightMaxPower");

	UFNAFInventorySystem_GetFlashlightMaxPower_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA6760
//		Name   -> Function fnaf9.FNAFInventorySystem.GetCollectedPartyPasses
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FName>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FName> UFNAFInventorySystem::GetCollectedPartyPasses()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetCollectedPartyPasses");

	UFNAFInventorySystem_GetCollectedPartyPasses_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA6500
//		Name   -> Function fnaf9.FNAFInventorySystem.GetAllSurvivalItemsOfType
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		fnaf9_EInventoryItemSurvivalCategory               SurvivalCategory                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FName>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FName> UFNAFInventorySystem::GetAllSurvivalItemsOfType(fnaf9_EInventoryItemSurvivalCategory SurvivalCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.GetAllSurvivalItemsOfType");

	UFNAFInventorySystem_GetAllSurvivalItemsOfType_Params params {};
	params.SurvivalCategory = SurvivalCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA6130
//		Name   -> Function fnaf9.FNAFInventorySystem.ClearFlashlightStationID
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFInventorySystem::ClearFlashlightStationID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.ClearFlashlightStationID");

	UFNAFInventorySystem_ClearFlashlightStationID_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA6100
//		Name   -> Function fnaf9.FNAFInventorySystem.CanUseFlashBeacon
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFInventorySystem::CanUseFlashBeacon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.CanUseFlashBeacon");

	UFNAFInventorySystem_CanUseFlashBeacon_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA5F50
//		Name   -> Function fnaf9.FNAFInventorySystem.AwardMessage
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bNotify                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFInventorySystem::AwardMessage(const struct FName& Message, bool bNotify)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AwardMessage");

	UFNAFInventorySystem_AwardMessage_Params params {};
	params.Message = Message;
	params.bNotify = bNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA5E80
//		Name   -> Function fnaf9.FNAFInventorySystem.AwardItem
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bNotify                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFInventorySystem::AwardItem(const struct FName& Item, bool bNotify)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AwardItem");

	UFNAFInventorySystem_AwardItem_Params params {};
	params.Item = Item;
	params.bNotify = bNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA5DF0
//		Name   -> Function fnaf9.FNAFInventorySystem.AdjustPower_Freddy
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ChangeAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFInventorySystem::AdjustPower_Freddy(int ChangeAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AdjustPower_Freddy");

	UFNAFInventorySystem_AdjustPower_Freddy_Params params {};
	params.ChangeAmount = ChangeAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA5D60
//		Name   -> Function fnaf9.FNAFInventorySystem.AdjustPower_Fazwatch
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ChangeAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFInventorySystem::AdjustPower_Fazwatch(int ChangeAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AdjustPower_Fazwatch");

	UFNAFInventorySystem_AdjustPower_Fazwatch_Params params {};
	params.ChangeAmount = ChangeAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA5CE0
//		Name   -> Function fnaf9.FNAFInventorySystem.AddTapeListenedTo
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       InTapeListenedTo                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFInventorySystem::AddTapeListenedTo(const struct FName& InTapeListenedTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AddTapeListenedTo");

	UFNAFInventorySystem_AddTapeListenedTo_Params params {};
	params.InTapeListenedTo = InTapeListenedTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA5B10
//		Name   -> Function fnaf9.FNAFInventorySystem.AddEverything
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFInventorySystem::AddEverything()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AddEverything");

	UFNAFInventorySystem_AddEverything_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA5AE0
//		Name   -> Function fnaf9.FNAFInventorySystem.AddBrokenPlate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFNAFInventorySystem::AddBrokenPlate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFInventorySystem.AddBrokenPlate");

	UFNAFInventorySystem_AddBrokenPlate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA9310
//		Name   -> Function fnaf9.FNAFLevelManager.UnregisterStreamingSource
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFLevelManager::UnregisterStreamingSource(class USceneComponent* SceneComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.UnregisterStreamingSource");

	UFNAFLevelManager_UnregisterStreamingSource_Params params {};
	params.SceneComponent = SceneComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA9290
//		Name   -> Function fnaf9.FNAFLevelManager.UnregisterPawnStreamingSource
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFLevelManager::UnregisterPawnStreamingSource(class USceneComponent* SceneComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.UnregisterPawnStreamingSource");

	UFNAFLevelManager_UnregisterPawnStreamingSource_Params params {};
	params.SceneComponent = SceneComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8F30
//		Name   -> Function fnaf9.FNAFLevelManager.SetPlayerPawn
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APawn*                                       PlayerPawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFLevelManager::SetPlayerPawn(class APawn* PlayerPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.SetPlayerPawn");

	UFNAFLevelManager_SetPlayerPawn_Params params {};
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8BD0
//		Name   -> Function fnaf9.FNAFLevelManager.SetLevelStreamingEnable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFLevelManager::SetLevelStreamingEnable(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.SetLevelStreamingEnable");

	UFNAFLevelManager_SetLevelStreamingEnable_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8850
//		Name   -> Function fnaf9.FNAFLevelManager.RemoveLevelsFromStreamingSource
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             StreamingSource                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFLevelManager::RemoveLevelsFromStreamingSource(class USceneComponent* StreamingSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RemoveLevelsFromStreamingSource");

	UFNAFLevelManager_RemoveLevelsFromStreamingSource_Params params {};
	params.StreamingSource = StreamingSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA87A0
//		Name   -> Function fnaf9.FNAFLevelManager.RemoveLevelArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class ULevelStreaming*>                     Levels                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFLevelManager::RemoveLevelArray(TArray<class ULevelStreaming*> Levels)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RemoveLevelArray");

	UFNAFLevelManager_RemoveLevelArray_Params params {};
	params.Levels = Levels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8720
//		Name   -> Function fnaf9.FNAFLevelManager.RemoveLevel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULevelStreaming*                             LevelToUnload                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFLevelManager::RemoveLevel(class ULevelStreaming* LevelToUnload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RemoveLevel");

	UFNAFLevelManager_RemoveLevel_Params params {};
	params.LevelToUnload = LevelToUnload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8660
//		Name   -> Function fnaf9.FNAFLevelManager.RemoveAllLevels
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFLevelManager::RemoveAllLevels()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RemoveAllLevels");

	UFNAFLevelManager_RemoveAllLevels_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8550
//		Name   -> Function fnaf9.FNAFLevelManager.RegisterStreamingSource
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFLevelManager::RegisterStreamingSource(class USceneComponent* SceneComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RegisterStreamingSource");

	UFNAFLevelManager_RegisterStreamingSource_Params params {};
	params.SceneComponent = SceneComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA84D0
//		Name   -> Function fnaf9.FNAFLevelManager.RegisterPawnStreamingSource
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             SceneComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFLevelManager::RegisterPawnStreamingSource(class USceneComponent* SceneComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.RegisterPawnStreamingSource");

	UFNAFLevelManager_RegisterPawnStreamingSource_Params params {};
	params.SceneComponent = SceneComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA81B0
//		Name   -> Function fnaf9.FNAFLevelManager.IsLevelStreamingEnable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFLevelManager::IsLevelStreamingEnable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.IsLevelStreamingEnable");

	UFNAFLevelManager_IsLevelStreamingEnable_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7630
//		Name   -> Function fnaf9.FNAFLevelManager.GetStreamingSources
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class USceneComponent*>                     ReturnValue                                                (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class USceneComponent*> UFNAFLevelManager::GetStreamingSources()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.GetStreamingSources");

	UFNAFLevelManager_GetStreamingSources_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA6B40
//		Name   -> Function fnaf9.FNAFLevelManager.GetLevelNamesForComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class USceneComponent*                             SceneComponent                                             (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FName>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FName> UFNAFLevelManager::GetLevelNamesForComponent(class USceneComponent* SceneComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.GetLevelNamesForComponent");

	UFNAFLevelManager_GetLevelNamesForComponent_Params params {};
	params.SceneComponent = SceneComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA5BE0
//		Name   -> Function fnaf9.FNAFLevelManager.AddLevelToLoad
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULevelStreaming*                             LevelToLoad                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFLevelManager::AddLevelToLoad(class ULevelStreaming* LevelToLoad)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.AddLevelToLoad");

	UFNAFLevelManager_AddLevelToLoad_Params params {};
	params.LevelToLoad = LevelToLoad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA5C60
//		Name   -> Function fnaf9.FNAFLevelManager.AddLevelsFromStreamingSourceToLoad
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             StreamingSource                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFLevelManager::AddLevelsFromStreamingSourceToLoad(class USceneComponent* StreamingSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.AddLevelsFromStreamingSourceToLoad");

	UFNAFLevelManager_AddLevelsFromStreamingSourceToLoad_Params params {};
	params.StreamingSource = StreamingSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA5B30
//		Name   -> Function fnaf9.FNAFLevelManager.AddLevelArrayToLoad
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class ULevelStreaming*>                     LevelsToLoad                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFLevelManager::AddLevelArrayToLoad(TArray<class ULevelStreaming*> LevelsToLoad)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFLevelManager.AddLevelArrayToLoad");

	UFNAFLevelManager_AddLevelArrayToLoad_Params params {};
	params.LevelsToLoad = LevelsToLoad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA9200
//		Name   -> Function fnaf9.FNAFManagedAI.TeleportAI
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFManagedAI::TeleportAI(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.TeleportAI");

	UFNAFManagedAI_TeleportAI_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA9170
//		Name   -> Function fnaf9.FNAFManagedAI.StartMoveTo
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFManagedAI::StartMoveTo(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.StartMoveTo");

	UFNAFManagedAI_StartMoveTo_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8A40
//		Name   -> Function fnaf9.FNAFManagedAI.SendVanessaAlert
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       VanessaPawn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFManagedAI::SendVanessaAlert(class APawn* VanessaPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.SendVanessaAlert");

	UFNAFManagedAI_SendVanessaAlert_Params params {};
	params.VanessaPawn = VanessaPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA89B0
//		Name   -> Function fnaf9.FNAFManagedAI.SendPositionalAlert
//		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFManagedAI::SendPositionalAlert(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.SendPositionalAlert");

	UFNAFManagedAI_SendPositionalAlert_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9B820
//		Name   -> Function fnaf9.FNAFManagedAI.IsShatteredVersion
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFManagedAI::IsShatteredVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.IsShatteredVersion");

	UFNAFManagedAI_IsShatteredVersion_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA6C20
//		Name   -> Function fnaf9.FNAFManagedAI.GetManagedAIType
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
fnaf9_EFNAFAISpawnType UFNAFManagedAI::GetManagedAIType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.GetManagedAIType");

	UFNAFManagedAI_GetManagedAIType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA6860
//		Name   -> Function fnaf9.FNAFManagedAI.GetCurrentPathName
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UFNAFManagedAI::GetCurrentPathName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.GetCurrentPathName");

	UFNAFManagedAI_GetCurrentPathName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA62D0
//		Name   -> Function fnaf9.FNAFManagedAI.ForceTrackToPlayer
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UFNAFManagedAI::ForceTrackToPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.ForceTrackToPlayer");

	UFNAFManagedAI_ForceTrackToPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA62B0
//		Name   -> Function fnaf9.FNAFManagedAI.EndTrackToPlayer
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UFNAFManagedAI::EndTrackToPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.EndTrackToPlayer");

	UFNAFManagedAI_EndTrackToPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA1D50
//		Name   -> Function fnaf9.FNAFManagedAI.CanReceiveAlert
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFManagedAI::CanReceiveAlert()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFManagedAI.CanReceiveAlert");

	UFNAFManagedAI_CanReceiveAlert_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA9150
//		Name   -> Function fnaf9.FNAFMissionSystem.SetupNewGame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFMissionSystem::SetupNewGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.SetupNewGame");

	UFNAFMissionSystem_SetupNewGame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8DE0
//		Name   -> Function fnaf9.FNAFMissionSystem.SetMissionInfoState
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InfoState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFMissionSystem::SetMissionInfoState(const struct FName& MissionName, int InfoState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.SetMissionInfoState");

	UFNAFMissionSystem_SetMissionInfoState_Params params {};
	params.MissionName = MissionName;
	params.InfoState = InfoState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA85D0
//		Name   -> Function fnaf9.FNAFMissionSystem.RemoveActiveMission
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFMissionSystem::RemoveActiveMission(const struct FName& MissionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.RemoveActiveMission");

	UFNAFMissionSystem_RemoveActiveMission_Params params {};
	params.MissionName = MissionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8440
//		Name   -> Function fnaf9.FNAFMissionSystem.NotifyMissionUpdate
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFMissionSystem::NotifyMissionUpdate(const struct FName& MissionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.NotifyMissionUpdate");

	UFNAFMissionSystem_NotifyMissionUpdate_Params params {};
	params.MissionName = MissionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA83A0
//		Name   -> Function fnaf9.FNAFMissionSystem.IsValidMission
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFMissionSystem::IsValidMission(const struct FName& MissionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.IsValidMission");

	UFNAFMissionSystem_IsValidMission_Params params {};
	params.MissionName = MissionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA8270
//		Name   -> Function fnaf9.FNAFMissionSystem.IsMissionActiveOrCompleted
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFMissionSystem::IsMissionActiveOrCompleted(const struct FName& MissionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.IsMissionActiveOrCompleted");

	UFNAFMissionSystem_IsMissionActiveOrCompleted_Params params {};
	params.MissionName = MissionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA80F0
//		Name   -> Function fnaf9.FNAFMissionSystem.IsInSurvivalMode
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFMissionSystem::IsInSurvivalMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.IsInSurvivalMode");

	UFNAFMissionSystem_IsInSurvivalMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA8050
//		Name   -> Function fnaf9.FNAFMissionSystem.IsCompletedMission
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFMissionSystem::IsCompletedMission(const struct FName& MissionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.IsCompletedMission");

	UFNAFMissionSystem_IsCompletedMission_Params params {};
	params.MissionName = MissionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7FB0
//		Name   -> Function fnaf9.FNAFMissionSystem.IsActiveMission
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFMissionSystem::IsActiveMission(const struct FName& MissionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.IsActiveMission");

	UFNAFMissionSystem_IsActiveMission_Params params {};
	params.MissionName = MissionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7B10
//		Name   -> Function fnaf9.FNAFMissionSystem.GetTrackedMissions
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FFNAFMissionState>                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FFNAFMissionState> UFNAFMissionSystem::GetTrackedMissions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetTrackedMissions");

	UFNAFMissionSystem_GetTrackedMissions_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7AF0
//		Name   -> Function fnaf9.FNAFMissionSystem.GetTaskTable
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UDataTable*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDataTable* UFNAFMissionSystem::GetTaskTable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetTaskTable");

	UFNAFMissionSystem_GetTaskTable_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7980
//		Name   -> Function fnaf9.FNAFMissionSystem.GetTaskInfo
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       TaskName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFNAFMissionTaskInfo                        OutMissionTaskInfo                                         (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               OutValidTask                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFMissionSystem::GetTaskInfo(const struct FName& TaskName, struct FFNAFMissionTaskInfo* OutMissionTaskInfo, bool* OutValidTask)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetTaskInfo");

	UFNAFMissionSystem_GetTaskInfo_Params params {};
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


// Function:
//		Offset -> 0x00BA77C0
//		Name   -> Function fnaf9.FNAFMissionSystem.GetTaskByIndex
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TaskIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFNAFMissionTaskInfo                        OutMissionTaskInfo                                         (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               OutValidTask                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFMissionSystem::GetTaskByIndex(const struct FName& MissionName, int TaskIndex, struct FFNAFMissionTaskInfo* OutMissionTaskInfo, bool* OutValidTask)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetTaskByIndex");

	UFNAFMissionSystem_GetTaskByIndex_Params params {};
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


// Function:
//		Offset -> 0x00BA75B0
//		Name   -> Function fnaf9.FNAFMissionSystem.GetMissionTable
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UDataTable*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDataTable* UFNAFMissionSystem::GetMissionTable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetMissionTable");

	UFNAFMissionSystem_GetMissionTable_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA7460
//		Name   -> Function fnaf9.FNAFMissionSystem.GetMissionState
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFNAFMissionState                           OutMissionState                                            (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               OutValidMission                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFMissionSystem::GetMissionState(const struct FName& MissionName, struct FFNAFMissionState* OutMissionState, bool* OutValidMission)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetMissionState");

	UFNAFMissionSystem_GetMissionState_Params params {};
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


// Function:
//		Offset -> 0x00BA7290
//		Name   -> Function fnaf9.FNAFMissionSystem.GetMissionInfo
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFNAFMissionInfo                            OutMissionInfo                                             (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               OutValidMission                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFMissionSystem::GetMissionInfo(const struct FName& MissionName, struct FFNAFMissionInfo* OutMissionInfo, bool* OutValidMission)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetMissionInfo");

	UFNAFMissionSystem_GetMissionInfo_Params params {};
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


// Function:
//		Offset -> 0x00BA70C0
//		Name   -> Function fnaf9.FNAFMissionSystem.GetMissionFromTask
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       TaskName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFNAFMissionInfo                            OutMissionInfo                                             (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               OutValidMission                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFMissionSystem::GetMissionFromTask(const struct FName& TaskName, struct FFNAFMissionInfo* OutMissionInfo, bool* OutValidMission)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetMissionFromTask");

	UFNAFMissionSystem_GetMissionFromTask_Params params {};
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


// Function:
//		Offset -> 0x00BA6F80
//		Name   -> Function fnaf9.FNAFMissionSystem.GetMissionFromMessage
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       MessageName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       OutMissionName                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OutMissionStateIndex                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFMissionSystem::GetMissionFromMessage(const struct FName& MessageName, struct FName* OutMissionName, int* OutMissionStateIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetMissionFromMessage");

	UFNAFMissionSystem_GetMissionFromMessage_Params params {};
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


// Function:
//		Offset -> 0x00BA6C50
//		Name   -> Function fnaf9.FNAFMissionSystem.GetMarkersForMission
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MissionStateIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class AMissionMarker*>                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class AMissionMarker*> UFNAFMissionSystem::GetMarkersForMission(const struct FName& MissionName, int MissionStateIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetMarkersForMission");

	UFNAFMissionSystem_GetMarkersForMission_Params params {};
	params.MissionName = MissionName;
	params.MissionStateIndex = MissionStateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA67E0
//		Name   -> Function fnaf9.FNAFMissionSystem.GetCompletedMissions
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FFNAFMissionState>                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FFNAFMissionState> UFNAFMissionSystem::GetCompletedMissions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetCompletedMissions");

	UFNAFMissionSystem_GetCompletedMissions_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA65D0
//		Name   -> Function fnaf9.FNAFMissionSystem.GetAreaMarkerCounts
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TMap<fnaf9_ELevelArea, int>                        MapOfCounts                                                (Parm, OutParm, NativeAccessSpecifierPublic)
void UFNAFMissionSystem::GetAreaMarkerCounts(TMap<fnaf9_ELevelArea, int>* MapOfCounts)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetAreaMarkerCounts");

	UFNAFMissionSystem_GetAreaMarkerCounts_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MapOfCounts != nullptr)
		*MapOfCounts = params.MapOfCounts;

}


// Function:
//		Offset -> 0x00BA6480
//		Name   -> Function fnaf9.FNAFMissionSystem.GetAllMissionNames
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FName>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FName> UFNAFMissionSystem::GetAllMissionNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetAllMissionNames");

	UFNAFMissionSystem_GetAllMissionNames_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA63F0
//		Name   -> Function fnaf9.FNAFMissionSystem.GetAllMissionMarkers
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class AMissionMarker*>                      ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class AMissionMarker*> UFNAFMissionSystem::GetAllMissionMarkers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetAllMissionMarkers");

	UFNAFMissionSystem_GetAllMissionMarkers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA6370
//		Name   -> Function fnaf9.FNAFMissionSystem.GetAllCurrentMarkers
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class AMissionMarker*>                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class AMissionMarker*> UFNAFMissionSystem::GetAllCurrentMarkers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetAllCurrentMarkers");

	UFNAFMissionSystem_GetAllCurrentMarkers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA62F0
//		Name   -> Function fnaf9.FNAFMissionSystem.GetActiveMissions
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FFNAFMissionState>                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FFNAFMissionState> UFNAFMissionSystem::GetActiveMissions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.GetActiveMissions");

	UFNAFMissionSystem_GetActiveMissions_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA61E0
//		Name   -> Function fnaf9.FNAFMissionSystem.CompleteMissionTask
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TaskIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFMissionSystem::CompleteMissionTask(const struct FName& MissionName, int TaskIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.CompleteMissionTask");

	UFNAFMissionSystem_CompleteMissionTask_Params params {};
	params.MissionName = MissionName;
	params.TaskIndex = TaskIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA6150
//		Name   -> Function fnaf9.FNAFMissionSystem.CompleteMission
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFMissionSystem::CompleteMission(const struct FName& MissionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.CompleteMission");

	UFNAFMissionSystem_CompleteMission_Params params {};
	params.MissionName = MissionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA6020
//		Name   -> Function fnaf9.FNAFMissionSystem.BranchMissionStatus
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_EMissionStatus                               Status                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFMissionSystem::BranchMissionStatus(const struct FName& MissionName, fnaf9_EMissionStatus* Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.BranchMissionStatus");

	UFNAFMissionSystem_BranchMissionStatus_Params params {};
	params.MissionName = MissionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;

}


// Function:
//		Offset -> 0x00BA5A50
//		Name   -> Function fnaf9.FNAFMissionSystem.AddActiveMission
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFMissionSystem::AddActiveMission(const struct FName& MissionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFMissionSystem.AddActiveMission");

	UFNAFMissionSystem_AddActiveMission_Params params {};
	params.MissionName = MissionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.FNAFPawnTypeProviderInterface.GetPlayerPawnType
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		fnaf9_EPlayerPawnType                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
fnaf9_EPlayerPawnType UFNAFPawnTypeProviderInterface::GetPlayerPawnType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFPawnTypeProviderInterface.GetPlayerPawnType");

	UFNAFPawnTypeProviderInterface_GetPlayerPawnType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BAD9B0
//		Name   -> Function fnaf9.FNAFSaveData.SetHourOfCheckpoint
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InHour                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFSaveData::SetHourOfCheckpoint(int InHour)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveData.SetHourOfCheckpoint");

	UFNAFSaveData_SetHourOfCheckpoint_Params params {};
	params.InHour = InHour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BADD60
//		Name   -> Function fnaf9.FNAFSaveGameSystem.SetupPIE
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFSaveGameSystem::SetupPIE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetupPIE");

	UFNAFSaveGameSystem_SetupPIE_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BADD40
//		Name   -> Function fnaf9.FNAFSaveGameSystem.SetupNewSurvivalGame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFSaveGameSystem::SetupNewSurvivalGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetupNewSurvivalGame");

	UFNAFSaveGameSystem_SetupNewSurvivalGame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BADC60
//		Name   -> Function fnaf9.FNAFSaveGameSystem.SetupNewGameOnSlot
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     originalSlotName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFSaveGameSystem::SetupNewGameOnSlot(const struct FString& originalSlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetupNewGameOnSlot");

	UFNAFSaveGameSystem_SetupNewGameOnSlot_Params params {};
	params.originalSlotName = originalSlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BADC40
//		Name   -> Function fnaf9.FNAFSaveGameSystem.SetupNewGame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFSaveGameSystem::SetupNewGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetupNewGame");

	UFNAFSaveGameSystem_SetupNewGame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BADA30
//		Name   -> Function fnaf9.FNAFSaveGameSystem.SetIsSavingAllowed
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsSavingAllowed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFSaveGameSystem::SetIsSavingAllowed(bool IsSavingAllowed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SetIsSavingAllowed");

	UFNAFSaveGameSystem_SetIsSavingAllowed_Params params {};
	params.IsSavingAllowed = IsSavingAllowed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD440
//		Name   -> Function fnaf9.FNAFSaveGameSystem.SaveCurrentGame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFSaveGameSystem::SaveCurrentGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SaveCurrentGame");

	UFNAFSaveGameSystem_SaveCurrentGame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD420
//		Name   -> Function fnaf9.FNAFSaveGameSystem.SaveCheckpoint
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFSaveGameSystem::SaveCheckpoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SaveCheckpoint");

	UFNAFSaveGameSystem_SaveCheckpoint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD400
//		Name   -> Function fnaf9.FNAFSaveGameSystem.SaveArcade
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFSaveGameSystem::SaveArcade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.SaveArcade");

	UFNAFSaveGameSystem_SaveArcade_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD3E0
//		Name   -> Function fnaf9.FNAFSaveGameSystem.Reset_SaveSlots
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFSaveGameSystem::Reset_SaveSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.Reset_SaveSlots");

	UFNAFSaveGameSystem_Reset_SaveSlots_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD1B0
//		Name   -> Function fnaf9.FNAFSaveGameSystem.Rename_SaveSlot
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     originalSlotName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     renamedSlotName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFSaveGameSystem::Rename_SaveSlot(const struct FString& originalSlotName, const struct FString& renamedSlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.Rename_SaveSlot");

	UFNAFSaveGameSystem_Rename_SaveSlot_Params params {};
	params.originalSlotName = originalSlotName;
	params.renamedSlotName = renamedSlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD180
//		Name   -> Function fnaf9.FNAFSaveGameSystem.PreviousSaveIsAuto
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFSaveGameSystem::PreviousSaveIsAuto()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.PreviousSaveIsAuto");

	UFNAFSaveGameSystem_PreviousSaveIsAuto_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BACB90
//		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadWorldTransitSave
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFSaveGameSystem::LoadWorldTransitSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadWorldTransitSave");

	UFNAFSaveGameSystem_LoadWorldTransitSave_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BACAA0
//		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadSaveSlotData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     SlotName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFNAFSaveData*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFNAFSaveData* UFNAFSaveGameSystem::LoadSaveSlotData(const struct FString& SlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadSaveSlotData");

	UFNAFSaveGameSystem_LoadSaveSlotData_Params params {};
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BACA80
//		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadCheckpoint
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFSaveGameSystem::LoadCheckpoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadCheckpoint");

	UFNAFSaveGameSystem_LoadCheckpoint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BACA60
//		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadAutoSave
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFSaveGameSystem::LoadAutoSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadAutoSave");

	UFNAFSaveGameSystem_LoadAutoSave_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAC9C0
//		Name   -> Function fnaf9.FNAFSaveGameSystem.LoadActivitySave
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InActivityId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFSaveGameSystem::LoadActivitySave(const struct FString& InActivityId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.LoadActivitySave");

	UFNAFSaveGameSystem_LoadActivitySave_Params params {};
	params.InActivityId = InActivityId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAC990
//		Name   -> Function fnaf9.FNAFSaveGameSystem.IsSavingAllowed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFSaveGameSystem::IsSavingAllowed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.IsSavingAllowed");

	UFNAFSaveGameSystem_IsSavingAllowed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BAC910
//		Name   -> Function fnaf9.FNAFSaveGameSystem.HasSaveData
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFSaveGameSystem::HasSaveData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.HasSaveData");

	UFNAFSaveGameSystem_HasSaveData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BAC8E0
//		Name   -> Function fnaf9.FNAFSaveGameSystem.HasPreviousSave
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFSaveGameSystem::HasPreviousSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.HasPreviousSave");

	UFNAFSaveGameSystem_HasPreviousSave_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BAC7D0
//		Name   -> Function fnaf9.FNAFSaveGameSystem.HasAutoSave
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFSaveGameSystem::HasAutoSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.HasAutoSave");

	UFNAFSaveGameSystem_HasAutoSave_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BAC720
//		Name   -> Function fnaf9.FNAFSaveGameSystem.HasActivitySave
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InActivityId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFNAFSaveGameSystem::HasActivitySave(const struct FString& InActivityId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.HasActivitySave");

	UFNAFSaveGameSystem_HasActivitySave_Params params {};
	params.InActivityId = InActivityId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BAC450
//		Name   -> Function fnaf9.FNAFSaveGameSystem.GetGameIteration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFNAFSaveGameSystem::GetGameIteration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.GetGameIteration");

	UFNAFSaveGameSystem_GetGameIteration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BAC610
//		Name   -> Function fnaf9.FNAFSaveGameSystem.Get_SaveSlotNameData
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TMap<struct FString, struct FString>               SaveSlots_Map                                              (Parm, OutParm, NativeAccessSpecifierPublic)
void UFNAFSaveGameSystem::Get_SaveSlotNameData(TMap<struct FString, struct FString>* SaveSlots_Map)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.Get_SaveSlotNameData");

	UFNAFSaveGameSystem_Get_SaveSlotNameData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SaveSlots_Map != nullptr)
		*SaveSlots_Map = params.SaveSlots_Map;

}


// Function:
//		Offset -> 0x00BAC110
//		Name   -> Function fnaf9.FNAFSaveGameSystem.FinalizeCheckpoint
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFSaveGameSystem::FinalizeCheckpoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.FinalizeCheckpoint");

	UFNAFSaveGameSystem_FinalizeCheckpoint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BABFF0
//		Name   -> Function fnaf9.FNAFSaveGameSystem.DeleteSaveGameByName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     SlotName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFSaveGameSystem::DeleteSaveGameByName(const struct FString& SlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.DeleteSaveGameByName");

	UFNAFSaveGameSystem_DeleteSaveGameByName_Params params {};
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAC090
//		Name   -> Function fnaf9.FNAFSaveGameSystem.DeleteSavedGame_BySlot
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                saveSlotNumber                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFSaveGameSystem::DeleteSavedGame_BySlot(int saveSlotNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.DeleteSavedGame_BySlot");

	UFNAFSaveGameSystem_DeleteSavedGame_BySlot_Params params {};
	params.saveSlotNumber = saveSlotNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BABFD0
//		Name   -> Function fnaf9.FNAFSaveGameSystem.CreateWorldTransitSave
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFSaveGameSystem::CreateWorldTransitSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.CreateWorldTransitSave");

	UFNAFSaveGameSystem_CreateWorldTransitSave_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BABFB0
//		Name   -> Function fnaf9.FNAFSaveGameSystem.CreatePotentialCheckpoint
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFSaveGameSystem::CreatePotentialCheckpoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.CreatePotentialCheckpoint");

	UFNAFSaveGameSystem_CreatePotentialCheckpoint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BABF90
//		Name   -> Function fnaf9.FNAFSaveGameSystem.AutoSave
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFSaveGameSystem::AutoSave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.AutoSave");

	UFNAFSaveGameSystem_AutoSave_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BABD30
//		Name   -> Function fnaf9.FNAFSaveGameSystem.AsyncSaveGame
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     originalSlotName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               isANewSlot                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               isCurrentSlot                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Renamed_SaveSlot                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     internal_SlotName                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFSaveGameSystem::AsyncSaveGame(const struct FString& originalSlotName, bool isANewSlot, bool isCurrentSlot, const struct FString& Renamed_SaveSlot, struct FString* internal_SlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.AsyncSaveGame");

	UFNAFSaveGameSystem_AsyncSaveGame_Params params {};
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


// Function:
//		Offset -> 0x00BABD10
//		Name   -> Function fnaf9.FNAFSaveGameSystem.AsyncLoadGameLastLoaded
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFNAFSaveGameSystem::AsyncLoadGameLastLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.AsyncLoadGameLastLoaded");

	UFNAFSaveGameSystem_AsyncLoadGameLastLoaded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BABB90
//		Name   -> Function fnaf9.FNAFSaveGameSystem.AsyncLoadGame
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     originalSlotName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               isContinueSelected                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     internal_SlotName                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFSaveGameSystem::AsyncLoadGame(const struct FString& originalSlotName, bool isContinueSelected, struct FString* internal_SlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSaveGameSystem.AsyncLoadGame");

	UFNAFSaveGameSystem_AsyncLoadGame_Params params {};
	params.originalSlotName = originalSlotName;
	params.isContinueSelected = isContinueSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (internal_SlotName != nullptr)
		*internal_SlotName = params.internal_SlotName;

}


// Function:
//		Offset -> 0x00BADBC0
//		Name   -> Function fnaf9.FNAFSightSystem.SetSightSystemDisplay
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFNAFSightSystem::SetSightSystemDisplay(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.FNAFSightSystem.SetSightSystemDisplay");

	UFNAFSightSystem_SetSightSystemDisplay_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BADD80
//		Name   -> Function fnaf9.GameClockSystem.StartNextHour
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameClockSystem::StartNextHour()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.StartNextHour");

	UGameClockSystem_StartNextHour_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD890
//		Name   -> Function fnaf9.GameClockSystem.SetGameTimeEvent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                Hour                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Minute                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameClockSystem::SetGameTimeEvent(const struct FScriptDelegate& Delegate, int Hour, int Minute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetGameTimeEvent");

	UGameClockSystem_SetGameTimeEvent_Params params {};
	params.Delegate = Delegate;
	params.Hour = Hour;
	params.Minute = Minute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD7F0
//		Name   -> Function fnaf9.GameClockSystem.SetGameEndEvent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UGameClockSystem::SetGameEndEvent(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetGameEndEvent");

	UGameClockSystem_SetGameEndEvent_Params params {};
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD6F0
//		Name   -> Function fnaf9.GameClockSystem.SetCurrentTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Hour                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Minute                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bPlayDelegates                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameClockSystem::SetCurrentTime(int Hour, int Minute, bool bPlayDelegates)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetCurrentTime");

	UGameClockSystem_SetCurrentTime_Params params {};
	params.Hour = Hour;
	params.Minute = Minute;
	params.bPlayDelegates = bPlayDelegates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD670
//		Name   -> Function fnaf9.GameClockSystem.SetCurrentMinute
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Minute                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameClockSystem::SetCurrentMinute(int Minute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetCurrentMinute");

	UGameClockSystem_SetCurrentMinute_Params params {};
	params.Minute = Minute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD5F0
//		Name   -> Function fnaf9.GameClockSystem.SetCurrentHour
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Hour                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameClockSystem::SetCurrentHour(int Hour)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetCurrentHour");

	UGameClockSystem_SetCurrentHour_Params params {};
	params.Hour = Hour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD560
//		Name   -> Function fnaf9.GameClockSystem.SetClockRunning
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bRunClock                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameClockSystem::SetClockRunning(bool bRunClock)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetClockRunning");

	UGameClockSystem_SetClockRunning_Params params {};
	params.bRunClock = bRunClock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD4E0
//		Name   -> Function fnaf9.GameClockSystem.SetClockRateInMinutesPerHour
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MinutesPerHour                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameClockSystem::SetClockRateInMinutesPerHour(int MinutesPerHour)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetClockRateInMinutesPerHour");

	UGameClockSystem_SetClockRateInMinutesPerHour_Params params {};
	params.MinutesPerHour = MinutesPerHour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD460
//		Name   -> Function fnaf9.GameClockSystem.SetClockRate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TotalRealHours                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameClockSystem::SetClockRate(int TotalRealHours)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.SetClockRate");

	UGameClockSystem_SetClockRate_Params params {};
	params.TotalRealHours = TotalRealHours;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD320
//		Name   -> Function fnaf9.GameClockSystem.ResetTimeDelegatesUpTo
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Hour                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Minute                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameClockSystem::ResetTimeDelegatesUpTo(int Hour, int Minute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.ResetTimeDelegatesUpTo");

	UGameClockSystem_ResetTimeDelegatesUpTo_Params params {};
	params.Hour = Hour;
	params.Minute = Minute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD010
//		Name   -> Function fnaf9.GameClockSystem.OnNormalModeTriggered
//		Flags  -> (Final, Native, Private)
void UGameClockSystem::OnNormalModeTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.OnNormalModeTriggered");

	UGameClockSystem_OnNormalModeTriggered_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BACFF0
//		Name   -> Function fnaf9.GameClockSystem.OnMoonmanLiteTriggered
//		Flags  -> (Final, Native, Private)
void UGameClockSystem::OnMoonmanLiteTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.OnMoonmanLiteTriggered");

	UGameClockSystem_OnMoonmanLiteTriggered_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BACFD0
//		Name   -> Function fnaf9.GameClockSystem.OnMoonmanIntermediateTriggered
//		Flags  -> (Final, Native, Private)
void UGameClockSystem::OnMoonmanIntermediateTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.OnMoonmanIntermediateTriggered");

	UGameClockSystem_OnMoonmanIntermediateTriggered_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BACFB0
//		Name   -> Function fnaf9.GameClockSystem.OnMoonmanDangerTriggered
//		Flags  -> (Final, Native, Private)
void UGameClockSystem::OnMoonmanDangerTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.OnMoonmanDangerTriggered");

	UGameClockSystem_OnMoonmanDangerTriggered_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAC970
//		Name   -> Function fnaf9.GameClockSystem.IsClockRunning
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameClockSystem::IsClockRunning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.IsClockRunning");

	UGameClockSystem_IsClockRunning_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BAC430
//		Name   -> Function fnaf9.GameClockSystem.GetCurrentTimeInSeconds
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGameClockSystem::GetCurrentTimeInSeconds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.GetCurrentTimeInSeconds");

	UGameClockSystem_GetCurrentTimeInSeconds_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BAC350
//		Name   -> Function fnaf9.GameClockSystem.GetCurrentTime
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                Hour                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Minute                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameClockSystem::GetCurrentTime(int* Hour, int* Minute)
{
	//static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameClockSystem.GetCurrentTime");

	//UGameClockSystem_GetCurrentTime_Params params {};

	//auto flags = fn->FunctionFlags;
	//fn->FunctionFlags |= 0x00000400;

	//UObject::ProcessEvent(fn, &params);
	//fn->FunctionFlags = flags;

	//if (Hour != nullptr)
	//	*Hour = params.Hour;
	//if (Minute != nullptr)
	//	*Minute = params.Minute;

}


// Function:
//		Offset -> 0x00BAD030
//		Name   -> Function fnaf9.GameTypeCheckComponent.OnNotAllowedGameType
//		Flags  -> (Native, Event, Protected, BlueprintEvent)
void UGameTypeCheckComponent::OnNotAllowedGameType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameTypeCheckComponent.OnNotAllowedGameType");

	UGameTypeCheckComponent_OnNotAllowedGameType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BACBB0
//		Name   -> Function fnaf9.GameTypeCheckComponent.OnAllowedGameType
//		Flags  -> (Native, Event, Protected, BlueprintEvent)
void UGameTypeCheckComponent::OnAllowedGameType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameTypeCheckComponent.OnAllowedGameType");

	UGameTypeCheckComponent_OnAllowedGameType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAC940
//		Name   -> Function fnaf9.GameTypeCheckComponent.IsAllowed
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameTypeCheckComponent::IsAllowed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.GameTypeCheckComponent.IsAllowed");

	UGameTypeCheckComponent_IsAllowed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BADDA0
//		Name   -> Function fnaf9.HideObjectInterface.StartSearch
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       SearcherPawn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHideObjectInterface::StartSearch(class APawn* SearcherPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.StartSearch");

	UHideObjectInterface_StartSearch_Params params {};
	params.SearcherPawn = SearcherPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD100
//		Name   -> Function fnaf9.HideObjectInterface.PlayBotSearchSound
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      SearcherActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHideObjectInterface::PlayBotSearchSound(class AActor* SearcherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.PlayBotSearchSound");

	UHideObjectInterface_PlayBotSearchSound_Params params {};
	params.SearcherActor = SearcherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD0E0
//		Name   -> Function fnaf9.HideObjectInterface.OnPlayerLeave
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UHideObjectInterface::OnPlayerLeave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.OnPlayerLeave");

	UHideObjectInterface_OnPlayerLeave_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD050
//		Name   -> Function fnaf9.HideObjectInterface.OnPlayerHide
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACharacter*                                  PlayerCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHideObjectInterface::OnPlayerHide(class ACharacter* PlayerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.OnPlayerHide");

	UHideObjectInterface_OnPlayerHide_Params params {};
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAC520
//		Name   -> Function fnaf9.HideObjectInterface.GetSearchLocation
//		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UHideObjectInterface::GetSearchLocation(struct FVector* Location, struct FRotator* Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.GetSearchLocation");

	UHideObjectInterface_GetSearchLocation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;

}


// Function:
//		Offset -> 0x00BAC4F0
//		Name   -> Function fnaf9.HideObjectInterface.GetHideType
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		fnaf9_EHideObjectType                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
fnaf9_EHideObjectType UHideObjectInterface::GetHideType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.GetHideType");

	UHideObjectInterface_GetHideType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BAC4B0
//		Name   -> Function fnaf9.HideObjectInterface.GetHideLocation
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UHideObjectInterface::GetHideLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.GetHideLocation");

	UHideObjectInterface_GetHideLocation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BAC480
//		Name   -> Function fnaf9.HideObjectInterface.GetHiddenPlayer
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACharacter*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ACharacter* UHideObjectInterface::GetHiddenPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.GetHiddenPlayer");

	UHideObjectInterface_GetHiddenPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BA1EA0
//		Name   -> Function fnaf9.HideObjectInterface.EndSearch
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UHideObjectInterface::EndSearch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.HideObjectInterface.EndSearch");

	UHideObjectInterface_EndSearch_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAC130
//		Name   -> Function fnaf9.InstructionCardRowBlueprintFunctionLibrary.GetControllerInstructionCard
//		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FInstructionCardRow                         MyStructRef                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UInstructionCardRowBlueprintFunctionLibrary::STATIC_GetControllerInstructionCard(struct FInstructionCardRow* MyStructRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.InstructionCardRowBlueprintFunctionLibrary.GetControllerInstructionCard");

	UInstructionCardRowBlueprintFunctionLibrary_GetControllerInstructionCard_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MyStructRef != nullptr)
		*MyStructRef = params.MyStructRef;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BADAC0
//		Name   -> Function fnaf9.InventoryConditionalComponent.SetNewConditions
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       NewRequiredInventoryItem                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NewRequiredSecurityLevel                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               NewRequiresPartyPass                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInventoryConditionalComponent::SetNewConditions(const struct FName& NewRequiredInventoryItem, int NewRequiredSecurityLevel, bool NewRequiresPartyPass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.InventoryConditionalComponent.SetNewConditions");

	UInventoryConditionalComponent_SetNewConditions_Params params {};
	params.NewRequiredInventoryItem = NewRequiredInventoryItem;
	params.NewRequiredSecurityLevel = NewRequiredSecurityLevel;
	params.NewRequiresPartyPass = NewRequiresPartyPass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BACD90
//		Name   -> Function fnaf9.InventoryConditionalComponent.OnMessageCollected
//		Flags  -> (Final, Native, Private)
// Parameters:
//		struct FName                                       ItemName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFNAFMessageTableStruct                     MessageTableStruct                                         (Parm, NativeAccessSpecifierPublic)
void UInventoryConditionalComponent::OnMessageCollected(const struct FName& ItemName, const struct FFNAFMessageTableStruct& MessageTableStruct)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.InventoryConditionalComponent.OnMessageCollected");

	UInventoryConditionalComponent_OnMessageCollected_Params params {};
	params.ItemName = ItemName;
	params.MessageTableStruct = MessageTableStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BACBD0
//		Name   -> Function fnaf9.InventoryConditionalComponent.OnItemCollected
//		Flags  -> (Final, Native, Private)
// Parameters:
//		struct FName                                       ItemName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFNAFInventoryTableStruct                   InventoryTableStruct                                       (Parm, NativeAccessSpecifierPublic)
void UInventoryConditionalComponent::OnItemCollected(const struct FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryTableStruct)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.InventoryConditionalComponent.OnItemCollected");

	UInventoryConditionalComponent_OnItemCollected_Params params {};
	params.ItemName = ItemName;
	params.InventoryTableStruct = InventoryTableStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAC800
//		Name   -> Function fnaf9.InventoryConditionalComponent.HasMetConditions
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               OutConditionsMet                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_EConditionFailReason                         OutFailReason                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInventoryConditionalComponent::HasMetConditions(bool* OutConditionsMet, fnaf9_EConditionFailReason* OutFailReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.InventoryConditionalComponent.HasMetConditions");

	UInventoryConditionalComponent_HasMetConditions_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutConditionsMet != nullptr)
		*OutConditionsMet = params.OutConditionsMet;
	if (OutFailReason != nullptr)
		*OutFailReason = params.OutFailReason;

}


// Function:
//		Offset -> 0x00BB2790
//		Name   -> Function fnaf9.ItemCollectListenerComponent.SetEventsEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UItemCollectListenerComponent::SetEventsEnabled(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.ItemCollectListenerComponent.SetEventsEnabled");

	UItemCollectListenerComponent_SetEventsEnabled_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1DF0
//		Name   -> Function fnaf9.ItemCollectListenerComponent.OnItemCollectedHandler
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		struct FName                                       ItemName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFNAFInventoryTableStruct                   InventoryItemInfo                                          (Parm, NativeAccessSpecifierPublic)
void UItemCollectListenerComponent::OnItemCollectedHandler(const struct FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.ItemCollectListenerComponent.OnItemCollectedHandler");

	UItemCollectListenerComponent_OnItemCollectedHandler_Params params {};
	params.ItemName = ItemName;
	params.InventoryItemInfo = InventoryItemInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB14F0
//		Name   -> Function fnaf9.ItemCollectListenerComponent.GetEventsEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UItemCollectListenerComponent::GetEventsEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.ItemCollectListenerComponent.GetEventsEnabled");

	UItemCollectListenerComponent_GetEventsEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB2EB0
//		Name   -> Function fnaf9.LevelStreamViewpoint.SetStreamingEnable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelStreamViewpoint::SetStreamingEnable(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LevelStreamViewpoint.SetStreamingEnable");

	ULevelStreamViewpoint_SetStreamingEnable_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1FB0
//		Name   -> Function fnaf9.LevelStreamViewpoint.OnLevelManagerUpdated
//		Flags  -> (Final, Native, Private)
void ULevelStreamViewpoint::OnLevelManagerUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LevelStreamViewpoint.OnLevelManagerUpdated");

	ULevelStreamViewpoint_OnLevelManagerUpdated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1B40
//		Name   -> Function fnaf9.LevelStreamViewpoint.GetStreamingLevelNames
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FName>                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FName> ULevelStreamViewpoint::GetStreamingLevelNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LevelStreamViewpoint.GetStreamingLevelNames");

	ULevelStreamViewpoint_GetStreamingLevelNames_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB0EA0
//		Name   -> Function fnaf9.LevelStreamViewpoint.AnyLevelsLoaded
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULevelStreamViewpoint::AnyLevelsLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LevelStreamViewpoint.AnyLevelsLoaded");

	ULevelStreamViewpoint_AnyLevelsLoaded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1D70
//		Name   -> Function fnaf9.LightingMaterialManager.OnLevelVisible
//		Flags  -> (Final, Native, Private)
void ALightingMaterialManager::OnLevelVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightingMaterialManager.OnLevelVisible");

	ALightingMaterialManager_OnLevelVisible_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1D70
//		Name   -> Function fnaf9.LightingMaterialManager.OnBeginLightScenarioChange
//		Flags  -> (Final, Native, Private)
void ALightingMaterialManager::OnBeginLightScenarioChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightingMaterialManager.OnBeginLightScenarioChange");

	ALightingMaterialManager_OnBeginLightScenarioChange_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1C90
//		Name   -> Function fnaf9.LightingMaterialManager.OnActivateSpecialLightingScenerio
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALightingMaterialManager::OnActivateSpecialLightingScenerio(const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightingMaterialManager.OnActivateSpecialLightingScenerio");

	ALightingMaterialManager_OnActivateSpecialLightingScenerio_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB30A0
//		Name   -> Function fnaf9.LightScenarioManager.UnbindOnEndScenarioChange
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void ULightScenarioManager::UnbindOnEndScenarioChange(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.UnbindOnEndScenarioChange");

	ULightScenarioManager_UnbindOnEndScenarioChange_Params params {};
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB3000
//		Name   -> Function fnaf9.LightScenarioManager.UnbindOnBeginScenarioChange
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void ULightScenarioManager::UnbindOnBeginScenarioChange(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.UnbindOnBeginScenarioChange");

	ULightScenarioManager_UnbindOnBeginScenarioChange_Params params {};
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2940
//		Name   -> Function fnaf9.LightScenarioManager.SetInitialScenario
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Area                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_ELightingScenario                            Scenario                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightScenarioManager::SetInitialScenario(int Area, fnaf9_ELightingScenario Scenario)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.SetInitialScenario");

	ULightScenarioManager_SetInitialScenario_Params params {};
	params.Area = Area;
	params.Scenario = Scenario;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2280
//		Name   -> Function fnaf9.LightScenarioManager.OnUnloadFinished
//		Flags  -> (Final, Native, Private)
void ULightScenarioManager::OnUnloadFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnUnloadFinished");

	ULightScenarioManager_OnUnloadFinished_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2260
//		Name   -> Function fnaf9.LightScenarioManager.OnTick
//		Flags  -> (Final, Native, Private)
void ULightScenarioManager::OnTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnTick");

	ULightScenarioManager_OnTick_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1FD0
//		Name   -> Function fnaf9.LightScenarioManager.OnLoadFinished
//		Flags  -> (Final, Native, Private)
void ULightScenarioManager::OnLoadFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnLoadFinished");

	ULightScenarioManager_OnLoadFinished_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1DD0
//		Name   -> Function fnaf9.LightScenarioManager.OnFadeoutFinished
//		Flags  -> (Final, Native, Private)
void ULightScenarioManager::OnFadeoutFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnFadeoutFinished");

	ULightScenarioManager_OnFadeoutFinished_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1DB0
//		Name   -> Function fnaf9.LightScenarioManager.OnChangeAreaUnloadFinished
//		Flags  -> (Final, Native, Private)
void ULightScenarioManager::OnChangeAreaUnloadFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnChangeAreaUnloadFinished");

	ULightScenarioManager_OnChangeAreaUnloadFinished_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1D90
//		Name   -> Function fnaf9.LightScenarioManager.OnChangeAreaLoadFinished
//		Flags  -> (Final, Native, Private)
void ULightScenarioManager::OnChangeAreaLoadFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.OnChangeAreaLoadFinished");

	ULightScenarioManager_OnChangeAreaLoadFinished_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1C70
//		Name   -> Function fnaf9.LightScenarioManager.IsChangingScenario
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULightScenarioManager::IsChangingScenario()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.IsChangingScenario");

	ULightScenarioManager_IsChangingScenario_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1700
//		Name   -> Function fnaf9.LightScenarioManager.GetLightScenarioAreaFromMap
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       MapName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_ELightScenarioArea                           OutArea                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_ELightingScenario                            OutScenario                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightScenarioManager::GetLightScenarioAreaFromMap(const struct FName& MapName, fnaf9_ELightScenarioArea* OutArea, fnaf9_ELightingScenario* OutScenario)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.GetLightScenarioAreaFromMap");

	ULightScenarioManager_GetLightScenarioAreaFromMap_Params params {};
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


// Function:
//		Offset -> 0x00BB1630
//		Name   -> Function fnaf9.LightScenarioManager.GetLevelNameFromAreaScenario
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Area                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_ELightingScenario                            Scenario                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName ULightScenarioManager::GetLevelNameFromAreaScenario(int Area, fnaf9_ELightingScenario Scenario)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.GetLevelNameFromAreaScenario");

	ULightScenarioManager_GetLevelNameFromAreaScenario_Params params {};
	params.Area = Area;
	params.Scenario = Scenario;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB14D0
//		Name   -> Function fnaf9.LightScenarioManager.GetCurrentLightingScenario
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		fnaf9_ELightingScenario                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
fnaf9_ELightingScenario ULightScenarioManager::GetCurrentLightingScenario()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.GetCurrentLightingScenario");

	ULightScenarioManager_GetCurrentLightingScenario_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB14B0
//		Name   -> Function fnaf9.LightScenarioManager.GetCurrentArea
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ULightScenarioManager::GetCurrentArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.GetCurrentArea");

	ULightScenarioManager_GetCurrentArea_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB12E0
//		Name   -> Function fnaf9.LightScenarioManager.EndLoadSequence
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULightScenarioManager::EndLoadSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.EndLoadSequence");

	ULightScenarioManager_EndLoadSequence_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1120
//		Name   -> Function fnaf9.LightScenarioManager.ChangeScenario
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		fnaf9_ELightingScenario                            NewScenario                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUseFade                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightScenarioManager::ChangeScenario(fnaf9_ELightingScenario NewScenario, bool bUseFade)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.ChangeScenario");

	ULightScenarioManager_ChangeScenario_Params params {};
	params.NewScenario = NewScenario;
	params.bUseFade = bUseFade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1030
//		Name   -> Function fnaf9.LightScenarioManager.ChangeArea
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Area                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULightScenarioManager::ChangeArea(int Area)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.ChangeArea");

	ULightScenarioManager_ChangeArea_Params params {};
	params.Area = Area;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB0F90
//		Name   -> Function fnaf9.LightScenarioManager.BindOnEndScenarioChange
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void ULightScenarioManager::BindOnEndScenarioChange(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.BindOnEndScenarioChange");

	ULightScenarioManager_BindOnEndScenarioChange_Params params {};
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB0EF0
//		Name   -> Function fnaf9.LightScenarioManager.BindOnBeginScenarioChange
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void ULightScenarioManager::BindOnBeginScenarioChange(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.BindOnBeginScenarioChange");

	ULightScenarioManager_BindOnBeginScenarioChange_Params params {};
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB0ED0
//		Name   -> Function fnaf9.LightScenarioManager.BeginLoadSequence
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ULightScenarioManager::BeginLoadSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.LightScenarioManager.BeginLoadSequence");

	ULightScenarioManager_BeginLoadSequence_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1840
//		Name   -> Function fnaf9.Localization.GetLocalizationCulture
//		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
//		TEnumAsByte<fnaf9_ELocalizationCulture>            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<fnaf9_ELocalizationCulture> ULocalization::STATIC_GetLocalizationCulture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.Localization.GetLocalizationCulture");

	ULocalization_GetLocalizationCulture_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB10B0
//		Name   -> Function fnaf9.Localization.ChangeLocalizationCulture
//		Flags  -> (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
//		TEnumAsByte<fnaf9_ELocalizationCulture>            Culture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULocalization::STATIC_ChangeLocalizationCulture(TEnumAsByte<fnaf9_ELocalizationCulture> Culture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.Localization.ChangeLocalizationCulture");

	ULocalization_ChangeLocalizationCulture_Params params {};
	params.Culture = Culture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2380
//		Name   -> Function fnaf9.MissionDisplayQueueLibrary.PushMissionUpdate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		fnaf9_EMissionUpdateType                           UpdateType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       MissionName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FFNAFMissionState                           MissionState                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UMissionDisplayQueueLibrary::STATIC_PushMissionUpdate(fnaf9_EMissionUpdateType UpdateType, const struct FName& MissionName, const struct FFNAFMissionInfo& MissionInfo, const struct FFNAFMissionState& MissionState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MissionDisplayQueueLibrary.PushMissionUpdate");

	UMissionDisplayQueueLibrary_PushMissionUpdate_Params params {};
	params.UpdateType = UpdateType;
	params.MissionName = MissionName;
	params.MissionInfo = MissionInfo;
	params.MissionState = MissionState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1BF0
//		Name   -> Function fnaf9.MissionDisplayQueueLibrary.HasMissionUpdateInQueue
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		fnaf9_EMissionInQueue                              MissionInQueue                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMissionDisplayQueueLibrary::STATIC_HasMissionUpdateInQueue(fnaf9_EMissionInQueue* MissionInQueue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MissionDisplayQueueLibrary.HasMissionUpdateInQueue");

	UMissionDisplayQueueLibrary_HasMissionUpdateInQueue_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MissionInQueue != nullptr)
		*MissionInQueue = params.MissionInQueue;

}


// Function:
//		Offset -> 0x00BB1970
//		Name   -> Function fnaf9.MissionDisplayQueueLibrary.GetNextMissionUpdate
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FMissionDisplayUpdateInfo                   ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FMissionDisplayUpdateInfo UMissionDisplayQueueLibrary::STATIC_GetNextMissionUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MissionDisplayQueueLibrary.GetNextMissionUpdate");

	UMissionDisplayQueueLibrary_GetNextMissionUpdate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB11F0
//		Name   -> Function fnaf9.MissionDisplayQueueLibrary.ClearMissionUpdateQueue
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UMissionDisplayQueueLibrary::STATIC_ClearMissionUpdateQueue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MissionDisplayQueueLibrary.ClearMissionUpdateQueue");

	UMissionDisplayQueueLibrary_ClearMissionUpdateQueue_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1B20
//		Name   -> Function fnaf9.MissionMarker.GetStateIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AMissionMarker::GetStateIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MissionMarker.GetStateIndex");

	AMissionMarker_GetStateIndex_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1950
//		Name   -> Function fnaf9.MissionMarker.GetMissionName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName AMissionMarker::GetMissionName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MissionMarker.GetMissionName");

	AMissionMarker_GetMissionName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1FF0
//		Name   -> Function fnaf9.MissionStateCondition.OnMissionUpdated
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FName                                       InMissionName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFNAFMissionState                           MissionState                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UMissionStateCondition::OnMissionUpdated(const struct FName& InMissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MissionStateCondition.OnMissionUpdated");

	UMissionStateCondition_OnMissionUpdated_Params params {};
	params.InMissionName = InMissionName;
	params.MissionState = MissionState;
	params.MissionInfo = MissionInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1BC0
//		Name   -> Function fnaf9.MissionStateCondition.HasMetConditions
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMissionStateCondition::HasMetConditions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MissionStateCondition.HasMetConditions");

	UMissionStateCondition_HasMetConditions_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB2F80
//		Name   -> Function fnaf9.MoonmanManagementSystem.UnRegisterSpawn
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AMoonmanSpawnPoint*                          InSpawnPoint                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMoonmanManagementSystem::UnRegisterSpawn(class AMoonmanSpawnPoint* InSpawnPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.UnRegisterSpawn");

	UMoonmanManagementSystem_UnRegisterSpawn_Params params {};
	params.InSpawnPoint = InSpawnPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB3140
//		Name   -> Function fnaf9.MoonmanManagementSystem.UnpauseMoonmanManager
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMoonmanManagementSystem::UnpauseMoonmanManager()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.UnpauseMoonmanManager");

	UMoonmanManagementSystem_UnpauseMoonmanManager_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2F60
//		Name   -> Function fnaf9.MoonmanManagementSystem.StartMoonmanLiteManager
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMoonmanManagementSystem::StartMoonmanLiteManager()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.StartMoonmanLiteManager");

	UMoonmanManagementSystem_StartMoonmanLiteManager_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2F40
//		Name   -> Function fnaf9.MoonmanManagementSystem.StartMoonmanDangerManager
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMoonmanManagementSystem::StartMoonmanDangerManager()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.StartMoonmanDangerManager");

	UMoonmanManagementSystem_StartMoonmanDangerManager_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2580
//		Name   -> Function fnaf9.MoonmanManagementSystem.RegisterSpawn
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AMoonmanSpawnPoint*                          InSpawnPoint                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMoonmanManagementSystem::RegisterSpawn(class AMoonmanSpawnPoint* InSpawnPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.RegisterSpawn");

	UMoonmanManagementSystem_RegisterSpawn_Params params {};
	params.InSpawnPoint = InSpawnPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2360
//		Name   -> Function fnaf9.MoonmanManagementSystem.PauseMoonmanManager
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMoonmanManagementSystem::PauseMoonmanManager()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.PauseMoonmanManager");

	UMoonmanManagementSystem_PauseMoonmanManager_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB22A0
//		Name   -> Function fnaf9.MoonmanManagementSystem.OnWorldStateChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		fnaf9_EFNAFGameState                               NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_EFNAFGameState                               PrevState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMoonmanManagementSystem::OnWorldStateChanged(fnaf9_EFNAFGameState NewState, fnaf9_EFNAFGameState PrevState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.OnWorldStateChanged");

	UMoonmanManagementSystem_OnWorldStateChanged_Params params {};
	params.NewState = NewState;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB13A0
//		Name   -> Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPointsFor
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		fnaf9_EMMAnimCategory                              MMAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class AMoonmanSpawnPoint*>                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class AMoonmanSpawnPoint*> UMoonmanManagementSystem::GetAllMMSpawnPointsFor(fnaf9_EMMAnimCategory MMAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPointsFor");

	UMoonmanManagementSystem_GetAllMMSpawnPointsFor_Params params {};
	params.MMAnimation = MMAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1320
//		Name   -> Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPoints
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<class AMoonmanSpawnPoint*>                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class AMoonmanSpawnPoint*> UMoonmanManagementSystem::GetAllMMSpawnPoints()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanManagementSystem.GetAllMMSpawnPoints");

	UMoonmanManagementSystem_GetAllMMSpawnPoints_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB2E30
//		Name   -> Function fnaf9.MoonmanSpawnPoint.SetSpawnProbability
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              tempProbability                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMoonmanSpawnPoint::SetSpawnProbability(float tempProbability)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetSpawnProbability");

	AMoonmanSpawnPoint_SetSpawnProbability_Params params {};
	params.tempProbability = tempProbability;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2DB0
//		Name   -> Function fnaf9.MoonmanSpawnPoint.SetShouldFollowPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMoonmanSpawnPoint::SetShouldFollowPlayer(bool In)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetShouldFollowPlayer");

	AMoonmanSpawnPoint_SetShouldFollowPlayer_Params params {};
	params.In = In;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2D30
//		Name   -> Function fnaf9.MoonmanSpawnPoint.SetMMAnimCategory
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		fnaf9_EMMAnimCategory                              In                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMoonmanSpawnPoint::SetMMAnimCategory(fnaf9_EMMAnimCategory In)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetMMAnimCategory");

	AMoonmanSpawnPoint_SetMMAnimCategory_Params params {};
	params.In = In;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2CA0
//		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsTriggered
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               isTriggered                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMoonmanSpawnPoint::SetIsTriggered(bool isTriggered)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsTriggered");

	AMoonmanSpawnPoint_SetIsTriggered_Params params {};
	params.isTriggered = isTriggered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2C20
//		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsStationary
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMoonmanSpawnPoint::SetIsStationary(bool In)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsStationary");

	AMoonmanSpawnPoint_SetIsStationary_Params params {};
	params.In = In;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2B90
//		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsSpawned
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsSpawned                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMoonmanSpawnPoint::SetIsSpawned(bool IsSpawned)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsSpawned");

	AMoonmanSpawnPoint_SetIsSpawned_Params params {};
	params.IsSpawned = IsSpawned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2B10
//		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsSingleUse
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMoonmanSpawnPoint::SetIsSingleUse(bool In)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsSingleUse");

	AMoonmanSpawnPoint_SetIsSingleUse_Params params {};
	params.In = In;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2A80
//		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsMMDetected
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsSkeletonDetected                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMoonmanSpawnPoint::SetIsMMDetected(bool IsSkeletonDetected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsMMDetected");

	AMoonmanSpawnPoint_SetIsMMDetected_Params params {};
	params.IsSkeletonDetected = IsSkeletonDetected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2A00
//		Name   -> Function fnaf9.MoonmanSpawnPoint.SetIsAnimLoop
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMoonmanSpawnPoint::SetIsAnimLoop(bool In)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetIsAnimLoop");

	AMoonmanSpawnPoint_SetIsAnimLoop_Params params {};
	params.In = In;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB28B0
//		Name   -> Function fnaf9.MoonmanSpawnPoint.SetHasSpawnedOnce
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               HasSpawnedOnce                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMoonmanSpawnPoint::SetHasSpawnedOnce(bool HasSpawnedOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetHasSpawnedOnce");

	AMoonmanSpawnPoint_SetHasSpawnedOnce_Params params {};
	params.HasSpawnedOnce = HasSpawnedOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2820
//		Name   -> Function fnaf9.MoonmanSpawnPoint.SetHasLookedOnce
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               HasLookedOnce                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMoonmanSpawnPoint::SetHasLookedOnce(bool HasLookedOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetHasLookedOnce");

	AMoonmanSpawnPoint_SetHasLookedOnce_Params params {};
	params.HasLookedOnce = HasLookedOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2700
//		Name   -> Function fnaf9.MoonmanSpawnPoint.SetCanSpawn
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               canSpawn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMoonmanSpawnPoint::SetCanSpawn(bool canSpawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetCanSpawn");

	AMoonmanSpawnPoint_SetCanSpawn_Params params {};
	params.canSpawn = canSpawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2680
//		Name   -> Function fnaf9.MoonmanSpawnPoint.SetCanPopUp
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMoonmanSpawnPoint::SetCanPopUp(bool In)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetCanPopUp");

	AMoonmanSpawnPoint_SetCanPopUp_Params params {};
	params.In = In;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB2600
//		Name   -> Function fnaf9.MoonmanSpawnPoint.SetAimHeadAtPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               In                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMoonmanSpawnPoint::SetAimHeadAtPlayer(bool In)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.SetAimHeadAtPlayer");

	AMoonmanSpawnPoint_SetAimHeadAtPlayer_Params params {};
	params.In = In;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB21D0
//		Name   -> Function fnaf9.MoonmanSpawnPoint.OnSetAIDisplay
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		bool                                               enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMoonmanSpawnPoint::OnSetAIDisplay(bool enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.OnSetAIDisplay");

	AMoonmanSpawnPoint_OnSetAIDisplay_Params params {};
	params.enable = enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB1B00
//		Name   -> Function fnaf9.MoonmanSpawnPoint.GetSpawnProbability
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AMoonmanSpawnPoint::GetSpawnProbability()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetSpawnProbability");

	AMoonmanSpawnPoint_GetSpawnProbability_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1AE0
//		Name   -> Function fnaf9.MoonmanSpawnPoint.GetOriginalProbability
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AMoonmanSpawnPoint::GetOriginalProbability()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetOriginalProbability");

	AMoonmanSpawnPoint_GetOriginalProbability_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1890
//		Name   -> Function fnaf9.MoonmanSpawnPoint.GetMMAnimSeq_Array
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class UAnimSequence*>                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UAnimSequence*> AMoonmanSpawnPoint::GetMMAnimSeq_Array()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetMMAnimSeq_Array");

	AMoonmanSpawnPoint_GetMMAnimSeq_Array_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1870
//		Name   -> Function fnaf9.MoonmanSpawnPoint.GetMMAnimCategory
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		fnaf9_EMMAnimCategory                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
fnaf9_EMMAnimCategory AMoonmanSpawnPoint::GetMMAnimCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetMMAnimCategory");

	AMoonmanSpawnPoint_GetMMAnimCategory_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1610
//		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsTriggered
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMoonmanSpawnPoint::GetIsTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsTriggered");

	AMoonmanSpawnPoint_GetIsTriggered_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB15F0
//		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsStationary
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMoonmanSpawnPoint::GetIsStationary()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsStationary");

	AMoonmanSpawnPoint_GetIsStationary_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB15D0
//		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsSpawned
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMoonmanSpawnPoint::GetIsSpawned()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsSpawned");

	AMoonmanSpawnPoint_GetIsSpawned_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB15B0
//		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsSingleUse
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMoonmanSpawnPoint::GetIsSingleUse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsSingleUse");

	AMoonmanSpawnPoint_GetIsSingleUse_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1590
//		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsMMDetected
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMoonmanSpawnPoint::GetIsMMDetected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsMMDetected");

	AMoonmanSpawnPoint_GetIsMMDetected_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1570
//		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsFollowPlayerTrue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMoonmanSpawnPoint::GetIsFollowPlayerTrue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsFollowPlayerTrue");

	AMoonmanSpawnPoint_GetIsFollowPlayerTrue_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1550
//		Name   -> Function fnaf9.MoonmanSpawnPoint.GetIsAnimLoop
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMoonmanSpawnPoint::GetIsAnimLoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetIsAnimLoop");

	AMoonmanSpawnPoint_GetIsAnimLoop_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1530
//		Name   -> Function fnaf9.MoonmanSpawnPoint.GetHasSpawnedOnce
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMoonmanSpawnPoint::GetHasSpawnedOnce()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetHasSpawnedOnce");

	AMoonmanSpawnPoint_GetHasSpawnedOnce_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1510
//		Name   -> Function fnaf9.MoonmanSpawnPoint.GetHasLookedOnce
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMoonmanSpawnPoint::GetHasLookedOnce()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetHasLookedOnce");

	AMoonmanSpawnPoint_GetHasLookedOnce_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1490
//		Name   -> Function fnaf9.MoonmanSpawnPoint.GetCanSpawn
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMoonmanSpawnPoint::GetCanSpawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetCanSpawn");

	AMoonmanSpawnPoint_GetCanSpawn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1470
//		Name   -> Function fnaf9.MoonmanSpawnPoint.GetCanPopUp
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMoonmanSpawnPoint::GetCanPopUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetCanPopUp");

	AMoonmanSpawnPoint_GetCanPopUp_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1300
//		Name   -> Function fnaf9.MoonmanSpawnPoint.GetAimHeadAtPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMoonmanSpawnPoint::GetAimHeadAtPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.GetAimHeadAtPlayer");

	AMoonmanSpawnPoint_GetAimHeadAtPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB1210
//		Name   -> Function fnaf9.MoonmanSpawnPoint.DetectTheSpawnPoint
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class AMoonmanSpawnPoint*                          passed_HitActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               passed_bVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMoonmanSpawnPoint::DetectTheSpawnPoint(class AMoonmanSpawnPoint* passed_HitActor, bool passed_bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.MoonmanSpawnPoint.DetectTheSpawnPoint");

	AMoonmanSpawnPoint_DetectTheSpawnPoint_Params params {};
	params.passed_HitActor = passed_HitActor;
	params.passed_bVisible = passed_bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB71C0
//		Name   -> Function fnaf9.PatrollerInterface.SetPatrolPath
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
void UPatrollerInterface::SetPatrolPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PatrollerInterface.SetPatrolPath");

	UPatrollerInterface_SetPatrolPath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB6DB0
//		Name   -> Function fnaf9.PatrollerInterface.SetCurrentPatrolPointIndex
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PatrolPointIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPatrollerInterface::SetCurrentPatrolPointIndex(int PatrolPointIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PatrollerInterface.SetCurrentPatrolPointIndex");

	UPatrollerInterface_SetCurrentPatrolPointIndex_Params params {};
	params.PatrolPointIndex = PatrolPointIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB6340
//		Name   -> Function fnaf9.PatrollerInterface.GetPatrolPath
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
void UPatrollerInterface::GetPatrolPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PatrollerInterface.GetPatrolPath");

	UPatrollerInterface_GetPatrolPath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB60A0
//		Name   -> Function fnaf9.PatrollerInterface.GetCurrentPatrolPointIndex
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPatrollerInterface::GetCurrentPatrolPointIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.PatrollerInterface.GetCurrentPatrolPointIndex");

	UPatrollerInterface_GetCurrentPatrolPointIndex_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB6CF0
//		Name   -> Function fnaf9.SaveHandlerInterface.PostSaveGame
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void USaveHandlerInterface::PostSaveGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.PostSaveGame");

	USaveHandlerInterface_PostSaveGame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA2A90
//		Name   -> Function fnaf9.SaveHandlerInterface.PostGameLoad
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void USaveHandlerInterface::PostGameLoad()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.PostGameLoad");

	USaveHandlerInterface_PostGameLoad_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB69A0
//		Name   -> Function fnaf9.SaveHandlerInterface.OnStoreGameData
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USaveHandlerInterface::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.OnStoreGameData");

	USaveHandlerInterface_OnStoreGameData_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BA8A40
//		Name   -> Function fnaf9.SaveHandlerInterface.OnGameDataLoaded
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USaveHandlerInterface::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.OnGameDataLoaded");

	USaveHandlerInterface_OnGameDataLoaded_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB66C0
//		Name   -> Function fnaf9.SaveHandlerInterface.OnCheckpointSave
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USaveHandlerInterface::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.OnCheckpointSave");

	USaveHandlerInterface_OnCheckpointSave_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BAD100
//		Name   -> Function fnaf9.SaveHandlerInterface.OnCheckpointLoad
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USaveHandlerInterface::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SaveHandlerInterface.OnCheckpointLoad");

	USaveHandlerInterface_OnCheckpointLoad_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB7700
//		Name   -> Function fnaf9.SecurityCamera.StopOfficeMode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ASecurityCamera::StopOfficeMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.StopOfficeMode");

	ASecurityCamera_StopOfficeMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB76C0
//		Name   -> Function fnaf9.SecurityCamera.StartOfficeMode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ASecurityCamera::StartOfficeMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.StartOfficeMode");

	ASecurityCamera_StartOfficeMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB7260
//		Name   -> Function fnaf9.SecurityCamera.SetPlayerDetectorEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASecurityCamera::SetPlayerDetectorEnabled(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.SetPlayerDetectorEnabled");

	ASecurityCamera_SetPlayerDetectorEnabled_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB6F30
//		Name   -> Function fnaf9.SecurityCamera.SetEnemeyDetectorEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASecurityCamera::SetEnemeyDetectorEnabled(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.SetEnemeyDetectorEnabled");

	ASecurityCamera_SetEnemeyDetectorEnabled_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB68D0
//		Name   -> Function fnaf9.SecurityCamera.OnPlayerDetectorSightChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      UpdatedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASecurityCamera::OnPlayerDetectorSightChanged(class AActor* UpdatedActor, bool bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.OnPlayerDetectorSightChanged");

	ASecurityCamera_OnPlayerDetectorSightChanged_Params params {};
	params.UpdatedActor = UpdatedActor;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.SecurityCamera.OnOfficeModeStarted
//		Flags  -> (Event, Protected, BlueprintEvent)
void ASecurityCamera::OnOfficeModeStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.OnOfficeModeStarted");

	ASecurityCamera_OnOfficeModeStarted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB6750
//		Name   -> Function fnaf9.SecurityCamera.OnEnemyDetectorSightChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      UpdatedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASecurityCamera::OnEnemyDetectorSightChanged(class AActor* UpdatedActor, bool bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.OnEnemyDetectorSightChanged");

	ASecurityCamera_OnEnemyDetectorSightChanged_Params params {};
	params.UpdatedActor = UpdatedActor;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB64D0
//		Name   -> Function fnaf9.SecurityCamera.IsCameraUnlocked
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               OnlyShowCurrentMission                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ASecurityCamera::IsCameraUnlocked(bool OnlyShowCurrentMission)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.IsCameraUnlocked");

	ASecurityCamera_IsCameraUnlocked_Params params {};
	params.OnlyShowCurrentMission = OnlyShowCurrentMission;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB6410
//		Name   -> Function fnaf9.SecurityCamera.HasDetectedEnemies
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ASecurityCamera::HasDetectedEnemies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.HasDetectedEnemies");

	ASecurityCamera_HasDetectedEnemies_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB63D0
//		Name   -> Function fnaf9.SecurityCamera.GetVisibleEnemies
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class AActor*>                              ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class AActor*> ASecurityCamera::GetVisibleEnemies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.GetVisibleEnemies");

	ASecurityCamera_GetVisibleEnemies_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.SecurityCamera.GetPlayerSceneCapture
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class USceneCaptureComponent2D*                    ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USceneCaptureComponent2D* ASecurityCamera::GetPlayerSceneCapture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.GetPlayerSceneCapture");

	ASecurityCamera_GetPlayerSceneCapture_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB6050
//		Name   -> Function fnaf9.SecurityCamera.GetCaptureTarget
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UTextureRenderTarget2D*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTextureRenderTarget2D* ASecurityCamera::GetCaptureTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.GetCaptureTarget");

	ASecurityCamera_GetCaptureTarget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.SecurityCamera.CaptureView
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ASecurityCamera::CaptureView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCamera.CaptureView");

	ASecurityCamera_CaptureView_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB6C70
//		Name   -> Function fnaf9.SecurityCameraSystem.PlayerSpotted
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ASecurityCamera*                             SecurityCamera                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USecurityCameraSystem::PlayerSpotted(class ASecurityCamera* SecurityCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCameraSystem.PlayerSpotted");

	USecurityCameraSystem_PlayerSpotted_Params params {};
	params.SecurityCamera = SecurityCamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB5ED0
//		Name   -> Function fnaf9.SecurityCameraSystem.GetAllSecurityCameras
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class ASecurityCamera*>                     ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class ASecurityCamera*> USecurityCameraSystem::GetAllSecurityCameras()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SecurityCameraSystem.GetAllSecurityCameras");

	USecurityCameraSystem_GetAllSecurityCameras_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.SeekerPatrolPath.GetSpawnType
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		fnaf9_EFNAFAISpawnType                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
fnaf9_EFNAFAISpawnType USeekerPatrolPath::GetSpawnType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SeekerPatrolPath.GetSpawnType");

	USeekerPatrolPath_GetSpawnType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function fnaf9.SeekerPatrolPath.GetPathName
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName USeekerPatrolPath::GetPathName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SeekerPatrolPath.GetPathName");

	USeekerPatrolPath_GetPathName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB7510
//		Name   -> Function fnaf9.SightComponent.SetSightType
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		fnaf9_ESightType                                   InSightType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USightComponent::SetSightType(fnaf9_ESightType InSightType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetSightType");

	USightComponent_SetSightType_Params params {};
	params.InSightType = InSightType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB7400
//		Name   -> Function fnaf9.SightComponent.SetSightParams
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MinDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MaxDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USightComponent::SetSightParams(float Angle, float MinDistance, float MaxDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetSightParams");

	USightComponent_SetSightParams_Params params {};
	params.Angle = Angle;
	params.MinDistance = MinDistance;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB7370
//		Name   -> Function fnaf9.SightComponent.SetSightEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USightComponent::SetSightEnabled(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetSightEnabled");

	USightComponent_SetSightEnabled_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB72F0
//		Name   -> Function fnaf9.SightComponent.SetSightAngle
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USightComponent::SetSightAngle(float Angle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetSightAngle");

	USightComponent_SetSightAngle_Params params {};
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB7110
//		Name   -> Function fnaf9.SightComponent.SetIncludeTags
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FName>                               InIgnoreTags                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USightComponent::SetIncludeTags(TArray<struct FName> InIgnoreTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetIncludeTags");

	USightComponent_SetIncludeTags_Params params {};
	params.InIgnoreTags = InIgnoreTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB6FC0
//		Name   -> Function fnaf9.SightComponent.SetFrustumTypeParams
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InMinYaw                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InMaxYaw                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InMinPitch                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InMaxPitch                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USightComponent::SetFrustumTypeParams(float InMinYaw, float InMaxYaw, float InMinPitch, float InMaxPitch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetFrustumTypeParams");

	USightComponent_SetFrustumTypeParams_Params params {};
	params.InMinYaw = InMinYaw;
	params.InMaxYaw = InMaxYaw;
	params.InMinPitch = InMinPitch;
	params.InMaxPitch = InMaxPitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB6EB0
//		Name   -> Function fnaf9.SightComponent.SetEndDistance
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USightComponent::SetEndDistance(float Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetEndDistance");

	USightComponent_SetEndDistance_Params params {};
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB6D30
//		Name   -> Function fnaf9.SightComponent.SetAspectRatio
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Ratio                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USightComponent::SetAspectRatio(float Ratio)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.SetAspectRatio");

	USightComponent_SetAspectRatio_Params params {};
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB6AF0
//		Name   -> Function fnaf9.SightComponent.OnVisualQueryResults
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		TArray<TWeakObjectPtr<class UVisualSourceComponent>> DetectedSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USightComponent::OnVisualQueryResults(TArray<TWeakObjectPtr<class UVisualSourceComponent>> DetectedSources)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.OnVisualQueryResults");

	USightComponent_OnVisualQueryResults_Params params {};
	params.DetectedSources = DetectedSources;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB6A70
//		Name   -> Function fnaf9.SightComponent.OnVisibleActorDestroyed
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USightComponent::OnVisibleActorDestroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.OnVisibleActorDestroyed");

	USightComponent_OnVisibleActorDestroyed_Params params {};
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB6820
//		Name   -> Function fnaf9.SightComponent.OnMoonManQueryResults
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		TArray<TWeakObjectPtr<class AMoonmanSpawnPoint>>   MoonManSpawnPoints                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USightComponent::OnMoonManQueryResults(TArray<TWeakObjectPtr<class AMoonmanSpawnPoint>> MoonManSpawnPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.OnMoonManQueryResults");

	USightComponent_OnMoonManQueryResults_Params params {};
	params.MoonManSpawnPoints = MoonManSpawnPoints;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB65E0
//		Name   -> Function fnaf9.SightComponent.IsUsingConeSight
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		fnaf9_ESightType                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
fnaf9_ESightType USightComponent::IsUsingConeSight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.IsUsingConeSight");

	USightComponent_IsUsingConeSight_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB6560
//		Name   -> Function fnaf9.SightComponent.IsSightEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USightComponent::IsSightEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.IsSightEnabled");

	USightComponent_IsSightEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB6440
//		Name   -> Function fnaf9.SightComponent.IsActorVisible
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USightComponent::IsActorVisible(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.IsActorVisible");

	USightComponent_IsActorVisible_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB63A0
//		Name   -> Function fnaf9.SightComponent.GetVisibleActors
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class AActor*>                              ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class AActor*> USightComponent::GetVisibleActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetVisibleActors");

	USightComponent_GetVisibleActors_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB6380
//		Name   -> Function fnaf9.SightComponent.GetStartDistance
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USightComponent::GetStartDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetStartDistance");

	USightComponent_GetStartDistance_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B969D0
//		Name   -> Function fnaf9.SightComponent.GetSightAngle
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USightComponent::GetSightAngle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetSightAngle");

	USightComponent_GetSightAngle_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB6320
//		Name   -> Function fnaf9.SightComponent.GetMinYaw
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USightComponent::GetMinYaw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetMinYaw");

	USightComponent_GetMinYaw_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB6300
//		Name   -> Function fnaf9.SightComponent.GetMinPitch
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USightComponent::GetMinPitch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetMinPitch");

	USightComponent_GetMinPitch_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB62E0
//		Name   -> Function fnaf9.SightComponent.GetMaxYaw
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USightComponent::GetMaxYaw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetMaxYaw");

	USightComponent_GetMaxYaw_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB62C0
//		Name   -> Function fnaf9.SightComponent.GetMaxPitch
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USightComponent::GetMaxPitch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetMaxPitch");

	USightComponent_GetMaxPitch_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB6290
//		Name   -> Function fnaf9.SightComponent.GetIncludeTags
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FName>                               ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FName> USightComponent::GetIncludeTags()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetIncludeTags");

	USightComponent_GetIncludeTags_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB60F0
//		Name   -> Function fnaf9.SightComponent.GetFrustumTypeParams
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              OutMinYaw                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              OutMaxYaw                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              OutMinPitch                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              OutMaxPitch                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USightComponent::GetFrustumTypeParams(float* OutMinYaw, float* OutMaxYaw, float* OutMinPitch, float* OutMaxPitch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetFrustumTypeParams");

	USightComponent_GetFrustumTypeParams_Params params {};

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


// Function:
//		Offset -> 0x00BB60D0
//		Name   -> Function fnaf9.SightComponent.GetEndDistance
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USightComponent::GetEndDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetEndDistance");

	USightComponent_GetEndDistance_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB6030
//		Name   -> Function fnaf9.SightComponent.GetAspectRatio
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USightComponent::GetAspectRatio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SightComponent.GetAspectRatio");

	USightComponent_GetAspectRatio_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB76E0
//		Name   -> Function fnaf9.SplineFollowMovementComponent.StopFollowingSpline
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USplineFollowMovementComponent::StopFollowingSpline()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.StopFollowingSpline");

	USplineFollowMovementComponent_StopFollowingSpline_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB76A0
//		Name   -> Function fnaf9.SplineFollowMovementComponent.StartFollowingSpline
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USplineFollowMovementComponent::StartFollowingSpline()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.StartFollowingSpline");

	USplineFollowMovementComponent_StartFollowingSpline_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB7590
//		Name   -> Function fnaf9.SplineFollowMovementComponent.SetSplineToFollow
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USplineComponent*                            Spline                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USplineFollowMovementComponent::SetSplineToFollow(class USplineComponent* Spline)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.SetSplineToFollow");

	USplineFollowMovementComponent_SetSplineToFollow_Params params {};
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB6E30
//		Name   -> Function fnaf9.SplineFollowMovementComponent.SetDistanceAlongSpline
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USplineFollowMovementComponent::SetDistanceAlongSpline(float Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.SetDistanceAlongSpline");

	USplineFollowMovementComponent_SetDistanceAlongSpline_Params params {};
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB14F0
//		Name   -> Function fnaf9.SplineFollowMovementComponent.IsFollowingSpline
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USplineFollowMovementComponent::IsFollowingSpline()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.IsFollowingSpline");

	USplineFollowMovementComponent_IsFollowingSpline_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB6080
//		Name   -> Function fnaf9.SplineFollowMovementComponent.GetCurrentDistance
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USplineFollowMovementComponent::GetCurrentDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SplineFollowMovementComponent.GetCurrentDistance");

	USplineFollowMovementComponent_GetCurrentDistance_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB5F60
//		Name   -> Function fnaf9.SplineUtils.GetApproxDistanceClosestToWorldLocation
//		Flags  -> (Final, Native, Static, Private, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     Pos_WS                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USplineComponent*                            Spline                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USplineUtils::STATIC_GetApproxDistanceClosestToWorldLocation(const struct FVector& Pos_WS, class USplineComponent* Spline)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SplineUtils.GetApproxDistanceClosestToWorldLocation");

	USplineUtils_GetApproxDistanceClosestToWorldLocation_Params params {};
	params.Pos_WS = Pos_WS;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBC140
//		Name   -> Function fnaf9.WorldStateComponent.SetObjectState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateComponent::SetObjectState(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateComponent.SetObjectState");

	UWorldStateComponent_SetObjectState_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBB5E0
//		Name   -> Function fnaf9.WorldStateComponent.HasValidSaveName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWorldStateComponent::HasValidSaveName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateComponent.HasValidSaveName");

	UWorldStateComponent_HasValidSaveName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBAAE0
//		Name   -> Function fnaf9.WorldStateComponent.GetObjectState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWorldStateComponent::GetObjectState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateComponent.GetObjectState");

	UWorldStateComponent_GetObjectState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB6600
//		Name   -> Function fnaf9.StoreActiveStateOnTrigger.OnActorTriggered
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UStoreActiveStateOnTrigger::OnActorTriggered(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.StoreActiveStateOnTrigger.OnActorTriggered");

	UStoreActiveStateOnTrigger_OnActorTriggered_Params params {};
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBB7C0
//		Name   -> Function fnaf9.StreamingLevelUtil.LoadStreamingLevelsAtLocation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bEnableVolumesAfterLoad                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UStreamingLevelUtil::STATIC_LoadStreamingLevelsAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation, bool bEnableVolumesAfterLoad, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.LoadStreamingLevelsAtLocation");

	UStreamingLevelUtil_LoadStreamingLevelsAtLocation_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.WorldLocation = WorldLocation;
	params.bEnableVolumesAfterLoad = bEnableVolumesAfterLoad;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBA580
//		Name   -> Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumesAtLocation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class ALevelStreamingVolume*>               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class ALevelStreamingVolume*> UStreamingLevelUtil::STATIC_GetAllStreamingVolumesAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumesAtLocation");

	UStreamingLevelUtil_GetAllStreamingVolumesAtLocation_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA4B0
//		Name   -> Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class ALevelStreamingVolume*>               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class ALevelStreamingVolume*> UStreamingLevelUtil::STATIC_GetAllStreamingVolumes(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.GetAllStreamingVolumes");

	UStreamingLevelUtil_GetAllStreamingVolumes_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA3A0
//		Name   -> Function fnaf9.StreamingLevelUtil.GetAllStreamingLevelsAtLocation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class ULevelStreaming*>                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class ULevelStreaming*> UStreamingLevelUtil::STATIC_GetAllStreamingLevelsAtLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.GetAllStreamingLevelsAtLocation");

	UStreamingLevelUtil_GetAllStreamingLevelsAtLocation_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA2D0
//		Name   -> Function fnaf9.StreamingLevelUtil.GetAllStreamingLevels
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class ULevelStreaming*>                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class ULevelStreaming*> UStreamingLevelUtil::STATIC_GetAllStreamingLevels(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.GetAllStreamingLevels");

	UStreamingLevelUtil_GetAllStreamingLevels_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA200
//		Name   -> Function fnaf9.StreamingLevelUtil.GetAllLevels
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class ULevel*>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class ULevel*> UStreamingLevelUtil::STATIC_GetAllLevels(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.GetAllLevels");

	UStreamingLevelUtil_GetAllLevels_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA060
//		Name   -> Function fnaf9.StreamingLevelUtil.EnableAllStreamingVolumes
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UStreamingLevelUtil::STATIC_EnableAllStreamingVolumes(class UObject* WorldContextObject, bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLevelUtil.EnableAllStreamingVolumes");

	UStreamingLevelUtil_EnableAllStreamingVolumes_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBC830
//		Name   -> Function fnaf9.StreamingLoadComponent.StartAsyncLoadForLocation
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UStreamingLoadComponent::StartAsyncLoadForLocation(const struct FVector& WorldLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLoadComponent.StartAsyncLoadForLocation");

	UStreamingLoadComponent_StartAsyncLoadForLocation_Params params {};
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBB940
//		Name   -> Function fnaf9.StreamingLoadComponent.OnLevelLoaded
//		Flags  -> (Final, Native, Private)
void UStreamingLoadComponent::OnLevelLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLoadComponent.OnLevelLoaded");

	UStreamingLoadComponent_OnLevelLoaded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBB7A0
//		Name   -> Function fnaf9.StreamingLoadComponent.IsStreamingLevels
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UStreamingLoadComponent::IsStreamingLevels()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLoadComponent.IsStreamingLevels");

	UStreamingLoadComponent_IsStreamingLevels_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA120
//		Name   -> Function fnaf9.StreamingLoadComponent.EnableAllStreamingVolumes
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UStreamingLoadComponent::EnableAllStreamingVolumes(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.StreamingLoadComponent.EnableAllStreamingVolumes");

	UStreamingLoadComponent_EnableAllStreamingVolumes_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBBA30
//		Name   -> Function fnaf9.SurvivalItemPackage.OnSetup
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void ASurvivalItemPackage::OnSetup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemPackage.OnSetup");

	ASurvivalItemPackage_OnSetup_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBB4D0
//		Name   -> Function fnaf9.SurvivalItemPackage.HasCollected
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ASurvivalItemPackage::HasCollected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemPackage.HasCollected");

	ASurvivalItemPackage_HasCollected_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB9E90
//		Name   -> Function fnaf9.SurvivalItemPackage.Collect
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ASurvivalItemPackage::Collect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemPackage.Collect");

	ASurvivalItemPackage_Collect_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBBA50
//		Name   -> Function fnaf9.SurvivalItemRandomizer.RandomizeSurvivalItems
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bSpawnAllLocations                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASurvivalItemRandomizer::RandomizeSurvivalItems(bool bSpawnAllLocations)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.RandomizeSurvivalItems");

	ASurvivalItemRandomizer_RandomizeSurvivalItems_Params params {};
	params.bSpawnAllLocations = bSpawnAllLocations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBB500
//		Name   -> Function fnaf9.SurvivalItemRandomizer.HasCollected
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ASurvivalItemPackage*                        Package                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ASurvivalItemRandomizer::HasCollected(class ASurvivalItemPackage* Package)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.HasCollected");

	ASurvivalItemRandomizer_HasCollected_Params params {};
	params.Package = Package;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBB390
//		Name   -> Function fnaf9.SurvivalItemRandomizer.GetYellowScore
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                OutCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OutPointsPerPackage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OutScore                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASurvivalItemRandomizer::GetYellowScore(int* OutCount, int* OutPointsPerPackage, int* OutScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.GetYellowScore");

	ASurvivalItemRandomizer_GetYellowScore_Params params {};

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


// Function:
//		Offset -> 0x00BBAF40
//		Name   -> Function fnaf9.SurvivalItemRandomizer.GetRedScore
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                OutCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OutPointsPerPackage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OutScore                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASurvivalItemRandomizer::GetRedScore(int* OutCount, int* OutPointsPerPackage, int* OutScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.GetRedScore");

	ASurvivalItemRandomizer_GetRedScore_Params params {};

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


// Function:
//		Offset -> 0x00BBADE0
//		Name   -> Function fnaf9.SurvivalItemRandomizer.GetPurpleScore
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                OutCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OutPointsPerPackage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OutScore                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASurvivalItemRandomizer::GetPurpleScore(int* OutCount, int* OutPointsPerPackage, int* OutScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.GetPurpleScore");

	ASurvivalItemRandomizer_GetPurpleScore_Params params {};

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


// Function:
//		Offset -> 0x00BBABC0
//		Name   -> Function fnaf9.SurvivalItemRandomizer.GetPinkScore
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                OutCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OutPointsPerPackage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OutScore                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASurvivalItemRandomizer::GetPinkScore(int* OutCount, int* OutPointsPerPackage, int* OutScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.GetPinkScore");

	ASurvivalItemRandomizer_GetPinkScore_Params params {};

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


// Function:
//		Offset -> 0x00BBAB40
//		Name   -> Function fnaf9.SurvivalItemRandomizer.GetPackagesSortedByDistance
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<class ASurvivalItemPackage*>                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class ASurvivalItemPackage*> ASurvivalItemRandomizer::GetPackagesSortedByDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.GetPackagesSortedByDistance");

	ASurvivalItemRandomizer_GetPackagesSortedByDistance_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA950
//		Name   -> Function fnaf9.SurvivalItemRandomizer.GetGreenScore
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                OutCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OutPointsPerPackage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OutScore                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASurvivalItemRandomizer::GetGreenScore(int* OutCount, int* OutPointsPerPackage, int* OutScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.GetGreenScore");

	ASurvivalItemRandomizer_GetGreenScore_Params params {};

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


// Function:
//		Offset -> 0x00BBA810
//		Name   -> Function fnaf9.SurvivalItemRandomizer.GetGoldScore
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                OutCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OutPointsPerPackage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OutScore                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASurvivalItemRandomizer::GetGoldScore(int* OutCount, int* OutPointsPerPackage, int* OutScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.SurvivalItemRandomizer.GetGoldScore");

	ASurvivalItemRandomizer_GetGoldScore_Params params {};

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


// Function:
//		Offset -> 0x00BBC9E0
//		Name   -> Function fnaf9.UpdateMissionComponent.UpdateMission
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UUpdateMissionComponent::UpdateMission()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.UpdateMissionComponent.UpdateMission");

	UUpdateMissionComponent_UpdateMission_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBB730
//		Name   -> Function fnaf9.UpdateMissionComponent.IsMissionFinished
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUpdateMissionComponent::IsMissionFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.UpdateMissionComponent.IsMissionFinished");

	UUpdateMissionComponent_IsMissionFinished_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBB590
//		Name   -> Function fnaf9.UpdateMissionComponent.HasMetCondition
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUpdateMissionComponent::HasMetCondition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.UpdateMissionComponent.HasMetCondition");

	UUpdateMissionComponent_HasMetCondition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBAAC0
//		Name   -> Function fnaf9.UpdateMissionComponent.GetMissionName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UUpdateMissionComponent::GetMissionName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.UpdateMissionComponent.GetMissionName");

	UUpdateMissionComponent_GetMissionName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBC6E0
//		Name   -> Function fnaf9.VisualSourceComponent.SetVisualOffsetLocations
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FVector>                             InVisualOffsets                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVisualSourceComponent::SetVisualOffsetLocations(TArray<struct FVector> InVisualOffsets)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.SetVisualOffsetLocations");

	UVisualSourceComponent_SetVisualOffsetLocations_Params params {};
	params.InVisualOffsets = InVisualOffsets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBC610
//		Name   -> Function fnaf9.VisualSourceComponent.SetVisualOffset
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		int                                                PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     visualOffset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVisualSourceComponent::SetVisualOffset(int PointIndex, const struct FVector& visualOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.SetVisualOffset");

	UVisualSourceComponent_SetVisualOffset_Params params {};
	params.PointIndex = PointIndex;
	params.visualOffset = visualOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBC480
//		Name   -> Function fnaf9.VisualSourceComponent.SetSourceVisibility
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVisualSourceComponent::SetSourceVisibility(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.SetSourceVisibility");

	UVisualSourceComponent_SetSourceVisibility_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBBB60
//		Name   -> Function fnaf9.VisualSourceComponent.RemoveVisualOffset
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                PointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVisualSourceComponent::RemoveVisualOffset(int PointIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.RemoveVisualOffset");

	UVisualSourceComponent_RemoveVisualOffset_Params params {};
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBB340
//		Name   -> Function fnaf9.VisualSourceComponent.GetVisualOffsets
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FVector>                             ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FVector> UVisualSourceComponent::GetVisualOffsets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.GetVisualOffsets");

	UVisualSourceComponent_GetVisualOffsets_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBB2F0
//		Name   -> Function fnaf9.VisualSourceComponent.GetVisualLocations
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FVector>                             ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FVector> UVisualSourceComponent::GetVisualLocations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.GetVisualLocations");

	UVisualSourceComponent_GetVisualLocations_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBB290
//		Name   -> Function fnaf9.VisualSourceComponent.GetSourceVisibility
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVisualSourceComponent::GetSourceVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.GetSourceVisibility");

	UVisualSourceComponent_GetSourceVisibility_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA790
//		Name   -> Function fnaf9.VisualSourceComponent.GetDetectedVisualLocation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UVisualSourceComponent::GetDetectedVisualLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.GetDetectedVisualLocation");

	UVisualSourceComponent_GetDetectedVisualLocation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB9F40
//		Name   -> Function fnaf9.VisualSourceComponent.DetectTheSource
//		Flags  -> (Final, Native, Public, HasDefaults)
// Parameters:
//		struct FVector                                     VSLocation                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      passed_HitActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               passed_bVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVisualSourceComponent::DetectTheSource(const struct FVector& VSLocation, class AActor* passed_HitActor, bool passed_bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.VisualSourceComponent.DetectTheSource");

	UVisualSourceComponent_DetectTheSource_Params params {};
	params.VSLocation = VSLocation;
	params.passed_HitActor = passed_HitActor;
	params.passed_bVisible = passed_bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBC1D0
//		Name   -> Function fnaf9.WorldStateHandlerComponent.SetObjectState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateHandlerComponent::SetObjectState(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateHandlerComponent.SetObjectState");

	UWorldStateHandlerComponent_SetObjectState_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBB960
//		Name   -> Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedHandle
//		Flags  -> (Final, Native, Private)
// Parameters:
//		struct FName                                       ObjectName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ObjectState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateHandlerComponent::OnObjectStateChangedHandle(const struct FName& ObjectName, bool ObjectState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedHandle");

	UWorldStateHandlerComponent_OnObjectStateChangedHandle_Params params {};
	params.ObjectName = ObjectName;
	params.ObjectState = ObjectState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BACBB0
//		Name   -> Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedEvent
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void UWorldStateHandlerComponent::OnObjectStateChangedEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateHandlerComponent.OnObjectStateChangedEvent");

	UWorldStateHandlerComponent_OnObjectStateChangedEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBB630
//		Name   -> Function fnaf9.WorldStateHandlerComponent.HasValidSaveName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWorldStateHandlerComponent::HasValidSaveName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateHandlerComponent.HasValidSaveName");

	UWorldStateHandlerComponent_HasValidSaveName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBAB10
//		Name   -> Function fnaf9.WorldStateHandlerComponent.GetObjectState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWorldStateHandlerComponent::GetObjectState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateHandlerComponent.GetObjectState");

	UWorldStateHandlerComponent_GetObjectState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBC8C0
//		Name   -> Function fnaf9.WorldStateSystem.StartMinigame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MinigameName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_EFNAFGameState                               GameState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      MinigameActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::StartMinigame(const struct FString& MinigameName, fnaf9_EFNAFGameState GameState, class AActor* MinigameActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.StartMinigame");

	UWorldStateSystem_StartMinigame_Params params {};
	params.MinigameName = MinigameName;
	params.GameState = GameState;
	params.MinigameActor = MinigameActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBC790
//		Name   -> Function fnaf9.WorldStateSystem.SetWorldState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		fnaf9_EFNAFGameState                               NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::SetWorldState(fnaf9_EFNAFGameState NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetWorldState");

	UWorldStateSystem_SetWorldState_Params params {};
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBC810
//		Name   -> Function fnaf9.WorldStateSystem.SetupNewGame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UWorldStateSystem::SetupNewGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetupNewGame");

	UWorldStateSystem_SetupNewGame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBC590
//		Name   -> Function fnaf9.WorldStateSystem.SetSurvivalMaxDeaths
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MaxDeaths                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::SetSurvivalMaxDeaths(int MaxDeaths)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetSurvivalMaxDeaths");

	UWorldStateSystem_SetSurvivalMaxDeaths_Params params {};
	params.MaxDeaths = MaxDeaths;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBC510
//		Name   -> Function fnaf9.WorldStateSystem.SetSurvivalDifficulty
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		fnaf9_ESurvivalDifficulty                          Difficulty                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::SetSurvivalDifficulty(fnaf9_ESurvivalDifficulty Difficulty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetSurvivalDifficulty");

	UWorldStateSystem_SetSurvivalDifficulty_Params params {};
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBC400
//		Name   -> Function fnaf9.WorldStateSystem.SetRandomSeed
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::SetRandomSeed(int Seed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetRandomSeed");

	UWorldStateSystem_SetRandomSeed_Params params {};
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBC380
//		Name   -> Function fnaf9.WorldStateSystem.SetPowerStationAvailable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bAvailable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::SetPowerStationAvailable(bool bAvailable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetPowerStationAvailable");

	UWorldStateSystem_SetPowerStationAvailable_Params params {};
	params.bAvailable = bAvailable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBC300
//		Name   -> Function fnaf9.WorldStateSystem.SetPlayerInPowerStation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InPowerStationID                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::SetPlayerInPowerStation(int InPowerStationID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetPlayerInPowerStation");

	UWorldStateSystem_SetPlayerInPowerStation_Params params {};
	params.InPowerStationID = InPowerStationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBC280
//		Name   -> Function fnaf9.WorldStateSystem.SetPlayerInFreddy
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInFreddy                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::SetPlayerInFreddy(bool bInFreddy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetPlayerInFreddy");

	UWorldStateSystem_SetPlayerInFreddy_Params params {};
	params.bInFreddy = bInFreddy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBC260
//		Name   -> Function fnaf9.WorldStateSystem.SetPlayerHasUsedHidingSpot
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UWorldStateSystem::SetPlayerHasUsedHidingSpot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetPlayerHasUsedHidingSpot");

	UWorldStateSystem_SetPlayerHasUsedHidingSpot_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBC0C0
//		Name   -> Function fnaf9.WorldStateSystem.SetFreddySick
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bIsSick                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::SetFreddySick(bool bIsSick)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetFreddySick");

	UWorldStateSystem_SetFreddySick_Params params {};
	params.bIsSick = bIsSick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBC040
//		Name   -> Function fnaf9.WorldStateSystem.SetFreddyPatrolPoint
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                PatrolPointIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::SetFreddyPatrolPoint(int PatrolPointIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetFreddyPatrolPoint");

	UWorldStateSystem_SetFreddyPatrolPoint_Params params {};
	params.PatrolPointIndex = PatrolPointIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBBF50
//		Name   -> Function fnaf9.WorldStateSystem.SetCurrentActivityId
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InActivityId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::SetCurrentActivityId(const struct FString& InActivityId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetCurrentActivityId");

	UWorldStateSystem_SetCurrentActivityId_Params params {};
	params.InActivityId = InActivityId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBBED0
//		Name   -> Function fnaf9.WorldStateSystem.SetCanEnterExitFreddy
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bCanEnterExit                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::SetCanEnterExitFreddy(bool bCanEnterExit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetCanEnterExitFreddy");

	UWorldStateSystem_SetCanEnterExitFreddy_Params params {};
	params.bCanEnterExit = bCanEnterExit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBBE50
//		Name   -> Function fnaf9.WorldStateSystem.SetCanCallFreddy
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bCanCall                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::SetCanCallFreddy(bool bCanCall)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetCanCallFreddy");

	UWorldStateSystem_SetCanCallFreddy_Params params {};
	params.bCanCall = bCanCall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBBD90
//		Name   -> Function fnaf9.WorldStateSystem.SetArcadeState
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FArcadeSaveData                             InArcadeState                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UWorldStateSystem::SetArcadeState(const struct FArcadeSaveData& InArcadeState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetArcadeState");

	UWorldStateSystem_SetArcadeState_Params params {};
	params.InArcadeState = InArcadeState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBBBE0
//		Name   -> Function fnaf9.WorldStateSystem.SetAIState
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FFNAFAISaveData                             InAIState                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UWorldStateSystem::SetAIState(const struct FFNAFAISaveData& InAIState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.SetAIState");

	UWorldStateSystem_SetAIState_Params params {};
	params.InAIState = InAIState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBBAE0
//		Name   -> Function fnaf9.WorldStateSystem.RemoveActivated
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ActivatableName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::RemoveActivated(const struct FName& ActivatableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.RemoveActivated");

	UWorldStateSystem_RemoveActivated_Params params {};
	params.ActivatableName = ActivatableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BBB780
//		Name   -> Function fnaf9.WorldStateSystem.IsPowerStationAvailable
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWorldStateSystem::IsPowerStationAvailable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.IsPowerStationAvailable");

	UWorldStateSystem_IsPowerStationAvailable_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBB760
//		Name   -> Function fnaf9.WorldStateSystem.IsPlayerInFreddy
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWorldStateSystem::IsPlayerInFreddy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.IsPlayerInFreddy");

	UWorldStateSystem_IsPlayerInFreddy_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBB710
//		Name   -> Function fnaf9.WorldStateSystem.IsFreddySick
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWorldStateSystem::IsFreddySick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.IsFreddySick");

	UWorldStateSystem_IsFreddySick_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBB680
//		Name   -> Function fnaf9.WorldStateSystem.IsActivated
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ActivatableName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWorldStateSystem::IsActivated(const struct FName& ActivatableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.IsActivated");

	UWorldStateSystem_IsActivated_Params params {};
	params.ActivatableName = ActivatableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBB5C0
//		Name   -> Function fnaf9.WorldStateSystem.HasPlayerUsedHidingSpot
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWorldStateSystem::HasPlayerUsedHidingSpot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.HasPlayerUsedHidingSpot");

	UWorldStateSystem_HasPlayerUsedHidingSpot_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB14D0
//		Name   -> Function fnaf9.WorldStateSystem.GetWorldState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		fnaf9_EFNAFGameState                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
fnaf9_EFNAFGameState UWorldStateSystem::GetWorldState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetWorldState");

	UWorldStateSystem_GetWorldState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBB2D0
//		Name   -> Function fnaf9.WorldStateSystem.GetSurvivalMaxDeaths
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWorldStateSystem::GetSurvivalMaxDeaths()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetSurvivalMaxDeaths");

	UWorldStateSystem_GetSurvivalMaxDeaths_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBB2B0
//		Name   -> Function fnaf9.WorldStateSystem.GetSurvivalDifficulty
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		fnaf9_ESurvivalDifficulty                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
fnaf9_ESurvivalDifficulty UWorldStateSystem::GetSurvivalDifficulty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetSurvivalDifficulty");

	UWorldStateSystem_GetSurvivalDifficulty_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBB1B0
//		Name   -> Function fnaf9.WorldStateSystem.GetSavedPlayerLocationAndRotation
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     OutWorldLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    OutWorldRotation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UWorldStateSystem::GetSavedPlayerLocationAndRotation(struct FVector* OutWorldLocation, struct FRotator* OutWorldRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetSavedPlayerLocationAndRotation");

	UWorldStateSystem_GetSavedPlayerLocationAndRotation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutWorldLocation != nullptr)
		*OutWorldLocation = params.OutWorldLocation;
	if (OutWorldRotation != nullptr)
		*OutWorldRotation = params.OutWorldRotation;

}


// Function:
//		Offset -> 0x00BBB080
//		Name   -> Function fnaf9.WorldStateSystem.GetSavedFreddyLocationAndRotation
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               OutFreddyInWorld                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     OutWorldLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    OutWorldRotation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UWorldStateSystem::GetSavedFreddyLocationAndRotation(bool* OutFreddyInWorld, struct FVector* OutWorldLocation, struct FRotator* OutWorldRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetSavedFreddyLocationAndRotation");

	UWorldStateSystem_GetSavedFreddyLocationAndRotation_Params params {};

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


// Function:
//		Offset -> 0x00BBAF20
//		Name   -> Function fnaf9.WorldStateSystem.GetRandomSeed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWorldStateSystem::GetRandomSeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetRandomSeed");

	UWorldStateSystem_GetRandomSeed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBAD00
//		Name   -> Function fnaf9.WorldStateSystem.GetPowerStationInfo
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               OutPlayerInPowerStation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OutPowerStationID                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::GetPowerStationInfo(bool* OutPlayerInPowerStation, int* OutPowerStationID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetPowerStationInfo");

	UWorldStateSystem_GetPowerStationInfo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPlayerInPowerStation != nullptr)
		*OutPlayerInPowerStation = params.OutPlayerInPowerStation;
	if (OutPowerStationID != nullptr)
		*OutPowerStationID = params.OutPowerStationID;

}


// Function:
//		Offset -> 0x00BBAA90
//		Name   -> Function fnaf9.WorldStateSystem.GetLivesRemaining
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWorldStateSystem::GetLivesRemaining()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetLivesRemaining");

	UWorldStateSystem_GetLivesRemaining_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA7F0
//		Name   -> Function fnaf9.WorldStateSystem.GetFreddyPawn
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AFNAFBasePlayerCharacter*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AFNAFBasePlayerCharacter* UWorldStateSystem::GetFreddyPawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetFreddyPawn");

	UWorldStateSystem_GetFreddyPawn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA7D0
//		Name   -> Function fnaf9.WorldStateSystem.GetFreddyPatrolPoint
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWorldStateSystem::GetFreddyPatrolPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetFreddyPatrolPoint");

	UWorldStateSystem_GetFreddyPatrolPoint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA770
//		Name   -> Function fnaf9.WorldStateSystem.GetCurrentSpottedCount
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWorldStateSystem::GetCurrentSpottedCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetCurrentSpottedCount");

	UWorldStateSystem_GetCurrentSpottedCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA750
//		Name   -> Function fnaf9.WorldStateSystem.GetCurrentMinigameActor
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UWorldStateSystem::GetCurrentMinigameActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetCurrentMinigameActor");

	UWorldStateSystem_GetCurrentMinigameActor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA720
//		Name   -> Function fnaf9.WorldStateSystem.GetCurrentMinigame
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UWorldStateSystem::GetCurrentMinigame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetCurrentMinigame");

	UWorldStateSystem_GetCurrentMinigame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA700
//		Name   -> Function fnaf9.WorldStateSystem.GetCurrentDeathCount
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWorldStateSystem::GetCurrentDeathCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetCurrentDeathCount");

	UWorldStateSystem_GetCurrentDeathCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA6D0
//		Name   -> Function fnaf9.WorldStateSystem.GetCurrentActivityId
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UWorldStateSystem::GetCurrentActivityId()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetCurrentActivityId");

	UWorldStateSystem_GetCurrentActivityId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA690
//		Name   -> Function fnaf9.WorldStateSystem.GetArcadeState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FArcadeSaveData                             ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FArcadeSaveData UWorldStateSystem::GetArcadeState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetArcadeState");

	UWorldStateSystem_GetArcadeState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA1D0
//		Name   -> Function fnaf9.WorldStateSystem.GetAIState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FFNAFAISaveData                             ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FFNAFAISaveData UWorldStateSystem::GetAIState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.GetAIState");

	UWorldStateSystem_GetAIState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BBA1B0
//		Name   -> Function fnaf9.WorldStateSystem.EndMinigame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UWorldStateSystem::EndMinigame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.EndMinigame");

	UWorldStateSystem_EndMinigame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB9EB0
//		Name   -> Function fnaf9.WorldStateSystem.DebugSetPlayerHasUsedHidingSpot
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               HasHid                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::DebugSetPlayerHasUsedHidingSpot(bool HasHid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.DebugSetPlayerHasUsedHidingSpot");

	UWorldStateSystem_DebugSetPlayerHasUsedHidingSpot_Params params {};
	params.HasHid = HasHid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB9E70
//		Name   -> Function fnaf9.WorldStateSystem.ClearPlayerInPowerStation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UWorldStateSystem::ClearPlayerInPowerStation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.ClearPlayerInPowerStation");

	UWorldStateSystem_ClearPlayerInPowerStation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB9D90
//		Name   -> Function fnaf9.WorldStateSystem.CanStartMinigame
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               CanStart                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		fnaf9_ECantStartMinigameReason                     reason                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::CanStartMinigame(bool* CanStart, fnaf9_ECantStartMinigameReason* reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.CanStartMinigame");

	UWorldStateSystem_CanStartMinigame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanStart != nullptr)
		*CanStart = params.CanStart;
	if (reason != nullptr)
		*reason = params.reason;

}


// Function:
//		Offset -> 0x00BB9D70
//		Name   -> Function fnaf9.WorldStateSystem.CanEnterExitFreddy
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWorldStateSystem::CanEnterExitFreddy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.CanEnterExitFreddy");

	UWorldStateSystem_CanEnterExitFreddy_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB9D50
//		Name   -> Function fnaf9.WorldStateSystem.CanCallFreddy
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWorldStateSystem::CanCallFreddy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.CanCallFreddy");

	UWorldStateSystem_CanCallFreddy_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BB9D30
//		Name   -> Function fnaf9.WorldStateSystem.AddSpotted
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UWorldStateSystem::AddSpotted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.AddSpotted");

	UWorldStateSystem_AddSpotted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BB9CA0
//		Name   -> Function fnaf9.WorldStateSystem.AddDeath
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                OutRemainingLives                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::AddDeath(int* OutRemainingLives)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.AddDeath");

	UWorldStateSystem_AddDeath_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutRemainingLives != nullptr)
		*OutRemainingLives = params.OutRemainingLives;

}


// Function:
//		Offset -> 0x00BB9C20
//		Name   -> Function fnaf9.WorldStateSystem.AddActivated
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ActivatableName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldStateSystem::AddActivated(const struct FName& ActivatableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function fnaf9.WorldStateSystem.AddActivated");

	UWorldStateSystem_AddActivated_Params params {};
	params.ActivatableName = ActivatableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
