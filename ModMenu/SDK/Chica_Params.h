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
	 * Function Chica.Chica_C.ReceiveBeginPlay
	 */
	struct AChica_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Chica.Chica_C.On Garbage Detected
	 */
	struct AChica_C_On_Garbage_Detected_Params
	{
	public:
		struct FVector                                             GarbageLocation;                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Chica.Chica_C.Smash In Compactor
	 */
	struct AChica_C_Smash_In_Compactor_Params
	{
	};

	/**
	 * Function Chica.Chica_C.Set Creep Mode
	 */
	struct AChica_C_Set_Creep_Mode_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Chica.Chica_C.ExecuteUbergraph_Chica
	 */
	struct AChica_C_ExecuteUbergraph_Chica_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
