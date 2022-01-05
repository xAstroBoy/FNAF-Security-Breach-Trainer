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
	 * UserDefinedStruct VO_Anim_DS.VO_Anim_DS
	 * Size -> 0x0040
	 */
	struct FVO_Anim_DS
	{
	public:
		unsigned char                                              AK_Event_14_DF280E1F4E7A42DD40DF1FB95BA6CBEC[0x28];      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAnimSequence*                                       Anim_Sequence_15_C9E944884386691AF7BDC6A2D34018B6;       // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      Actor_Class_16_FA6E47D3482F1F2F702834995C7D952E;         // 0x0030(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
