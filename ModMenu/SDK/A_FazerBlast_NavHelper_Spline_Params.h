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
	 * Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.GetSplineSampleCount
	 */
	struct AA_FazerBlast_NavHelper_Spline_C_GetSplineSampleCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.DrawDebug
	 */
	struct AA_FazerBlast_NavHelper_Spline_C_DrawDebug_Params
	{
	};

	/**
	 * Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.PositionBoxes
	 */
	struct AA_FazerBlast_NavHelper_Spline_C_PositionBoxes_Params
	{
	};

	/**
	 * Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.GenerateOverlaps
	 */
	struct AA_FazerBlast_NavHelper_Spline_C_GenerateOverlaps_Params
	{
	};

	/**
	 * Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.OnOverlapped
	 */
	struct AA_FazerBlast_NavHelper_Spline_C_OnOverlapped_Params
	{
	public:
		class UPrimitiveComponent*                                 I_OverlappedComponent;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             I_OtherActor;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       I_IsDestination;                                         // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.UserConstructionScript
	 */
	struct AA_FazerBlast_NavHelper_Spline_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.ReceiveBeginPlay
	 */
	struct AA_FazerBlast_NavHelper_Spline_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.OnSplineOverlapped
	 */
	struct AA_FazerBlast_NavHelper_Spline_C_OnSplineOverlapped_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.OnBoxOverlapped
	 */
	struct AA_FazerBlast_NavHelper_Spline_C_OnBoxOverlapped_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function A_FazerBlast_NavHelper_Spline.A_FazerBlast_NavHelper_Spline_C.ExecuteUbergraph_A_FazerBlast_NavHelper_Spline
	 */
	struct AA_FazerBlast_NavHelper_Spline_C_ExecuteUbergraph_A_FazerBlast_NavHelper_Spline_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
