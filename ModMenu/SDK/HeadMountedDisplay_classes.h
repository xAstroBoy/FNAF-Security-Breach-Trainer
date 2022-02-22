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
	 * Class HeadMountedDisplay.VRNotificationsComponent
	 * Size -> 0x0090 (FullSize[0x0140] - InheritedSize[0x00B0])
	 */
	class UVRNotificationsComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;   // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             HMDTrackingInitializedDelegate;                          // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             HMDRecenteredDelegate;                                   // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             HMDLostDelegate;                                         // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             HMDReconnectedDelegate;                                  // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             HMDConnectCanceledDelegate;                              // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             HMDPutOnHeadDelegate;                                    // 0x0110(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             HMDRemovedFromHeadDelegate;                              // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             VRControllerRecenteredDelegate;                          // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform);
		void STATIC_SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
		void STATIC_SetTrackingOrigin(HeadMountedDisplay_EHMDTrackingOrigin Origin);
		void STATIC_SetSpectatorScreenTexture(class UTexture* InTexture);
		void STATIC_SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
		void STATIC_SetSpectatorScreenMode(HeadMountedDisplay_ESpectatorScreenMode Mode);
		void STATIC_SetClippingPlanes(float Near, float Far);
		void STATIC_ResetOrientationAndPosition(float Yaw, HeadMountedDisplay_EOrientPositionSelector Options);
		bool STATIC_IsSpectatorScreenModeControllable();
		bool STATIC_IsInLowPersistenceMode();
		bool STATIC_IsHeadMountedDisplayEnabled();
		bool STATIC_IsHeadMountedDisplayConnected();
		bool STATIC_IsDeviceTracking(const struct FXRDeviceId& XRDeviceId);
		bool STATIC_HasValidTrackingPosition();
		float STATIC_GetWorldToMetersScale(class UObject* WorldContext);
		void STATIC_GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
		struct FTransform STATIC_GetTrackingToWorldTransform(class UObject* WorldContext);
		void STATIC_GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int32_t Index);
		HeadMountedDisplay_EHMDTrackingOrigin STATIC_GetTrackingOrigin();
		float STATIC_GetScreenPercentage();
		void STATIC_GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
		float STATIC_GetPixelDensity();
		void STATIC_GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
		int32_t STATIC_GetNumOfTrackingSensors();
		HeadMountedDisplay_EHMDWornState STATIC_GetHMDWornState();
		class FName STATIC_GetHMDDeviceName();
		void STATIC_GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
		void STATIC_GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
		TArray<struct FXRDeviceId> STATIC_EnumerateTrackedDevices(const class FName& SystemId, HeadMountedDisplay_EXRTrackedDeviceType DeviceType);
		void STATIC_EnableLowPersistenceMode(bool bEnable);
		bool STATIC_EnableHMD(bool bEnable);
		void STATIC_CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform);
		static UClass* StaticClass();
	};

	/**
	 * Class HeadMountedDisplay.MotionControllerComponent
	 * Size -> 0x00C0 (FullSize[0x04B0] - InheritedSize[0x03F0])
	 */
	class UMotionControllerComponent : public UPrimitiveComponent
	{
	public:
		int32_t                                                    PlayerIndex;                                             // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		InputCore_EControllerHand                                  Hand;                                                    // 0x03F4(0x0001) BlueprintVisible, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C3FW[0x3];                                   // 0x03F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MotionSource;                                            // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisableLowLatencyUpdate : 1;                            // 0x0400(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1T6X[0x3];                                   // 0x0401(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		HeadMountedDisplay_ETrackingStatus                         CurrentTrackingStatus;                                   // 0x0404(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayDeviceModel;                                     // 0x0405(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHGK[0x2];                                   // 0x0406(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DisplayModelSource;                                      // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         CustomDisplayMesh;                                       // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          DisplayMeshMaterialOverrides;                            // 0x0418(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OKEM[0x68];                                  // 0x0428(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 DisplayComponent;                                        // 0x0490(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WFS3[0x18];                                  // 0x0498(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetTrackingSource(InputCore_EControllerHand NewSource);
		void SetTrackingMotionSource(const class FName& NewSource);
		void SetShowDeviceModel(bool bShowControllerModel);
		void SetDisplayModelSource(const class FName& NewDisplayModelSource);
		void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
		void SetAssociatedPlayerIndex(int32_t NewPlayer);
		void OnMotionControllerUpdated();
		bool IsTracked();
		InputCore_EControllerHand GetTrackingSource();
		float GetParameterValue(const class FName& InName, bool* bValueFound);
		struct FVector GetHandJointPosition(int32_t jointIndex, bool* bValueFound);
		static UClass* StaticClass();
	};

	/**
	 * Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetIsControllerMotionTrackingEnabledByDefault(bool enable);
		bool STATIC_IsMotionTrackingEnabledForSource(int32_t PlayerIndex, const class FName& SourceName);
		bool STATIC_IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, InputCore_EControllerHand Hand);
		bool STATIC_IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);
		bool STATIC_IsMotionTrackedDeviceCountManagementNecessary();
		bool STATIC_IsMotionSourceTracking(int32_t PlayerIndex, const class FName& SourceName);
		int32_t STATIC_GetMotionTrackingEnabledControllerCount();
		int32_t STATIC_GetMaximumMotionTrackedControllerCount();
		class FName STATIC_GetActiveTrackingSystemName();
		TArray<class FName> STATIC_EnumerateMotionSources();
		bool STATIC_EnableMotionTrackingOfSource(int32_t PlayerIndex, const class FName& SourceName);
		bool STATIC_EnableMotionTrackingOfDevice(int32_t PlayerIndex, InputCore_EControllerHand Hand);
		bool STATIC_EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
		void STATIC_DisableMotionTrackingOfSource(int32_t PlayerIndex, const class FName& SourceName);
		void STATIC_DisableMotionTrackingOfDevice(int32_t PlayerIndex, InputCore_EControllerHand Hand);
		void STATIC_DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex);
		void STATIC_DisableMotionTrackingOfAllControllers();
		void STATIC_DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class HeadMountedDisplay.XRAssetFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UPrimitiveComponent* STATIC_AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const class FName& SystemName, const class FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId);
		class UPrimitiveComponent* STATIC_AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform);
		static UClass* StaticClass();
	};

	/**
	 * Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnModelLoaded;                                           // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLoadFailure;                                           // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B7EC[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 SpawnedComponent;                                        // 0x0058(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UAsyncTask_LoadXRDeviceVisComponent* STATIC_AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const class FName& SystemName, const class FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent);
		class UAsyncTask_LoadXRDeviceVisComponent* STATIC_AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ShowLoadingScreen();
		void STATIC_SetLoadingScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet);
		void STATIC_HideLoadingScreen();
		void STATIC_ClearLoadingScreenSplashes();
		void STATIC_AddLoadingScreenSplash(class UTexture* Texture, const struct FVector& Translation, const struct FRotator& Rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
