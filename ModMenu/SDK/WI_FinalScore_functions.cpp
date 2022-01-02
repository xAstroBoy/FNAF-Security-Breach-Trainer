﻿// Name: FNAF Security Breach, Version: 1

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
//		Name   -> Function WI_FinalScore.WI_FinalScore_C.LaserHit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AEQ_LaserGun_C*                              Gun                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void UWI_FinalScore_C::LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FinalScore.WI_FinalScore_C.LaserHit");

	UWI_FinalScore_C_LaserHit_Params params {};
	params.Gun = Gun;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FinalScore.WI_FinalScore_C.ForceKill
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Animate_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWI_FinalScore_C::ForceKill(bool Animate_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FinalScore.WI_FinalScore_C.ForceKill");

	UWI_FinalScore_C_ForceKill_Params params {};
	params.Animate_ = Animate_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FinalScore.WI_FinalScore_C.GameStart
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWI_FinalScore_C::GameStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FinalScore.WI_FinalScore_C.GameStart");

	UWI_FinalScore_C_GameStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FinalScore.WI_FinalScore_C.GameEnd
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWI_FinalScore_C::GameEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FinalScore.WI_FinalScore_C.GameEnd");

	UWI_FinalScore_C_GameEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FinalScore.WI_FinalScore_C.GameExit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWI_FinalScore_C::GameExit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FinalScore.WI_FinalScore_C.GameExit");

	UWI_FinalScore_C_GameExit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FinalScore.WI_FinalScore_C.PlayerHit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void UWI_FinalScore_C::PlayerHit(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FinalScore.WI_FinalScore_C.PlayerHit");

	UWI_FinalScore_C_PlayerHit_Params params {};
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FinalScore.WI_FinalScore_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWI_FinalScore_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FinalScore.WI_FinalScore_C.Construct");

	UWI_FinalScore_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FinalScore.WI_FinalScore_C.ExecuteUbergraph_WI_FinalScore
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_FinalScore_C::ExecuteUbergraph_WI_FinalScore(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FinalScore.WI_FinalScore_C.ExecuteUbergraph_WI_FinalScore");

	UWI_FinalScore_C_ExecuteUbergraph_WI_FinalScore_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif