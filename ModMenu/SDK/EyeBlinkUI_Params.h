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
	 * Function EyeBlinkUI.EyeBlinkUI_C.BlinkHelper
	 */
	struct UEyeBlinkUI_C_BlinkHelper_Params
	{
	public:
		class UImage*                                              eyelid;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Alpha;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function EyeBlinkUI.EyeBlinkUI_C.Tick
	 */
	struct UEyeBlinkUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function EyeBlinkUI.EyeBlinkUI_C.Eyes Open 2
	 */
	struct UEyeBlinkUI_C_Eyes_Open_2_Params
	{
	};

	/**
	 * Function EyeBlinkUI.EyeBlinkUI_C.Eyes Shut 1
	 */
	struct UEyeBlinkUI_C_Eyes_Shut_1_Params
	{
	};

	/**
	 * Function EyeBlinkUI.EyeBlinkUI_C.Blink
	 */
	struct UEyeBlinkUI_C_Blink_Params
	{
	};

	/**
	 * Function EyeBlinkUI.EyeBlinkUI_C.Eyes Open 1
	 */
	struct UEyeBlinkUI_C_Eyes_Open_1_Params
	{
	};

	/**
	 * Function EyeBlinkUI.EyeBlinkUI_C.Eyes Shut 2
	 */
	struct UEyeBlinkUI_C_Eyes_Shut_2_Params
	{
	};

	/**
	 * Function EyeBlinkUI.EyeBlinkUI_C.ExecuteUbergraph_EyeBlinkUI
	 */
	struct UEyeBlinkUI_C_ExecuteUbergraph_EyeBlinkUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Shut 2__DelegateSignature
	 */
	struct UEyeBlinkUI_C_On_Eyes_Shut_2__DelegateSignature_Params
	{
	};

	/**
	 * Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Open 1__DelegateSignature
	 */
	struct UEyeBlinkUI_C_On_Eyes_Open_1__DelegateSignature_Params
	{
	};

	/**
	 * Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Shut 1__DelegateSignature
	 */
	struct UEyeBlinkUI_C_On_Eyes_Shut_1__DelegateSignature_Params
	{
	};

	/**
	 * Function EyeBlinkUI.EyeBlinkUI_C.On Eyes Open 2__DelegateSignature
	 */
	struct UEyeBlinkUI_C_On_Eyes_Open_2__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
