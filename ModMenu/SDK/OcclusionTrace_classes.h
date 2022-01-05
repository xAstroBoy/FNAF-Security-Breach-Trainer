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
	 * BlueprintGeneratedClass OcclusionTrace.OcclusionTrace_C
	 * Size -> 0x0021 (FullSize[0x0249] - InheritedSize[0x0228])
	 */
	class AOcclusionTrace_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             endpointvector;                                          // 0x0238(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OcclusionOutputValue;                                    // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SingleTraceOnly;                                         // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetOcclusion(class AActor* SourceActor, float Angle, float MaxAttenuation, float OffsetDistance, float y_offset, bool SingleTraceOnly);
		void GetOcclusionForLocation(class AActor* SourceActor, float Angle, float MaxAttenuation, float OffsetDistance, float y_offset, const struct FVector& Location, bool SingleTraceOnly);
		void ExecuteUbergraph_OcclusionTrace(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
