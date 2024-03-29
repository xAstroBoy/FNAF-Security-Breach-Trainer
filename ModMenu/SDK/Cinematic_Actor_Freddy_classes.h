﻿#pragma once

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
	 * BlueprintGeneratedClass Cinematic_Actor_Freddy.Cinematic_Actor_Freddy_C
	 * Size -> 0x0014 (FullSize[0x0260] - InheritedSize[0x024C])
	 */
	class ACinematic_Actor_Freddy_C : public ACinematic_Actor_Base_C
	{
	public:
		unsigned char                                              UnknownData_GBFQ[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0250(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCharacterHourlyMaterialComponent_C*                 CharacterHourlyMaterialComponent;                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Cinematic_Actor_Freddy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
