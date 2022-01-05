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
	 * BlueprintGeneratedClass GetLocationFromPath.GetLocationFromPath_C
	 * Size -> 0x0080 (FullSize[0x0128] - InheritedSize[0x00A8])
	 */
	class UGetLocationFromPath_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              LocationKey;                                             // 0x00B0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              PathKey;                                                 // 0x00D8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              PointIndexKey;                                           // 0x0100(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_GetLocationFromPath(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
