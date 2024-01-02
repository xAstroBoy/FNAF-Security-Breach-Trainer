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
	 * UserDefinedEnum DoubleGateLockState.DoubleGateLockState
	 */
	enum class EDoubleGateLockState : uint8_t
	{
		DoubleGateLockStateNewEnumerator0          = 0,
		DoubleGateLockStateNewEnumerator1          = 1,
		DoubleGateLockStateNewEnumerator2          = 2,
		DoubleGateLockStateNewEnumerator3          = 3,
		DoubleGateLockStateDoubleGateLockState_MAX = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
