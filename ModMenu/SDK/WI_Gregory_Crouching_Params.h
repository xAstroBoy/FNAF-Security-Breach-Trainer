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
	 * Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.SwapImage
	 */
	struct UWI_Gregory_Crouching_C_SwapImage_Params
	{
	public:
		bool                                                       IsCrouched;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.SetCorrectCrouchingImage
	 */
	struct UWI_Gregory_Crouching_C_SetCorrectCrouchingImage_Params
	{
	};

	/**
	 * Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.HideCrouchingImage
	 */
	struct UWI_Gregory_Crouching_C_HideCrouchingImage_Params
	{
	};

	/**
	 * Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.ShowCrouchingImage
	 */
	struct UWI_Gregory_Crouching_C_ShowCrouchingImage_Params
	{
	};

	/**
	 * Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.OnFailure_1EEBCFB84FF35A61CCA67DBBFADBC509
	 */
	struct UWI_Gregory_Crouching_C_OnFailure_1EEBCFB84FF35A61CCA67DBBFADBC509_Params
	{
	};

	/**
	 * Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.OnSuccess_1EEBCFB84FF35A61CCA67DBBFADBC509
	 */
	struct UWI_Gregory_Crouching_C_OnSuccess_1EEBCFB84FF35A61CCA67DBBFADBC509_Params
	{
	};

	/**
	 * Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.OnFailure_939A65B5496246CF92D6CDB315E2B149
	 */
	struct UWI_Gregory_Crouching_C_OnFailure_939A65B5496246CF92D6CDB315E2B149_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.OnSuccess_939A65B5496246CF92D6CDB315E2B149
	 */
	struct UWI_Gregory_Crouching_C_OnSuccess_939A65B5496246CF92D6CDB315E2B149_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.Construct
	 */
	struct UWI_Gregory_Crouching_C_Construct_Params
	{
	};

	/**
	 * Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.Crouch
	 */
	struct UWI_Gregory_Crouching_C_Crouch_Params
	{
	public:
		bool                                                       BeginCrouch;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.UpdateAlertColor
	 */
	struct UWI_Gregory_Crouching_C_UpdateAlertColor_Params
	{
	public:
		int                                                        AlertStatus;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.HideOnUnpossess
	 */
	struct UWI_Gregory_Crouching_C_HideOnUnpossess_Params
	{
	};

	/**
	 * Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.Tick
	 */
	struct UWI_Gregory_Crouching_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_Gregory_Crouching.WI_Gregory_Crouching_C.ExecuteUbergraph_WI_Gregory_Crouching
	 */
	struct UWI_Gregory_Crouching_C_ExecuteUbergraph_WI_Gregory_Crouching_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
