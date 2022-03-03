/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.Show Bullet Hole On Right Side
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UImage*>                              BulletHoleArray                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UW_LaserOverLay_C::Show_Bullet_Hole_On_Right_Side(TArray<class UImage*>* BulletHoleArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.Show Bullet Hole On Right Side");
		
		UW_LaserOverLay_C_Show_Bullet_Hole_On_Right_Side_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BulletHoleArray != nullptr)
			*BulletHoleArray = params.BulletHoleArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.Show Bullet Hole On Left Side
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UImage*>                              BulletHoleArray                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UW_LaserOverLay_C::Show_Bullet_Hole_On_Left_Side(TArray<class UImage*>* BulletHoleArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.Show Bullet Hole On Left Side");
		
		UW_LaserOverLay_C_Show_Bullet_Hole_On_Left_Side_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BulletHoleArray != nullptr)
			*BulletHoleArray = params.BulletHoleArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.SetBulletHoleArrays
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::SetBulletHoleArrays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.SetBulletHoleArrays");
		
		UW_LaserOverLay_C_SetBulletHoleArrays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.SetUiBoxes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::SetUiBoxes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.SetUiBoxes");
		
		UW_LaserOverLay_C_SetUiBoxes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.TimeToClock
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UW_LaserOverLay_C::TimeToClock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.TimeToClock");
		
		UW_LaserOverLay_C_TimeToClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.Finished_565209FF4FA8A1F49BEDA5817DE676B6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::Finished_565209FF4FA8A1F49BEDA5817DE676B6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.Finished_565209FF4FA8A1F49BEDA5817DE676B6");
		
		UW_LaserOverLay_C_Finished_565209FF4FA8A1F49BEDA5817DE676B6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.Finished_E74EDFA44B5A2D70CC1C6982C6122863
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::Finished_E74EDFA44B5A2D70CC1C6982C6122863()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.Finished_E74EDFA44B5A2D70CC1C6982C6122863");
		
		UW_LaserOverLay_C_Finished_E74EDFA44B5A2D70CC1C6982C6122863_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.Finished_B5851330420BF607E3D4F8A157310C95
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::Finished_B5851330420BF607E3D4F8A157310C95()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.Finished_B5851330420BF607E3D4F8A157310C95");
		
		UW_LaserOverLay_C_Finished_B5851330420BF607E3D4F8A157310C95_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.PlayerHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UW_LaserOverLay_C::PlayerHit(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.PlayerHit");
		
		UW_LaserOverLay_C_PlayerHit_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.UpdateValues
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::UpdateValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.UpdateValues");
		
		UW_LaserOverLay_C_UpdateValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.Hit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::Hit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.Hit");
		
		UW_LaserOverLay_C_Hit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.DamageIndicator
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::DamageIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.DamageIndicator");
		
		UW_LaserOverLay_C_DamageIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.Construct");
		
		UW_LaserOverLay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.HideBullets_Left
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::HideBullets_Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.HideBullets_Left");
		
		UW_LaserOverLay_C_HideBullets_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LaserOverLay_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.PreConstruct");
		
		UW_LaserOverLay_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.HideBullets_Right
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::HideBullets_Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.HideBullets_Right");
		
		UW_LaserOverLay_C_HideBullets_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.GameEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::GameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.GameEnd");
		
		UW_LaserOverLay_C_GameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.ForceKill
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Animate_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_LaserOverLay_C::ForceKill(bool Animate_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.ForceKill");
		
		UW_LaserOverLay_C_ForceKill_Params params {};
		params.Animate_ = Animate_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.LaserHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AEQ_LaserGun_C*                              Gun                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UW_LaserOverLay_C::LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.LaserHit");
		
		UW_LaserOverLay_C_LaserHit_Params params {};
		params.Gun = Gun;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.GameExit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::GameExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.GameExit");
		
		UW_LaserOverLay_C_GameExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.CapturedTheFlag
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::CapturedTheFlag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.CapturedTheFlag");
		
		UW_LaserOverLay_C_CapturedTheFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.LostTheFlag
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::LostTheFlag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.LostTheFlag");
		
		UW_LaserOverLay_C_LostTheFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.DestroyThisHUD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LaserOverLay_C::DestroyThisHUD(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.DestroyThisHUD");
		
		UW_LaserOverLay_C_DestroyThisHUD_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.GameStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::GameStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.GameStart");
		
		UW_LaserOverLay_C_GameStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.TriggerYouWin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::TriggerYouWin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.TriggerYouWin");
		
		UW_LaserOverLay_C_TriggerYouWin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.TriggerGameOver
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UW_LaserOverLay_C::TriggerGameOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.TriggerGameOver");
		
		UW_LaserOverLay_C_TriggerGameOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE72B0
	 * 		Name   -> Function W_LaserOverLay.W_LaserOverLay_C.ExecuteUbergraph_W_LaserOverLay
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_LaserOverLay_C::ExecuteUbergraph_W_LaserOverLay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_LaserOverLay.W_LaserOverLay_C.ExecuteUbergraph_W_LaserOverLay");
		
		UW_LaserOverLay_C_ExecuteUbergraph_W_LaserOverLay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UW_LaserOverLay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_LaserOverLay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_LaserOverLay.W_LaserOverLay_C");
		return ptr;
	}

}


