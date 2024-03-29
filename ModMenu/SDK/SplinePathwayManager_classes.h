﻿#pragma once

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
	 * BlueprintGeneratedClass SplinePathwayManager.SplinePathwayManager_C
	 * Size -> 0x0088 (FullSize[0x02B0] - InheritedSize[0x0228])
	 */
	class ASplinePathwayManager_C : public AActor
	{
	public:
		class USceneComponent*                                     Root;                                                    // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              StartingSplines[0x10];                                   // 0x0230(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              AllSplines[0x10];                                        // 0x0240(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TMap<class ASplinePathway_C*, struct FPathwayForks>        SplineForks;                                             // 0x0250(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ASplinePathFork_C*>                           AllForks;                                                // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void GetChildForkPaths(class ASplinePathway_C** SplineIn, TArray<class ASplinePathFork_C*>* ForksUsed, class ASplinePathFork_C* OriginalFork, TArray<class ASplinePathway_C*>* OnesToCheck, TArray<class ASplinePathFork_C*>* OutForks);
		void FindClosestSplineAndPointSoftRef(const struct FVector& WorldLocation, class ASplinePathway_C** Spline, struct FVector* SplineLocation);
		void FindClosestSplineUsingForks(struct FVector* WorldLocation, TArray<class ASplinePathway_C*>* Splines, class ASplinePathway_C** SplineOut, class ASplinePathFork_C** ForkOut);
		void SetupForks();
		void SelectStartSpline(class ASplinePathway_C** StartSpline);
		void RecurseSpline();
		void FindClosestDistAlongSpline(class ASplinePathway_C* Spline, const struct FVector& WorldLocation, float* DistAlongSpline);
		void FindClosestSplineAndPoint(const struct FVector& WorldLocation, TArray<class ASplinePathway_C*>* Splines, class ASplinePathway_C** Spline, struct FVector* SplineLocation);
		void SetupNewSplinePath(class ASplinePathway_C* NextSpline, struct FSplineFollowerContext* StructRef, bool UseDistance, float Distance, ESplineFollowDirection Direction);
		void GetPositionAtDistance(float DeltaDistance, struct FSplineFollowerContext* Context, struct FVector* WorldLocation, struct FVector* Forward);
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
