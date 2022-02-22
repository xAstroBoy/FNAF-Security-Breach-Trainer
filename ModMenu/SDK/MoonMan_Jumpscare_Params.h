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
	 * Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.OnCheckpointSave
	 */
	struct AMoonMan_Jumpscare_C_OnCheckpointSave_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.OnGameDataLoaded
	 */
	struct AMoonMan_Jumpscare_C_OnGameDataLoaded_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.OnStoreGameData
	 */
	struct AMoonMan_Jumpscare_C_OnStoreGameData_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.PostSaveGame
	 */
	struct AMoonMan_Jumpscare_C_PostSaveGame_Params
	{
	};

	/**
	 * Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.ReceiveBeginPlay
	 */
	struct AMoonMan_Jumpscare_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.PostGameLoad
	 */
	struct AMoonMan_Jumpscare_C_PostGameLoad_Params
	{
	};

	/**
	 * Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.OnCheckpointLoad
	 */
	struct AMoonMan_Jumpscare_C_OnCheckpointLoad_Params
	{
	public:
		class UFNAFSaveData*                                       SaveDataObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MoonMan_Jumpscare.MoonMan_Jumpscare_C.ExecuteUbergraph_MoonMan_Jumpscare
	 */
	struct AMoonMan_Jumpscare_C_ExecuteUbergraph_MoonMan_Jumpscare_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
