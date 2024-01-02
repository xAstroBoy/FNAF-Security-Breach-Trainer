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
	 * BlueprintGeneratedClass Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C
	 * Size -> 0x001E (FullSize[0x0350] - InheritedSize[0x0332])
	 */
	class ASlide_AtriumtoKitchen_Vent_C : public ASlideSystem_C
	{
	public:
		unsigned char                                              UnknownData_3UPW[0x6];                                   // 0x0332(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0338(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMissionStateHandler_C*                              FlashlightMissionComplete;                               // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ALMMSplineFollower_C*                                SplineFollower;                                          // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FinishedSliding();
		void OnSlideEntered();
		void ExecuteUbergraph_Slide_AtriumtoKitchen_Vent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
