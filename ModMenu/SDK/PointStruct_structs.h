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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct PointStruct.PointStruct
	 * Size -> 0x0028
	 */
	struct FPointStruct
	{
	public:
		struct FVector                                             CurrentLocation_14_12380D874E52FBB07FC4DA8EFAA76801;     // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<PatrolPointType_EPatrolPointType>              PointID_12_8DB665B942320A7A682D6C83CD8D187D;             // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_75KC[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int>                                                PossibleNextLocation_21_8E2ED29647E1F705D894A08EA582B638; // 0x0010(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		class FName                                                POITag_28_6B5CF22742FF1E93C63C89943A839863;              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
