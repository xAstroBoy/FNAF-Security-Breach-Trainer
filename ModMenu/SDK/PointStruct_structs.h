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
	 * UserDefinedStruct PointStruct.PointStruct
	 * Size -> 0x0070
	 */
	struct FPointStruct
	{
	public:
		struct FVector                                             CurrentLocation_14_12380D874E52FBB07FC4DA8EFAA76801;     // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            CurrentRotation_35_D32D98844D50F467FB73E39A59723E88;     // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             CurrentScale_39_B8F82E85447C0FF86CDB29A316C67098;        // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPatrolPointType                                           PointID_12_8DB665B942320A7A682D6C83CD8D187D;             // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EQ13[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            PossibleNextLocation_21_8E2ED29647E1F705D894A08EA582B638; // 0x0028(0x0010) Edit, BlueprintVisible
		class FName                                                POITag_28_6B5CF22742FF1E93C63C89943A839863;              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ChildType_31_0482557E40D027BFBCA9488E78B99D67;           // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Child_42_93FB393A4D003C7147ABCFA5DA4A7AF8[0x28];         // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
