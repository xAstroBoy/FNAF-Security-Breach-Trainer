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
	 * Function AreaManager.AreaManager_C.UserConstructionScript
	 */
	struct AAreaManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function AreaManager.AreaManager_C.ReceiveBeginPlay
	 */
	struct AAreaManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function AreaManager.AreaManager_C.On Player Entered Room
	 */
	struct AAreaManager_C_OnPlayerEnteredRoom_Params
	{
	public:
		class ARoomAreaBase*                                       Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AreaManager.AreaManager_C.ExecuteUbergraph_AreaManager
	 */
	struct AAreaManager_C_ExecuteUbergraph_AreaManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EGS8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AreaManager.AreaManager_C.OnPlayerEnteredArea__DelegateSignature
	 */
	struct AAreaManager_C_OnPlayerEnteredArea__DelegateSignature_Params
	{
	public:
		EAreas                                                     NewArea;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
