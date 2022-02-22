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
	 * Function KeyBindingIcon.KeyBindingIcon_C.SetKeyName
	 */
	struct UKeyBindingIcon_C_SetKeyName_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KeyBindingIcon.KeyBindingIcon_C.Set Icon
	 */
	struct UKeyBindingIcon_C_Set_Icon_Params
	{
	};

	/**
	 * Function KeyBindingIcon.KeyBindingIcon_C.ToggleIcon
	 */
	struct UKeyBindingIcon_C_ToggleIcon_Params
	{
	};

	/**
	 * Function KeyBindingIcon.KeyBindingIcon_C.PreConstruct
	 */
	struct UKeyBindingIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KeyBindingIcon.KeyBindingIcon_C.ExecuteUbergraph_KeyBindingIcon
	 */
	struct UKeyBindingIcon_C_ExecuteUbergraph_KeyBindingIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
