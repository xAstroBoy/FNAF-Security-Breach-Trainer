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
	 * 		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.GetCurrentPatrolPointIndex
	 * 		Flags  -> ()
	 */
	int32_t AFreddyGuideSick_C::GetCurrentPatrolPointIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.GetCurrentPatrolPointIndex");
		
		AFreddyGuideSick_C_GetCurrentPatrolPointIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.GetPatrolPath
	 * 		Flags  -> ()
	 */
	void AFreddyGuideSick_C::GetPatrolPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.GetPatrolPath");
		
		AFreddyGuideSick_C_GetPatrolPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.OnCheckpointLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyGuideSick_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.OnCheckpointLoad");
		
		AFreddyGuideSick_C_OnCheckpointLoad_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.OnCheckpointSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyGuideSick_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.OnCheckpointSave");
		
		AFreddyGuideSick_C_OnCheckpointSave_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.OnGameDataLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyGuideSick_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.OnGameDataLoaded");
		
		AFreddyGuideSick_C_OnGameDataLoaded_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.OnStoreGameData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyGuideSick_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.OnStoreGameData");
		
		AFreddyGuideSick_C_OnStoreGameData_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.PostGameLoad
	 * 		Flags  -> ()
	 */
	void AFreddyGuideSick_C::PostGameLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.PostGameLoad");
		
		AFreddyGuideSick_C_PostGameLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.PostSaveGame
	 * 		Flags  -> ()
	 */
	void AFreddyGuideSick_C::PostSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.PostSaveGame");
		
		AFreddyGuideSick_C_PostSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AFreddyGuideSick_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.ReceiveBeginPlay");
		
		AFreddyGuideSick_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.Try Entering
	 * 		Flags  -> ()
	 */
	void AFreddyGuideSick_C::TryEntering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.Try Entering");
		
		AFreddyGuideSick_C_TryEntering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.SetPatrolPath
	 * 		Flags  -> ()
	 */
	void AFreddyGuideSick_C::SetPatrolPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.SetPatrolPath");
		
		AFreddyGuideSick_C_SetPatrolPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.SetCurrentPatrolPointIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PatrolPointIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyGuideSick_C::SetCurrentPatrolPointIndex(int32_t PatrolPointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.SetCurrentPatrolPointIndex");
		
		AFreddyGuideSick_C_SetCurrentPatrolPointIndex_Params params {};
		params.PatrolPointIndex = PatrolPointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.OnAttemptInteractFreddyGuideSick
	 * 		Flags  -> ()
	 */
	void AFreddyGuideSick_C::OnAttemptInteractFreddyGuideSick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.OnAttemptInteractFreddyGuideSick");
		
		AFreddyGuideSick_C_OnAttemptInteractFreddyGuideSick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FreddyGuideSick.FreddyGuideSick_C.ExecuteUbergraph_FreddyGuideSick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFreddyGuideSick_C::ExecuteUbergraph_FreddyGuideSick(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FreddyGuideSick.FreddyGuideSick_C.ExecuteUbergraph_FreddyGuideSick");
		
		AFreddyGuideSick_C_ExecuteUbergraph_FreddyGuideSick_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFreddyGuideSick_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFreddyGuideSick_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FreddyGuideSick.FreddyGuideSick_C");
		return ptr;
	}

}


