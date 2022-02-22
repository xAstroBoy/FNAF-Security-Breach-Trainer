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
	 * BlueprintGeneratedClass BP_NoiseMakingTowerDaycareInteractible.BP_NoiseMakingTowerDaycareInteractible_C
	 * Size -> 0x00A0 (FullSize[0x0348] - InheritedSize[0x02A8])
	 */
	class ABP_NoiseMakingTowerDaycareInteractible_C : public ABP_NoiseMakingTowerBaseInteractible_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMissionStateCondition*                              Slide_Into_Fun_Completed_Condition_;                     // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMissionStateCondition*                              Slide_Into_Fun_Active_Condition_1;                       // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh2;                                           // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh1;                                           // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   Fall_Animation;                                          // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   Reset_Animation;                                         // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Count;                                                   // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X15Z[0x4];                                   // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Security_Office_Daycare[0x28];                           // 0x02F4(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LineSkipper[0x28];                                       // 0x0320(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void UpdateUIOnTick(bool* Output);
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
		void UserConstructionScript();
		void On_Triggered(class AActor* Other_Actor);
		void Reset();
		void Reset01Anim();
		void Reset02Anim();
		void Reset03Anim();
		void ExecuteUbergraph_BP_NoiseMakingTowerDaycareInteractible(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
