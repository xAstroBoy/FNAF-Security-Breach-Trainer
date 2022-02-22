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
	 * BlueprintGeneratedClass PossessStaffbotButton.PossessStaffbotButton_C
	 * Size -> 0x0012 (FullSize[0x0300] - InheritedSize[0x02EE])
	 */
	class APossessStaffbotButton_C : public ABasicButton_C
	{
	public:
		unsigned char                                              UnknownData_BXDK[0x2];                                   // 0x02EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class APlayerControlledStaffBot_C*                         Staffbot;                                                // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void ExecuteUbergraph_PossessStaffbotButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
