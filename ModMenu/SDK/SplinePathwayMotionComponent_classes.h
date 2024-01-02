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
	 * BlueprintGeneratedClass SplinePathwayMotionComponent.SplinePathwayMotionComponent_C
	 * Size -> 0x0030 (FullSize[0x0120] - InheritedSize[0x00F0])
	 */
	class USplinePathwayMotionComponent_C : public USplineFollowMovementComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              SplinePathway[0x28];                                     // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_SplinePathwayMotionComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
