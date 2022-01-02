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
//		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.OnEnd
//		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType>   EndType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_VannyBattle_C::OnEnd(TEnumAsByte<E_EndMiniGameType_E_EndMiniGameType> EndType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.OnEnd");

	AOGM_VannyBattle_C_OnEnd_Params params {};
	params.EndType = EndType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.On Start
//		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AOGM_VannyBattle_C::On_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.On Start");

	AOGM_VannyBattle_C_On_Start_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_C3E8CEE64F273648654604A1E4026F01
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_VannyBattle_C::OnFailure_C3E8CEE64F273648654604A1E4026F01()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_C3E8CEE64F273648654604A1E4026F01");

	AOGM_VannyBattle_C_OnFailure_C3E8CEE64F273648654604A1E4026F01_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_C3E8CEE64F273648654604A1E4026F01
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_VannyBattle_C::OnSuccess_C3E8CEE64F273648654604A1E4026F01()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_C3E8CEE64F273648654604A1E4026F01");

	AOGM_VannyBattle_C_OnSuccess_C3E8CEE64F273648654604A1E4026F01_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_D8EC7FD343756DEFCAD9FBBDE672C6F4
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_VannyBattle_C::OnFailure_D8EC7FD343756DEFCAD9FBBDE672C6F4(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_D8EC7FD343756DEFCAD9FBBDE672C6F4");

	AOGM_VannyBattle_C_OnFailure_D8EC7FD343756DEFCAD9FBBDE672C6F4_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_D8EC7FD343756DEFCAD9FBBDE672C6F4
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       WrittenAchievementName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WrittenProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WrittenUserTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_VannyBattle_C::OnSuccess_D8EC7FD343756DEFCAD9FBBDE672C6F4(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_D8EC7FD343756DEFCAD9FBBDE672C6F4");

	AOGM_VannyBattle_C_OnSuccess_D8EC7FD343756DEFCAD9FBBDE672C6F4_Params params {};
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.BndEvt__Drop Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AOGM_VannyBattle_C::BndEvt__Drop_Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.BndEvt__Drop Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	AOGM_VannyBattle_C_BndEvt__Drop_Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
//		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.Vanny Destroy
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_VannyBattle_C::Vanny_Destroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.Vanny Destroy");

	AOGM_VannyBattle_C_Vanny_Destroy_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.Vanny Redeem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AOGM_VannyBattle_C::Vanny_Redeem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.Vanny Redeem");

	AOGM_VannyBattle_C_Vanny_Redeem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function OGM_VannyBattle.OGM_VannyBattle_C.ExecuteUbergraph_OGM_VannyBattle
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOGM_VannyBattle_C::ExecuteUbergraph_OGM_VannyBattle(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OGM_VannyBattle.OGM_VannyBattle_C.ExecuteUbergraph_OGM_VannyBattle");

	AOGM_VannyBattle_C_ExecuteUbergraph_OGM_VannyBattle_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
