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
	 * Function WI_Gregory_Clock.WI_Gregory_Clock_C.Finished_A235BE3544718285A83055848878902F
	 */
	struct UWI_Gregory_Clock_C_Finished_A235BE3544718285A83055848878902F_Params
	{	};

	/**
	 * Function WI_Gregory_Clock.WI_Gregory_Clock_C.OnFailure_1FD9A5F14F3F0BA6F2C2AA9A1F9BB590
	 */
	struct UWI_Gregory_Clock_C_OnFailure_1FD9A5F14F3F0BA6F2C2AA9A1F9BB590_Params
	{	};

	/**
	 * Function WI_Gregory_Clock.WI_Gregory_Clock_C.OnSuccess_1FD9A5F14F3F0BA6F2C2AA9A1F9BB590
	 */
	struct UWI_Gregory_Clock_C_OnSuccess_1FD9A5F14F3F0BA6F2C2AA9A1F9BB590_Params
	{	};

	/**
	 * Function WI_Gregory_Clock.WI_Gregory_Clock_C.OnFailure_9627632E42AF1548717DA3A133495CE7
	 */
	struct UWI_Gregory_Clock_C_OnFailure_9627632E42AF1548717DA3A133495CE7_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Gregory_Clock.WI_Gregory_Clock_C.OnSuccess_9627632E42AF1548717DA3A133495CE7
	 */
	struct UWI_Gregory_Clock_C_OnSuccess_9627632E42AF1548717DA3A133495CE7_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Gregory_Clock.WI_Gregory_Clock_C.Tick
	 */
	struct UWI_Gregory_Clock_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WI_Gregory_Clock.WI_Gregory_Clock_C.Showtime
	 */
	struct UWI_Gregory_Clock_C_Showtime_Params
	{	};

	/**
	 * Function WI_Gregory_Clock.WI_Gregory_Clock_C.ShowTimeNoRunClock
	 */
	struct UWI_Gregory_Clock_C_ShowTimeNoRunClock_Params
	{	};

	/**
	 * Function WI_Gregory_Clock.WI_Gregory_Clock_C.ExecuteUbergraph_WI_Gregory_Clock
	 */
	struct UWI_Gregory_Clock_C_ExecuteUbergraph_WI_Gregory_Clock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OE81[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
