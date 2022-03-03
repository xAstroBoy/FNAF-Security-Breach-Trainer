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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass DoorLockButton.DoorLockButton_C
	 * Size -> 0x0009 (FullSize[0x02F8] - InheritedSize[0x02EF])
	 */
	class ADoorLockButton_C : public ABasicButton_C
	{
	public:
		unsigned char                                              UnknownData_EDZT[0x1];                                   // 0x02EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDoorLockActivatorComponent_C*                       DoorLockActivatorComponent;                              // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void SetDoor();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
