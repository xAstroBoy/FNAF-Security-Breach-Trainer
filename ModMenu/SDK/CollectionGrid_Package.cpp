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
	 * 		Name   -> Function CollectionGrid.CollectionGrid_C.IsFirstChildSelected
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FirstChildSelected                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCollectionGrid_C::IsFirstChildSelected(bool* FirstChildSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectionGrid.CollectionGrid_C.IsFirstChildSelected");
		
		UCollectionGrid_C_IsFirstChildSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FirstChildSelected != nullptr)
			*FirstChildSelected = params.FirstChildSelected;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function CollectionGrid.CollectionGrid_C.SelectFirstItemInGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCollectionGrid_C::SelectFirstItemInGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectionGrid.CollectionGrid_C.SelectFirstItemInGrid");
		
		UCollectionGrid_C_SelectFirstItemInGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function CollectionGrid.CollectionGrid_C.ClearSelected
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UCollectionGrid_C::ClearSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectionGrid.CollectionGrid_C.ClearSelected");
		
		UCollectionGrid_C_ClearSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function CollectionGrid.CollectionGrid_C.PopulateInventoryGrid
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_InventoryCollectionType_E_InventoryCollectionType EInventoryCollectionType                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		fnaf9_EInventoryItemCategory                       EInventoryItemCategory                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCollectionGrid_C::PopulateInventoryGrid(E_InventoryCollectionType_E_InventoryCollectionType EInventoryCollectionType, fnaf9_EInventoryItemCategory EInventoryItemCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectionGrid.CollectionGrid_C.PopulateInventoryGrid");
		
		UCollectionGrid_C_PopulateInventoryGrid_Params params {};
		params.EInventoryCollectionType = EInventoryCollectionType;
		params.EInventoryItemCategory = EInventoryItemCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function CollectionGrid.CollectionGrid_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCollectionGrid_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectionGrid.CollectionGrid_C.Tick");
		
		UCollectionGrid_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function CollectionGrid.CollectionGrid_C.ExecuteUbergraph_CollectionGrid
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCollectionGrid_C::ExecuteUbergraph_CollectionGrid(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectionGrid.CollectionGrid_C.ExecuteUbergraph_CollectionGrid");
		
		UCollectionGrid_C_ExecuteUbergraph_CollectionGrid_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCollectionGrid_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollectionGrid_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CollectionGrid.CollectionGrid_C");
		return ptr;
	}

}


