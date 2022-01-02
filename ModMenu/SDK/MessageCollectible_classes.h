#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MessageCollectible.MessageCollectible_C
// 0x0033 (FullSize[0x02B5] - InheritedSize[0x0282])
class AMessageCollectible_C : public ACollectible_C
{
public:
	unsigned char                                      UnknownData_OXRV[0x6];                                     // 0x0282(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                 // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_MazerGymBagC;                                          // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_MazerGymBagB;                                          // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_MazerGymBagA;                                          // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                Variant;                                                   // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllCollected;                                              // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MessageCollectible.MessageCollectible_C");
		return ptr;
	}



	void GetInteractibleType(TEnumAsByte<InteractibleType_EInteractibleType>* Type, TEnumAsByte<InteractiblePressType_EInteractiblePressType>* PressType);
	void GetInstructionOverride(struct FText* Instruction);
	void GetHUDInstruction(struct FText* Instruction);
	void UserConstructionScript();
	void OnFailure_42500EBA4D77E287556809997344880F(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnSuccess_42500EBA4D77E287556809997344880F(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnFailure_8513F7C54554B204861175B2E7A5D696();
	void OnSuccess_8513F7C54554B204861175B2E7A5D696();
	void OnFailure_4B0F52EA45CC0AEF35D733B36267DE77(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnSuccess_4B0F52EA45CC0AEF35D733B36267DE77(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnFailure_5B0B2E1D480E298DA757F2B41ABB5A3B();
	void OnSuccess_5B0B2E1D480E298DA757F2B41ABB5A3B();
	void OnCollect();
	void ReceiveBeginPlay();
	void OnBeginCollect();
	void ExecuteUbergraph_MessageCollectible(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
