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

// BlueprintGeneratedClass BP_FNAF_Hologram.BP_FNAF_Hologram_C
// 0x0061 (FullSize[0x0399] - InheritedSize[0x0338])
class ABP_FNAF_Hologram_C : public ABP_MasterHologram_01_Audio_01A_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWorldStateHandlerComponent*                 StageShowStateHandler;                                     // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        PointLight_2;                                              // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      BaseMesh_Skeletal_2;                                       // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      BaseMesh_LightBeams_Skeletal_2;                            // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                               Animation_Sequence;                                        // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Looping_Animation;                                         // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KYNP[0x7];                                     // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               Skeletal_Mesh;                                             // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               Skeletal_Mesh_LightBeams;                                  // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSkeletalMaterial>                   LightBeam_PreSetMaterial;                                  // 0x0380(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               Randomize_the_timeline_of_the_animation_;                  // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MYFO[0x3];                                     // 0x0391(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LightBeam_Bounds_Scale;                                    // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_As_Skeletal_Mesh_;                                     // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FNAF_Hologram.BP_FNAF_Hologram_C");
		return ptr;
	}



	void SkeletalMesh_Setup_Function();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__BaseMesh_LightBeams_Skeletal_1_K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature();
	void BndEvt__BaseMesh_Skeletal_1_K2Node_ComponentBoundEvent_1_OnAnimInitialized__DelegateSignature();
	void Change();
	void BndEvt__WorldStateHandler_K2Node_ComponentBoundEvent_2_OnObjectStateChanged__DelegateSignature(class UWorldStateHandlerComponent* Handler, bool bState);
	void ExecuteUbergraph_BP_FNAF_Hologram(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
