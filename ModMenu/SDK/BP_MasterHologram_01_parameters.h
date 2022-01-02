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
// Parameters
//---------------------------------------------------------------------------

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.DMI_MeshMaterialArray_Function
struct ABP_MasterHologram_01_C_DMI_MeshMaterialArray_Function_Params
{
	class USkeletalMeshComponent*                      Mesh_LightBeams___Skeletal;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                              Mesh_LightBeams;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_as_Skeletal_;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.Stand_SetLightBeamOrigin_ToBone_Function
struct ABP_MasterHologram_01_C_Stand_SetLightBeamOrigin_ToBone_Function_Params
{
	class USkeletalMeshComponent*                      Hologram_LightBeam_Skeletal_Mesh;                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Hologram_LightBeam_Mesh;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_Skeletal_Mesh_;                                        // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.Stand_Destroy_Function
struct ABP_MasterHologram_01_C_Stand_Destroy_Function_Params
{
};

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.Stand_LookAt_Hologram_Function
struct ABP_MasterHologram_01_C_Stand_LookAt_Hologram_Function_Params
{
	class USkeletalMeshComponent*                      Hologram_Skeletal_Mesh;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Hologram_Mesh;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_Skeletal_Mesh_;                                        // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.DrawDistance_Function
struct ABP_MasterHologram_01_C_DrawDistance_Function_Params
{
	class USkeletalMeshComponent*                      Base_Mesh_LightBeams___Skeletal;                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                              Base_Mesh_LightBeams;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_as_Skeletal_;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.CustomDepth_Function
struct ABP_MasterHologram_01_C_CustomDepth_Function_Params
{
	class USkeletalMeshComponent*                      Skeletal_Mesh;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Static_Mesh;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_as_Skeletal_Bool;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.MeshScale_Function
struct ABP_MasterHologram_01_C_MeshScale_Function_Params
{
	class USkeletalMeshComponent*                      Skeletal_Mesh;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Skeletal_Mesh_LightBeams;                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                              Mesh;                                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                              Mesh_LightBeams;                                           // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_Skeletal_;                                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.LightBeam_Component_Off
struct ABP_MasterHologram_01_C_LightBeam_Component_Off_Params
{
	class USkeletalMeshComponent*                      Base_Mesh___Skeletal;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Base_Mesh_LightBeams___Skeletal;                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                              Base_Mesh_;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                              Base_Mesh_LightBeams;                                      // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>              Skeletal_Mesh_Component_Array;                             // 0x0020(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UMeshComponent*>                      Mesh_Component_Array;                                      // 0x0030(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.LightBeam_Destroy_Option
struct ABP_MasterHologram_01_C_LightBeam_Destroy_Option_Params
{
	class USkeletalMeshComponent*                      LightBeam_Skeletal;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        LightBeam_Static;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_as_Skeletal_;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.PointLight_Hologram
struct ABP_MasterHologram_01_C_PointLight_Hologram_Params
{
	class UPointLightComponent*                        Point_Light;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.Rotation_Hologram
struct ABP_MasterHologram_01_C_Rotation_Hologram_Params
{
	TArray<class USkeletalMeshComponent*>              Skeletal_Mesh_Array;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UMeshComponent*>                      Base_Mesh;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               Skeletal_;                                                 // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.DMI_Hologram_Parameters
struct ABP_MasterHologram_01_C_DMI_Hologram_Parameters_Params
{
	class USkeletalMeshComponent*                      Base_Mesh___Skeletal;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Base_Mesh_LightBeams___Skeletal;                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_as_Skeletal_;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMeshComponent*                              Base_Mesh;                                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                              Base_Mesh_LightBeams;                                      // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.3dWidget_Translation
struct ABP_MasterHologram_01_C__3dWidget_Translation_Params
{
	class USkeletalMeshComponent*                      Base_Mesh___Skeletal;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Base_Mesh_LightBeams___Skeletal;                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                              Base_Mesh;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                              Base_Mesh_LightBeams;                                      // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_as_Skeletal_;                                          // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.ReceiveBeginPlay
struct ABP_MasterHologram_01_C_ReceiveBeginPlay_Params
{
};

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.ReceiveActorBeginOverlap
struct ABP_MasterHologram_01_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.ReceiveTick
struct ABP_MasterHologram_01_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.BndEvt__Audio_Component_1_K2Node_ComponentBoundEvent_6_OnAudioFinished__DelegateSignature
struct ABP_MasterHologram_01_C_BndEvt__Audio_Component_1_K2Node_ComponentBoundEvent_6_OnAudioFinished__DelegateSignature_Params
{
};

// Function BP_MasterHologram_01.BP_MasterHologram_01_C.ExecuteUbergraph_BP_MasterHologram_01
struct ABP_MasterHologram_01_C_ExecuteUbergraph_BP_MasterHologram_01_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
