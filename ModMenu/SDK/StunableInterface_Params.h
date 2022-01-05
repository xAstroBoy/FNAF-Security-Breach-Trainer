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
	 * Function StunableInterface.StunableInterface_C.CanBeStunned
	 */
	struct UStunableInterface_C_CanBeStunned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function StunableInterface.StunableInterface_C.Unstun
	 */
	struct UStunableInterface_C_Unstun_Params
	{
	};

	/**
	 * Function StunableInterface.StunableInterface_C.IsStunned
	 */
	struct UStunableInterface_C_IsStunned_Params
	{
	public:
		bool                                                       IsStunned;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function StunableInterface.StunableInterface_C.Stun
	 */
	struct UStunableInterface_C_Stun_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
