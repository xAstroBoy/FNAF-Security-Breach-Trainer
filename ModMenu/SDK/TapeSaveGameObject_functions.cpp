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
//		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.IncrementTapesPlayed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTapeSaveGameObject_C::IncrementTapesPlayed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TapeSaveGameObject.TapeSaveGameObject_C.IncrementTapesPlayed");

	UTapeSaveGameObject_C_IncrementTapesPlayed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.GetNoOfTapesDone
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NoOfTapesPlayed                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTapeSaveGameObject_C::GetNoOfTapesDone(int* NoOfTapesPlayed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TapeSaveGameObject.TapeSaveGameObject_C.GetNoOfTapesDone");

	UTapeSaveGameObject_C_GetNoOfTapesDone_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NoOfTapesPlayed != nullptr)
		*NoOfTapesPlayed = params.NoOfTapesPlayed;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.GetInventoryTapes
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FName>                               InInventoryTapes                                           (Parm, OutParm, HasGetValueTypeHash)
void UTapeSaveGameObject_C::GetInventoryTapes(TArray<struct FName>* InInventoryTapes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TapeSaveGameObject.TapeSaveGameObject_C.GetInventoryTapes");

	UTapeSaveGameObject_C_GetInventoryTapes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InInventoryTapes != nullptr)
		*InInventoryTapes = params.InInventoryTapes;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.ClearAll
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTapeSaveGameObject_C::ClearAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TapeSaveGameObject.TapeSaveGameObject_C.ClearAll");

	UTapeSaveGameObject_C_ClearAll_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.GetTapesDonePlaying
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FName>                               TapesDonePlaying                                           (Parm, OutParm, HasGetValueTypeHash)
void UTapeSaveGameObject_C::GetTapesDonePlaying(TArray<struct FName>* TapesDonePlaying)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TapeSaveGameObject.TapeSaveGameObject_C.GetTapesDonePlaying");

	UTapeSaveGameObject_C_GetTapesDonePlaying_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TapesDonePlaying != nullptr)
		*TapesDonePlaying = params.TapesDonePlaying;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.AddTapeDonePlaying
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       TapeDonePlaying                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTapeSaveGameObject_C::AddTapeDonePlaying(const struct FName& TapeDonePlaying)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TapeSaveGameObject.TapeSaveGameObject_C.AddTapeDonePlaying");

	UTapeSaveGameObject_C_AddTapeDonePlaying_Params params {};
	params.TapeDonePlaying = TapeDonePlaying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.SetCollectedTapesData
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       InventoryItemName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               HasBeenCollected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTapeSaveGameObject_C::SetCollectedTapesData(const struct FName& InventoryItemName, bool HasBeenCollected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TapeSaveGameObject.TapeSaveGameObject_C.SetCollectedTapesData");

	UTapeSaveGameObject_C_SetCollectedTapesData_Params params {};
	params.InventoryItemName = InventoryItemName;
	params.HasBeenCollected = HasBeenCollected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function TapeSaveGameObject.TapeSaveGameObject_C.GetCollectedTapesData
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       InventoryItemName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               HasBeenCollected_                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTapeSaveGameObject_C::GetCollectedTapesData(const struct FName& InventoryItemName, bool* HasBeenCollected_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TapeSaveGameObject.TapeSaveGameObject_C.GetCollectedTapesData");

	UTapeSaveGameObject_C_GetCollectedTapesData_Params params {};
	params.InventoryItemName = InventoryItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasBeenCollected_ != nullptr)
		*HasBeenCollected_ = params.HasBeenCollected_;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
