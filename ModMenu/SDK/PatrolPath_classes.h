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
	 * BlueprintGeneratedClass PatrolPath.PatrolPath_C
	 * Size -> 0x0030 (FullSize[0x0258] - InheritedSize[0x0228])
	 */
	class APatrolPath_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAIPathComponent*                                    AIPath;                                                  // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLooping;                                               // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XKQY[0x3];                                   // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaitTime;                                                // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FPointStruct>                                Points;                                                  // 0x0248(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash

	public:
		struct FLinearColor GetPointColor(int32_t PointIndex);
		TArray<class FText> GetAvailablePointTypes();
		int32_t GetPointType(int32_t PointIndex);
		int32_t AddPoint(const struct FVector& Location);
		TArray<int32_t> GetPointsConnectedTo(int32_t PointIndex);
		int32_t GetNumberOfPathPoints();
		struct FVector GetPointLocation(int32_t PointIndex);
		void RemovePointInternal(int32_t IndexToRemove, int32_t InputPin);
		void ReceiveBeginPlay();
		void SetPointLocation(int32_t PointIndex, const struct FVector& Location);
		void AddPointConnection(int32_t PointIndex, int32_t PointToConnectIndex);
		void RemovePoint(int32_t PointIndex);
		void RemovePointConnection(int32_t PointIndex, int32_t PointToDisconnectIndex);
		void SetPointType(int32_t PointIndex, int32_t PointType);
		void ExecuteUbergraph_PatrolPath(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
