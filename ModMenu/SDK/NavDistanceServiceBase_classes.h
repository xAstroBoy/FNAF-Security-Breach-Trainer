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
	 * BlueprintGeneratedClass NavDistanceServiceBase.NavDistanceServiceBase_C
	 * Size -> 0x0028 (FullSize[0x00C0] - InheritedSize[0x0098])
	 */
	class UNavDistanceServiceBase_C : public UBTService_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              NavDistanceKey;                                          // 0x0098(0x0028) Edit, BlueprintVisible

	public:
		void NavDistance(class AActor* AIPawn, class APawn* OtherPawn, float* OutDistance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
