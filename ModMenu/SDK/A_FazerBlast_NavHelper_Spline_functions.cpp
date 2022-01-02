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
//		Name   -> Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.GetSplineSampleCount
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int AA_FazerBlast_NavHelper_Spline_C::GetSplineSampleCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.GetSplineSampleCount");

	AA_FazerBlast_NavHelper_Spline_C_GetSplineSampleCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.DrawDebug
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AA_FazerBlast_NavHelper_Spline_C::DrawDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.DrawDebug");

	AA_FazerBlast_NavHelper_Spline_C_DrawDebug_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.PositionBoxes
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AA_FazerBlast_NavHelper_Spline_C::PositionBoxes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.PositionBoxes");

	AA_FazerBlast_NavHelper_Spline_C_PositionBoxes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.GenerateOverlaps
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AA_FazerBlast_NavHelper_Spline_C::GenerateOverlaps()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.GenerateOverlaps");

	AA_FazerBlast_NavHelper_Spline_C_GenerateOverlaps_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.OnOverlapped
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         I_OverlappedComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     I_OtherActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               I_IsDestination                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AA_FazerBlast_NavHelper_Spline_C::OnOverlapped(class UPrimitiveComponent* I_OverlappedComponent, class UObject* I_OtherActor, bool I_IsDestination)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.OnOverlapped");

	AA_FazerBlast_NavHelper_Spline_C_OnOverlapped_Params params {};
	params.I_OverlappedComponent = I_OverlappedComponent;
	params.I_OtherActor = I_OtherActor;
	params.I_IsDestination = I_IsDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AA_FazerBlast_NavHelper_Spline_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.UserConstructionScript");

	AA_FazerBlast_NavHelper_Spline_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AA_FazerBlast_NavHelper_Spline_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.ReceiveBeginPlay");

	AA_FazerBlast_NavHelper_Spline_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.OnSplineOverlapped
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AA_FazerBlast_NavHelper_Spline_C::OnSplineOverlapped(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.OnSplineOverlapped");

	AA_FazerBlast_NavHelper_Spline_C_OnSplineOverlapped_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.OnBoxOverlapped
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AA_FazerBlast_NavHelper_Spline_C::OnBoxOverlapped(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.OnBoxOverlapped");

	AA_FazerBlast_NavHelper_Spline_C_OnBoxOverlapped_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.ExecuteUbergraph_A_FazerBlast_NavHelper_Spline
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AA_FazerBlast_NavHelper_Spline_C::ExecuteUbergraph_A_FazerBlast_NavHelper_Spline(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.ExecuteUbergraph_A_FazerBlast_NavHelper_Spline");

	AA_FazerBlast_NavHelper_Spline_C_ExecuteUbergraph_A_FazerBlast_NavHelper_Spline_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
