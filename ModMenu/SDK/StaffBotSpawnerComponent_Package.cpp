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
	 * 		Name   -> Function StaffBotSpawnerComponent.StaffBotSpawnerComponent_C.SpawnBot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     SpawnTransform_Location                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASplinePathwayManager_C*                     SplineManager                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class AStaffBotBase_C* UStaffBotSpawnerComponent_C::SpawnBot(const struct FVector& SpawnTransform_Location, class ASplinePathwayManager_C* SplineManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotSpawnerComponent.StaffBotSpawnerComponent_C.SpawnBot");
		
		UStaffBotSpawnerComponent_C_SpawnBot_Params params {};
		params.SpawnTransform_Location = SpawnTransform_Location;
		params.SplineManager = SplineManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffBotSpawnerComponent.StaffBotSpawnerComponent_C.Spawn Staff Bots
	 * 		Flags  -> ()
	 */
	void UStaffBotSpawnerComponent_C::SpawnStaffBots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotSpawnerComponent.StaffBotSpawnerComponent_C.Spawn Staff Bots");
		
		UStaffBotSpawnerComponent_C_SpawnStaffBots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffBotSpawnerComponent.StaffBotSpawnerComponent_C.Destroy Staff Bots
	 * 		Flags  -> ()
	 */
	void UStaffBotSpawnerComponent_C::DestroyStaffBots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotSpawnerComponent.StaffBotSpawnerComponent_C.Destroy Staff Bots");
		
		UStaffBotSpawnerComponent_C_DestroyStaffBots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffBotSpawnerComponent.StaffBotSpawnerComponent_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffBotSpawnerComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotSpawnerComponent.StaffBotSpawnerComponent_C.ReceiveEndPlay");
		
		UStaffBotSpawnerComponent_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StaffBotSpawnerComponent.StaffBotSpawnerComponent_C.ExecuteUbergraph_StaffBotSpawnerComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStaffBotSpawnerComponent_C::ExecuteUbergraph_StaffBotSpawnerComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StaffBotSpawnerComponent.StaffBotSpawnerComponent_C.ExecuteUbergraph_StaffBotSpawnerComponent");
		
		UStaffBotSpawnerComponent_C_ExecuteUbergraph_StaffBotSpawnerComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaffBotSpawnerComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaffBotSpawnerComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StaffBotSpawnerComponent.StaffBotSpawnerComponent_C");
		return ptr;
	}

}


