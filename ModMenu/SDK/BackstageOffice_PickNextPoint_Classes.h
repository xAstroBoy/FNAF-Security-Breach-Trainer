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
	 * BlueprintGeneratedClass BackstageOffice_PickNextPoint.BackstageOffice_PickNextPoint_C
	 * Size -> 0x00D0 (FullSize[0x0178] - InheritedSize[0x00A8])
	 */
	class UBackstageOffice_PickNextPoint_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              Backstage_Door_Manager;                                  // 0x00B0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              Door_Index;                                              // 0x00D8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              Door_Level;                                              // 0x0100(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              Location;                                                // 0x0128(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              ReachedOffice;                                           // 0x0150(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BackstageOffice_PickNextPoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
