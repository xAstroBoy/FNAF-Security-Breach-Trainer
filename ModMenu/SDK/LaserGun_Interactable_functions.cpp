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
//		Name   -> Function LaserGun_Interactable.LaserGun_Interactable_C.PlayerHit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ULaserGun_Interactable_C::PlayerHit(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LaserGun_Interactable.LaserGun_Interactable_C.PlayerHit");

	ULaserGun_Interactable_C_PlayerHit_Params params {};
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LaserGun_Interactable.LaserGun_Interactable_C.GameExit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ULaserGun_Interactable_C::GameExit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LaserGun_Interactable.LaserGun_Interactable_C.GameExit");

	ULaserGun_Interactable_C_GameExit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LaserGun_Interactable.LaserGun_Interactable_C.GameEnd
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ULaserGun_Interactable_C::GameEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LaserGun_Interactable.LaserGun_Interactable_C.GameEnd");

	ULaserGun_Interactable_C_GameEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LaserGun_Interactable.LaserGun_Interactable_C.GameStart
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ULaserGun_Interactable_C::GameStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LaserGun_Interactable.LaserGun_Interactable_C.GameStart");

	ULaserGun_Interactable_C_GameStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LaserGun_Interactable.LaserGun_Interactable_C.ForceKill
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Animate_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULaserGun_Interactable_C::ForceKill(bool Animate_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LaserGun_Interactable.LaserGun_Interactable_C.ForceKill");

	ULaserGun_Interactable_C_ForceKill_Params params {};
	params.Animate_ = Animate_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function LaserGun_Interactable.LaserGun_Interactable_C.LaserHit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AEQ_LaserGun_C*                              Gun                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ULaserGun_Interactable_C::LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LaserGun_Interactable.LaserGun_Interactable_C.LaserHit");

	ULaserGun_Interactable_C_LaserHit_Params params {};
	params.Gun = Gun;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
