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
	 * BlueprintGeneratedClass FindPointOfInterest.FindPointOfInterest_C
	 * Size -> 0x00C0 (FullSize[0x01B8] - InheritedSize[0x00F8])
	 */
	class UFindPointOfInterest_C : public UAIRoomTask_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              BBPointOfInterestTag;                                    // 0x0100(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              BBPointOfInterestLocation;                               // 0x0128(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              BBPointOfInterestIndex;                                  // 0x0150(0x0028) Edit, BlueprintVisible
		float                                                      POISearchRadius;                                         // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_592P[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BBPointOfInterestRoom;                                   // 0x0180(0x0028) Edit, BlueprintVisible
		TArray<struct FPOIResult>                                  PossiblePOIs;                                            // 0x01A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void DeterminePoint();
		void Receive_Execute_AI_With_Room(class AAIController* OwnerController, class APawn* ControlledPawn, class ARoomAreaBase* Room);
		void ExecuteUbergraph_FindPointOfInterest(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
