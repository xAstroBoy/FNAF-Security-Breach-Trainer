﻿#pragma once

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
	 * Function HideAnimInterface.HideAnimInterface_C.SetPeek
	 */
	struct UHideAnimInterface_C_SetPeek_Params
	{
	public:
		bool                                                       ShouldPeek;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HideAnimInterface.HideAnimInterface_C.SetAnim
	 */
	struct UHideAnimInterface_C_SetAnim_Params
	{
	public:
		class UAnimSequence*                                       Animation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HideAnimInterface.HideAnimInterface_C.SetEnterRotation
	 */
	struct UHideAnimInterface_C_SetEnterRotation_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HideAnimInterface.HideAnimInterface_C.StartSearch
	 */
	struct UHideAnimInterface_C_StartSearch_Params
	{
	public:
		class APawn*                                               SearcherPawn;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
