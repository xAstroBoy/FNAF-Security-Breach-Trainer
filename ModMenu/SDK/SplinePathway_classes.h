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
	 * BlueprintGeneratedClass SplinePathway.SplinePathway_C
	 * Size -> 0x0028 (FullSize[0x0250] - InheritedSize[0x0228])
	 */
	class ASplinePathway_C : public AActor
	{
	public:
		class USplineComponent*                                    Spline;                                                  // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FSplineConnection>                           ForwardSplines;                                          // 0x0230(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FSplineConnection>                           BackwardSplines;                                         // 0x0240(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash

	public:
		void FindDistanceClosestToLocation(const struct FVector& WorldLocation, float* Distance);
		void GetClosestEndPoint(const struct FVector& Location, const struct FVector& Forward, bool* IsStartPoint);
		void GetEndPointTangents(struct FVector* StartTangent, struct FVector* EndTangent);
		void GetEndPointLocations(struct FVector* StartPoint, struct FVector* EndPoint);
		void GetLocationAndTangent(float Distance, struct FVector* WorldLocation, struct FVector* WorldForward);
		float GetLength();
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
