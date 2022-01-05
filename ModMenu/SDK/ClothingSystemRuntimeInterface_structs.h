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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
	 * Size -> 0x004C
	 */
	struct FClothVertBoneData
	{
	public:
		int                                                        NumInfluences;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   BoneIndices[0xC];                                        // 0x0004(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneWeights[0xC];                                        // 0x001C(0x0030) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
	 * Size -> 0x0014
	 */
	struct FClothCollisionPrim_Sphere
	{
	public:
		int                                                        BoneIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocalPosition;                                           // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
	 * Size -> 0x0008
	 */
	struct FClothCollisionPrim_SphereConnection
	{
	public:
		int                                                        SphereIndices[0x2];                                      // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
	 * Size -> 0x0030
	 */
	struct FClothCollisionPrim_Box
	{
	public:
		struct FVector                                             LocalPosition;                                           // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZJE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               LocalRotation;                                           // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             HalfExtents;                                             // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        BoneIndex;                                               // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
	 * Size -> 0x0028
	 */
	struct FClothCollisionPrim_Convex
	{
	public:
		TArray<struct FPlane>                                      Planes;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     SurfacePoints;                                           // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        BoneIndex;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K8FG[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
	 * Size -> 0x0040
	 */
	struct FClothCollisionData
	{
	public:
		TArray<struct FClothCollisionPrim_Sphere>                  Spheres;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FClothCollisionPrim_SphereConnection>        SphereConnections;                                       // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FClothCollisionPrim_Convex>                  Convexes;                                                // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FClothCollisionPrim_Box>                     Boxes;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
