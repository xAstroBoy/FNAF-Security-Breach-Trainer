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

// Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Bind Texture Target
struct ASecurityScreenDisplayBase_C_Bind_Texture_Target_Params
{
	class UTexture*                                    Texture_Target;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Find Camera
struct ASecurityScreenDisplayBase_C_Find_Camera_Params
{
	bool                                               Is_Valid;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTextureRenderTarget2D*                      Texture_Target;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.ReceiveBeginPlay
struct ASecurityScreenDisplayBase_C_ReceiveBeginPlay_Params
{
};

// Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Set To Static
struct ASecurityScreenDisplayBase_C_Set_To_Static_Params
{
};

// Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Set to Texture
struct ASecurityScreenDisplayBase_C_Set_to_Texture_Params
{
	bool                                               Find_Camera;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTexture*                                    Texture_Target;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.SetToWidget
struct ASecurityScreenDisplayBase_C_SetToWidget_Params
{
	class UClass*                                      Class;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.WidgetToggle
struct ASecurityScreenDisplayBase_C_WidgetToggle_Params
{
	bool                                               Enabled;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.SetToInstructionCard
struct ASecurityScreenDisplayBase_C_SetToInstructionCard_Params
{
	TEnumAsByte<E_InstructionCard_Type_E_InstructionCard_Type> Type;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Begin Render
struct ASecurityScreenDisplayBase_C_Begin_Render_Params
{
};

// Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.End Render
struct ASecurityScreenDisplayBase_C_End_Render_Params
{
};

// Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.ReceiveEndPlay
struct ASecurityScreenDisplayBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.PlayVideo
struct ASecurityScreenDisplayBase_C_PlayVideo_Params
{
	struct FCinematicCutscene                          Video;                                                     // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UMediaPlayer*                                MediaPlayer;                                               // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Element_Index;                                             // 0x0048(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Stop Video
struct ASecurityScreenDisplayBase_C_Stop_Video_Params
{
};

// Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.ExecuteUbergraph_SecurityScreenDisplayBase
struct ASecurityScreenDisplayBase_C_ExecuteUbergraph_SecurityScreenDisplayBase_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.OnScreenActive__DelegateSignature
struct ASecurityScreenDisplayBase_C_OnScreenActive__DelegateSignature_Params
{
};

// Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.OnStopVideo__DelegateSignature
struct ASecurityScreenDisplayBase_C_OnStopVideo__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
