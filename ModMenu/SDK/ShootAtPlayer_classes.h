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

// BlueprintGeneratedClass ShootAtPlayer.ShootAtPlayer_C
// 0x0060 (FullSize[0x0108] - InheritedSize[0x00A8])
class UShootAtPlayer_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Accurcy;                                                   // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A6YB[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      LastKnownKey;                                              // 0x00B8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ShootSkey;                                                 // 0x00E0(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ShootAtPlayer.ShootAtPlayer_C");
		return ptr;
	}



	void OnNotifyEnd_022294D44C175E3582D1A1B99586A98E(const struct FName& NotifyName);
	void OnNotifyBegin_022294D44C175E3582D1A1B99586A98E(const struct FName& NotifyName);
	void OnInterrupted_022294D44C175E3582D1A1B99586A98E(const struct FName& NotifyName);
	void OnBlendOut_022294D44C175E3582D1A1B99586A98E(const struct FName& NotifyName);
	void OnCompleted_022294D44C175E3582D1A1B99586A98E(const struct FName& NotifyName);
	void LaserHit(class AEQ_LaserGun_C* Gun, const struct FHitResult& HitResult);
	void ForceKill(bool Animate_);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void PlayerHit(const struct FHitResult& Hit);
	void GameExit();
	void GameEnd();
	void GameStart();
	void ExecuteUbergraph_ShootAtPlayer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
