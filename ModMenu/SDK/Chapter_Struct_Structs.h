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
	 * UserDefinedStruct Chapter_Struct.Chapter_Struct
	 * Size -> 0x00CE
	 */
	struct FChapter_Struct
	{
	public:
		class FName                                                Name_4_AC1BCB164A31CD831D44EE827FAA9B33;                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ID_24_BDA994DC49FA0F2355FA708C4220F6FE;                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LightScenario_23_D573B05544A911CE5781D89BABF0C004;       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpawnLocation_13_A0BA7CE44A5DC9D921BB78BE60E58BF6;       // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            SpawnRotation_55_F0D440BD4D3133E8E0B86B9DF912683F;       // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class FName>                                        ItemsCollected_25_0FC105084E0FB4D8036399899E189CC8;      // 0x0028(0x0010) Edit, BlueprintVisible
		TArray<class FName>                                        Activatables_40_71A6B6794E8A9EBE9EBF75A2B514F346;        // 0x0038(0x0010) Edit, BlueprintVisible
		TArray<class FName>                                        ActivatablesToKeep_61_B50A8306459D809617C6DDAC8A3E2994;  // 0x0048(0x0010) Edit, BlueprintVisible
		struct FDLC_RabbitSaveData                                 DLCRabbitAISave_46_3652DC8D412014940699438C5DE0E272;     // 0x0058(0x005C) Edit, BlueprintVisible, NoDestructor
		unsigned char                                              UnknownData_CNB7[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnimatronicTypeData>                        DLCRabbit_AlertType_52_779648D04D04017787BE7982B7E37B4D; // 0x00B8(0x0010) Edit, BlueprintVisible
		int32_t                                                    DLCRabbit_AlertNumber_50_391FD2C64086C898EF7F7495AB3FD2E5; // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMapArea                                                   ChapterMapArea_43_37F7810346EBB56D8E3A2A903B6A77DC;      // 0x00CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceCrouchOnChapterLoad_57_10C204CA486BD26E5CAC3486AD02C528; // 0x00CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
