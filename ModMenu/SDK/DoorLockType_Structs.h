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
	 * UserDefinedEnum DoorLockType.DoorLockType
	 */
	enum class EDoorLockType : uint8_t
	{
		DoorLockTypeNewEnumerator0   = 0,
		DoorLockTypeNewEnumerator1   = 1,
		DoorLockTypeNewEnumerator2   = 2,
		DoorLockTypeNewEnumerator3   = 3,
		DoorLockTypeDoorLockType_MAX = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
