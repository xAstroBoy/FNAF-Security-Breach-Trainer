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
	 * 		Name   -> Function RandomItemSystem.RandomItemGroup.GetNumLocations
	 * 		Flags  -> ()
	 */
	int32_t ARandomItemGroup::GetNumLocations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomItemSystem.RandomItemGroup.GetNumLocations");
		
		ARandomItemGroup_GetNumLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RandomItemSystem.RandomItemGroup.GetItemDisplayInformation
	 * 		Flags  -> ()
	 */
	class FString ARandomItemGroup::GetItemDisplayInformation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomItemSystem.RandomItemGroup.GetItemDisplayInformation");
		
		ARandomItemGroup_GetItemDisplayInformation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARandomItemGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARandomItemGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RandomItemSystem.RandomItemGroup");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RandomItemSystem.ItemRandomizer.SetupItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARandomItemGroup*                            ItemGroup                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRandomStream                               RandomStream                                               (Parm, OutParm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AItemRandomizer::SetupItem(class ARandomItemGroup* ItemGroup, struct FRandomStream* RandomStream)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomItemSystem.ItemRandomizer.SetupItem");
		
		AItemRandomizer_SetupItem_Params params {};
		params.ItemGroup = ItemGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomStream != nullptr)
			*RandomStream = params.RandomStream;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RandomItemSystem.ItemRandomizer.Randomize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      RandomItemCls                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRandomStream                               RandomStream                                               (Parm, OutParm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AItemRandomizer::Randomize(class UClass* RandomItemCls, struct FRandomStream* RandomStream)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomItemSystem.ItemRandomizer.Randomize");
		
		AItemRandomizer_Randomize_Params params {};
		params.RandomItemCls = RandomItemCls;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomStream != nullptr)
			*RandomStream = params.RandomStream;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RandomItemSystem.ItemRandomizer.PickRandomLocationFromGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARandomItemGroup*                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRandomStream                               RandomStream                                               (Parm, OutParm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutLocationIndex                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AItemRandomizer::PickRandomLocationFromGroup(class ARandomItemGroup* Group, struct FRandomStream* RandomStream, int32_t* OutLocationIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomItemSystem.ItemRandomizer.PickRandomLocationFromGroup");
		
		AItemRandomizer_PickRandomLocationFromGroup_Params params {};
		params.Group = Group;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomStream != nullptr)
			*RandomStream = params.RandomStream;
		if (OutLocationIndex != nullptr)
			*OutLocationIndex = params.OutLocationIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AItemRandomizer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AItemRandomizer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RandomItemSystem.ItemRandomizer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RandomItemSystem.RandomItemGroupWithLocations.GetPossibleLocations
	 * 		Flags  -> ()
	 */
	TArray<struct FVector> ARandomItemGroupWithLocations::GetPossibleLocations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomItemSystem.RandomItemGroupWithLocations.GetPossibleLocations");
		
		ARandomItemGroupWithLocations_GetPossibleLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARandomItemGroupWithLocations.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARandomItemGroupWithLocations::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RandomItemSystem.RandomItemGroupWithLocations");
		return ptr;
	}

}


