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
	 * BlueprintGeneratedClass BP_FazerButton_Reset.BP_FazerButton_Reset_C
	 * Size -> 0x0042 (FullSize[0x0330] - InheritedSize[0x02EE])
	 */
	class ABP_FazerButton_Reset_C : public ABasicButton_C
	{
	public:
		unsigned char                                              UnknownData_YKH5[0x2];                                   // 0x02EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMissionStateCondition*                              MissionStateCondition;                                   // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MATFazerButton_EmissiveColor;                            // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Manager[0x28];                                           // 0x0308(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void GetInteractibleType(InteractibleType_EInteractibleType* Type, InteractiblePressType_EInteractiblePressType* PressType);
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
		void InteractIgnoresTrace(bool* IgnoreTrace);
		void UserConstructionScript();
		void ChangeColor(int32_t ChangeColor);
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void ExecuteUbergraph_BP_FazerButton_Reset(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
