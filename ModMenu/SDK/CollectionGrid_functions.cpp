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
//		Name   -> Function CollectionGrid.CollectionGrid_C.IsFirstChildSelected
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               FirstChildSelected                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCollectionGrid_C::IsFirstChildSelected(bool* FirstChildSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CollectionGrid.CollectionGrid_C.IsFirstChildSelected");

	UCollectionGrid_C_IsFirstChildSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FirstChildSelected != nullptr)
		*FirstChildSelected = params.FirstChildSelected;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CollectionGrid.CollectionGrid_C.SelectFirstItemInGrid
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UCollectionGrid_C::SelectFirstItemInGrid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CollectionGrid.CollectionGrid_C.SelectFirstItemInGrid");

	UCollectionGrid_C_SelectFirstItemInGrid_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CollectionGrid.CollectionGrid_C.ClearSelected
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UCollectionGrid_C::ClearSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CollectionGrid.CollectionGrid_C.ClearSelected");

	UCollectionGrid_C_ClearSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CollectionGrid.CollectionGrid_C.PopulateInventoryGrid
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_InventoryCollectionType_E_InventoryCollectionType> EInventoryCollectionType                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		fnaf9_EInventoryItemCategory                       EInventoryItemCategory                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCollectionGrid_C::PopulateInventoryGrid(TEnumAsByte<E_InventoryCollectionType_E_InventoryCollectionType> EInventoryCollectionType, fnaf9_EInventoryItemCategory EInventoryItemCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CollectionGrid.CollectionGrid_C.PopulateInventoryGrid");

	UCollectionGrid_C_PopulateInventoryGrid_Params params {};
	params.EInventoryCollectionType = EInventoryCollectionType;
	params.EInventoryItemCategory = EInventoryItemCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CollectionGrid.CollectionGrid_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCollectionGrid_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CollectionGrid.CollectionGrid_C.Tick");

	UCollectionGrid_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function CollectionGrid.CollectionGrid_C.ExecuteUbergraph_CollectionGrid
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCollectionGrid_C::ExecuteUbergraph_CollectionGrid(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CollectionGrid.CollectionGrid_C.ExecuteUbergraph_CollectionGrid");

	UCollectionGrid_C_ExecuteUbergraph_CollectionGrid_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
