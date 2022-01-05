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
	 * UserDefinedStruct S_CheckpointArray.S_CheckpointArray
	 * Size -> 0x0010
	 */
	struct FS_CheckpointArray
	{
	public:
		TArray<class ACheckPoint_C*>                               Checkpooints_3_40DFC11845DF4F2ACA7DCD97A6CEB9AE;         // 0x0000(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
