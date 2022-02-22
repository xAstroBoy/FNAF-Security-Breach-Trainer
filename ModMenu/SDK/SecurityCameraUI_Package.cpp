/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.Get Direction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Dir                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::Get_Direction(const struct FVector2D& Dir, int32_t* Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.Get Direction");
		
		USecurityCameraUI_C_Get_Direction_Params params {};
		params.Dir = Dir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction != nullptr)
			*Direction = params.Direction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.Get Camera Comparison Value
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidget*                                     CameraIcon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Dir                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::Get_Camera_Comparison_Value(class UWidget* CameraIcon, int32_t Dir, float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.Get Camera Comparison Value");
		
		USecurityCameraUI_C_Get_Camera_Comparison_Value_Params params {};
		params.CameraIcon = CameraIcon;
		params.Dir = Dir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.SortRow
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UCameraIcon_C*>                       RowToSort                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::SortRow(TArray<class UCameraIcon_C*>* RowToSort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.SortRow");
		
		USecurityCameraUI_C_SortRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RowToSort != nullptr)
			*RowToSort = params.RowToSort;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.FindCurrentCameraRow
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UCameraIcon_C*>                       CameraRow                                                  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		int32_t                                            WhichRow                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::FindCurrentCameraRow(int32_t* Index, TArray<class UCameraIcon_C*>* CameraRow, int32_t* WhichRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.FindCurrentCameraRow");
		
		USecurityCameraUI_C_FindCurrentCameraRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
		if (CameraRow != nullptr)
			*CameraRow = params.CameraRow;
		if (WhichRow != nullptr)
			*WhichRow = params.WhichRow;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.SetupCameraRows
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              StdDev                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinClamp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxClamp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::SetupCameraRows(float StdDev, float MinClamp, float MaxClamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.SetupCameraRows");
		
		USecurityCameraUI_C_SetupCameraRows_Params params {};
		params.StdDev = StdDev;
		params.MinClamp = MinClamp;
		params.MaxClamp = MaxClamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.SetVisibleCameras
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::SetVisibleCameras()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.SetVisibleCameras");
		
		USecurityCameraUI_C_SetVisibleCameras_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.CalculateIconsStdDev
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              StandardDeviation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LowestYValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HighestYValue                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::CalculateIconsStdDev(float* StandardDeviation, float* LowestYValue, float* HighestYValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.CalculateIconsStdDev");
		
		USecurityCameraUI_C_CalculateIconsStdDev_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StandardDeviation != nullptr)
			*StandardDeviation = params.StandardDeviation;
		if (LowestYValue != nullptr)
			*LowestYValue = params.LowestYValue;
		if (HighestYValue != nullptr)
			*HighestYValue = params.HighestYValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.GetMouseVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility USecurityCameraUI_C::GetMouseVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.GetMouseVisible");
		
		USecurityCameraUI_C_GetMouseVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.GetNextGolfCamera
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCameraIcon_C*                               NextCam                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::GetNextGolfCamera(class UCameraIcon_C** NextCam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.GetNextGolfCamera");
		
		USecurityCameraUI_C_GetNextGolfCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextCam != nullptr)
			*NextCam = params.NextCam;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.SlopeDegrees
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector2D                                   Point1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Point2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Point3                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LeftOrUp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Degrees                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::SlopeDegrees(const struct FVector2D& Point1, const struct FVector2D& Point2, const struct FVector2D& Point3, bool LeftOrUp, float* Degrees)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.SlopeDegrees");
		
		USecurityCameraUI_C_SlopeDegrees_Params params {};
		params.Point1 = Point1;
		params.Point2 = Point2;
		params.Point3 = Point3;
		params.LeftOrUp = LeftOrUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Degrees != nullptr)
			*Degrees = params.Degrees;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.GetCameraInDirection
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCameraIcon_C*                               LSelectedCamera                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCameraIcon_C*                               End_Camera                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::GetCameraInDirection(class UCameraIcon_C* LSelectedCamera, const struct FVector2D& Direction, class UCameraIcon_C** End_Camera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.GetCameraInDirection");
		
		USecurityCameraUI_C_GetCameraInDirection_Params params {};
		params.LSelectedCamera = LSelectedCamera;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (End_Camera != nullptr)
			*End_Camera = params.End_Camera;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.Get Nearest
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCameraIcon_C*                               StartCamera                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCameraIcon_C*                               EndCamera                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::Get_Nearest(const struct FVector2D& Direction, class UCameraIcon_C* StartCamera, class UCameraIcon_C** EndCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.Get Nearest");
		
		USecurityCameraUI_C_Get_Nearest_Params params {};
		params.Direction = Direction;
		params.StartCamera = StartCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EndCamera != nullptr)
			*EndCamera = params.EndCamera;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.OnMouseWheel
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply USecurityCameraUI_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.OnMouseWheel");
		
		USecurityCameraUI_C_OnMouseWheel_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.GetVisibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility USecurityCameraUI_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.GetVisibility_1");
		
		USecurityCameraUI_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.GetControllerVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility USecurityCameraUI_C::GetControllerVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.GetControllerVisible");
		
		USecurityCameraUI_C_GetControllerVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.GetLightOnColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor USecurityCameraUI_C::GetLightOnColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.GetLightOnColor");
		
		USecurityCameraUI_C_GetLightOnColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.DoTick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::DoTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.DoTick");
		
		USecurityCameraUI_C_DoTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.SetFirstCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::SetFirstCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.SetFirstCamera");
		
		USecurityCameraUI_C_SetFirstCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.CycleCamera2dPlane
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   InputDirection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCameraIcon_C*                               Output                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::CycleCamera2dPlane(const struct FVector2D& InputDirection, class UCameraIcon_C** Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.CycleCamera2dPlane");
		
		USecurityCameraUI_C_CycleCamera2dPlane_Params params {};
		params.InputDirection = InputDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.CycleCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            inc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::CycleCamera(int32_t inc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.CycleCamera");
		
		USecurityCameraUI_C_CycleCamera_Params params {};
		params.inc = inc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.InputOpen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::InputOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.InputOpen");
		
		USecurityCameraUI_C_InputOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.InputDpadDirection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::InputDpadDirection(const struct FVector2D& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.InputDpadDirection");
		
		USecurityCameraUI_C_InputDpadDirection_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USecurityCameraUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.Construct");
		
		USecurityCameraUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.Tick");
		
		USecurityCameraUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.SetupCameras
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::SetupCameras()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.SetupCameras");
		
		USecurityCameraUI_C_SetupCameras_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.Camera Clicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASecurityCamera*                             Camera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::Camera_Clicked(class ASecurityCamera* Camera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.Camera Clicked");
		
		USecurityCameraUI_C_Camera_Clicked_Params params {};
		params.Camera = Camera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.Cameras Off
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::Cameras_Off()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.Cameras Off");
		
		USecurityCameraUI_C_Cameras_Off_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.InputPrimary
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::InputPrimary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.InputPrimary");
		
		USecurityCameraUI_C_InputPrimary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.SetToStatic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::SetToStatic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.SetToStatic");
		
		USecurityCameraUI_C_SetToStatic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.InputAccept
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::InputAccept()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.InputAccept");
		
		USecurityCameraUI_C_InputAccept_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.InputLookAxis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::InputLookAxis(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.InputLookAxis");
		
		USecurityCameraUI_C_InputLookAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.InputTertiary
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::InputTertiary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.InputTertiary");
		
		USecurityCameraUI_C_InputTertiary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.InputMoveAxis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::InputMoveAxis(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.InputMoveAxis");
		
		USecurityCameraUI_C_InputMoveAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.BndEvt__Vision_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USecurityCameraUI_C::BndEvt__Vision_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.BndEvt__Vision_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		USecurityCameraUI_C_BndEvt__Vision_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.BndEvt__ZoomIN_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USecurityCameraUI_C::BndEvt__ZoomIN_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.BndEvt__ZoomIN_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		USecurityCameraUI_C_BndEvt__ZoomIN_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.PressZoomIN
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::PressZoomIN()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.PressZoomIN");
		
		USecurityCameraUI_C_PressZoomIN_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.BndEvt__ZoomIN_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USecurityCameraUI_C::BndEvt__ZoomIN_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.BndEvt__ZoomIN_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");
		
		USecurityCameraUI_C_BndEvt__ZoomIN_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.BndEvt__ZoomOut_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USecurityCameraUI_C::BndEvt__ZoomOut_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.BndEvt__ZoomOut_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");
		
		USecurityCameraUI_C_BndEvt__ZoomOut_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.BndEvt__ZoomOut_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USecurityCameraUI_C::BndEvt__ZoomOut_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.BndEvt__ZoomOut_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");
		
		USecurityCameraUI_C_BndEvt__ZoomOut_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.PressZoomOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::PressZoomOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.PressZoomOut");
		
		USecurityCameraUI_C_PressZoomOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.InputSecondary
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::InputSecondary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.InputSecondary");
		
		USecurityCameraUI_C_InputSecondary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.Zoom
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::Zoom(float Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.Zoom");
		
		USecurityCameraUI_C_Zoom_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.InputBack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::InputBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.InputBack");
		
		USecurityCameraUI_C_InputBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.InputClose
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::InputClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.InputClose");
		
		USecurityCameraUI_C_InputClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.InputPrevious
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::InputPrevious()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.InputPrevious");
		
		USecurityCameraUI_C_InputPrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.ReFocus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::ReFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.ReFocus");
		
		USecurityCameraUI_C_ReFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.InputZoom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::InputZoom(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.InputZoom");
		
		USecurityCameraUI_C_InputZoom_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.OnCameraLevelsLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::OnCameraLevelsLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.OnCameraLevelsLoaded");
		
		USecurityCameraUI_C_OnCameraLevelsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.InuputNext
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::InuputNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.InuputNext");
		
		USecurityCameraUI_C_InuputNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.NextCamInList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::NextCamInList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.NextCamInList");
		
		USecurityCameraUI_C_NextCamInList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.InputOptionAxis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::InputOptionAxis(const struct FVector2D& Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.InputOptionAxis");
		
		USecurityCameraUI_C_InputOptionAxis_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.Reset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USecurityCameraUI_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.Reset");
		
		USecurityCameraUI_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.InputCycle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Increment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::InputCycle(int32_t Increment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.InputCycle");
		
		USecurityCameraUI_C_InputCycle_Params params {};
		params.Increment = Increment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function SecurityCameraUI.SecurityCameraUI_C.ExecuteUbergraph_SecurityCameraUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecurityCameraUI_C::ExecuteUbergraph_SecurityCameraUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecurityCameraUI.SecurityCameraUI_C.ExecuteUbergraph_SecurityCameraUI");
		
		USecurityCameraUI_C_ExecuteUbergraph_SecurityCameraUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USecurityCameraUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecurityCameraUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SecurityCameraUI.SecurityCameraUI_C");
		return ptr;
	}

}


