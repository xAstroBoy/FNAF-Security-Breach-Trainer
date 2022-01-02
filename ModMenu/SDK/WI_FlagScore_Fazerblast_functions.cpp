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
//		Name   -> Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.UpdateScore
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                UpdateScore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_FlagScore_Fazerblast_C::UpdateScore(int UpdateScore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.UpdateScore");

	UWI_FlagScore_Fazerblast_C_UpdateScore_Params params {};
	params.UpdateScore = UpdateScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.LaserHit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AEQ_LaserGun_C*                              Gun                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void UWI_FlagScore_Fazerblast_C::LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.LaserHit");

	UWI_FlagScore_Fazerblast_C_LaserHit_Params params {};
	params.Gun = Gun;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.ForceKill
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Animate_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWI_FlagScore_Fazerblast_C::ForceKill(bool Animate_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.ForceKill");

	UWI_FlagScore_Fazerblast_C_ForceKill_Params params {};
	params.Animate_ = Animate_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.GameExit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWI_FlagScore_Fazerblast_C::GameExit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.GameExit");

	UWI_FlagScore_Fazerblast_C_GameExit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.PlayerHit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void UWI_FlagScore_Fazerblast_C::PlayerHit(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.PlayerHit");

	UWI_FlagScore_Fazerblast_C_PlayerHit_Params params {};
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWI_FlagScore_Fazerblast_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.Construct");

	UWI_FlagScore_Fazerblast_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.FlagCaptured
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWI_FlagScore_Fazerblast_C::FlagCaptured()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.FlagCaptured");

	UWI_FlagScore_Fazerblast_C_FlagCaptured_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.GameEnd
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWI_FlagScore_Fazerblast_C::GameEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.GameEnd");

	UWI_FlagScore_Fazerblast_C_GameEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.GameStart
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWI_FlagScore_Fazerblast_C::GameStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.GameStart");

	UWI_FlagScore_Fazerblast_C_GameStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.ExecuteUbergraph_WI_FlagScore_Fazerblast
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWI_FlagScore_Fazerblast_C::ExecuteUbergraph_WI_FlagScore_Fazerblast(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.ExecuteUbergraph_WI_FlagScore_Fazerblast");

	UWI_FlagScore_Fazerblast_C_ExecuteUbergraph_WI_FlagScore_Fazerblast_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.GameWon__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWI_FlagScore_Fazerblast_C::GameWon__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WI_FlagScore_Fazerblast.WI_FlagScore_Fazerblast_C.GameWon__DelegateSignature");

	UWI_FlagScore_Fazerblast_C_GameWon__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
