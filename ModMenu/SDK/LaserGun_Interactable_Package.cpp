/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "LaserGun_Interactable_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserGun_Interactable.LaserGun_Interactable_C.PlayerHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ULaserGun_Interactable_C::PlayerHit(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserGun_Interactable.LaserGun_Interactable_C.PlayerHit");
		
		ULaserGun_Interactable_C_PlayerHit_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserGun_Interactable.LaserGun_Interactable_C.GameExit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULaserGun_Interactable_C::GameExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserGun_Interactable.LaserGun_Interactable_C.GameExit");
		
		ULaserGun_Interactable_C_GameExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserGun_Interactable.LaserGun_Interactable_C.GameEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULaserGun_Interactable_C::GameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserGun_Interactable.LaserGun_Interactable_C.GameEnd");
		
		ULaserGun_Interactable_C_GameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserGun_Interactable.LaserGun_Interactable_C.GameStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULaserGun_Interactable_C::GameStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserGun_Interactable.LaserGun_Interactable_C.GameStart");
		
		ULaserGun_Interactable_C_GameStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserGun_Interactable.LaserGun_Interactable_C.ForceKill
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Animate_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULaserGun_Interactable_C::ForceKill(bool Animate_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserGun_Interactable.LaserGun_Interactable_C.ForceKill");
		
		ULaserGun_Interactable_C_ForceKill_Params params {};
		params.Animate_ = Animate_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function LaserGun_Interactable.LaserGun_Interactable_C.LaserHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AEQ_LaserGun_C*                              Gun                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ULaserGun_Interactable_C::LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaserGun_Interactable.LaserGun_Interactable_C.LaserHit");
		
		ULaserGun_Interactable_C_LaserHit_Params params {};
		params.Gun = Gun;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULaserGun_Interactable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULaserGun_Interactable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LaserGun_Interactable.LaserGun_Interactable_C");
		return ptr;
	}

}


