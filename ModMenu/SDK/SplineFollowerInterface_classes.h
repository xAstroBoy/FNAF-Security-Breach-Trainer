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
	 * BlueprintGeneratedClass SplineFollowerInterface.SplineFollowerInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USplineFollowerInterface_C : public UInterface
	{
	public:
		void SetSplineFollowerContext(const struct FSplineFollowerContext& SplineFollowerContext);
		void GetSplineFollowerContext(struct FSplineFollowerContext* SplineFollowerContext);
		void GetPossibleSplinePaths(TArray<class ASplinePathway_C*>* PossiblePaths);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
