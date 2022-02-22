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
	 * Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
	 */
	enum class ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy : uint8_t
	{
		EClothingWindMethod_Legacy__Legacy                  = 0,
		EClothingWindMethod_Legacy__Accurate                = 1,
		EClothingWindMethod_Legacy__EClothingWindMethod_MAX = 2
	};

	/**
	 * Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
	 */
	enum class ClothingSystemRuntimeCommon_EWeightMapTargetCommon : uint8_t
	{
		EWeightMapTargetCommon__None                       = 0,
		EWeightMapTargetCommon__MaxDistance                = 1,
		EWeightMapTargetCommon__BackstopDistance           = 2,
		EWeightMapTargetCommon__BackstopRadius             = 3,
		EWeightMapTargetCommon__AnimDriveMultiplier        = 4,
		EWeightMapTargetCommon__EWeightMapTargetCommon_MAX = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
	 * Size -> 0x0010
	 */
	struct FPointWeightMap
	{
	public:
		TArray<float>                                              Values;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
	 * Size -> 0x0010
	 */
	struct FClothConstraintSetup_Legacy
	{
	public:
		float                                                      Stiffness;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StiffnessMultiplier;                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchLimit;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CompressionLimit;                                        // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
	 * Size -> 0x00D4
	 */
	struct FClothConfig_Legacy
	{
	public:
		ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy     WindMethod;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_623Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FClothConstraintSetup_Legacy                        VerticalConstraintConfig;                                // 0x0004(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FClothConstraintSetup_Legacy                        HorizontalConstraintConfig;                              // 0x0014(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FClothConstraintSetup_Legacy                        BendConstraintConfig;                                    // 0x0024(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FClothConstraintSetup_Legacy                        ShearConstraintConfig;                                   // 0x0034(0x0010) NoDestructor, NativeAccessSpecifierPublic
		float                                                      SelfCollisionRadius;                                     // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelfCollisionStiffness;                                  // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelfCollisionCullScale;                                  // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Damping;                                                 // 0x0050(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Friction;                                                // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindDragCoefficient;                                     // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindLiftCoefficient;                                     // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LinearDrag;                                              // 0x0068(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularDrag;                                             // 0x0074(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LinearInertiaScale;                                      // 0x0080(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularInertiaScale;                                     // 0x008C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CentrifugalInertiaScale;                                 // 0x0098(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SolverFrequency;                                         // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StiffnessFrequency;                                      // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityScale;                                            // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             GravityOverride;                                         // 0x00B0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGravityOverride;                                     // 0x00BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJ0B[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TetherStiffness;                                         // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TetherLimit;                                             // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionThickness;                                      // 0x00C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimDriveSpringStiffness;                                // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimDriveDamperStiffness;                                // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
	 * Size -> 0x00F8
	 */
	struct FClothPhysicalMeshData
	{
	public:
		TArray<struct FVector>                                     Vertices;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     Normals;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           Indices;                                                 // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<uint32_t, struct FPointWeightMap>                     WeightMaps;                                              // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic
		TArray<float>                                              InverseMasses;                                           // 0x0080(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FClothVertBoneData>                          BoneData;                                                // 0x0090(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxBoneWeights;                                          // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumFixedVerts;                                           // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           SelfCollisionIndices;                                    // 0x00A8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              MaxDistances;                                            // 0x00B8(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              BackstopDistances;                                       // 0x00C8(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              BackstopRadiuses;                                        // 0x00D8(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              AnimDriveMultipliers;                                    // 0x00E8(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
	 * Size -> 0x0158
	 */
	struct FClothLODDataCommon
	{
	public:
		struct FClothPhysicalMeshData                              PhysicalMeshData;                                        // 0x0000(0x00F8) Edit, NativeAccessSpecifierPublic
		struct FClothCollisionData                                 CollisionData;                                           // 0x00F8(0x0040) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_13SV[0x20];                                  // 0x0138(0x0020) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
	 * Size -> 0x0030
	 */
	struct FClothParameterMask_Legacy
	{
	public:
		class FName                                                MaskName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ClothingSystemRuntimeCommon_EWeightMapTargetCommon         CurrentTarget;                                           // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1QD4[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxValue;                                                // 0x000C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinValue;                                                // 0x0010(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NC7X[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              Values;                                                  // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CMWE[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
