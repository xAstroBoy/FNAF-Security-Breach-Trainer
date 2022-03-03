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
	 * 		Name   -> Function UpdateMissionOnCollect.UpdateMissionOnCollect_C.On Item Collected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFInventoryTableStruct                   InventoryItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUpdateMissionOnCollect_C::On_Item_Collected(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpdateMissionOnCollect.UpdateMissionOnCollect_C.On Item Collected");
		
		UUpdateMissionOnCollect_C_On_Item_Collected_Params params {};
		params.ItemName = ItemName;
		params.InventoryItemInfo = InventoryItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function UpdateMissionOnCollect.UpdateMissionOnCollect_C.OnMessageAdded_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        MessageName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFMessageTableStruct                     MessageInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUpdateMissionOnCollect_C::OnMessageAdded_Event_1(const class FName& MessageName, const struct FFNAFMessageTableStruct& MessageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpdateMissionOnCollect.UpdateMissionOnCollect_C.OnMessageAdded_Event_1");
		
		UUpdateMissionOnCollect_C_OnMessageAdded_Event_1_Params params {};
		params.MessageName = MessageName;
		params.MessageInfo = MessageInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function UpdateMissionOnCollect.UpdateMissionOnCollect_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUpdateMissionOnCollect_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpdateMissionOnCollect.UpdateMissionOnCollect_C.ReceiveBeginPlay");
		
		UUpdateMissionOnCollect_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function UpdateMissionOnCollect.UpdateMissionOnCollect_C.ExecuteUbergraph_UpdateMissionOnCollect
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUpdateMissionOnCollect_C::ExecuteUbergraph_UpdateMissionOnCollect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UpdateMissionOnCollect.UpdateMissionOnCollect_C.ExecuteUbergraph_UpdateMissionOnCollect");
		
		UUpdateMissionOnCollect_C_ExecuteUbergraph_UpdateMissionOnCollect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUpdateMissionOnCollect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpdateMissionOnCollect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UpdateMissionOnCollect.UpdateMissionOnCollect_C");
		return ptr;
	}

}


