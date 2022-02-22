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
	 * Function Sewer_Generator.Sewer_Generator_C.Activate Chica Trigger
	 */
	struct ASewer_Generator_C_Activate_Chica_Trigger_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Sewer_Generator.Sewer_Generator_C.ReceiveBeginPlay
	 */
	struct ASewer_Generator_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Sewer_Generator.Sewer_Generator_C.SetActivated
	 */
	struct ASewer_Generator_C_SetActivated_Params
	{
	};

	/**
	 * Function Sewer_Generator.Sewer_Generator_C.ActivateObject
	 */
	struct ASewer_Generator_C_ActivateObject_Params
	{
	public:
		class AActor*                                              Activator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Sewer_Generator.Sewer_Generator_C.ExecuteUbergraph_Sewer_Generator
	 */
	struct ASewer_Generator_C_ExecuteUbergraph_Sewer_Generator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
