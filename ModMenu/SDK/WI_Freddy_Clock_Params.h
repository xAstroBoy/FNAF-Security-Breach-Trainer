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
	 * Function WI_Freddy_Clock.WI_Freddy_Clock_C.Finished_1FD1C2C64919F01584174C814C8F4342
	 */
	struct UWI_Freddy_Clock_C_Finished_1FD1C2C64919F01584174C814C8F4342_Params
	{
	};

	/**
	 * Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnFailure_7F2CFDE7462F55FF6A63879E652B696E
	 */
	struct UWI_Freddy_Clock_C_OnFailure_7F2CFDE7462F55FF6A63879E652B696E_Params
	{
	};

	/**
	 * Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnSuccess_7F2CFDE7462F55FF6A63879E652B696E
	 */
	struct UWI_Freddy_Clock_C_OnSuccess_7F2CFDE7462F55FF6A63879E652B696E_Params
	{
	};

	/**
	 * Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnFailure_FBD07C26434C6628805089838B398A42
	 */
	struct UWI_Freddy_Clock_C_OnFailure_FBD07C26434C6628805089838B398A42_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_Freddy_Clock.WI_Freddy_Clock_C.OnSuccess_FBD07C26434C6628805089838B398A42
	 */
	struct UWI_Freddy_Clock_C_OnSuccess_FBD07C26434C6628805089838B398A42_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_Freddy_Clock.WI_Freddy_Clock_C.Tick
	 */
	struct UWI_Freddy_Clock_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WI_Freddy_Clock.WI_Freddy_Clock_C.Showtime
	 */
	struct UWI_Freddy_Clock_C_Showtime_Params
	{
	};

	/**
	 * Function WI_Freddy_Clock.WI_Freddy_Clock_C.ShowTimeNoRunClock
	 */
	struct UWI_Freddy_Clock_C_ShowTimeNoRunClock_Params
	{
	};

	/**
	 * Function WI_Freddy_Clock.WI_Freddy_Clock_C.ExecuteUbergraph_WI_Freddy_Clock
	 */
	struct UWI_Freddy_Clock_C_ExecuteUbergraph_WI_Freddy_Clock_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
