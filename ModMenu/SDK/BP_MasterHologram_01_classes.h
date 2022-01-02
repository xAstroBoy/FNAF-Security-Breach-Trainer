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

// BlueprintGeneratedClass BP_MasterHologram_01.BP_MasterHologram_01_C
// 0x00C4 (FullSize[0x02EC] - InheritedSize[0x0228])
class ABP_MasterHologram_01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPoseableMeshComponent*                      HologramStand_PoseableMesh_01;                             // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>                  Mesh_LightBeam_Materials;                                  // 0x0240(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FColor                                      Hologram_Base_Emissive_Tint_1;                             // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                      Hologram_Base_Emissive_Tint_2;                             // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_LightBeam_;                                            // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HX9V[0x3];                                     // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Hologram_Rotation_Speed;                                   // 0x025C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Hologram_Emissive_Intensity;                               // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Hologram_Emissive_Intensity___Lightbeams;                  // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Hologram_Emissive_Cloud_Intensity;                         // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WPO_Intensity;                                             // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EComponentMobility>             Light_Mobility;                                            // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D0MX[0x3];                                     // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Intensity;                                                 // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Attenuation_Radius;                                        // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_Light_;                                                // 0x0284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Use_Emissive_Tint_1_for_Light_Color_;                      // 0x0285(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4IY8[0x2];                                     // 0x0286(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Hologram_Position;                                         // 0x0288(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DSB8[0x4];                                     // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPointLightComponent*                        Point_Light;                                               // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Mesh_Scale;                                                // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Scale_Vector;                                              // 0x02A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Put_Light_at_BP_Origin_;                                   // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Use_Backface_Cull_;                                        // 0x02B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HM6U[0x2];                                     // 0x02B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Depth_Bias;                                                // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LightBeam_Max_Draw_Distance;                               // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Light_Offset_Vertical;                                     // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LightBeam_Material_Fade_Distance;                          // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_Hologram_Stand_;                                       // 0x02C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BRE6[0x3];                                     // 0x02C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               Stand_Skeletal_Mesh;                                       // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Eye_Bone_Location_Master;                                  // 0x02D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Put_Hologram_Stand_on_Wall_;                               // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MJFB[0x3];                                     // 0x02DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    Hologram_Stand_Rotation;                                   // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterHologram_01.BP_MasterHologram_01_C");
		return ptr;
	}



	void DMI_MeshMaterialArray_Function(class USkeletalMeshComponent* Mesh_LightBeams___Skeletal, class UMeshComponent* Mesh_LightBeams, bool Use_as_Skeletal_);
	void Stand_SetLightBeamOrigin_ToBone_Function(class USkeletalMeshComponent* Hologram_LightBeam_Skeletal_Mesh, class UStaticMeshComponent* Hologram_LightBeam_Mesh, bool Use_Skeletal_Mesh_);
	void Stand_Destroy_Function();
	void Stand_LookAt_Hologram_Function(class USkeletalMeshComponent* Hologram_Skeletal_Mesh, class UStaticMeshComponent* Hologram_Mesh, bool Use_Skeletal_Mesh_);
	void DrawDistance_Function(class USkeletalMeshComponent* Base_Mesh_LightBeams___Skeletal, class UMeshComponent* Base_Mesh_LightBeams, bool Use_as_Skeletal_);
	void CustomDepth_Function(class USkeletalMeshComponent* Skeletal_Mesh, class UStaticMeshComponent* Static_Mesh, bool Use_as_Skeletal_Bool);
	void MeshScale_Function(class USkeletalMeshComponent* Skeletal_Mesh, class USkeletalMeshComponent* Skeletal_Mesh_LightBeams, class UMeshComponent* Mesh, class UMeshComponent* Mesh_LightBeams, bool Use_Skeletal_);
	void LightBeam_Component_Off(class USkeletalMeshComponent* Base_Mesh___Skeletal, class USkeletalMeshComponent* Base_Mesh_LightBeams___Skeletal, class UMeshComponent* Base_Mesh_, class UMeshComponent* Base_Mesh_LightBeams, TArray<class USkeletalMeshComponent*>* Skeletal_Mesh_Component_Array, TArray<class UMeshComponent*>* Mesh_Component_Array);
	void LightBeam_Destroy_Option(class USkeletalMeshComponent* LightBeam_Skeletal, class UStaticMeshComponent* LightBeam_Static, bool Use_as_Skeletal_);
	void PointLight_Hologram(class UPointLightComponent* Point_Light);
	void Rotation_Hologram(TArray<class USkeletalMeshComponent*>* Skeletal_Mesh_Array, TArray<class UMeshComponent*>* Base_Mesh, bool Skeletal_);
	void DMI_Hologram_Parameters(class USkeletalMeshComponent* Base_Mesh___Skeletal, class USkeletalMeshComponent* Base_Mesh_LightBeams___Skeletal, bool Use_as_Skeletal_, class UMeshComponent* Base_Mesh, class UMeshComponent* Base_Mesh_LightBeams);
	void _3dWidget_Translation(class USkeletalMeshComponent* Base_Mesh___Skeletal, class USkeletalMeshComponent* Base_Mesh_LightBeams___Skeletal, class UMeshComponent* Base_Mesh, class UMeshComponent* Base_Mesh_LightBeams, bool Use_as_Skeletal_);
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Audio_Component_1_K2Node_ComponentBoundEvent_6_OnAudioFinished__DelegateSignature();
	void ExecuteUbergraph_BP_MasterHologram_01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
