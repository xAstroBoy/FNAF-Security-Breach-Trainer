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
	 * Function PRE_FazXpress.PRE_FazXpress_C.UserConstructionScript
	 */
	struct APRE_FazXpress_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function PRE_FazXpress.PRE_FazXpress_C.DoorMovement__FinishedFunc
	 */
	struct APRE_FazXpress_C_DoorMovement__FinishedFunc_Params
	{
	};

	/**
	 * Function PRE_FazXpress.PRE_FazXpress_C.DoorMovement__UpdateFunc
	 */
	struct APRE_FazXpress_C_DoorMovement__UpdateFunc_Params
	{
	};

	/**
	 * Function PRE_FazXpress.PRE_FazXpress_C.Timeline_0__FinishedFunc
	 */
	struct APRE_FazXpress_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function PRE_FazXpress.PRE_FazXpress_C.Timeline_0__UpdateFunc
	 */
	struct APRE_FazXpress_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function PRE_FazXpress.PRE_FazXpress_C.ReceiveBeginPlay
	 */
	struct APRE_FazXpress_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function PRE_FazXpress.PRE_FazXpress_C.DoorOpenClose
	 */
	struct APRE_FazXpress_C_DoorOpenClose_Params
	{
	public:
		bool                                                       Open_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PRE_FazXpress.PRE_FazXpress_C.Give Pizza
	 */
	struct APRE_FazXpress_C_Give_Pizza_Params
	{
	public:
		class UChildActorComponent*                                pizza;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_FazXpress.PRE_FazXpress_C.Give Pizza Tray Open
	 */
	struct APRE_FazXpress_C_Give_Pizza_Tray_Open_Params
	{
	};

	/**
	 * Function PRE_FazXpress.PRE_FazXpress_C.Take Pizza
	 */
	struct APRE_FazXpress_C_Take_Pizza_Params
	{
	public:
		class UChildActorComponent*                                pizza;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_FazXpress.PRE_FazXpress_C.Give Pizza Tray Closed
	 */
	struct APRE_FazXpress_C_Give_Pizza_Tray_Closed_Params
	{
	};

	/**
	 * Function PRE_FazXpress.PRE_FazXpress_C.Allow Take Pizza
	 */
	struct APRE_FazXpress_C_Allow_Take_Pizza_Params
	{
	};

	/**
	 * Function PRE_FazXpress.PRE_FazXpress_C.ExecuteUbergraph_PRE_FazXpress
	 */
	struct APRE_FazXpress_C_ExecuteUbergraph_PRE_FazXpress_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PRE_FazXpress.PRE_FazXpress_C.On Take Pizza__DelegateSignature
	 */
	struct APRE_FazXpress_C_On_Take_Pizza__DelegateSignature_Params
	{
	};

	/**
	 * Function PRE_FazXpress.PRE_FazXpress_C.On Tray Out__DelegateSignature
	 */
	struct APRE_FazXpress_C_On_Tray_Out__DelegateSignature_Params
	{
	};

	/**
	 * Function PRE_FazXpress.PRE_FazXpress_C.On Tray In__DelegateSignature
	 */
	struct APRE_FazXpress_C_On_Tray_In__DelegateSignature_Params
	{
	};

	/**
	 * Function PRE_FazXpress.PRE_FazXpress_C.On Door Closed__DelegateSignature
	 */
	struct APRE_FazXpress_C_On_Door_Closed__DelegateSignature_Params
	{
	};

	/**
	 * Function PRE_FazXpress.PRE_FazXpress_C.On Door Open__DelegateSignature
	 */
	struct APRE_FazXpress_C_On_Door_Open__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
