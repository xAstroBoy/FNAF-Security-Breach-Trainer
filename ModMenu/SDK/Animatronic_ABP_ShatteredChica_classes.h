#pragma once

/**
 * Name: FNAFSB
 * Version: 1
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
	 * AnimBlueprintGeneratedClass Animatronic_ABP_ShatteredChica.Animatronic_ABP_ShatteredChica_C
	 * Size -> 0x0008 (FullSize[0xA390] - InheritedSize[0xA388])
	 */
	class UAnimatronic_ABP_ShatteredChica_C : public UAnimatronic_ABP_MASTER_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0xA388(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void footstep();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintBeginPlay();
		void AnimNotify_R_Foot_Down();
		void AnimNotify_L_Foot_Down();
		void ExecuteUbergraph_Animatronic_ABP_ShatteredChica(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
