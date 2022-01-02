#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WI_Timer.WI_Timer_C
// 0x0024 (FullSize[0x0264] - InheritedSize[0x0240])
class UWI_Timer_C : public UWI_Empty_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            MoveOutOfFrame;                                            // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            MoveIntoFrame;                                             // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  TimerText;                                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              Timer;                                                     // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_Timer.WI_Timer_C");
		return ptr;
	}



	struct FText Update_Timer_Display();
	void LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult);
	void ForceKill(bool Animate_);
	void GameStart();
	void GameExit();
	void PlayerHit(const struct FHitResult& Hit);
	void UpdateTime(float Time);
	void GameEnd();
	void ShowTimer();
	void HideTimer();
	void ExecuteUbergraph_WI_Timer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
