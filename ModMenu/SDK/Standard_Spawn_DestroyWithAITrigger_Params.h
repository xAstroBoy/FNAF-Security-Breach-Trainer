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
	 * Function Standard_Spawn_DestroyWithAITrigger.Standard_Spawn_DestroyWithAITrigger_C.OnTriggered
	 */
	struct AStandard_Spawn_DestroyWithAITrigger_C_OnTriggered_Params
	{
	};

	/**
	 * Function Standard_Spawn_DestroyWithAITrigger.Standard_Spawn_DestroyWithAITrigger_C.OnAIAlerted
	 */
	struct AStandard_Spawn_DestroyWithAITrigger_C_OnAIAlerted_Params
	{
	public:
		class FName                                                Alert;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Standard_Spawn_DestroyWithAITrigger.Standard_Spawn_DestroyWithAITrigger_C.ExecuteUbergraph_Standard_Spawn_DestroyWithAITrigger
	 */
	struct AStandard_Spawn_DestroyWithAITrigger_C_ExecuteUbergraph_Standard_Spawn_DestroyWithAITrigger_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
