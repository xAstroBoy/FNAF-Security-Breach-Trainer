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
	 * Function HeadAimingInterface.HeadAimingInterface_C.GetHeadAimTargetActor
	 */
	struct UHeadAimingInterface_C_GetHeadAimTargetActor_Params
	{
	public:
		class AActor*                                              AimActor;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HeadAimingInterface.HeadAimingInterface_C.GetHeadAimTargetLocation
	 */
	struct UHeadAimingInterface_C_GetHeadAimTargetLocation_Params
	{
	public:
		struct FVector                                             HeadAimLocation;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HeadAimingInterface.HeadAimingInterface_C.SetHeadAimTarget
	 */
	struct UHeadAimingInterface_C_SetHeadAimTarget_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetLocation;                                          // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OffsetByViewHeight;                                      // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HeadAimingInterface.HeadAimingInterface_C.SetHeadAimEnabled
	 */
	struct UHeadAimingInterface_C_SetHeadAimEnabled_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
