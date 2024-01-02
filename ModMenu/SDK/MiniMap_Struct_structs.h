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
	 * UserDefinedStruct MiniMap_Struct.MiniMap_Struct
	 * Size -> 0x0028
	 */
	struct FMiniMap_Struct
	{
	public:
		struct FVector2D                                           UpperBounds_13_C37CFAA24CC5F55A03B687A1612B55D6;         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           LowerBounds_15_D336D69E45D7CF08167C8E908FA5D615;         // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          MapImage_2_FDE2C1E946903D5DE21A42B241D13240;             // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        StreamingLevels_19_265AD18A466CF083583E308B4979C221;     // 0x0018(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
