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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass StaffBotRacer.StaffBotRacer_C
	 * Size -> 0x000A (FullSize[0x06A8] - InheritedSize[0x069E])
	 */
	class AStaffBotRacer_C : public AStaffBotBase_C
	{
	public:
		unsigned char                                              UnknownData_GR8O[0x2];                                   // 0x069E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                MOD_HelmBasic1;                                          // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
