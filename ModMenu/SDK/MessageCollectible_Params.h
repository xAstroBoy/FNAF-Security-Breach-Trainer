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
	 * Function MessageCollectible.MessageCollectible_C.GetInteractibleType
	 */
	struct AMessageCollectible_C_GetInteractibleType_Params
	{
	public:
		TEnumAsByte<InteractibleType_EInteractibleType>            Type;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TEnumAsByte<InteractiblePressType_EInteractiblePressType>  PressType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MessageCollectible.MessageCollectible_C.GetInstructionOverride
	 */
	struct AMessageCollectible_C_GetInstructionOverride_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function MessageCollectible.MessageCollectible_C.GetHUDInstruction
	 */
	struct AMessageCollectible_C_GetHUDInstruction_Params
	{
	public:
		class FText                                                Instruction;                                             // 0x0000(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function MessageCollectible.MessageCollectible_C.UserConstructionScript
	 */
	struct AMessageCollectible_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function MessageCollectible.MessageCollectible_C.OnFailure_4B0F52EA45CC0AEF35D733B36267DE77
	 */
	struct AMessageCollectible_C_OnFailure_4B0F52EA45CC0AEF35D733B36267DE77_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MessageCollectible.MessageCollectible_C.OnSuccess_4B0F52EA45CC0AEF35D733B36267DE77
	 */
	struct AMessageCollectible_C_OnSuccess_4B0F52EA45CC0AEF35D733B36267DE77_Params
	{
	public:
		class FName                                                WrittenAchievementName;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WrittenProgress;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        WrittenUserTag;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MessageCollectible.MessageCollectible_C.OnFailure_5B0B2E1D480E298DA757F2B41ABB5A3B
	 */
	struct AMessageCollectible_C_OnFailure_5B0B2E1D480E298DA757F2B41ABB5A3B_Params
	{
	};

	/**
	 * Function MessageCollectible.MessageCollectible_C.OnSuccess_5B0B2E1D480E298DA757F2B41ABB5A3B
	 */
	struct AMessageCollectible_C_OnSuccess_5B0B2E1D480E298DA757F2B41ABB5A3B_Params
	{
	};

	/**
	 * Function MessageCollectible.MessageCollectible_C.ReceiveBeginPlay
	 */
	struct AMessageCollectible_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MessageCollectible.MessageCollectible_C.OnBeginCollect
	 */
	struct AMessageCollectible_C_OnBeginCollect_Params
	{
	};

	/**
	 * Function MessageCollectible.MessageCollectible_C.OnCollect
	 */
	struct AMessageCollectible_C_OnCollect_Params
	{
	};

	/**
	 * Function MessageCollectible.MessageCollectible_C.ExecuteUbergraph_MessageCollectible
	 */
	struct AMessageCollectible_C_ExecuteUbergraph_MessageCollectible_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
