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
//		Name   -> Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.PlayerPickedUpLaserGun
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               PickedUp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALaserTag_Gun_Door_C::PlayerPickedUpLaserGun(bool PickedUp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.PlayerPickedUpLaserGun");

	ALaserTag_Gun_Door_C_PlayerPickedUpLaserGun_Params params {};
	params.PickedUp = PickedUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ALaserTag_Gun_Door_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.ReceiveBeginPlay");

	ALaserTag_Gun_Door_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALaserTag_Gun_Door_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.ReceiveTick");

	ALaserTag_Gun_Door_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.ExecuteUbergraph_LaserTag_Gun_Door
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALaserTag_Gun_Door_C::ExecuteUbergraph_LaserTag_Gun_Door(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LaserTag_Gun_Door.LaserTag_Gun_Door_C.ExecuteUbergraph_LaserTag_Gun_Door");

	ALaserTag_Gun_Door_C_ExecuteUbergraph_LaserTag_Gun_Door_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
