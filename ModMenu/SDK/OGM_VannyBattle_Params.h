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
	 * Function OGM_VannyBattle.OGM_VannyBattle_C.PlayerRequestEnd
	 */
	struct AOGM_VannyBattle_C_PlayerRequestEnd_Params
	{
	public:
		E_EndMiniGameType                                          EndType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_VannyBattle.OGM_VannyBattle_C.MontyOrChica
	 */
	struct AOGM_VannyBattle_C_MontyOrChica_Params
	{
	public:
		bool                                                       Monty;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TBEP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OGM_VannyBattle.OGM_VannyBattle_C.OnEnd
	 */
	struct AOGM_VannyBattle_C_OnEnd_Params
	{
	public:
		E_EndMiniGameType                                          EndType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IOY2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OGM_VannyBattle.OGM_VannyBattle_C.On Start
	 */
	struct AOGM_VannyBattle_C_OnStart_Params
	{	};

	/**
	 * Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_51304B0B49067B4078771F8EA879D31D
	 */
	struct AOGM_VannyBattle_C_OnFailure_51304B0B49067B4078771F8EA879D31D_Params
	{	};

	/**
	 * Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_51304B0B49067B4078771F8EA879D31D
	 */
	struct AOGM_VannyBattle_C_OnSuccess_51304B0B49067B4078771F8EA879D31D_Params
	{	};

	/**
	 * Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_09F97D64470242AC12A058B1AC7CE376
	 */
	struct AOGM_VannyBattle_C_OnFailure_09F97D64470242AC12A058B1AC7CE376_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_09F97D64470242AC12A058B1AC7CE376
	 */
	struct AOGM_VannyBattle_C_OnSuccess_09F97D64470242AC12A058B1AC7CE376_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_51304B0B49067B4078771F8E7573F813
	 */
	struct AOGM_VannyBattle_C_OnFailure_51304B0B49067B4078771F8E7573F813_Params
	{	};

	/**
	 * Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_51304B0B49067B4078771F8E7573F813
	 */
	struct AOGM_VannyBattle_C_OnSuccess_51304B0B49067B4078771F8E7573F813_Params
	{	};

	/**
	 * Function OGM_VannyBattle.OGM_VannyBattle_C.OnFailure_09F97D64470242AC12A058B17176C878
	 */
	struct AOGM_VannyBattle_C_OnFailure_09F97D64470242AC12A058B17176C878_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_VannyBattle.OGM_VannyBattle_C.OnSuccess_09F97D64470242AC12A058B17176C878
	 */
	struct AOGM_VannyBattle_C_OnSuccess_09F97D64470242AC12A058B17176C878_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OGM_VannyBattle.OGM_VannyBattle_C.BndEvt__Drop Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AOGM_VannyBattle_C_BndEvt__DropTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MZXD[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function OGM_VannyBattle.OGM_VannyBattle_C.Vanny Destroy
	 */
	struct AOGM_VannyBattle_C_VannyDestroy_Params
	{	};

	/**
	 * Function OGM_VannyBattle.OGM_VannyBattle_C.Vanny Redeem
	 */
	struct AOGM_VannyBattle_C_VannyRedeem_Params
	{	};

	/**
	 * Function OGM_VannyBattle.OGM_VannyBattle_C.ExecuteUbergraph_OGM_VannyBattle
	 */
	struct AOGM_VannyBattle_C_ExecuteUbergraph_OGM_VannyBattle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
