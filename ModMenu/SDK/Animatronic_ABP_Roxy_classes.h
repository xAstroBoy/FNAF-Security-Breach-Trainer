#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass Animatronic_ABP_Roxy.Animatronic_ABP_Roxy_C
	 * Size -> 0x000F (FullSize[0x8E18] - InheritedSize[0x8E09])
	 */
	class UAnimatronic_ABP_Roxy_C : public UAnimatronic_ABP_MASTER_C
	{
	public:
		unsigned char                                              UnknownData_R0VH[0x7];                                   // 0x8E09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x8E10(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void footstep();
		void BlueprintBeginPlay();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_R_Foot_Down();
		void AnimNotify_L_Foot_Down();
		void ExecuteUbergraph_Animatronic_ABP_Roxy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
