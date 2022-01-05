/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "ShootAtPlayer_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShootAtPlayer.ShootAtPlayer_C.OnNotifyEnd_022294D44C175E3582D1A1B99586A98E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShootAtPlayer_C::OnNotifyEnd_022294D44C175E3582D1A1B99586A98E(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShootAtPlayer.ShootAtPlayer_C.OnNotifyEnd_022294D44C175E3582D1A1B99586A98E");
		
		UShootAtPlayer_C_OnNotifyEnd_022294D44C175E3582D1A1B99586A98E_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShootAtPlayer.ShootAtPlayer_C.OnNotifyBegin_022294D44C175E3582D1A1B99586A98E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShootAtPlayer_C::OnNotifyBegin_022294D44C175E3582D1A1B99586A98E(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShootAtPlayer.ShootAtPlayer_C.OnNotifyBegin_022294D44C175E3582D1A1B99586A98E");
		
		UShootAtPlayer_C_OnNotifyBegin_022294D44C175E3582D1A1B99586A98E_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShootAtPlayer.ShootAtPlayer_C.OnInterrupted_022294D44C175E3582D1A1B99586A98E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShootAtPlayer_C::OnInterrupted_022294D44C175E3582D1A1B99586A98E(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShootAtPlayer.ShootAtPlayer_C.OnInterrupted_022294D44C175E3582D1A1B99586A98E");
		
		UShootAtPlayer_C_OnInterrupted_022294D44C175E3582D1A1B99586A98E_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShootAtPlayer.ShootAtPlayer_C.OnBlendOut_022294D44C175E3582D1A1B99586A98E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShootAtPlayer_C::OnBlendOut_022294D44C175E3582D1A1B99586A98E(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShootAtPlayer.ShootAtPlayer_C.OnBlendOut_022294D44C175E3582D1A1B99586A98E");
		
		UShootAtPlayer_C_OnBlendOut_022294D44C175E3582D1A1B99586A98E_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShootAtPlayer.ShootAtPlayer_C.OnCompleted_022294D44C175E3582D1A1B99586A98E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShootAtPlayer_C::OnCompleted_022294D44C175E3582D1A1B99586A98E(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShootAtPlayer.ShootAtPlayer_C.OnCompleted_022294D44C175E3582D1A1B99586A98E");
		
		UShootAtPlayer_C_OnCompleted_022294D44C175E3582D1A1B99586A98E_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShootAtPlayer.ShootAtPlayer_C.LaserHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AEQ_LaserGun_C*                              Gun                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UShootAtPlayer_C::LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShootAtPlayer.ShootAtPlayer_C.LaserHit");
		
		UShootAtPlayer_C_LaserHit_Params params {};
		params.Gun = Gun;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShootAtPlayer.ShootAtPlayer_C.ForceKill
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Animate_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShootAtPlayer_C::ForceKill(bool Animate_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShootAtPlayer.ShootAtPlayer_C.ForceKill");
		
		UShootAtPlayer_C_ForceKill_Params params {};
		params.Animate_ = Animate_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShootAtPlayer.ShootAtPlayer_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShootAtPlayer_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShootAtPlayer.ShootAtPlayer_C.ReceiveExecuteAI");
		
		UShootAtPlayer_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShootAtPlayer.ShootAtPlayer_C.PlayerHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UShootAtPlayer_C::PlayerHit(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShootAtPlayer.ShootAtPlayer_C.PlayerHit");
		
		UShootAtPlayer_C_PlayerHit_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShootAtPlayer.ShootAtPlayer_C.GameExit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UShootAtPlayer_C::GameExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShootAtPlayer.ShootAtPlayer_C.GameExit");
		
		UShootAtPlayer_C_GameExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShootAtPlayer.ShootAtPlayer_C.GameEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UShootAtPlayer_C::GameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShootAtPlayer.ShootAtPlayer_C.GameEnd");
		
		UShootAtPlayer_C_GameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShootAtPlayer.ShootAtPlayer_C.GameStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UShootAtPlayer_C::GameStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShootAtPlayer.ShootAtPlayer_C.GameStart");
		
		UShootAtPlayer_C_GameStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function ShootAtPlayer.ShootAtPlayer_C.ExecuteUbergraph_ShootAtPlayer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShootAtPlayer_C::ExecuteUbergraph_ShootAtPlayer(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShootAtPlayer.ShootAtPlayer_C.ExecuteUbergraph_ShootAtPlayer");
		
		UShootAtPlayer_C_ExecuteUbergraph_ShootAtPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UShootAtPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShootAtPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShootAtPlayer.ShootAtPlayer_C");
		return ptr;
	}

}


