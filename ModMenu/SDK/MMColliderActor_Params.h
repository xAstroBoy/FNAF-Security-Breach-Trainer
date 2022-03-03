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
	 * Function MMColliderActor.MMColliderActor_C.ReceiveBeginPlay
	 */
	struct AMMColliderActor_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MMColliderActor.MMColliderActor_C.ReceiveActorBeginOverlap
	 */
	struct AMMColliderActor_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MMColliderActor.MMColliderActor_C.ReceiveActorEndOverlap
	 */
	struct AMMColliderActor_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MMColliderActor.MMColliderActor_C.ExecuteUbergraph_MMColliderActor
	 */
	struct AMMColliderActor_C_ExecuteUbergraph_MMColliderActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
