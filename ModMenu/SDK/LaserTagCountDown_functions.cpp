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
//		Name   -> Function LaserTagCountDown.LaserTagCountDown_C.CastToLaserTagHud
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULaserTagHUD_C*                              AsLaser_Tag_HUD                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALaserTagCountDown_C::CastToLaserTagHud(class ULaserTagHUD_C** AsLaser_Tag_HUD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LaserTagCountDown.LaserTagCountDown_C.CastToLaserTagHud");

	ALaserTagCountDown_C_CastToLaserTagHud_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsLaser_Tag_HUD != nullptr)
		*AsLaser_Tag_HUD = params.AsLaser_Tag_HUD;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LaserTagCountDown.LaserTagCountDown_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ALaserTagCountDown_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LaserTagCountDown.LaserTagCountDown_C.ReceiveBeginPlay");

	ALaserTagCountDown_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LaserTagCountDown.LaserTagCountDown_C.Start Count down
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALaserTagCountDown_C::Start_Count_down()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LaserTagCountDown.LaserTagCountDown_C.Start Count down");

	ALaserTagCountDown_C_Start_Count_down_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LaserTagCountDown.LaserTagCountDown_C.Start Game Session Timer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ALaserTagCountDown_C::Start_Game_Session_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LaserTagCountDown.LaserTagCountDown_C.Start Game Session Timer");

	ALaserTagCountDown_C_Start_Game_Session_Timer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LaserTagCountDown.LaserTagCountDown_C.ExecuteUbergraph_LaserTagCountDown
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALaserTagCountDown_C::ExecuteUbergraph_LaserTagCountDown(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LaserTagCountDown.LaserTagCountDown_C.ExecuteUbergraph_LaserTagCountDown");

	ALaserTagCountDown_C_ExecuteUbergraph_LaserTagCountDown_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
