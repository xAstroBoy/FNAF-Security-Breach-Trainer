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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass SecurityCameraUI.SecurityCameraUI_C
	 * Size -> 0x0118 (FullSize[0x0348] - InheritedSize[0x0230])
	 */
	class USecurityCameraUI_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          Cam;                                                     // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CameraDisplay;                                           // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CameraName;                                              // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapUI_C*                                            MapUI;                                                   // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           ScaleBox_236;                                            // 0x0258(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ThumbstickImage;                                         // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ZoomIN;                                                  // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ZoomInImage;                                             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ZoomOut;                                                 // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ZoomOutImage;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      PanAmount;                                               // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ZoomAmount;                                              // 0x028C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACamera_C*                                           CurrentCamera;                                           // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanChange;                                               // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1P6U[0x3];                                   // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           InputMove;                                               // 0x029C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastInput;                                               // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           CurentMove;                                              // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        ZoomInHandle;                                            // 0x02B0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        ZoomOutHandle;                                           // 0x02B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            CameraDisplayMateral;                                    // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCameraIcon_C*                                       SelectedCamera;                                          // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       new_select;                                              // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_94VV[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraIcon_C*                                       TempSelectedCamera;                                      // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCameraIcon_C*                                       PrevCamera;                                              // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WaitForRaise;                                            // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SIKD[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GolfCamIndex;                                            // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       changecamera;                                            // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G8SY[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCameraIcon_C*>                               VisibleCameras;                                          // 0x02F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class UCameraIcon_C*>                               CameraRow0;                                              // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class UCameraIcon_C*>                               CameraRow1;                                              // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class UCameraIcon_C*>                               CameraRow2;                                              // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class UCameraIcon_C*>                               CameraRow3;                                              // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash

	public:
		void Get_Direction(const struct FVector2D& Dir, int32_t* Direction);
		void Get_Camera_Comparison_Value(class UWidget* CameraIcon, int32_t Dir, float* Value);
		void SortRow(TArray<class UCameraIcon_C*>* RowToSort);
		void FindCurrentCameraRow(int32_t* Index, TArray<class UCameraIcon_C*>* CameraRow, int32_t* WhichRow);
		void SetupCameraRows(float StdDev, float MinClamp, float MaxClamp);
		void SetVisibleCameras();
		void CalculateIconsStdDev(float* StandardDeviation, float* LowestYValue, float* HighestYValue);
		UMG_ESlateVisibility GetMouseVisible();
		void GetNextGolfCamera(class UCameraIcon_C** NextCam);
		void SlopeDegrees(const struct FVector2D& Point1, const struct FVector2D& Point2, const struct FVector2D& Point3, bool LeftOrUp, float* Degrees);
		void GetCameraInDirection(class UCameraIcon_C* LSelectedCamera, const struct FVector2D& Direction, class UCameraIcon_C** End_Camera);
		void Get_Nearest(const struct FVector2D& Direction, class UCameraIcon_C* StartCamera, class UCameraIcon_C** EndCamera);
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		UMG_ESlateVisibility GetVisibility_1();
		UMG_ESlateVisibility GetControllerVisible();
		struct FLinearColor GetLightOnColor();
		void DoTick();
		void SetFirstCamera();
		void CycleCamera2dPlane(const struct FVector2D& InputDirection, class UCameraIcon_C** Output);
		void CycleCamera(int32_t inc);
		void InputOpen();
		void InputDpadDirection(const struct FVector2D& Direction);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void SetupCameras();
		void Camera_Clicked(class ASecurityCamera* Camera);
		void Cameras_Off();
		void InputPrimary();
		void SetToStatic();
		void InputAccept();
		void InputLookAxis(const struct FVector2D& Axis);
		void InputTertiary();
		void InputMoveAxis(const struct FVector2D& Axis);
		void BndEvt__Vision_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__ZoomIN_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
		void PressZoomIN();
		void BndEvt__ZoomIN_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__ZoomOut_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__ZoomOut_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
		void PressZoomOut();
		void InputSecondary();
		void Zoom(float Axis);
		void InputBack();
		void InputClose();
		void InputPrevious();
		void ReFocus();
		void InputZoom(const struct FVector2D& Axis);
		void OnCameraLevelsLoaded();
		void InuputNext();
		void NextCamInList();
		void InputOptionAxis(const struct FVector2D& Axis);
		void Reset();
		void InputCycle(int32_t Increment);
		void ExecuteUbergraph_SecurityCameraUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
