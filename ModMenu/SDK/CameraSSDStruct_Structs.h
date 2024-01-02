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
	 * UserDefinedStruct CameraSSDStruct.CameraSSDStruct
	 * Size -> 0x0050
	 */
	struct FCameraSSDStruct
	{
	public:
		unsigned char                                              Camera_2_F673984C4514FAAC93DD909A977FEBA8[0x28];         // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SSD_5_56C31D704769566D947A469035B0331A[0x28];            // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
