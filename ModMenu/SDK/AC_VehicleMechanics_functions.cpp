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
//		Name   -> Function AC_VehicleMechanics.AC_VehicleMechanics_C.CATAirFix
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Wheels                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAC_VehicleMechanics_C::CATAirFix(int Wheels)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AC_VehicleMechanics.AC_VehicleMechanics_C.CATAirFix");

	UAC_VehicleMechanics_C_CATAirFix_Params params {};
	params.Wheels = Wheels;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AC_VehicleMechanics.AC_VehicleMechanics_C.ApplyMotorResistence
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Throddle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UAC_VehicleMechanics_C::ApplyMotorResistence(float Throddle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AC_VehicleMechanics.AC_VehicleMechanics_C.ApplyMotorResistence");

	UAC_VehicleMechanics_C_ApplyMotorResistence_Params params {};
	params.Throddle = Throddle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AC_VehicleMechanics.AC_VehicleMechanics_C.ApplyAirResistance
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Friction                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAC_VehicleMechanics_C::ApplyAirResistance(float* Friction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AC_VehicleMechanics.AC_VehicleMechanics_C.ApplyAirResistance");

	UAC_VehicleMechanics_C_ApplyAirResistance_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Friction != nullptr)
		*Friction = params.Friction;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AC_VehicleMechanics.AC_VehicleMechanics_C.ApplyLateralFriction
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     NormalPlane                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Sterring                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WheelsDown                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAC_VehicleMechanics_C::ApplyLateralFriction(const struct FVector& NormalPlane, float Sterring, int WheelsDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AC_VehicleMechanics.AC_VehicleMechanics_C.ApplyLateralFriction");

	UAC_VehicleMechanics_C_ApplyLateralFriction_Params params {};
	params.NormalPlane = NormalPlane;
	params.Sterring = Sterring;
	params.WheelsDown = WheelsDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AC_VehicleMechanics.AC_VehicleMechanics_C.DoThroddle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Throddle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     FloorNormal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WheelsDown                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAC_VehicleMechanics_C::DoThroddle(float Throddle, const struct FVector& FloorNormal, int WheelsDown)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AC_VehicleMechanics.AC_VehicleMechanics_C.DoThroddle");

	UAC_VehicleMechanics_C_DoThroddle_Params params {};
	params.Throddle = Throddle;
	params.FloorNormal = FloorNormal;
	params.WheelsDown = WheelsDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AC_VehicleMechanics.AC_VehicleMechanics_C.DoSterring
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Sterring                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     FloorNormal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAC_VehicleMechanics_C::DoSterring(float Sterring, const struct FVector& FloorNormal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AC_VehicleMechanics.AC_VehicleMechanics_C.DoSterring");

	UAC_VehicleMechanics_C_DoSterring_Params params {};
	params.Sterring = Sterring;
	params.FloorNormal = FloorNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AC_VehicleMechanics.AC_VehicleMechanics_C.JustLanded 
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UAC_VehicleMechanics_C::JustLanded_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AC_VehicleMechanics.AC_VehicleMechanics_C.JustLanded ");

	UAC_VehicleMechanics_C_JustLanded__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AC_VehicleMechanics.AC_VehicleMechanics_C.DoTick
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UAC_VehicleMechanics_C::DoTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AC_VehicleMechanics.AC_VehicleMechanics_C.DoTick");

	UAC_VehicleMechanics_C_DoTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AC_VehicleMechanics.AC_VehicleMechanics_C.AddThroddleInput
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAC_VehicleMechanics_C::AddThroddleInput(float Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AC_VehicleMechanics.AC_VehicleMechanics_C.AddThroddleInput");

	UAC_VehicleMechanics_C_AddThroddleInput_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AC_VehicleMechanics.AC_VehicleMechanics_C.AddSterringInput
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAC_VehicleMechanics_C::AddSterringInput(float Axis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AC_VehicleMechanics.AC_VehicleMechanics_C.AddSterringInput");

	UAC_VehicleMechanics_C_AddSterringInput_Params params {};
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AC_VehicleMechanics.AC_VehicleMechanics_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UAC_VehicleMechanics_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AC_VehicleMechanics.AC_VehicleMechanics_C.ReceiveBeginPlay");

	UAC_VehicleMechanics_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AC_VehicleMechanics.AC_VehicleMechanics_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAC_VehicleMechanics_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AC_VehicleMechanics.AC_VehicleMechanics_C.ReceiveTick");

	UAC_VehicleMechanics_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AC_VehicleMechanics.AC_VehicleMechanics_C.ExecuteUbergraph_AC_VehicleMechanics
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAC_VehicleMechanics_C::ExecuteUbergraph_AC_VehicleMechanics(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AC_VehicleMechanics.AC_VehicleMechanics_C.ExecuteUbergraph_AC_VehicleMechanics");

	UAC_VehicleMechanics_C_ExecuteUbergraph_AC_VehicleMechanics_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
