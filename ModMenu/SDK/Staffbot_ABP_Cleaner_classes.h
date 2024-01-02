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
	 * AnimBlueprintGeneratedClass Staffbot_ABP_Cleaner.Staffbot_ABP_Cleaner_C
	 * Size -> 0x001E (FullSize[0x53E8] - InheritedSize[0x53CA])
	 */
	class UStaffbot_ABP_Cleaner_C : public UStaffbot_ABP_C
	{
	public:
		unsigned char                                              UnknownData_NE72[0x6];                                   // 0x53CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x53D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                PlayerDistance;                                          // 0x53D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                PlayerVisible;                                           // 0x53E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintBeginPlay();
		void isStunnedEvent(bool IsStunned);
		void WarningEvent(bool IsWarning, int32_t WarningCount);
		void AlertEvent(bool isAlerting);
		void ExecuteUbergraph_Staffbot_ABP_Cleaner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
