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
	 * AnimBlueprintGeneratedClass Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C
	 * Size -> 0x0018 (FullSize[0x2EE8] - InheritedSize[0x2ED0])
	 */
	class UStaffbot_ABP_Cleaner_C : public UStaffbot_ABP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2ED0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                PlayerDistance;                                          // 0x2ED8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                PlayerVisible;                                           // 0x2EE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintBeginPlay();
		void isStunnedEvent(bool IsStunned);
		void WarningEvent(bool IsWarning, int32_t WarningCount);
		void AlertEvent(bool IsAlerting);
		void ExecuteUbergraph_Staffbot_ABP_Cleaner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
