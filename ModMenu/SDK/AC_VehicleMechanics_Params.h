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
	 * Function AC_VehicleMechanics.AC_VehicleMechanics_C.CATAirFix
	 */
	struct UAC_VehicleMechanics_C_CATAirFix_Params
	{
	public:
		int32_t                                                    Wheels;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_VehicleMechanics.AC_VehicleMechanics_C.ApplyMotorResistence
	 */
	struct UAC_VehicleMechanics_C_ApplyMotorResistence_Params
	{
	public:
		float                                                      Throddle;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_VehicleMechanics.AC_VehicleMechanics_C.ApplyAirResistance
	 */
	struct UAC_VehicleMechanics_C_ApplyAirResistance_Params
	{
	public:
		float                                                      Friction;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_VehicleMechanics.AC_VehicleMechanics_C.ApplyLateralFriction
	 */
	struct UAC_VehicleMechanics_C_ApplyLateralFriction_Params
	{
	public:
		struct FVector                                             NormalPlane;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Sterring;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WheelsDown;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_VehicleMechanics.AC_VehicleMechanics_C.DoThroddle
	 */
	struct UAC_VehicleMechanics_C_DoThroddle_Params
	{
	public:
		float                                                      Throddle;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             FloorNormal;                                             // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WheelsDown;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_VehicleMechanics.AC_VehicleMechanics_C.DoSterring
	 */
	struct UAC_VehicleMechanics_C_DoSterring_Params
	{
	public:
		float                                                      Sterring;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             FloorNormal;                                             // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_VehicleMechanics.AC_VehicleMechanics_C.JustLanded 
	 */
	struct UAC_VehicleMechanics_C_JustLanded__Params
	{
	};

	/**
	 * Function AC_VehicleMechanics.AC_VehicleMechanics_C.DoTick
	 */
	struct UAC_VehicleMechanics_C_DoTick_Params
	{
	};

	/**
	 * Function AC_VehicleMechanics.AC_VehicleMechanics_C.AddThroddleInput
	 */
	struct UAC_VehicleMechanics_C_AddThroddleInput_Params
	{
	public:
		float                                                      Axis;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_VehicleMechanics.AC_VehicleMechanics_C.AddSterringInput
	 */
	struct UAC_VehicleMechanics_C_AddSterringInput_Params
	{
	public:
		float                                                      Axis;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_VehicleMechanics.AC_VehicleMechanics_C.ReceiveBeginPlay
	 */
	struct UAC_VehicleMechanics_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function AC_VehicleMechanics.AC_VehicleMechanics_C.ReceiveTick
	 */
	struct UAC_VehicleMechanics_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_VehicleMechanics.AC_VehicleMechanics_C.ExecuteUbergraph_AC_VehicleMechanics
	 */
	struct UAC_VehicleMechanics_C_ExecuteUbergraph_AC_VehicleMechanics_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
