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
	 * AnimBlueprintGeneratedClass Staffbot_ABP_Security.Staffbot_ABP_Security_C
	 * Size -> 0x000E (FullSize[0x53D8] - InheritedSize[0x53CA])
	 */
	class UStaffbot_ABP_Security_C : public UStaffbot_ABP_C
	{
	public:
		unsigned char                                              UnknownData_0PUV[0x6];                                   // 0x53CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x53D0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintBeginPlay();
		void AimHead_Event(bool AimHead);
		void CanJumpscareEvent();
		void JumpscareEvent(bool CanJumpscare);
		void ExecuteUbergraph_Staffbot_ABP_Security(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
