#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function PatrolPath.PatrolPath_C.GetPointColor
struct APatrolPath_C_GetPointColor_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ReturnValue;                                               // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PatrolPath.PatrolPath_C.GetAvailablePointTypes
struct APatrolPath_C_GetAvailablePointTypes_Params
{
	TArray<struct FText>                               ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// Function PatrolPath.PatrolPath_C.GetPointType
struct APatrolPath_C_GetPointType_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PatrolPath.PatrolPath_C.AddPoint
struct APatrolPath_C_AddPoint_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PatrolPath.PatrolPath_C.GetPointsConnectedTo
struct APatrolPath_C_GetPointsConnectedTo_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// Function PatrolPath.PatrolPath_C.GetNumberOfPathPoints
struct APatrolPath_C_GetNumberOfPathPoints_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PatrolPath.PatrolPath_C.GetPointLocation
struct APatrolPath_C_GetPointLocation_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PatrolPath.PatrolPath_C.RemovePointInternal
struct APatrolPath_C_RemovePointInternal_Params
{
	int                                                IndexToRemove;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InputPin;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PatrolPath.PatrolPath_C.ReceiveBeginPlay
struct APatrolPath_C_ReceiveBeginPlay_Params
{
};

// Function PatrolPath.PatrolPath_C.SetPointLocation
struct APatrolPath_C_SetPointLocation_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PatrolPath.PatrolPath_C.AddPointConnection
struct APatrolPath_C_AddPointConnection_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PointToConnectIndex;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PatrolPath.PatrolPath_C.RemovePoint
struct APatrolPath_C_RemovePoint_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PatrolPath.PatrolPath_C.RemovePointConnection
struct APatrolPath_C_RemovePointConnection_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PointToDisconnectIndex;                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PatrolPath.PatrolPath_C.SetPointType
struct APatrolPath_C_SetPointType_Params
{
	int                                                PointIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PointType;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PatrolPath.PatrolPath_C.ExecuteUbergraph_PatrolPath
struct APatrolPath_C_ExecuteUbergraph_PatrolPath_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
