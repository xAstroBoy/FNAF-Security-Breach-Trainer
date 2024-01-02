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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RoomSystem.RoomAdjacencyInfo
	 * Size -> 0x0060
	 */
	struct FRoomAdjacencyInfo
	{
	public:
		unsigned char                                              Room[0x28];                                              // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DoorActor[0x28];                                         // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    ThisRoomPointIndex;                                      // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DestinationRoomPointIndex;                               // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceBetweenPoints;                                   // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AM8H[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RoomSystem.RoomVisibilityPoint
	 * Size -> 0x0020
	 */
	struct FRoomVisibilityPoint
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LTA1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            IndexToVisiblePoints;                                    // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RoomSystem.PointOfInterestRuntimeInfo
	 * Size -> 0x0014
	 */
	struct FPointOfInterestRuntimeInfo
	{
	public:
		float                                                      CurrentHeat;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VisitTime;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WorldLocation;                                           // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RoomSystem.POIIndex
	 * Size -> 0x0010
	 */
	struct FPOIIndex
	{
	public:
		class ARoomAreaBase*                                       Room;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HQM0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RoomSystem.POIResult
	 * Size -> 0x0028
	 */
	struct FPOIResult
	{
	public:
		struct FPOIIndex                                           Index;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FPointOfInterestRuntimeInfo                         Info;                                                    // 0x0010(0x0014) Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NLMS[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RoomSystem.POIVisitAge
	 * Size -> 0x0028
	 */
	struct FPOIVisitAge
	{
	public:
		struct FPOIResult                                          POI;                                                     // 0x0000(0x0028) Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RoomSystem.PlayerRoomInfo
	 * Size -> 0x000C
	 */
	struct FPlayerRoomInfo
	{
	public:
		float                                                      LastVisitTime;                                           // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerTotalTimeSpent;                                    // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerTimeSpentRecent;                                   // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
