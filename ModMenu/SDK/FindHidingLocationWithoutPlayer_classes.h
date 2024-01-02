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
	 * BlueprintGeneratedClass FindHidingLocationWithoutPlayer.FindHidingLocationWithoutPlayer_C
	 * Size -> 0x002C (FullSize[0x012C] - InheritedSize[0x0100])
	 */
	class UFindHidingLocationWithoutPlayer_C : public UFindHidingLocation_C
	{
	public:
		struct FBlackboardKeySelector                              RangeLocation;                                           // 0x0100(0x0028) Edit, BlueprintVisible
		float                                                      RangeDistance;                                           // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetHideActor(TArray<class AActor*>* HideActors, class AAIController* AIController, class APawn* Pawn, class AActor** Actor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
