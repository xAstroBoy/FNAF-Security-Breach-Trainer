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
//		Name   -> Function MessageCollectible.MessageCollectible_C.GetInteractibleType
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<InteractibleType_EInteractibleType>    Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<InteractiblePressType_EInteractiblePressType> PressType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMessageCollectible_C::GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.GetInteractibleType");

	AMessageCollectible_C_GetInteractibleType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
	if (PressType != nullptr)
		*PressType = params.PressType;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MessageCollectible.MessageCollectible_C.GetInstructionOverride
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void AMessageCollectible_C::GetInstructionOverride(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.GetInstructionOverride");

	AMessageCollectible_C_GetInstructionOverride_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MessageCollectible.MessageCollectible_C.GetHUDInstruction
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Instruction                                                (Parm, OutParm)
void AMessageCollectible_C::GetHUDInstruction(struct FText* Instruction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.GetHUDInstruction");

	AMessageCollectible_C_GetHUDInstruction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instruction != nullptr)
		*Instruction = params.Instruction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MessageCollectible.MessageCollectible_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AMessageCollectible_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.UserConstructionScript");

	AMessageCollectible_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MessageCollectible.MessageCollectible_C.OnFailure_42500EBA4D77E287556809997344880F
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMessageCollectible_C::OnFailure_42500EBA4D77E287556809997344880F(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.OnFailure_42500EBA4D77E287556809997344880F");

	AMessageCollectible_C_OnFailure_42500EBA4D77E287556809997344880F_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MessageCollectible.MessageCollectible_C.OnSuccess_42500EBA4D77E287556809997344880F
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMessageCollectible_C::OnSuccess_42500EBA4D77E287556809997344880F(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.OnSuccess_42500EBA4D77E287556809997344880F");

	AMessageCollectible_C_OnSuccess_42500EBA4D77E287556809997344880F_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MessageCollectible.MessageCollectible_C.OnFailure_8513F7C54554B204861175B2E7A5D696
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMessageCollectible_C::OnFailure_8513F7C54554B204861175B2E7A5D696()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.OnFailure_8513F7C54554B204861175B2E7A5D696");

	AMessageCollectible_C_OnFailure_8513F7C54554B204861175B2E7A5D696_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MessageCollectible.MessageCollectible_C.OnSuccess_8513F7C54554B204861175B2E7A5D696
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMessageCollectible_C::OnSuccess_8513F7C54554B204861175B2E7A5D696()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.OnSuccess_8513F7C54554B204861175B2E7A5D696");

	AMessageCollectible_C_OnSuccess_8513F7C54554B204861175B2E7A5D696_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MessageCollectible.MessageCollectible_C.OnFailure_4B0F52EA45CC0AEF35D733B36267DE77
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMessageCollectible_C::OnFailure_4B0F52EA45CC0AEF35D733B36267DE77(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.OnFailure_4B0F52EA45CC0AEF35D733B36267DE77");

	AMessageCollectible_C_OnFailure_4B0F52EA45CC0AEF35D733B36267DE77_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MessageCollectible.MessageCollectible_C.OnSuccess_4B0F52EA45CC0AEF35D733B36267DE77
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMessageCollectible_C::OnSuccess_4B0F52EA45CC0AEF35D733B36267DE77(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.OnSuccess_4B0F52EA45CC0AEF35D733B36267DE77");

	AMessageCollectible_C_OnSuccess_4B0F52EA45CC0AEF35D733B36267DE77_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MessageCollectible.MessageCollectible_C.OnFailure_5B0B2E1D480E298DA757F2B41ABB5A3B
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMessageCollectible_C::OnFailure_5B0B2E1D480E298DA757F2B41ABB5A3B()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.OnFailure_5B0B2E1D480E298DA757F2B41ABB5A3B");

	AMessageCollectible_C_OnFailure_5B0B2E1D480E298DA757F2B41ABB5A3B_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MessageCollectible.MessageCollectible_C.OnSuccess_5B0B2E1D480E298DA757F2B41ABB5A3B
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMessageCollectible_C::OnSuccess_5B0B2E1D480E298DA757F2B41ABB5A3B()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.OnSuccess_5B0B2E1D480E298DA757F2B41ABB5A3B");

	AMessageCollectible_C_OnSuccess_5B0B2E1D480E298DA757F2B41ABB5A3B_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MessageCollectible.MessageCollectible_C.OnCollect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMessageCollectible_C::OnCollect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.OnCollect");

	AMessageCollectible_C_OnCollect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MessageCollectible.MessageCollectible_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AMessageCollectible_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.ReceiveBeginPlay");

	AMessageCollectible_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MessageCollectible.MessageCollectible_C.OnBeginCollect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AMessageCollectible_C::OnBeginCollect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.OnBeginCollect");

	AMessageCollectible_C_OnBeginCollect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function MessageCollectible.MessageCollectible_C.ExecuteUbergraph_MessageCollectible
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMessageCollectible_C::ExecuteUbergraph_MessageCollectible(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MessageCollectible.MessageCollectible_C.ExecuteUbergraph_MessageCollectible");

	AMessageCollectible_C_ExecuteUbergraph_MessageCollectible_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
