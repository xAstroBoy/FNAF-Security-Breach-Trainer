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
	 * BlueprintGeneratedClass SplinePathwayMotionComponent.SplinePathwayMotionComponent_C
	 * Size -> 0x0030 (FullSize[0x0110] - InheritedSize[0x00E0])
	 */
	class USplinePathwayMotionComponent_C : public USplineFollowMovementComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              SplinePathway[0x28];                                     // 0x00E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_SplinePathwayMotionComponent(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
