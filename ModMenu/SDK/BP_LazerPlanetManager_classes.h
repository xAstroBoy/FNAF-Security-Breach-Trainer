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

// BlueprintGeneratedClass BP_LazerPlanetManager.BP_LazerPlanetManager_C
// 0x0070 (FullSize[0x0298] - InheritedSize[0x0228])
class ABP_LazerPlanetManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Planet1[0x28];                                             // 0x0238(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Planet2[0x28];                                             // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	TArray<class UMaterialInterface*>                  PlanetMaterials;                                           // 0x0288(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_LazerPlanetManager.BP_LazerPlanetManager_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void SwitchColorForScenario();
	void ExecuteUbergraph_BP_LazerPlanetManager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
