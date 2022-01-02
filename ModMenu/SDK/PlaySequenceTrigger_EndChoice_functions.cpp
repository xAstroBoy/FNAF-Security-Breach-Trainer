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
//		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.FireEscapeConditionCheck
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Has_Met_Conditions                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlaySequenceTrigger_EndChoice_C::FireEscapeConditionCheck(bool* Has_Met_Conditions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.FireEscapeConditionCheck");

	APlaySequenceTrigger_EndChoice_C_FireEscapeConditionCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Has_Met_Conditions != nullptr)
		*Has_Met_Conditions = params.Has_Met_Conditions;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnFailure_A1CEA053484729074DE2FC8418AB6D01
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APlaySequenceTrigger_EndChoice_C::OnFailure_A1CEA053484729074DE2FC8418AB6D01()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnFailure_A1CEA053484729074DE2FC8418AB6D01");

	APlaySequenceTrigger_EndChoice_C_OnFailure_A1CEA053484729074DE2FC8418AB6D01_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnSuccess_A1CEA053484729074DE2FC8418AB6D01
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APlaySequenceTrigger_EndChoice_C::OnSuccess_A1CEA053484729074DE2FC8418AB6D01()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnSuccess_A1CEA053484729074DE2FC8418AB6D01");

	APlaySequenceTrigger_EndChoice_C_OnSuccess_A1CEA053484729074DE2FC8418AB6D01_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnFailure_7F2250294461044CDA36CD9C7D00F0D9
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlaySequenceTrigger_EndChoice_C::OnFailure_7F2250294461044CDA36CD9C7D00F0D9(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnFailure_7F2250294461044CDA36CD9C7D00F0D9");

	APlaySequenceTrigger_EndChoice_C_OnFailure_7F2250294461044CDA36CD9C7D00F0D9_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnSuccess_7F2250294461044CDA36CD9C7D00F0D9
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlaySequenceTrigger_EndChoice_C::OnSuccess_7F2250294461044CDA36CD9C7D00F0D9(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnSuccess_7F2250294461044CDA36CD9C7D00F0D9");

	APlaySequenceTrigger_EndChoice_C_OnSuccess_7F2250294461044CDA36CD9C7D00F0D9_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnTriggered
//		Flags  -> (Event, Protected, BlueprintEvent)
void APlaySequenceTrigger_EndChoice_C::OnTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.OnTriggered");

	APlaySequenceTrigger_EndChoice_C_OnTriggered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Sequence Stop Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APlaySequenceTrigger_EndChoice_C::On_Sequence_Stop_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Sequence Stop Event");

	APlaySequenceTrigger_EndChoice_C_On_Sequence_Stop_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.Staying
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APlaySequenceTrigger_EndChoice_C::Staying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.Staying");

	APlaySequenceTrigger_EndChoice_C_Staying_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.Leaving
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APlaySequenceTrigger_EndChoice_C::Leaving()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.Leaving");

	APlaySequenceTrigger_EndChoice_C_Leaving_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.Vanny
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APlaySequenceTrigger_EndChoice_C::Vanny()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.Vanny");

	APlaySequenceTrigger_EndChoice_C_Vanny_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Vanny Intro Stop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APlaySequenceTrigger_EndChoice_C::On_Vanny_Intro_Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Vanny Intro Stop");

	APlaySequenceTrigger_EndChoice_C_On_Vanny_Intro_Stop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Teleport Finished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APlaySequenceTrigger_EndChoice_C::On_Teleport_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.On Teleport Finished");

	APlaySequenceTrigger_EndChoice_C_On_Teleport_Finished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.HandleIAmNotMeAchievementCheck
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APlaySequenceTrigger_EndChoice_C::HandleIAmNotMeAchievementCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.HandleIAmNotMeAchievementCheck");

	APlaySequenceTrigger_EndChoice_C_HandleIAmNotMeAchievementCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void APlaySequenceTrigger_EndChoice_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.ReceiveBeginPlay");

	APlaySequenceTrigger_EndChoice_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.ExecuteUbergraph_PlaySequenceTrigger_EndChoice
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlaySequenceTrigger_EndChoice_C::ExecuteUbergraph_PlaySequenceTrigger_EndChoice(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlaySequenceTrigger_EndChoice.PlaySequenceTrigger_EndChoice_C.ExecuteUbergraph_PlaySequenceTrigger_EndChoice");

	APlaySequenceTrigger_EndChoice_C_ExecuteUbergraph_PlaySequenceTrigger_EndChoice_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
