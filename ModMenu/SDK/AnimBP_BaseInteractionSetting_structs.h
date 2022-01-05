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
	 * UserDefinedStruct AnimBP_BaseInteractionSetting.AnimBP_BaseInteractionSetting
	 * Size -> 0x0030
	 */
	struct FAnimBP_BaseInteractionSetting
	{
	public:
		bool                                                       Enable_1_5C4577F14F311C2AC89579B804160B9B;               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LPHP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Base_8_A2755E1C41572732C820DB83A2ADA932[0x28];           // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
