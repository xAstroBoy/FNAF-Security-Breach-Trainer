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
	 * Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.ShowFreddyVideo
	 */
	struct ABackstage_IntroScreenComms_C_ShowFreddyVideo_Params
	{	};

	/**
	 * Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.ShowVannyVideo
	 */
	struct ABackstage_IntroScreenComms_C_ShowVannyVideo_Params
	{	};

	/**
	 * Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.StopShowingVideo
	 */
	struct ABackstage_IntroScreenComms_C_StopShowingVideo_Params
	{	};

	/**
	 * Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.SetScreenSprite
	 */
	struct ABackstage_IntroScreenComms_C_SetScreenSprite_Params
	{
	public:
		class UMaterialInstance*                                   NewMaterial;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Backstage_IntroScreenComms.Backstage_IntroScreenComms_C.ExecuteUbergraph_Backstage_IntroScreenComms
	 */
	struct ABackstage_IntroScreenComms_C_ExecuteUbergraph_Backstage_IntroScreenComms_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
