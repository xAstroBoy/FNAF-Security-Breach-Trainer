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
	 * Function PRE_DecalText.PRE_DecalText_C.Update
	 */
	struct APRE_DecalText_C_Update_Params
	{	};

	/**
	 * Function PRE_DecalText.PRE_DecalText_C.UserConstructionScript
	 */
	struct APRE_DecalText_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PRE_DecalText.PRE_DecalText_C.DoWork
	 */
	struct APRE_DecalText_C_DoWork_Params
	{	};

	/**
	 * Function PRE_DecalText.PRE_DecalText_C.ReceiveBeginPlay
	 */
	struct APRE_DecalText_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PRE_DecalText.PRE_DecalText_C.ExecuteUbergraph_PRE_DecalText
	 */
	struct APRE_DecalText_C_ExecuteUbergraph_PRE_DecalText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8GZ2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
