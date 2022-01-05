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
	 * Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.SetBlackBoardKeys
	 */
	struct UFazerBlast_FindLocationAtDistance_C_SetBlackBoardKeys_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             PlayerLocation;                                          // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.GetBestLocation
	 */
	struct UFazerBlast_FindLocationAtDistance_C_GetBestLocation_Params
	{
	public:
		class APawn*                                               ControlledPawn;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             PlayerLocation;                                          // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.NavRays_Score
	 */
	struct UFazerBlast_FindLocationAtDistance_C_NavRays_Score_Params
	{
	public:
		class APawn*                                               ControlledPawn;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InDirection;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InStart;                                                 // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FVector>                                     NavRay_Ends;                                             // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		struct FVector                                             ReturnBestLocation;                                      // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.NavRays_Correct
	 */
	struct UFazerBlast_FindLocationAtDistance_C_NavRays_Correct_Params
	{
	public:
		struct FVector                                             InDirection;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InStart;                                                 // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FVector>                                     InNavRay_Ends;                                           // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		struct FVector                                             OutDirection;                                            // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             OutStart;                                                // 0x0044(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FVector>                                     OutNavRay_Ends;                                          // 0x0050(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.NavRays_Cast
	 */
	struct UFazerBlast_FindLocationAtDistance_C_NavRays_Cast_Params
	{
	public:
		class APawn*                                               ControlledPawn;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class AActor*>                                      ActorsToIgnore;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		struct FVector                                             Direction;                                               // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Start;                                                   // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FVector>                                     NavRay_Ends;                                             // 0x0030(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.Process
	 */
	struct UFazerBlast_FindLocationAtDistance_C_Process_Params
	{
	public:
		class APawn*                                               ControlledPawn;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.ReceiveExecuteAI
	 */
	struct UFazerBlast_FindLocationAtDistance_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FazerBlast_FindLocationAtDistance.FazerBlast_FindLocationAtDistance_C.ExecuteUbergraph_FazerBlast_FindLocationAtDistance
	 */
	struct UFazerBlast_FindLocationAtDistance_C_ExecuteUbergraph_FazerBlast_FindLocationAtDistance_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
