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
	// # Enums
	// --------------------------------------------------
	/**
	 * UserDefinedEnum FlashlightRechargeState.FlashlightRechargeState
	 */
	enum class EFlashlightRechargeState : uint8_t
	{
		FlashlightRechargeStateNewEnumerator0              = 0,
		FlashlightRechargeStateNewEnumerator1              = 1,
		FlashlightRechargeStateNewEnumerator2              = 2,
		FlashlightRechargeStateNewEnumerator3              = 3,
		FlashlightRechargeStateNewEnumerator4              = 4,
		FlashlightRechargeStateFlashlightRechargeState_MAX = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
