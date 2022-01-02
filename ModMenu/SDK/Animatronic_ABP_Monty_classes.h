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

// AnimBlueprintGeneratedClass Animatronic_ABP_Monty.Animatronic_ABP_Monty_C
// 0x0008 (FullSize[0x8DF0] - InheritedSize[0x8DE8])
class UAnimatronic_ABP_Monty_C : public UAnimatronic_ABP_MASTER_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x8DE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Animatronic_ABP_Monty.Animatronic_ABP_Monty_C");
		return ptr;
	}



	void footstep();
	void OnNotifyEnd_4374FFD04F83864AB8D8DC944BB33B0D(const struct FName& NotifyName);
	void OnNotifyBegin_4374FFD04F83864AB8D8DC944BB33B0D(const struct FName& NotifyName);
	void OnInterrupted_4374FFD04F83864AB8D8DC944BB33B0D(const struct FName& NotifyName);
	void OnBlendOut_4374FFD04F83864AB8D8DC944BB33B0D(const struct FName& NotifyName);
	void OnCompleted_4374FFD04F83864AB8D8DC944BB33B0D(const struct FName& NotifyName);
	void OnNotifyEnd_29D5167C4A6E4CEC4A933997F1F8CA34(const struct FName& NotifyName);
	void OnNotifyBegin_29D5167C4A6E4CEC4A933997F1F8CA34(const struct FName& NotifyName);
	void OnInterrupted_29D5167C4A6E4CEC4A933997F1F8CA34(const struct FName& NotifyName);
	void OnBlendOut_29D5167C4A6E4CEC4A933997F1F8CA34(const struct FName& NotifyName);
	void OnCompleted_29D5167C4A6E4CEC4A933997F1F8CA34(const struct FName& NotifyName);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void AnimNotify_R_Foot_Down();
	void AnimNotify_L_Foot_Down();
	void AnimNotify_MontyLand();
	void SetJiggle(float JiggleScaleTarget, float Shoulderpad_DynamicAlpha, float TailDynamicAlpha);
	void JumpEvent(bool CanJump);
	void LandEvent();
	void ExecuteUbergraph_Animatronic_ABP_Monty(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
