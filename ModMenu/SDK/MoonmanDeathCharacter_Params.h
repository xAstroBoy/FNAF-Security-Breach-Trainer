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
	 * Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.OnMoveFinished_01A10D084E477107D60080A61618D4FF
	 */
	struct AMoonmanDeathCharacter_C_OnMoveFinished_01A10D084E477107D60080A61618D4FF_Params
	{
	public:
		EPathFollowingResult                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FCYJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AAIController*                                       AIController;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.OnRequestFailed_01A10D084E477107D60080A61618D4FF
	 */
	struct AMoonmanDeathCharacter_C_OnRequestFailed_01A10D084E477107D60080A61618D4FF_Params
	{	};

	/**
	 * Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.DLCRabbitDisplayAlertText
	 */
	struct AMoonmanDeathCharacter_C_DLCRabbitDisplayAlertText_Params
	{
	public:
		bool                                                       Display;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ReceiveBeginPlay
	 */
	struct AMoonmanDeathCharacter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ReceiveActorBeginOverlap
	 */
	struct AMoonmanDeathCharacter_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ReceiveTick
	 */
	struct AMoonmanDeathCharacter_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.OnDebugVis
	 */
	struct AMoonmanDeathCharacter_C_OnDebugVis_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ReceiveDestroyed
	 */
	struct AMoonmanDeathCharacter_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function MoonmanDeathCharacter.MoonmanDeathCharacter_C.ExecuteUbergraph_MoonmanDeathCharacter
	 */
	struct AMoonmanDeathCharacter_C_ExecuteUbergraph_MoonmanDeathCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
