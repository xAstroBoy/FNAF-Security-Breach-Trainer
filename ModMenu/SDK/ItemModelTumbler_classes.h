﻿#pragma once

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
	 * BlueprintGeneratedClass ItemModelTumbler.ItemModelTumbler_C
	 * Size -> 0x004D (FullSize[0x0275] - InheritedSize[0x0228])
	 */
	class AItemModelTumbler_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                ViewedMesh;                                              // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight1;                                             // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight2;                                             // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneCaptureComponent2D*                            CaptureComponent;                                        // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      DesiredBoundsRadius;                                     // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxScale;                                                // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationSpeed;                                           // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FOVStart;                                                // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FOVMin;                                                  // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayerDragging;                                          // 0x0274(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void RotateItem(const struct FRotator& RotationDelta, bool LocalSpace);
		void SetIsVisible(bool IsVisible);
		void FocusView();
		void SetMesh(class UStaticMesh* NewModel);
		void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InuputNext();
		void InputPrevious();
		void InputClose();
		void InputBack();
		void InputAccept();
		void InputPrimary();
		void InputSecondary();
		void InputTertiary();
		void InputMoveAxis(const struct FVector2D& Axis);
		void InputLookAxis(const struct FVector2D& Axis);
		void InputOptionAxis(const struct FVector2D& Axis);
		void InputOpen();
		void InputZoom(const struct FVector2D& Axis);
		void InputCycle(int32_t Increment);
		void InputDpadDirection(const struct FVector2D& Direction);
		void Reset();
		void ReceiveBeginPlay();
		void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_14(float AxisValue);
		void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_15(float AxisValue);
		void InpAxisEvt_Turn_K2Node_InputAxisEvent_16(float AxisValue);
		void InpAxisEvt_LookUp_K2Node_InputAxisEvent_17(float AxisValue);
		void ExecuteUbergraph_ItemModelTumbler(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
