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
//		Name   -> Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.GetPossibleSplinePaths
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		TArray<class ASplinePathway_C*>                    PossiblePaths                                              (Parm, OutParm, HasGetValueTypeHash)
void AStaffBotSecurityPatrol_C::GetPossibleSplinePaths(TArray<class ASplinePathway_C*>* PossiblePaths)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.GetPossibleSplinePaths");

	AStaffBotSecurityPatrol_C_GetPossibleSplinePaths_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PossiblePaths != nullptr)
		*PossiblePaths = params.PossiblePaths;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.GetSplineFollowerContext
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSplineFollowerContext                      SplineFollowerContext                                      (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
void AStaffBotSecurityPatrol_C::GetSplineFollowerContext(struct FSplineFollowerContext* SplineFollowerContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.GetSplineFollowerContext");

	AStaffBotSecurityPatrol_C_GetSplineFollowerContext_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SplineFollowerContext != nullptr)
		*SplineFollowerContext = params.SplineFollowerContext;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.DoorEntryNotAllowed
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UDoorComponent*                              DoorComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AStaffBotSecurityPatrol_C::DoorEntryNotAllowed(class UDoorComponent* DoorComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.DoorEntryNotAllowed");

	AStaffBotSecurityPatrol_C_DoorEntryNotAllowed_Params params {};
	params.DoorComponent = DoorComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.SetSplineFollowerContext
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSplineFollowerContext                      SplineFollowerContext                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
void AStaffBotSecurityPatrol_C::SetSplineFollowerContext(const struct FSplineFollowerContext& SplineFollowerContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.SetSplineFollowerContext");

	AStaffBotSecurityPatrol_C_SetSplineFollowerContext_Params params {};
	params.SplineFollowerContext = SplineFollowerContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AStaffBotSecurityPatrol_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.ReceiveBeginPlay");

	AStaffBotSecurityPatrol_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.ExecuteUbergraph_StaffBotSecurityPatrol
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStaffBotSecurityPatrol_C::ExecuteUbergraph_StaffBotSecurityPatrol(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StaffBotSecurityPatrol.StaffBotSecurityPatrol_C.ExecuteUbergraph_StaffBotSecurityPatrol");

	AStaffBotSecurityPatrol_C_ExecuteUbergraph_StaffBotSecurityPatrol_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
