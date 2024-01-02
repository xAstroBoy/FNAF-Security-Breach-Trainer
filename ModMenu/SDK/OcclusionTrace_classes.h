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
	 * BlueprintGeneratedClass OcclusionTrace.OcclusionTrace_C
	 * Size -> 0x0014 (FullSize[0x023C] - InheritedSize[0x0228])
	 */
	class AOcclusionTrace_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      OcclusionOutputValue;                                    // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetOcclusionHelper(class AActor* SourceActor, float Angle, float MaxAttenuation, float OffsetDistance, float yoffset, bool SingleTraceOnlyIn, bool UseLocation, const struct FVector& Location);
		void GetOcclusion(class AActor* SourceActor, float Angle, float MaxAttenuation, float OffsetDistance, float yoffset, bool SingleTraceOnly);
		void GetOcclusionForLocation(class AActor* SourceActor, float Angle, float MaxAttenuation, float OffsetDistance, float yoffset, const struct FVector& Location, bool SingleTraceOnly);
		void ExecuteUbergraph_OcclusionTrace(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
