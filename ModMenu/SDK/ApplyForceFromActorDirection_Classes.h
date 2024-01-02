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
	 * BlueprintGeneratedClass ApplyForceFromActorDirection.ApplyForceFromActorDirection_C
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UApplyForceFromActorDirection_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		struct FVector GetForceDirection(class AActor* SourceActor);
		void ApplyForce(class AActor* ForceActor, TArray<class UPrimitiveComponent*> Primitives, float Magnitude);
		void ExecuteUbergraph_ApplyForceFromActorDirection(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
