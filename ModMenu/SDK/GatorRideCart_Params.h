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
	 * Function GatorRideCart.GatorRideCart_C.ReceiveBeginPlay
	 */
	struct AGatorRideCart_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function GatorRideCart.GatorRideCart_C.Loop
	 */
	struct AGatorRideCart_C_Loop_Params
	{
	};

	/**
	 * Function GatorRideCart.GatorRideCart_C.PlayMovementLoop
	 */
	struct AGatorRideCart_C_PlayMovementLoop_Params
	{
	};

	/**
	 * Function GatorRideCart.GatorRideCart_C.StopMovementLoop
	 */
	struct AGatorRideCart_C_StopMovementLoop_Params
	{
	};

	/**
	 * Function GatorRideCart.GatorRideCart_C.BndEvt__MOD_FreddyCart_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct AGatorRideCart_C_BndEvt__MOD_FreddyCart_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function GatorRideCart.GatorRideCart_C.ExecuteUbergraph_GatorRideCart
	 */
	struct AGatorRideCart_C_ExecuteUbergraph_GatorRideCart_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
