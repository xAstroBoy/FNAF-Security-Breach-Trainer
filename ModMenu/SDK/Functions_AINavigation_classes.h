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
	 * BlueprintGeneratedClass Functions_AINavigation.Functions_AINavigation_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFunctions_AINavigation_C : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_GetClosestPointOnNavigationMesh__Horizontal_(const struct FVector& Location, float EdgePadding, float MaxRadius, float TestIncrement, int AngleResolution, bool VisibleFromLocation, TArray<class AActor*>* ActorsToIgnore, bool DrawDebug, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, class UObject* __WorldContext, struct FVector* ReturnLocation);
		bool STATIC_GetClosestPointOnNavigationMesh__Vertical_(const struct FVector& Location, float EdgePadding, float Radius, float TestIncrement, bool DrawDebug, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, class UObject* __WorldContext, struct FVector* ReturnLocation);
		bool STATIC_IsValidPointOnNavigationMesh(const struct FVector& Location, class UClass* FilterClass, class AController* Querier, class UObject* __WorldContext);
		bool STATIC_NavigationRaycastWithDebug(const struct FVector& RayStart, const struct FVector& RayEnd, class UClass* FilterClass, class AController* Querier, bool DrawDebug, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, class UObject* __WorldContext, struct FVector* HitLocation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
