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
	 * BlueprintGeneratedClass Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C
	 * Size -> 0x001C (FullSize[0x02A8] - InheritedSize[0x028C])
	 */
	class ASlide_AtriumtoKitchen_Vent_C : public ASlideSystem_C
	{
	public:
		unsigned char                                              UnknownData_K5TL[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMissionStateHandler_C*                              FlashlightMissionComplete;                               // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ALMMSplineFollower_C*                                SplineFollower;                                          // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetInstructionOverride(class FText* Instruction);
		void On_Slide_Entered();
		void FinishedSliding();
		void ExecuteUbergraph_Slide_AtriumtoKitchen_Vent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
