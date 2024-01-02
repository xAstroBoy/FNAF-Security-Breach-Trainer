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
	 * UserDefinedStruct SeekerHourlyUpdate.SeekerHourlyUpdate
	 * Size -> 0x0018
	 */
	struct FSeekerHourlyUpdate
	{
	public:
		struct FFNAFTime                                           EndTime_3_065E2C3A415BC736A1D1DE9AC74551D9;              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInterface*>                          MaterialOverrides_7_4626726B40EBCF5570742CBABF1FF636;    // 0x0008(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
