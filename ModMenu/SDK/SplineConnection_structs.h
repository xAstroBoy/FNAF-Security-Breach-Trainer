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
	 * UserDefinedStruct SplineConnection.SplineConnection
	 * Size -> 0x0039
	 */
	struct FSplineConnection
	{
	public:
		unsigned char                                              Spline_9_5DFD486A4D14DB6128D013ACD92E2CCF[0x28];         // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      Distance_2_2A201CF540050AA193C6A481DA6B6A46;             // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             VisibleLocation_5_DAD437954B1E49312F4BBD94F6CA8486;      // 0x002C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TEnumAsByte<SplineFollowDirection_ESplineFollowDirection>  Direction_12_F4BCD4E44AE4223437C5BD8CAE3A2989;           // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
