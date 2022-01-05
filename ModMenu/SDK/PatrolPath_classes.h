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
		unsigned char                                              UnknownData_MTY1[0x3];                                   // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaitTime;                                                // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FPointStruct>                                Points;                                                  // 0x0248(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash

	public:
		struct FLinearColor GetPointColor(int PointIndex);
		TArray<class FText> GetAvailablePointTypes();
		int GetPointType(int PointIndex);
		int AddPoint(const struct FVector& Location);
		TArray<int> GetPointsConnectedTo(int PointIndex);
		int GetNumberOfPathPoints();
		struct FVector GetPointLocation(int PointIndex);
		void RemovePointInternal(int IndexToRemove, int InputPin);
		void ReceiveBeginPlay();
		void SetPointLocation(int PointIndex, const struct FVector& Location);
		void AddPointConnection(int PointIndex, int PointToConnectIndex);
		void RemovePoint(int PointIndex);
		void RemovePointConnection(int PointIndex, int PointToDisconnectIndex);
		void SetPointType(int PointIndex, int PointType);
		void ExecuteUbergraph_PatrolPath(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
