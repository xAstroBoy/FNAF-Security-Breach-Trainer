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
	 * BlueprintGeneratedClass OGM_GatorGolf.OGM_GatorGolf_C
	 * Size -> 0x003F (FullSize[0x02F0] - InheritedSize[0x02B1])
	 */
	class AOGM_GatorGolf_C : public AMGM_OfficeGameManger_C
	{
	public:
		unsigned char                                              UnknownData_TIYV[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USetupSplineMovement_C*                              SetupSplineMovement;                                     // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              SpawnLoaction[0x28];                                     // 0x02C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class APawn*                                               AiBot;                                                   // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void On_Start();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
