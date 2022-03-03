#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
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
	 * Function SecurityScreen_Timer.SecurityScreen_Timer_C.GetTimeAsPercentage
	 */
	struct ASecurityScreen_Timer_C_GetTimeAsPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityScreen_Timer.SecurityScreen_Timer_C.GetTimeAsText
	 */
	struct ASecurityScreen_Timer_C_GetTimeAsText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function SecurityScreen_Timer.SecurityScreen_Timer_C.Bind Texture Target
	 */
	struct ASecurityScreen_Timer_C_Bind_Texture_Target_Params
	{
	public:
		class UTexture*                                            Texture_Target;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityScreen_Timer.SecurityScreen_Timer_C.Find Camera
	 */
	struct ASecurityScreen_Timer_C_Find_Camera_Params
	{
	public:
		bool                                                       Is_Valid;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTextureRenderTarget*                                Texture_Target;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityScreen_Timer.SecurityScreen_Timer_C.SetToWidget
	 */
	struct ASecurityScreen_Timer_C_SetToWidget_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityScreen_Timer.SecurityScreen_Timer_C.WidgetToggle
	 */
	struct ASecurityScreen_Timer_C_WidgetToggle_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SecurityScreen_Timer.SecurityScreen_Timer_C.SetToInstructionCard
	 */
	struct ASecurityScreen_Timer_C_SetToInstructionCard_Params
	{
	public:
		E_InstructionCard_Type_E_InstructionCard_Type              Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityScreen_Timer.SecurityScreen_Timer_C.ReceiveBeginPlay
	 */
	struct ASecurityScreen_Timer_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function SecurityScreen_Timer.SecurityScreen_Timer_C.Set To Static
	 */
	struct ASecurityScreen_Timer_C_Set_To_Static_Params
	{
	};

	/**
	 * Function SecurityScreen_Timer.SecurityScreen_Timer_C.MakeTimersVisible
	 */
	struct ASecurityScreen_Timer_C_MakeTimersVisible_Params
	{
	};

	/**
	 * Function SecurityScreen_Timer.SecurityScreen_Timer_C.ExecuteUbergraph_SecurityScreen_Timer
	 */
	struct ASecurityScreen_Timer_C_ExecuteUbergraph_SecurityScreen_Timer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SecurityScreen_Timer.SecurityScreen_Timer_C.OnStopVideo__DelegateSignature
	 */
	struct ASecurityScreen_Timer_C_OnStopVideo__DelegateSignature_Params
	{
	};

	/**
	 * Function SecurityScreen_Timer.SecurityScreen_Timer_C.OnScreenActive__DelegateSignature
	 */
	struct ASecurityScreen_Timer_C_OnScreenActive__DelegateSignature_Params
	{
	public:
		class ASecurityScreenDisplay_C*                            Screen;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
