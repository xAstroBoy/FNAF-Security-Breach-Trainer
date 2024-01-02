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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Bind Texture Target
	 */
	struct ASecurityScreenDisplayBase_C_BindTextureTarget_Params
	{
	public:
		class UTexture*                                            TextureTarget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Find Camera
	 */
	struct ASecurityScreenDisplayBase_C_FindCamera_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A6JW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextureRenderTarget2D*                              TextureTarget;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.ReceiveBeginPlay
	 */
	struct ASecurityScreenDisplayBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Set To Static
	 */
	struct ASecurityScreenDisplayBase_C_SetToStatic_Params
	{	};

	/**
	 * Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Set to Texture
	 */
	struct ASecurityScreenDisplayBase_C_SettoTexture_Params
	{
	public:
		bool                                                       FindCamera;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XI31[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture*                                            TextureTarget;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.SetToWidget
	 */
	struct ASecurityScreenDisplayBase_C_SetToWidget_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.WidgetToggle
	 */
	struct ASecurityScreenDisplayBase_C_WidgetToggle_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.SetToInstructionCard
	 */
	struct ASecurityScreenDisplayBase_C_SetToInstructionCard_Params
	{
	public:
		E_InstructionCard_Type                                     Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Begin Render
	 */
	struct ASecurityScreenDisplayBase_C_BeginRender_Params
	{	};

	/**
	 * Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.End Render
	 */
	struct ASecurityScreenDisplayBase_C_EndRender_Params
	{	};

	/**
	 * Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.ReceiveEndPlay
	 */
	struct ASecurityScreenDisplayBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.PlayVideo
	 */
	struct ASecurityScreenDisplayBase_C_PlayVideo_Params
	{
	public:
		struct FCinematicCutscene                                  Video;                                                   // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ElementIndex;                                            // 0x0048(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.Stop Video
	 */
	struct ASecurityScreenDisplayBase_C_StopVideo_Params
	{	};

	/**
	 * Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.ExecuteUbergraph_SecurityScreenDisplayBase
	 */
	struct ASecurityScreenDisplayBase_C_ExecuteUbergraph_SecurityScreenDisplayBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4FQ7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.OnScreenActive__DelegateSignature
	 */
	struct ASecurityScreenDisplayBase_C_OnScreenActive__DelegateSignature_Params
	{	};

	/**
	 * Function SecurityScreenDisplayBase.SecurityScreenDisplayBase_C.OnStopVideo__DelegateSignature
	 */
	struct ASecurityScreenDisplayBase_C_OnStopVideo__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
