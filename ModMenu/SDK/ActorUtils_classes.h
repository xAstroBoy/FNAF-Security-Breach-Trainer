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
	 * BlueprintGeneratedClass ActorUtils.ActorUtils_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActorUtils_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetClosestActorFromList(TArray<class AActor*>* Actors, class AActor* TargetActor, class UObject* __WorldContext, class AActor** Actor, float* ActorDistance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
