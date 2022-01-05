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
	 * BlueprintGeneratedClass Cinematic_Actor_Ending.Cinematic_Actor_Ending_C
	 * Size -> 0x0014 (FullSize[0x0260] - InheritedSize[0x024C])
	 */
	class ACinematic_Actor_Ending_C : public ACinematic_Actor_Base_C
	{
	public:
		unsigned char                                              UnknownData_3WF7[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterHourlyMaterialComponent_C*                 CharacterHourlyMaterialComponent;                        // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCineCameraComponent*                                CineCamera;                                              // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
