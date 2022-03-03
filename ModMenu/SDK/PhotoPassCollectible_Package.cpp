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
	 * 		Name   -> Function PhotoPassCollectible.PhotoPassCollectible_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APhotoPassCollectible_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoPassCollectible.PhotoPassCollectible_C.ReceiveBeginPlay");
		
		APhotoPassCollectible_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function PhotoPassCollectible.PhotoPassCollectible_C.On Item Collected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFInventoryTableStruct                   InventoryItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void APhotoPassCollectible_C::On_Item_Collected(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoPassCollectible.PhotoPassCollectible_C.On Item Collected");
		
		APhotoPassCollectible_C_On_Item_Collected_Params params {};
		params.ItemName = ItemName;
		params.InventoryItemInfo = InventoryItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function PhotoPassCollectible.PhotoPassCollectible_C.On Item Removed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFInventoryTableStruct                   InventoryItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void APhotoPassCollectible_C::On_Item_Removed(const class FName& ItemName, const struct FFNAFInventoryTableStruct& InventoryItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoPassCollectible.PhotoPassCollectible_C.On Item Removed");
		
		APhotoPassCollectible_C_On_Item_Removed_Params params {};
		params.ItemName = ItemName;
		params.InventoryItemInfo = InventoryItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function PhotoPassCollectible.PhotoPassCollectible_C.ExecuteUbergraph_PhotoPassCollectible
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APhotoPassCollectible_C::ExecuteUbergraph_PhotoPassCollectible(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PhotoPassCollectible.PhotoPassCollectible_C.ExecuteUbergraph_PhotoPassCollectible");
		
		APhotoPassCollectible_C_ExecuteUbergraph_PhotoPassCollectible_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APhotoPassCollectible_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APhotoPassCollectible_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PhotoPassCollectible.PhotoPassCollectible_C");
		return ptr;
	}

}


