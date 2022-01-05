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
	 * AnimBlueprintGeneratedClass Staffbot_Fazerblast_ABP.Staffbot_Fazerblast_ABP_C
	 * Size -> 0x0008 (FullSize[0x2ED8] - InheritedSize[0x2ED0])
	 */
	class UStaffbot_Fazerblast_ABP_C : public UStaffbot_ABP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2ED0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void HandleStun(bool Stunned);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintBeginPlay();
		void FazerblastDestroy_Event();
		void ExecuteUbergraph_Staffbot_Fazerblast_ABP(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
