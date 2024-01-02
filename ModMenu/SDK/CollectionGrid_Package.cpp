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
	 * 		Name   -> Function CollectionGrid.CollectionGrid_C.Player Pressed Left on First Column Selected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventoryItemButton_C*                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UCollectionGrid_C::PlayerPressedLeftonFirstColumnSelected(EUINavigation Navigation, class UInventoryItemButton_C* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectionGrid.CollectionGrid_C.Player Pressed Left on First Column Selected");
		
		UCollectionGrid_C_PlayerPressedLeftonFirstColumnSelected_Params params {};
		params.Navigation = Navigation;
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CollectionGrid.CollectionGrid_C.Focus Equipment Button
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UCollectionGrid_C::FocusEquipmentButton(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CollectionGrid.CollectionGrid_C.Focus Equipment Button");
		
		UCollectionGrid_C_FocusEquipmentButton_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CollectionGrid.CollectionGrid_C.IsFirstChildSelected
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CollectionGrid.CollectionGrid_C.SelectFirstItemInGrid
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CollectionGrid.CollectionGrid_C.ClearSelected
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CollectionGrid.CollectionGrid_C.PopulateInventoryGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_InventoryCollectionType                          EInventoryCollectionType                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInventoryItemCategory                             EInventoryItemCategory                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCollectionGrid_C::PopulateInventoryGrid(E_InventoryCollectionType EInventoryCollectionType, EInventoryItemCategory EInventoryItemCategory)
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CollectionGrid.CollectionGrid_C.Tick
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CollectionGrid.CollectionGrid_C.ExecuteUbergraph_CollectionGrid
	 * 		Flags  -> ()
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCollectionGrid_C.StaticClass
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


