// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.DMI_MeshMaterialArray_Function
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USkeletalMeshComponent*                      Mesh_LightBeams___Skeletal                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMeshComponent*                              Mesh_LightBeams                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Use_as_Skeletal_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterHologram_01_C::DMI_MeshMaterialArray_Function(class USkeletalMeshComponent* Mesh_LightBeams___Skeletal, class UMeshComponent* Mesh_LightBeams, bool Use_as_Skeletal_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.DMI_MeshMaterialArray_Function");

	ABP_MasterHologram_01_C_DMI_MeshMaterialArray_Function_Params params {};
	params.Mesh_LightBeams___Skeletal = Mesh_LightBeams___Skeletal;
	params.Mesh_LightBeams = Mesh_LightBeams;
	params.Use_as_Skeletal_ = Use_as_Skeletal_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.Stand_SetLightBeamOrigin_ToBone_Function
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USkeletalMeshComponent*                      Hologram_LightBeam_Skeletal_Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UStaticMeshComponent*                        Hologram_LightBeam_Mesh                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Use_Skeletal_Mesh_                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterHologram_01_C::Stand_SetLightBeamOrigin_ToBone_Function(class USkeletalMeshComponent* Hologram_LightBeam_Skeletal_Mesh, class UStaticMeshComponent* Hologram_LightBeam_Mesh, bool Use_Skeletal_Mesh_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.Stand_SetLightBeamOrigin_ToBone_Function");

	ABP_MasterHologram_01_C_Stand_SetLightBeamOrigin_ToBone_Function_Params params {};
	params.Hologram_LightBeam_Skeletal_Mesh = Hologram_LightBeam_Skeletal_Mesh;
	params.Hologram_LightBeam_Mesh = Hologram_LightBeam_Mesh;
	params.Use_Skeletal_Mesh_ = Use_Skeletal_Mesh_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.Stand_Destroy_Function
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterHologram_01_C::Stand_Destroy_Function()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.Stand_Destroy_Function");

	ABP_MasterHologram_01_C_Stand_Destroy_Function_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.Stand_LookAt_Hologram_Function
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USkeletalMeshComponent*                      Hologram_Skeletal_Mesh                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UStaticMeshComponent*                        Hologram_Mesh                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Use_Skeletal_Mesh_                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterHologram_01_C::Stand_LookAt_Hologram_Function(class USkeletalMeshComponent* Hologram_Skeletal_Mesh, class UStaticMeshComponent* Hologram_Mesh, bool Use_Skeletal_Mesh_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.Stand_LookAt_Hologram_Function");

	ABP_MasterHologram_01_C_Stand_LookAt_Hologram_Function_Params params {};
	params.Hologram_Skeletal_Mesh = Hologram_Skeletal_Mesh;
	params.Hologram_Mesh = Hologram_Mesh;
	params.Use_Skeletal_Mesh_ = Use_Skeletal_Mesh_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.DrawDistance_Function
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USkeletalMeshComponent*                      Base_Mesh_LightBeams___Skeletal                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMeshComponent*                              Base_Mesh_LightBeams                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Use_as_Skeletal_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterHologram_01_C::DrawDistance_Function(class USkeletalMeshComponent* Base_Mesh_LightBeams___Skeletal, class UMeshComponent* Base_Mesh_LightBeams, bool Use_as_Skeletal_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.DrawDistance_Function");

	ABP_MasterHologram_01_C_DrawDistance_Function_Params params {};
	params.Base_Mesh_LightBeams___Skeletal = Base_Mesh_LightBeams___Skeletal;
	params.Base_Mesh_LightBeams = Base_Mesh_LightBeams;
	params.Use_as_Skeletal_ = Use_as_Skeletal_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.CustomDepth_Function
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USkeletalMeshComponent*                      Skeletal_Mesh                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UStaticMeshComponent*                        Static_Mesh                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Use_as_Skeletal_Bool                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterHologram_01_C::CustomDepth_Function(class USkeletalMeshComponent* Skeletal_Mesh, class UStaticMeshComponent* Static_Mesh, bool Use_as_Skeletal_Bool)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.CustomDepth_Function");

	ABP_MasterHologram_01_C_CustomDepth_Function_Params params {};
	params.Skeletal_Mesh = Skeletal_Mesh;
	params.Static_Mesh = Static_Mesh;
	params.Use_as_Skeletal_Bool = Use_as_Skeletal_Bool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.MeshScale_Function
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USkeletalMeshComponent*                      Skeletal_Mesh                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMeshComponent*                      Skeletal_Mesh_LightBeams                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMeshComponent*                              Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMeshComponent*                              Mesh_LightBeams                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Use_Skeletal_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterHologram_01_C::MeshScale_Function(class USkeletalMeshComponent* Skeletal_Mesh, class USkeletalMeshComponent* Skeletal_Mesh_LightBeams, class UMeshComponent* Mesh, class UMeshComponent* Mesh_LightBeams, bool Use_Skeletal_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.MeshScale_Function");

	ABP_MasterHologram_01_C_MeshScale_Function_Params params {};
	params.Skeletal_Mesh = Skeletal_Mesh;
	params.Skeletal_Mesh_LightBeams = Skeletal_Mesh_LightBeams;
	params.Mesh = Mesh;
	params.Mesh_LightBeams = Mesh_LightBeams;
	params.Use_Skeletal_ = Use_Skeletal_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.LightBeam_Component_Off
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USkeletalMeshComponent*                      Base_Mesh___Skeletal                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMeshComponent*                      Base_Mesh_LightBeams___Skeletal                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMeshComponent*                              Base_Mesh_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMeshComponent*                              Base_Mesh_LightBeams                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class USkeletalMeshComponent*>              Skeletal_Mesh_Component_Array                              (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
//		TArray<class UMeshComponent*>                      Mesh_Component_Array                                       (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_MasterHologram_01_C::LightBeam_Component_Off(class USkeletalMeshComponent* Base_Mesh___Skeletal, class USkeletalMeshComponent* Base_Mesh_LightBeams___Skeletal, class UMeshComponent* Base_Mesh_, class UMeshComponent* Base_Mesh_LightBeams, TArray<class USkeletalMeshComponent*>* Skeletal_Mesh_Component_Array, TArray<class UMeshComponent*>* Mesh_Component_Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.LightBeam_Component_Off");

	ABP_MasterHologram_01_C_LightBeam_Component_Off_Params params {};
	params.Base_Mesh___Skeletal = Base_Mesh___Skeletal;
	params.Base_Mesh_LightBeams___Skeletal = Base_Mesh_LightBeams___Skeletal;
	params.Base_Mesh_ = Base_Mesh_;
	params.Base_Mesh_LightBeams = Base_Mesh_LightBeams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Skeletal_Mesh_Component_Array != nullptr)
		*Skeletal_Mesh_Component_Array = params.Skeletal_Mesh_Component_Array;
	if (Mesh_Component_Array != nullptr)
		*Mesh_Component_Array = params.Mesh_Component_Array;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.LightBeam_Destroy_Option
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USkeletalMeshComponent*                      LightBeam_Skeletal                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UStaticMeshComponent*                        LightBeam_Static                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Use_as_Skeletal_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterHologram_01_C::LightBeam_Destroy_Option(class USkeletalMeshComponent* LightBeam_Skeletal, class UStaticMeshComponent* LightBeam_Static, bool Use_as_Skeletal_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.LightBeam_Destroy_Option");

	ABP_MasterHologram_01_C_LightBeam_Destroy_Option_Params params {};
	params.LightBeam_Skeletal = LightBeam_Skeletal;
	params.LightBeam_Static = LightBeam_Static;
	params.Use_as_Skeletal_ = Use_as_Skeletal_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.PointLight_Hologram
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPointLightComponent*                        Point_Light                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHologram_01_C::PointLight_Hologram(class UPointLightComponent* Point_Light)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.PointLight_Hologram");

	ABP_MasterHologram_01_C_PointLight_Hologram_Params params {};
	params.Point_Light = Point_Light;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.Rotation_Hologram
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class USkeletalMeshComponent*>              Skeletal_Mesh_Array                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
//		TArray<class UMeshComponent*>                      Base_Mesh                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
//		bool                                               Skeletal_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterHologram_01_C::Rotation_Hologram(TArray<class USkeletalMeshComponent*>* Skeletal_Mesh_Array, TArray<class UMeshComponent*>* Base_Mesh, bool Skeletal_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.Rotation_Hologram");

	ABP_MasterHologram_01_C_Rotation_Hologram_Params params {};
	params.Skeletal_ = Skeletal_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Skeletal_Mesh_Array != nullptr)
		*Skeletal_Mesh_Array = params.Skeletal_Mesh_Array;
	if (Base_Mesh != nullptr)
		*Base_Mesh = params.Base_Mesh;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.DMI_Hologram_Parameters
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USkeletalMeshComponent*                      Base_Mesh___Skeletal                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMeshComponent*                      Base_Mesh_LightBeams___Skeletal                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Use_as_Skeletal_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UMeshComponent*                              Base_Mesh                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMeshComponent*                              Base_Mesh_LightBeams                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHologram_01_C::DMI_Hologram_Parameters(class USkeletalMeshComponent* Base_Mesh___Skeletal, class USkeletalMeshComponent* Base_Mesh_LightBeams___Skeletal, bool Use_as_Skeletal_, class UMeshComponent* Base_Mesh, class UMeshComponent* Base_Mesh_LightBeams)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.DMI_Hologram_Parameters");

	ABP_MasterHologram_01_C_DMI_Hologram_Parameters_Params params {};
	params.Base_Mesh___Skeletal = Base_Mesh___Skeletal;
	params.Base_Mesh_LightBeams___Skeletal = Base_Mesh_LightBeams___Skeletal;
	params.Use_as_Skeletal_ = Use_as_Skeletal_;
	params.Base_Mesh = Base_Mesh;
	params.Base_Mesh_LightBeams = Base_Mesh_LightBeams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.3dWidget_Translation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USkeletalMeshComponent*                      Base_Mesh___Skeletal                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMeshComponent*                      Base_Mesh_LightBeams___Skeletal                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMeshComponent*                              Base_Mesh                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMeshComponent*                              Base_Mesh_LightBeams                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Use_as_Skeletal_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterHologram_01_C::_3dWidget_Translation(class USkeletalMeshComponent* Base_Mesh___Skeletal, class USkeletalMeshComponent* Base_Mesh_LightBeams___Skeletal, class UMeshComponent* Base_Mesh, class UMeshComponent* Base_Mesh_LightBeams, bool Use_as_Skeletal_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.3dWidget_Translation");

	ABP_MasterHologram_01_C__3dWidget_Translation_Params params {};
	params.Base_Mesh___Skeletal = Base_Mesh___Skeletal;
	params.Base_Mesh_LightBeams___Skeletal = Base_Mesh_LightBeams___Skeletal;
	params.Base_Mesh = Base_Mesh;
	params.Base_Mesh_LightBeams = Base_Mesh_LightBeams;
	params.Use_as_Skeletal_ = Use_as_Skeletal_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_MasterHologram_01_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.ReceiveBeginPlay");

	ABP_MasterHologram_01_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.ReceiveActorBeginOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHologram_01_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.ReceiveActorBeginOverlap");

	ABP_MasterHologram_01_C_ReceiveActorBeginOverlap_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHologram_01_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.ReceiveTick");

	ABP_MasterHologram_01_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.BndEvt__Audio_Component_1_K2Node_ComponentBoundEvent_6_OnAudioFinished__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ABP_MasterHologram_01_C::BndEvt__Audio_Component_1_K2Node_ComponentBoundEvent_6_OnAudioFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.BndEvt__Audio_Component_1_K2Node_ComponentBoundEvent_6_OnAudioFinished__DelegateSignature");

	ABP_MasterHologram_01_C_BndEvt__Audio_Component_1_K2Node_ComponentBoundEvent_6_OnAudioFinished__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_MasterHologram_01.BP_MasterHologram_01_C.ExecuteUbergraph_BP_MasterHologram_01
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHologram_01_C::ExecuteUbergraph_BP_MasterHologram_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MasterHologram_01.BP_MasterHologram_01_C.ExecuteUbergraph_BP_MasterHologram_01");

	ABP_MasterHologram_01_C_ExecuteUbergraph_BP_MasterHologram_01_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
