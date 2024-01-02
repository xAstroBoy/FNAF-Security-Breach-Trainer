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
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.SpawnFreddy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     SpawnTransform_Location                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    SpawnTransform_Rotation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AFreddy_C*                                   FreddyPawn                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameStartupSequence_C::SpawnFreddy(const struct FVector& SpawnTransform_Location, const struct FRotator& SpawnTransform_Rotation, class AFreddy_C** FreddyPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.SpawnFreddy");
		
		AMainGameStartupSequence_C_SpawnFreddy_Params params {};
		params.SpawnTransform_Location = SpawnTransform_Location;
		params.SpawnTransform_Rotation = SpawnTransform_Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FreddyPawn != nullptr)
			*FreddyPawn = params.FreddyPawn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.Is Main Game
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMainGame                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGameStartupSequence_C::IsMainGame(bool* IsMainGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.Is Main Game");
		
		AMainGameStartupSequence_C_IsMainGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsMainGame != nullptr)
			*IsMainGame = params.IsMainGame;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.RespawnPlayer
	 * 		Flags  -> ()
	 */
	void AMainGameStartupSequence_C::RespawnPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.RespawnPlayer");
		
		AMainGameStartupSequence_C_RespawnPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.OnCheckpointLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameStartupSequence_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.OnCheckpointLoad");
		
		AMainGameStartupSequence_C_OnCheckpointLoad_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.OnCheckpointSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameStartupSequence_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.OnCheckpointSave");
		
		AMainGameStartupSequence_C_OnCheckpointSave_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.OnGameDataLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameStartupSequence_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.OnGameDataLoaded");
		
		AMainGameStartupSequence_C_OnGameDataLoaded_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.OnStoreGameData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameStartupSequence_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.OnStoreGameData");
		
		AMainGameStartupSequence_C_OnStoreGameData_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.PostGameLoad
	 * 		Flags  -> ()
	 */
	void AMainGameStartupSequence_C::PostGameLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.PostGameLoad");
		
		AMainGameStartupSequence_C_PostGameLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.PostSaveGame
	 * 		Flags  -> ()
	 */
	void AMainGameStartupSequence_C::PostSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.PostSaveGame");
		
		AMainGameStartupSequence_C_PostSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.Spawn Sequence
	 * 		Flags  -> ()
	 */
	void AMainGameStartupSequence_C::SpawnSequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.Spawn Sequence");
		
		AMainGameStartupSequence_C_SpawnSequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.OnRetry
	 * 		Flags  -> ()
	 */
	void AMainGameStartupSequence_C::OnRetry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.OnRetry");
		
		AMainGameStartupSequence_C_OnRetry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMainGameStartupSequence_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.ReceiveBeginPlay");
		
		AMainGameStartupSequence_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.On Respawn Levels Loaded
	 * 		Flags  -> ()
	 */
	void AMainGameStartupSequence_C::OnRespawnLevelsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.On Respawn Levels Loaded");
		
		AMainGameStartupSequence_C_OnRespawnLevelsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.FreddyBootedUp
	 * 		Flags  -> ()
	 */
	void AMainGameStartupSequence_C::FreddyBootedUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.FreddyBootedUp");
		
		AMainGameStartupSequence_C_FreddyBootedUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.End Loading Screen
	 * 		Flags  -> ()
	 */
	void AMainGameStartupSequence_C::EndLoadingScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.End Loading Screen");
		
		AMainGameStartupSequence_C_EndLoadingScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.ExecuteUbergraph_MainGameStartupSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainGameStartupSequence_C::ExecuteUbergraph_MainGameStartupSequence(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.ExecuteUbergraph_MainGameStartupSequence");
		
		AMainGameStartupSequence_C_ExecuteUbergraph_MainGameStartupSequence_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainGameStartupSequence_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainGameStartupSequence_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MainGameStartupSequence.MainGameStartupSequence_C");
		return ptr;
	}

}


