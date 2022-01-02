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
//		Name   -> Function Staffbot_Fazerblast_ABP.Staffbot_Fazerblast_ABP_C.HandleStun
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Stunned                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStaffbot_Fazerblast_ABP_C::HandleStun(bool Stunned)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_Fazerblast_ABP.Staffbot_Fazerblast_ABP_C.HandleStun");

	UStaffbot_Fazerblast_ABP_C_HandleStun_Params params {};
	params.Stunned = Stunned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_Fazerblast_ABP.Staffbot_Fazerblast_ABP_C.BlueprintUpdateAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaffbot_Fazerblast_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_Fazerblast_ABP.Staffbot_Fazerblast_ABP_C.BlueprintUpdateAnimation");

	UStaffbot_Fazerblast_ABP_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_Fazerblast_ABP.Staffbot_Fazerblast_ABP_C.BlueprintBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UStaffbot_Fazerblast_ABP_C::BlueprintBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_Fazerblast_ABP.Staffbot_Fazerblast_ABP_C.BlueprintBeginPlay");

	UStaffbot_Fazerblast_ABP_C_BlueprintBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_Fazerblast_ABP.Staffbot_Fazerblast_ABP_C.FazerblastDestroy_Event
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UStaffbot_Fazerblast_ABP_C::FazerblastDestroy_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_Fazerblast_ABP.Staffbot_Fazerblast_ABP_C.FazerblastDestroy_Event");

	UStaffbot_Fazerblast_ABP_C_FazerblastDestroy_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function Staffbot_Fazerblast_ABP.Staffbot_Fazerblast_ABP_C.ExecuteUbergraph_Staffbot_Fazerblast_ABP
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStaffbot_Fazerblast_ABP_C::ExecuteUbergraph_Staffbot_Fazerblast_ABP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Staffbot_Fazerblast_ABP.Staffbot_Fazerblast_ABP_C.ExecuteUbergraph_Staffbot_Fazerblast_ABP");

	UStaffbot_Fazerblast_ABP_C_ExecuteUbergraph_Staffbot_Fazerblast_ABP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
