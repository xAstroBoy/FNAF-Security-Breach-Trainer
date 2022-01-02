﻿#pragma once

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

// Function Camera.Camera_C.GetRenderTarget
struct ACamera_C_GetRenderTarget_Params
{
};

// Function Camera.Camera_C.RenderCheck
struct ACamera_C_RenderCheck_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Camera.Camera_C.SetupSight
struct ACamera_C_SetupSight_Params
{
	bool                                               EnableSight;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Camera.Camera_C.TickRenderFrame
struct ACamera_C_TickRenderFrame_Params
{
};

// Function Camera.Camera_C.SetUpTextureTarget2d
struct ACamera_C_SetUpTextureTarget2d_Params
{
};

// Function Camera.Camera_C.DestroyReference
struct ACamera_C_DestroyReference_Params
{
	class UObject*                                     ReferencedObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Camera.Camera_C.GetReference
struct ACamera_C_GetReference_Params
{
	class UObject*                                     Referencer;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                      TextureTarget;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Camera.Camera_C.SetTrackingRotation
struct ACamera_C_SetTrackingRotation_Params
{
};

// Function Camera.Camera_C.SetCameraEnabled
struct ACamera_C_SetCameraEnabled_Params
{
	bool                                               enable;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Camera.Camera_C.Zoom
struct ACamera_C_Zoom_Params
{
	float                                              StickInput;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Camera.Camera_C.Pan
struct ACamera_C_Pan_Params
{
	float                                              StickInput;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Camera.Camera_C.ReceiveTick
struct ACamera_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Camera.Camera_C.ReceiveBeginPlay
struct ACamera_C_ReceiveBeginPlay_Params
{
};

// Function Camera.Camera_C.Tilt
struct ACamera_C_Tilt_Params
{
	float                                              StickInput;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Camera.Camera_C.MeshVisibility
struct ACamera_C_MeshVisibility_Params
{
	bool                                               Off;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Camera.Camera_C.Set Initial View
struct ACamera_C_Set_Initial_View_Params
{
};

// Function Camera.Camera_C.UpdatePanTilt
struct ACamera_C_UpdatePanTilt_Params
{
};

// Function Camera.Camera_C.OnOfficeModeStarted
struct ACamera_C_OnOfficeModeStarted_Params
{
};

// Function Camera.Camera_C.Set Focused
struct ACamera_C_Set_Focused_Params
{
	bool                                               Focused;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Camera.Camera_C.Set Light On
struct ACamera_C_Set_Light_On_Params
{
	bool                                               bNewVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Camera.Camera_C.ReceiveEndPlay
struct ACamera_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Camera.Camera_C.BndEvt__RenderDetector_K2Node_ComponentBoundEvent_2_OnSightChanged__DelegateSignature
struct ACamera_C_BndEvt__RenderDetector_K2Node_ComponentBoundEvent_2_OnSightChanged__DelegateSignature_Params
{
	class AActor*                                      UpdatedActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bVisible;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Camera.Camera_C.StartServoAudio
struct ACamera_C_StartServoAudio_Params
{
};

// Function Camera.Camera_C.StopServoAudio
struct ACamera_C_StopServoAudio_Params
{
};

// Function Camera.Camera_C.SetCaptureQuality
struct ACamera_C_SetCaptureQuality_Params
{
	bool                                               High;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Camera.Camera_C.ExecuteUbergraph_Camera
struct ACamera_C_ExecuteUbergraph_Camera_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Camera.Camera_C.OnLevelsLoaded__DelegateSignature
struct ACamera_C_OnLevelsLoaded__DelegateSignature_Params
{
	class ACamera_C*                                   Camera;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
