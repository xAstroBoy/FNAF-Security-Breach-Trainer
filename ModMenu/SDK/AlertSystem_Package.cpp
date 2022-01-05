/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "AlertSystem_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AlertSystem.AlertSystem_C.Send Alert
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Alert                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<fnaf9_EFNAFAISpawnType>                     TypesToAlert                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		int                                                NumberToAlert                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAlertSystem_C::Send_Alert(const class FName& Alert, const struct FVector& Location, TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int NumberToAlert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AlertSystem.AlertSystem_C.Send Alert");
		
		AAlertSystem_C_Send_Alert_Params params {};
		params.Alert = Alert;
		params.Location = Location;
		params.TypesToAlert = TypesToAlert;
		params.NumberToAlert = NumberToAlert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AlertSystem.AlertSystem_C.ExecuteUbergraph_AlertSystem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAlertSystem_C::ExecuteUbergraph_AlertSystem(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AlertSystem.AlertSystem_C.ExecuteUbergraph_AlertSystem");
		
		AAlertSystem_C_ExecuteUbergraph_AlertSystem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AlertSystem.AlertSystem_C.OnAlert__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Alert                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAlertSystem_C::OnAlert__DelegateSignature(const class FName& Alert, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AlertSystem.AlertSystem_C.OnAlert__DelegateSignature");
		
		AAlertSystem_C_OnAlert__DelegateSignature_Params params {};
		params.Alert = Alert;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAlertSystem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAlertSystem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AlertSystem.AlertSystem_C");
		return ptr;
	}

}


