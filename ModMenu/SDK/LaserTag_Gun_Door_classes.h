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
	 * BlueprintGeneratedClass LaserTag_Gun_Door.LaserTag_Gun_Door_C
	 * Size -> 0x000D (FullSize[0x0288] - InheritedSize[0x027B])
	 */
	class ALaserTag_Gun_Door_C : public ALaserTag_Door_C
	{
	public:
		unsigned char                                              UnknownData_N377[0x5];                                   // 0x027B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void PlayerPickedUpLaserGun(bool PickedUp);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_LaserTag_Gun_Door(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
