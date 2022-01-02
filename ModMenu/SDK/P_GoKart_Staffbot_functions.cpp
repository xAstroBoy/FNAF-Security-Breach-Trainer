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
//		Name   -> Function P_GoKart_Staffbot.P_GoKart_Staffbot_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AP_GoKart_Staffbot_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart_Staffbot.P_GoKart_Staffbot_C.ReceiveBeginPlay");

	AP_GoKart_Staffbot_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart_Staffbot.P_GoKart_Staffbot_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_GoKart_Staffbot_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart_Staffbot.P_GoKart_Staffbot_C.ReceiveTick");

	AP_GoKart_Staffbot_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function P_GoKart_Staffbot.P_GoKart_Staffbot_C.ExecuteUbergraph_P_GoKart_Staffbot
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AP_GoKart_Staffbot_C::ExecuteUbergraph_P_GoKart_Staffbot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function P_GoKart_Staffbot.P_GoKart_Staffbot_C.ExecuteUbergraph_P_GoKart_Staffbot");

	AP_GoKart_Staffbot_C_ExecuteUbergraph_P_GoKart_Staffbot_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
