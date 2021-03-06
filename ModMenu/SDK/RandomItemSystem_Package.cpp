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
	 * 		Offset -> 0x00BC7170
	 * 		Name   -> Function RandomItemSystem.ItemRandomizer.SetupItem
	 * 		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomStream != nullptr)
			*RandomStream = params.RandomStream;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BC7090
	 * 		Name   -> Function RandomItemSystem.ItemRandomizer.Randomize
	 * 		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomStream != nullptr)
			*RandomStream = params.RandomStream;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BC6F70
	 * 		Name   -> Function RandomItemSystem.ItemRandomizer.PickRandomLocationFromGroup
	 * 		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARandomItemGroup*                            Group                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRandomStream                               RandomStream                                               (Parm, OutParm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AItemRandomizer::PickRandomLocationFromGroup(class ARandomItemGroup* Group, struct FRandomStream* RandomStream, struct FVector* OutLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomItemSystem.ItemRandomizer.PickRandomLocationFromGroup");
		
		AItemRandomizer_PickRandomLocationFromGroup_Params params {};
		params.Group = Group;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomStream != nullptr)
			*RandomStream = params.RandomStream;
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AItemRandomizer.StaticClass
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
	 * 		Offset -> 0x00BC73D0
	 * 		Name   -> Function RandomItemSystem.RandomItemGroup.GetItemDisplayInformation
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class FString ARandomItemGroup::GetItemDisplayInformation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomItemSystem.RandomItemGroup.GetItemDisplayInformation");
		
		ARandomItemGroup_GetItemDisplayInformation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ARandomItemGroup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARandomItemGroup::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RandomItemSystem.RandomItemGroup");
		return ptr;
	}

}


