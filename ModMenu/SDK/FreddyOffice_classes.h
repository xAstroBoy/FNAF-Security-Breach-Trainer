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
	 * BlueprintGeneratedClass FreddyOffice.FreddyOffice_C
	 * Size -> 0x0028 (FullSize[0x0948] - InheritedSize[0x0920])
	 */
	class AFreddyOffice_C : public AFreddy_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0920(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVisualSourceComponent*                              VisualSource_1;                                          // 0x0928(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FSplineFollowerContext                              SplineFollowerContext;                                   // 0x0930(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash

	public:
		void GetPossibleSplinePaths(TArray<class ASplinePathway_C*>* PossiblePaths);
		void GetSplineFollowerContext(struct FSplineFollowerContext* SplineFollowerContext);
		void ReceiveBeginPlay();
		void SetSplineFollowerContext(const struct FSplineFollowerContext& SplineFollowerContext);
		void ExecuteUbergraph_FreddyOffice(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
