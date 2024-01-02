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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass SecurityCameraUI.SecurityCameraUI_C
	 * Size -> 0x0128 (FullSize[0x0388] - InheritedSize[0x0260])
	 */
	class USecurityCameraUI_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          Cam;                                                     // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CameraDisplay;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CameraName;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapUI_C*                                            MapUI;                                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           ScaleBox_236;                                            // 0x0288(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ThumbstickImage;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ZoomIN;                                                  // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ZoomInImage;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ZoomOut;                                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ZoomOutImage;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      PanAmount;                                               // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ZoomAmount;                                              // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACamera_C*                                           CurrentCamera;                                           // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanChange;                                               // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MDC6[0x3];                                   // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           InputMove;                                               // 0x02CC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastInput;                                               // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           CurentMove;                                              // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        ZoomInHandle;                                            // 0x02E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        ZoomOutHandle;                                           // 0x02E8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            CameraDisplayMaterial;                                   // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCameraIcon_C*                                       SelectedCamera;                                          // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       new_select;                                              // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RP1E[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraIcon_C*                                       TempSelectedCamera;                                      // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCameraIcon_C*                                       PrevCamera;                                              // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GolfCamIndex;                                            // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       changecamera;                                            // 0x031C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5CEW[0x3];                                   // 0x031D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCameraIcon_C*>                               VisibleCameras;                                          // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UCameraIcon_C*>                               CameraRow0;                                              // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UCameraIcon_C*>                               CameraRow1;                                              // 0x0340(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UCameraIcon_C*>                               CameraRow2;                                              // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UCameraIcon_C*>                               CameraRow3;                                              // 0x0360(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                      InitialPreshadowFactor;                                  // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CameraPreshadowFactor;                                   // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              PreshadowFactorCommand;                                  // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void MatchPlayerCameraSettings(class USceneCaptureComponent2D* Target);
		void GetDirection(const struct FVector2D& Dir, int32_t* Direction);
		void GetCameraComparisonValue(class UWidget* CameraIcon, int32_t Dir, float* Value);
		void SortRow(TArray<class UCameraIcon_C*>* RowToSort);
		void FindCurrentCameraRow(int32_t* Index, TArray<class UCameraIcon_C*>* CameraRow, int32_t* WhichRow);
		void SetupCameraRows(float StdDev, float MinClamp, float MaxClamp);
		void SetVisibleCameras();
		void CalculateIconsStdDev(float* StandardDeviation, float* LowestYValue, float* HighestYValue);
		ESlateVisibility GetMouseVisible();
		void GetNextGolfCamera(class UCameraIcon_C** NextCam);
		void SlopeDegrees(const struct FVector2D& Point1, const struct FVector2D& Point2, const struct FVector2D& Point3, bool LeftOrUp, float* Degrees);
		void GetCameraInDirection(class UCameraIcon_C* LSelectedCamera, const struct FVector2D& Direction, class UCameraIcon_C** EndCamera);
		void GetNearest(const struct FVector2D& Direction, class UCameraIcon_C* StartCamera, class UCameraIcon_C** EndCamera);
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		ESlateVisibility GetVisibility_1();
		ESlateVisibility GetControllerVisible();
		struct FLinearColor GetLightOnColor();
		void DoTick();
		void SetFirstCamera();
		void CycleCamera2dPlane(const struct FVector2D& InputDirection, class UCameraIcon_C** Output);
		void CycleCamera(int32_t inc);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void SetupCameras();
		void CameraClicked(class ASecurityCamera* Camera);
		void CamerasOff();
		void InputOpen();
		void SetToStatic();
		void InputMoveAxis(const struct FVector2D& Axis);
		void InputLookAxis(const struct FVector2D& Axis);
		void InputTertiary();
		void Construct();
		void BndEvt__ZoomIN_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
		void PressZoomIN();
		void BndEvt__ZoomIN_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__ZoomOut_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__ZoomOut_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
		void PressZoomOut();
		void InputDpadDirection(const struct FVector2D& Direction);
		void Zoom(float Axis);
		void InputSecondary();
		void InputClose();
		void InputPrimary();
		void ReFocus();
		void InputZoom(const struct FVector2D& Axis);
		void OnCameraLevelsLoaded();
		void InputAccept();
		void InputBack();
		void InputPrevious();
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
