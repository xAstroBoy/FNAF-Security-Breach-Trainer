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
	 * Function DJButton.DJButton_C.InteractIgnoresTrace
	 */
	struct ADJButton_C_InteractIgnoresTrace_Params
	{
	public:
		bool                                                       IgnoreTrace;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DJButton.DJButton_C.rotateLever__FinishedFunc
	 */
	struct ADJButton_C_rotateLever__FinishedFunc_Params
	{
	};

	/**
	 * Function DJButton.DJButton_C.rotateLever__UpdateFunc
	 */
	struct ADJButton_C_rotateLever__UpdateFunc_Params
	{
	};

	/**
	 * Function DJButton.DJButton_C.ReceiveBeginPlay
	 */
	struct ADJButton_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function DJButton.DJButton_C.ReceiveActorBeginOverlap
	 */
	struct ADJButton_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DJButton.DJButton_C.ReceiveTick
	 */
	struct ADJButton_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DJButton.DJButton_C.Activate Objects
	 */
	struct ADJButton_C_Activate_Objects_Params
	{
	};

	/**
	 * Function DJButton.DJButton_C.ActivateObject
	 */
	struct ADJButton_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DJButton.DJButton_C.ExecuteUbergraph_DJButton
	 */
	struct ADJButton_C_ExecuteUbergraph_DJButton_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
