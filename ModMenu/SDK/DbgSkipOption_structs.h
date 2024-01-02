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
	 * UserDefinedStruct DbgSkipOption.DbgSkipOption
	 * Size -> 0x0019
	 */
	struct FDbgSkipOption
	{
	public:
		class FText                                                SkipName_6_0D36F26447206C61677BBAA08EA454EB;             // 0x0000(0x0018) Edit, BlueprintVisible
		EDbgPlayerPaths                                            SkipRoute_7_EADE4F5E446CC67B38EC55922430A44A;            // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
