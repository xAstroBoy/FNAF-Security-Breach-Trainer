/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pre_BadgeHolder_Backstage.Pre_BadgeHolder_Backstage_C.OnPlayerInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APre_BadgeHolder_Backstage_C::OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pre_BadgeHolder_Backstage.Pre_BadgeHolder_Backstage_C.OnPlayerInteract");
		
		APre_BadgeHolder_Backstage_C_OnPlayerInteract_Params params {};
		params.PlayerPawn = PlayerPawn;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pre_BadgeHolder_Backstage.Pre_BadgeHolder_Backstage_C.ExecuteUbergraph_Pre_BadgeHolder_Backstage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APre_BadgeHolder_Backstage_C::ExecuteUbergraph_Pre_BadgeHolder_Backstage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pre_BadgeHolder_Backstage.Pre_BadgeHolder_Backstage_C.ExecuteUbergraph_Pre_BadgeHolder_Backstage");
		
		APre_BadgeHolder_Backstage_C_ExecuteUbergraph_Pre_BadgeHolder_Backstage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pre_BadgeHolder_Backstage.Pre_BadgeHolder_Backstage_C.OnRoxyMontySpawn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void APre_BadgeHolder_Backstage_C::OnRoxyMontySpawn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pre_BadgeHolder_Backstage.Pre_BadgeHolder_Backstage_C.OnRoxyMontySpawn__DelegateSignature");
		
		APre_BadgeHolder_Backstage_C_OnRoxyMontySpawn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APre_BadgeHolder_Backstage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APre_BadgeHolder_Backstage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Pre_BadgeHolder_Backstage.Pre_BadgeHolder_Backstage_C");
		return ptr;
	}

}


