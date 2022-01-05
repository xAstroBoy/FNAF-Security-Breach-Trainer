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
	 * Function InterpMoveComponent.InterpMoveComponent_C.ReceiveTick
	 */
	struct UInterpMoveComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InterpMoveComponent.InterpMoveComponent_C.Begin Interp
	 */
	struct UInterpMoveComponent_C_Begin_Interp_Params
	{
	public:
		struct FVector                                             Start_Position;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             End_Position;                                            // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InterpMoveComponent.InterpMoveComponent_C.ExecuteUbergraph_InterpMoveComponent
	 */
	struct UInterpMoveComponent_C_ExecuteUbergraph_InterpMoveComponent_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InterpMoveComponent.InterpMoveComponent_C.OnInterpFinished__DelegateSignature
	 */
	struct UInterpMoveComponent_C_OnInterpFinished__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
