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
	 * UserDefinedEnum ActivatableState.ActivatableState
	 */
	enum class EActivatableState : uint8_t
	{
		ActivatableStateNewEnumerator1       = 0,
		ActivatableStateNewEnumerator0       = 1,
		ActivatableStateNewEnumerator2       = 2,
		ActivatableStateNewEnumerator3       = 3,
		ActivatableStateActivatableState_MAX = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
