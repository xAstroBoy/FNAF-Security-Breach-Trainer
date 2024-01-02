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
	 * Function Equippable.Equippable_C.Get Anim Item Type
	 */
	struct AEquippable_C_GetAnimItemType_Params
	{
	public:
		EGregoryAnimItemEnum                                       AnimType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Equippable.Equippable_C.PullOut
	 */
	struct AEquippable_C_PullOut_Params
	{	};

	/**
	 * Function Equippable.Equippable_C.PutAway
	 */
	struct AEquippable_C_PutAway_Params
	{	};

	/**
	 * Function Equippable.Equippable_C.PrimaryAction
	 */
	struct AEquippable_C_PrimaryAction_Params
	{	};

	/**
	 * Function Equippable.Equippable_C.SecondaryAction
	 */
	struct AEquippable_C_SecondaryAction_Params
	{	};

	/**
	 * Function Equippable.Equippable_C.ExecuteUbergraph_Equippable
	 */
	struct AEquippable_C_ExecuteUbergraph_Equippable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
