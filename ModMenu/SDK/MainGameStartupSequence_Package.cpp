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
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.SpawnFreddy
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.Is Main Game
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Main_Game                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMainGameStartupSequence_C::Is_Main_Game(bool* Is_Main_Game)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.Is Main Game");
		
		AMainGameStartupSequence_C_Is_Main_Game_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Is_Main_Game != nullptr)
			*Is_Main_Game = params.Is_Main_Game;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.RespawnPlayer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.Spawn Sequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMainGameStartupSequence_C::Spawn_Sequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.Spawn Sequence");
		
		AMainGameStartupSequence_C_Spawn_Sequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.OnRetry
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.Setup Survival
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMainGameStartupSequence_C::Setup_Survival()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.Setup Survival");
		
		AMainGameStartupSequence_C_Setup_Survival_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.Survival Mission Startup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMainGameStartupSequence_C::Survival_Mission_Startup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.Survival Mission Startup");
		
		AMainGameStartupSequence_C_Survival_Mission_Startup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.Survival Vanessa Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMainGameStartupSequence_C::Survival_Vanessa_Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.Survival Vanessa Setup");
		
		AMainGameStartupSequence_C_Survival_Vanessa_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.On Respawn Levels Loaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMainGameStartupSequence_C::On_Respawn_Levels_Loaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainGameStartupSequence.MainGameStartupSequence_C.On Respawn Levels Loaded");
		
		AMainGameStartupSequence_C_On_Respawn_Levels_Loaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.FreddyBootedUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
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
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MainGameStartupSequence.MainGameStartupSequence_C.ExecuteUbergraph_MainGameStartupSequence
	 * 		Flags  -> (Final, HasDefaults)
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMainGameStartupSequence_C.StaticClass
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


