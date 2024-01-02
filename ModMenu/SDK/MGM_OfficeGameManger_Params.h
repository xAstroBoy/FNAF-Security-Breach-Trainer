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
	 * Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.SetDoorsLock
	 */
	struct AMGM_OfficeGameManger_C_SetDoorsLock_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UNTN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.Can Spawn AI
	 */
	struct AMGM_OfficeGameManger_C_CanSpawnAI_Params
	{
	public:
		bool                                                       CanSpawn;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.CheckIfPlayerLeave
	 */
	struct AMGM_OfficeGameManger_C_CheckIfPlayerLeave_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XAU1[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.OnPlayerEnter
	 */
	struct AMGM_OfficeGameManger_C_OnPlayerEnter_Params
	{	};

	/**
	 * Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.OnEnd
	 */
	struct AMGM_OfficeGameManger_C_OnEnd_Params
	{
	public:
		E_EndMiniGameType                                          EndType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.On Start
	 */
	struct AMGM_OfficeGameManger_C_OnStart_Params
	{	};

	/**
	 * Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.CheckIfPlayer
	 */
	struct AMGM_OfficeGameManger_C_CheckIfPlayer_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3WQS[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.OnPlayerLeave
	 */
	struct AMGM_OfficeGameManger_C_OnPlayerLeave_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.SetScreensToRender
	 */
	struct AMGM_OfficeGameManger_C_SetScreensToRender_Params
	{	};

	/**
	 * Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.SetScreensToStatic
	 */
	struct AMGM_OfficeGameManger_C_SetScreensToStatic_Params
	{	};

	/**
	 * Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.UserConstructionScript
	 */
	struct AMGM_OfficeGameManger_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.ReceiveBeginPlay
	 */
	struct AMGM_OfficeGameManger_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MGM_OfficeGameManger.MGM_OfficeGameManger_C.ExecuteUbergraph_MGM_OfficeGameManger
	 */
	struct AMGM_OfficeGameManger_C_ExecuteUbergraph_MGM_OfficeGameManger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
