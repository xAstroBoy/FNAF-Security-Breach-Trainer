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
	 * Function BackstageRoxyAndMontyVO.BackstageRoxyAndMontyVO_C.ReceiveActorEndOverlap
	 */
	struct ABackstageRoxyAndMontyVO_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BackstageRoxyAndMontyVO.BackstageRoxyAndMontyVO_C.ReceiveTick
	 */
	struct ABackstageRoxyAndMontyVO_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BackstageRoxyAndMontyVO.BackstageRoxyAndMontyVO_C.ReceiveBeginPlay
	 */
	struct ABackstageRoxyAndMontyVO_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BackstageRoxyAndMontyVO.BackstageRoxyAndMontyVO_C.ReceiveActorBeginOverlap
	 */
	struct ABackstageRoxyAndMontyVO_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BackstageRoxyAndMontyVO.BackstageRoxyAndMontyVO_C.ExecuteUbergraph_BackstageRoxyAndMontyVO
	 */
	struct ABackstageRoxyAndMontyVO_C_ExecuteUbergraph_BackstageRoxyAndMontyVO_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_415L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
