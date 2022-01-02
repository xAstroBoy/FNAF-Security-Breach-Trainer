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
//		Name   -> Function DJMusicHandler.DJMusicHandler_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ADJMusicHandler_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DJMusicHandler.DJMusicHandler_C.UserConstructionScript");

	ADJMusicHandler_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DJMusicHandler.DJMusicHandler_C.Set Beat Enabled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                BeatIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADJMusicHandler_C::Set_Beat_Enabled(bool enable, int BeatIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DJMusicHandler.DJMusicHandler_C.Set Beat Enabled");

	ADJMusicHandler_C_Set_Beat_Enabled_Params params {};
	params.enable = enable;
	params.BeatIndex = BeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DJMusicHandler.DJMusicHandler_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ADJMusicHandler_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DJMusicHandler.DJMusicHandler_C.ReceiveBeginPlay");

	ADJMusicHandler_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DJMusicHandler.DJMusicHandler_C.Disable All Beats
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ADJMusicHandler_C::Disable_All_Beats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DJMusicHandler.DJMusicHandler_C.Disable All Beats");

	ADJMusicHandler_C_Disable_All_Beats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DJMusicHandler.DJMusicHandler_C.ExecuteUbergraph_DJMusicHandler
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADJMusicHandler_C::ExecuteUbergraph_DJMusicHandler(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DJMusicHandler.DJMusicHandler_C.ExecuteUbergraph_DJMusicHandler");

	ADJMusicHandler_C_ExecuteUbergraph_DJMusicHandler_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
