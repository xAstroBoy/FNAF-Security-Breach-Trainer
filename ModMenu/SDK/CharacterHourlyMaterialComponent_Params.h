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
	 * Function CharacterHourlyMaterialComponent.CharacterHourlyMaterialComponent_C.On Time Changed
	 */
	struct UCharacterHourlyMaterialComponent_C_On_Time_Changed_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Minute;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CharacterHourlyMaterialComponent.CharacterHourlyMaterialComponent_C.OnLoaded_9F047F074BE0EE73014FEF95E6406397
	 */
	struct UCharacterHourlyMaterialComponent_C_OnLoaded_9F047F074BE0EE73014FEF95E6406397_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CharacterHourlyMaterialComponent.CharacterHourlyMaterialComponent_C.ReceiveBeginPlay
	 */
	struct UCharacterHourlyMaterialComponent_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function CharacterHourlyMaterialComponent.CharacterHourlyMaterialComponent_C.Load Materials For Hour
	 */
	struct UCharacterHourlyMaterialComponent_C_Load_Materials_For_Hour_Params
	{
	public:
		int32_t                                                    HourlyIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CharacterHourlyMaterialComponent.CharacterHourlyMaterialComponent_C.ExecuteUbergraph_CharacterHourlyMaterialComponent
	 */
	struct UCharacterHourlyMaterialComponent_C_ExecuteUbergraph_CharacterHourlyMaterialComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
