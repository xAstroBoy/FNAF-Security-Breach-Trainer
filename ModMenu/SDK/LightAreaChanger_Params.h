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
	 * Function LightAreaChanger.LightAreaChanger_C.Change Area By Location
	 */
	struct ULightAreaChanger_C_Change_Area_By_Location_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LightAreaChanger.LightAreaChanger_C.Change Area By Player
	 */
	struct ULightAreaChanger_C_Change_Area_By_Player_Params
	{
	};

	/**
	 * Function LightAreaChanger.LightAreaChanger_C.On Area Change Finished
	 */
	struct ULightAreaChanger_C_On_Area_Change_Finished_Params
	{
	};

	/**
	 * Function LightAreaChanger.LightAreaChanger_C.ExecuteUbergraph_LightAreaChanger
	 */
	struct ULightAreaChanger_C_ExecuteUbergraph_LightAreaChanger_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LightAreaChanger.LightAreaChanger_C.OnFadeInFinished__DelegateSignature
	 */
	struct ULightAreaChanger_C_OnFadeInFinished__DelegateSignature_Params
	{
	};

	/**
	 * Function LightAreaChanger.LightAreaChanger_C.OnAreaChangeFinished__DelegateSignature
	 */
	struct ULightAreaChanger_C_OnAreaChangeFinished__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
