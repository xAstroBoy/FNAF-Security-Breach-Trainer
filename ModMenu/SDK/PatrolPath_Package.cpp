/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PatrolPath.PatrolPath_C.GetPointColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FLinearColor APatrolPath_C::GetPointColor(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PatrolPath.PatrolPath_C.GetPointColor");
		
		APatrolPath_C_GetPointColor_Params params {};
		params.PointIndex = PointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PatrolPath.PatrolPath_C.GetAvailablePointTypes
	 * 		Flags  -> ()
	 */
	TArray<class FText> APatrolPath_C::GetAvailablePointTypes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PatrolPath.PatrolPath_C.GetAvailablePointTypes");
		
		APatrolPath_C_GetAvailablePointTypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PatrolPath.PatrolPath_C.GetPointType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t APatrolPath_C::GetPointType(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PatrolPath.PatrolPath_C.GetPointType");
		
		APatrolPath_C_GetPointType_Params params {};
		params.PointIndex = PointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PatrolPath.PatrolPath_C.AddPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t APatrolPath_C::AddPoint(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PatrolPath.PatrolPath_C.AddPoint");
		
		APatrolPath_C_AddPoint_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PatrolPath.PatrolPath_C.GetPointsConnectedTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<int32_t> APatrolPath_C::GetPointsConnectedTo(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PatrolPath.PatrolPath_C.GetPointsConnectedTo");
		
		APatrolPath_C_GetPointsConnectedTo_Params params {};
		params.PointIndex = PointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PatrolPath.PatrolPath_C.GetNumberOfPathPoints
	 * 		Flags  -> ()
	 */
	int32_t APatrolPath_C::GetNumberOfPathPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PatrolPath.PatrolPath_C.GetNumberOfPathPoints");
		
		APatrolPath_C_GetNumberOfPathPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PatrolPath.PatrolPath_C.GetPointLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector APatrolPath_C::GetPointLocation(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PatrolPath.PatrolPath_C.GetPointLocation");
		
		APatrolPath_C_GetPointLocation_Params params {};
		params.PointIndex = PointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PatrolPath.PatrolPath_C.RemovePointInternal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            IndexToRemove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APatrolPath_C::RemovePointInternal(int32_t IndexToRemove, int32_t InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PatrolPath.PatrolPath_C.RemovePointInternal");
		
		APatrolPath_C_RemovePointInternal_Params params {};
		params.IndexToRemove = IndexToRemove;
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PatrolPath.PatrolPath_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APatrolPath_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PatrolPath.PatrolPath_C.ReceiveBeginPlay");
		
		APatrolPath_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PatrolPath.PatrolPath_C.SetPointLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APatrolPath_C::SetPointLocation(int32_t PointIndex, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PatrolPath.PatrolPath_C.SetPointLocation");
		
		APatrolPath_C_SetPointLocation_Params params {};
		params.PointIndex = PointIndex;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PatrolPath.PatrolPath_C.AddPointConnection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PointToConnectIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APatrolPath_C::AddPointConnection(int32_t PointIndex, int32_t PointToConnectIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PatrolPath.PatrolPath_C.AddPointConnection");
		
		APatrolPath_C_AddPointConnection_Params params {};
		params.PointIndex = PointIndex;
		params.PointToConnectIndex = PointToConnectIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PatrolPath.PatrolPath_C.RemovePoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APatrolPath_C::RemovePoint(int32_t PointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PatrolPath.PatrolPath_C.RemovePoint");
		
		APatrolPath_C_RemovePoint_Params params {};
		params.PointIndex = PointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PatrolPath.PatrolPath_C.RemovePointConnection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PointToDisconnectIndex                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APatrolPath_C::RemovePointConnection(int32_t PointIndex, int32_t PointToDisconnectIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PatrolPath.PatrolPath_C.RemovePointConnection");
		
		APatrolPath_C_RemovePointConnection_Params params {};
		params.PointIndex = PointIndex;
		params.PointToDisconnectIndex = PointToDisconnectIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PatrolPath.PatrolPath_C.SetPointType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PointIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PointType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APatrolPath_C::SetPointType(int32_t PointIndex, int32_t PointType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PatrolPath.PatrolPath_C.SetPointType");
		
		APatrolPath_C_SetPointType_Params params {};
		params.PointIndex = PointIndex;
		params.PointType = PointType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PatrolPath.PatrolPath_C.ExecuteUbergraph_PatrolPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APatrolPath_C::ExecuteUbergraph_PatrolPath(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PatrolPath.PatrolPath_C.ExecuteUbergraph_PatrolPath");
		
		APatrolPath_C_ExecuteUbergraph_PatrolPath_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APatrolPath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APatrolPath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PatrolPath.PatrolPath_C");
		return ptr;
	}

}


