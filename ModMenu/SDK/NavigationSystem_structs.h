﻿#pragma once

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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum NavigationSystem.ERuntimeGenerationType
	 */
	enum class NavigationSystem_ERuntimeGenerationType : uint8_t
	{
		ERuntimeGenerationType__Static                     = 0,
		ERuntimeGenerationType__DynamicModifiersOnly       = 1,
		ERuntimeGenerationType__Dynamic                    = 2,
		ERuntimeGenerationType__LegacyGeneration           = 3,
		ERuntimeGenerationType__ERuntimeGenerationType_MAX = 4
	};

	/**
	 * Enum NavigationSystem.ENavCostDisplay
	 */
	enum class NavigationSystem_ENavCostDisplay : uint8_t
	{
		ENavCostDisplay__TotalCost           = 0,
		ENavCostDisplay__HeuristicOnly       = 1,
		ENavCostDisplay__RealCostOnly        = 2,
		ENavCostDisplay__ENavCostDisplay_MAX = 3
	};

	/**
	 * Enum NavigationSystem.ENavSystemOverridePolicy
	 */
	enum class NavigationSystem_ENavSystemOverridePolicy : uint8_t
	{
		ENavSystemOverridePolicy__Override                     = 0,
		ENavSystemOverridePolicy__Append                       = 1,
		ENavSystemOverridePolicy__Skip                         = 2,
		ENavSystemOverridePolicy__ENavSystemOverridePolicy_MAX = 3
	};

	/**
	 * Enum NavigationSystem.ERecastPartitioning
	 */
	enum class NavigationSystem_ERecastPartitioning : uint8_t
	{
		ERecastPartitioning__Monotone                = 0,
		ERecastPartitioning__Watershed               = 1,
		ERecastPartitioning__ChunkyMonotone          = 2,
		ERecastPartitioning__ERecastPartitioning_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NavigationSystem.SupportedAreaData
	 * Size -> 0x0020
	 */
	struct FSupportedAreaData
	{
	public:
		class FString                                              AreaClassName;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AreaID;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGBO[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AreaClass;                                               // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct NavigationSystem.NavCollisionCylinder
	 * Size -> 0x0014
	 */
	struct FNavCollisionCylinder
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct NavigationSystem.NavCollisionBox
	 * Size -> 0x0018
	 */
	struct FNavCollisionBox
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Extent;                                                  // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct NavigationSystem.NavGraphNode
	 * Size -> 0x0018
	 */
	struct FNavGraphNode
	{
	public:
		class UObject*                                             Owner;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_74FK[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct NavigationSystem.NavigationFilterArea
	 * Size -> 0x0018
	 */
	struct FNavigationFilterArea
	{
	public:
		class UClass*                                              AreaClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TravelCostOverride;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnteringCostOverride;                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsExcluded : 1;                                         // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideTravelCost : 1;                                 // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideEnteringCost : 1;                               // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMDY[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct NavigationSystem.NavigationFilterFlags
	 * Size -> 0x0004
	 */
	struct FNavigationFilterFlags
	{
	public:
		unsigned char                                              bNavFlag0 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag1 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag2 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag3 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag4 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag5 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag6 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag7 : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag8 : 1;                                           // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag9 : 1;                                           // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag10 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag11 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag12 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag13 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag14 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNavFlag15 : 1;                                          // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XX30[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct NavigationSystem.NavGraphEdge
	 * Size -> 0x0018
	 */
	struct FNavGraphEdge
	{
	public:
		unsigned char                                              UnknownData_E6JW[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct NavigationSystem.NavLinkCustomInstanceData
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	struct FNavLinkCustomInstanceData : public FActorComponentInstanceData
	{
	public:
		uint32_t                                                   NavLinkUserId;                                           // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4RY[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
	 * Size -> 0x0040
	 */
	struct FRecastNavMeshGenerationProperties
	{
	public:
		int32_t                                                    TilePoolSize;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileSizeUU;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellSize;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellHeight;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentRadius;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentHeight;                                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentMaxSlope;                                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentMaxStepHeight;                                      // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRegionArea;                                           // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MergeRegionSize;                                         // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSimplificationError;                                  // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TileNumberHardLimit;                                     // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		NavigationSystem_ERecastPartitioning                       RegionPartitioning;                                      // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		NavigationSystem_ERecastPartitioning                       LayerPartitioning;                                       // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XDT2[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RegionChunkSplits;                                       // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LayerChunkSplits;                                        // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSortNavigationAreasByCost : 1;                          // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPerformVoxelFiltering : 1;                              // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMarkLowHeightAreas : 1;                                 // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFilterLowSpanSequences : 1;                             // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFilterLowSpanFromTileCache : 1;                         // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFixedTilePoolSize : 1;                                  // 0x003C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SMIE[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
