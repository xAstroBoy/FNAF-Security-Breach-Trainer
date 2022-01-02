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
//		Name   -> Function AlertSystem.AlertSystem_C.Send Alert
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Alert                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		int                                                NumberToAlert                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAlertSystem_C::Send_Alert(const struct FName& Alert, const struct FVector& Location, TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int NumberToAlert)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlertSystem.AlertSystem_C.Send Alert");

	AAlertSystem_C_Send_Alert_Params params {};
	params.Alert = Alert;
	params.Location = Location;
	params.TypesToAlert = TypesToAlert;
	params.NumberToAlert = NumberToAlert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AlertSystem.AlertSystem_C.ExecuteUbergraph_AlertSystem
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAlertSystem_C::ExecuteUbergraph_AlertSystem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlertSystem.AlertSystem_C.ExecuteUbergraph_AlertSystem");

	AAlertSystem_C_ExecuteUbergraph_AlertSystem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function AlertSystem.AlertSystem_C.OnAlert__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Alert                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAlertSystem_C::OnAlert__DelegateSignature(const struct FName& Alert, const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlertSystem.AlertSystem_C.OnAlert__DelegateSignature");

	AAlertSystem_C_OnAlert__DelegateSignature_Params params {};
	params.Alert = Alert;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
