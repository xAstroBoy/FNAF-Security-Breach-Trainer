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
	 * Function StaffBotSpawnerComponent.StaffBotSpawnerComponent_C.SpawnBot
	 */
	struct UStaffBotSpawnerComponent_C_SpawnBot_Params
	{
	public:
		struct FVector                                             SpawnTransform_Location;                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_14SO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASplinePathwayManager_C*                             SplineManager;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AStaffBotBase_C*                                     ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotSpawnerComponent.StaffBotSpawnerComponent_C.Spawn Staff Bots
	 */
	struct UStaffBotSpawnerComponent_C_SpawnStaffBots_Params
	{	};

	/**
	 * Function StaffBotSpawnerComponent.StaffBotSpawnerComponent_C.Destroy Staff Bots
	 */
	struct UStaffBotSpawnerComponent_C_DestroyStaffBots_Params
	{	};

	/**
	 * Function StaffBotSpawnerComponent.StaffBotSpawnerComponent_C.ReceiveEndPlay
	 */
	struct UStaffBotSpawnerComponent_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StaffBotSpawnerComponent.StaffBotSpawnerComponent_C.ExecuteUbergraph_StaffBotSpawnerComponent
	 */
	struct UStaffBotSpawnerComponent_C_ExecuteUbergraph_StaffBotSpawnerComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
