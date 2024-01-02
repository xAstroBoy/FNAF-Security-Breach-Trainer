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
	 * BlueprintGeneratedClass MessageCollectible.MessageCollectible_C
	 * Size -> 0x0033 (FullSize[0x02EC] - InheritedSize[0x02B9])
	 */
	class AMessageCollectible_C : public ACollectible_C
	{
	public:
		unsigned char                                              UnknownData_G6GG[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                 SpotLight;                                               // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_MazerGymBagC;                                        // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_MazerGymBagB;                                        // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_MazerGymBagA;                                        // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Variant;                                                 // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetInteractibleType(EInteractibleType* Type, EInteractiblePressType* PressType);
		void GetInstructionOverride(class FText* Instruction);
		void GetHUDInstruction(class FText* Instruction);
		void UserConstructionScript();
		void OnFailure_4B0F52EA45CC0AEF35D733B36267DE77(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnSuccess_4B0F52EA45CC0AEF35D733B36267DE77(const class FName& WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
		void OnFailure_5B0B2E1D480E298DA757F2B41ABB5A3B();
		void OnSuccess_5B0B2E1D480E298DA757F2B41ABB5A3B();
		void ReceiveBeginPlay();
		void OnBeginCollect();
		void OnCollect();
		void ExecuteUbergraph_MessageCollectible(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
