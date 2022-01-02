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

// AnimBlueprintGeneratedClass Animatronic_ABP_Roxy.Animatronic_ABP_Roxy_C
// 0x0008 (FullSize[0x8DF0] - InheritedSize[0x8DE8])
class UAnimatronic_ABP_Roxy_C : public UAnimatronic_ABP_MASTER_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x8DE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass Animatronic_ABP_Roxy.Animatronic_ABP_Roxy_C");
		return ptr;
	}



	void footstep();
	void BlueprintBeginPlay();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_R_Foot_Down();
	void AnimNotify_L_Foot_Down();
	void ExecuteUbergraph_Animatronic_ABP_Roxy(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
