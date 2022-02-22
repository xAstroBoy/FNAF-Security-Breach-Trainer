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
	 * Function MontyJump.MontyJump_C.Jump Check
	 */
	struct UMontyJump_C_Jump_Check_Params
	{
	public:
		class ACharacter*                                          Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MontyJump.MontyJump_C.OnNotifyEnd_95A8414241D4C3D70915AFB59A5B125F
	 */
	struct UMontyJump_C_OnNotifyEnd_95A8414241D4C3D70915AFB59A5B125F_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MontyJump.MontyJump_C.OnNotifyBegin_95A8414241D4C3D70915AFB59A5B125F
	 */
	struct UMontyJump_C_OnNotifyBegin_95A8414241D4C3D70915AFB59A5B125F_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MontyJump.MontyJump_C.OnInterrupted_95A8414241D4C3D70915AFB59A5B125F
	 */
	struct UMontyJump_C_OnInterrupted_95A8414241D4C3D70915AFB59A5B125F_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MontyJump.MontyJump_C.OnBlendOut_95A8414241D4C3D70915AFB59A5B125F
	 */
	struct UMontyJump_C_OnBlendOut_95A8414241D4C3D70915AFB59A5B125F_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MontyJump.MontyJump_C.OnCompleted_95A8414241D4C3D70915AFB59A5B125F
	 */
	struct UMontyJump_C_OnCompleted_95A8414241D4C3D70915AFB59A5B125F_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MontyJump.MontyJump_C.ReceiveExecuteAI
	 */
	struct UMontyJump_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MontyJump.MontyJump_C.ExecuteUbergraph_MontyJump
	 */
	struct UMontyJump_C_ExecuteUbergraph_MontyJump_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
