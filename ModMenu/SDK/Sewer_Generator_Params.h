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
	 * Function Sewer_Generator.Sewer_Generator_C.Activate Chica Trigger
	 */
	struct ASewer_Generator_C_ActivateChicaTrigger_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2D6R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Sewer_Generator.Sewer_Generator_C.ReceiveBeginPlay
	 */
	struct ASewer_Generator_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Sewer_Generator.Sewer_Generator_C.SetActivated
	 */
	struct ASewer_Generator_C_SetActivated_Params
	{	};

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
		unsigned char                                              UnknownData_PQX3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
