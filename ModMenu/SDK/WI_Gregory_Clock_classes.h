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
	 * WidgetBlueprintGeneratedClass WI_Gregory_Clock.WI_Gregory_Clock_C
	 * Size -> 0x0029 (FullSize[0x0269] - InheritedSize[0x0240])
	 */
	class UWI_Gregory_Clock_C : public UWI_Empty_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Blink;                                                   // 0x0248(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              ClockBackground;                                         // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ClockText;                                               // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       PM;                                                      // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OJW1[0x3];                                   // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinuteTracker;                                           // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForcedClock;                                             // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Finished_A235BE3544718285A83055848878902F();
		void OnFailure_1FD9A5F14F3F0BA6F2C2AA9A1F9BB590();
		void OnSuccess_1FD9A5F14F3F0BA6F2C2AA9A1F9BB590();
		void OnFailure_9627632E42AF1548717DA3A133495CE7(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_9627632E42AF1548717DA3A133495CE7(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Showtime();
		void ShowTimeNoRunClock();
		void ExecuteUbergraph_WI_Gregory_Clock(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
