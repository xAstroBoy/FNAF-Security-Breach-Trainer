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
	 * BlueprintGeneratedClass MessageCollectible.MessageCollectible_C
	 * Size -> 0x0032 (FullSize[0x02B4] - InheritedSize[0x0282])
	 */
	class AMessageCollectible_C : public ACollectible_C
	{
	public:
		unsigned char                                              UnknownData_08DV[0x6];                                   // 0x0282(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                 SpotLight;                                               // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_MazerGymBagC;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_MazerGymBagB;                                        // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_MazerGymBagA;                                        // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int                                                        Variant;                                                 // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType);
		void GetInstructionOverride(class FText* Instruction);
		void GetHUDInstruction(class FText* Instruction);
		void UserConstructionScript();
		void OnFailure_4B0F52EA45CC0AEF35D733B36267DE77(const class FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
		void OnSuccess_4B0F52EA45CC0AEF35D733B36267DE77(const class FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
		void OnFailure_5B0B2E1D480E298DA757F2B41ABB5A3B();
		void OnSuccess_5B0B2E1D480E298DA757F2B41ABB5A3B();
		void ReceiveBeginPlay();
		void OnBeginCollect();
		void OnCollect();
		void ExecuteUbergraph_MessageCollectible(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
