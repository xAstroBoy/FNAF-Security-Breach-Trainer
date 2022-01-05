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
	 * Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkSourceFactory
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetStaticGestureConfidenceThreshold(MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture, float Confidence);
		bool STATIC_SetConfiguration(TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture> StaticGesturesToActivate, MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled);
		bool STATIC_IsHoldingControl(InputCore_EControllerHand Hand);
		float STATIC_GetStaticGestureConfidenceThreshold(MagicLeapHandTracking_EMagicLeapHandTrackingGesture Gesture);
		bool STATIC_GetMotionSourceForHandKeypoint(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint, class FName* OutMotionSource);
		bool STATIC_GetMagicLeapHandTrackingLiveLinkSource(struct FLiveLinkSourceHandle* SourceHandle);
		bool STATIC_GetHandThumbTip(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Secondary);
		bool STATIC_GetHandKeypointForMotionSource(const class FName& MotionSource, MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint* OutKeyPoint);
		bool STATIC_GetHandIndexFingerTip(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Pointer);
		bool STATIC_GetHandCenterNormalized(InputCore_EControllerHand Hand, struct FVector* HandCenterNormalized);
		bool STATIC_GetHandCenter(InputCore_EControllerHand Hand, struct FTransform* HandCenter);
		bool STATIC_GetGestureKeypointTransform(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapHandTrackingKeypoint Keypoint, MagicLeapHandTracking_EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Transform);
		bool STATIC_GetGestureKeypoints(InputCore_EControllerHand Hand, TArray<struct FTransform>* Keypoints);
		bool STATIC_GetCurrentGestureConfidence(InputCore_EControllerHand Hand, float* Confidence);
		bool STATIC_GetCurrentGesture(InputCore_EControllerHand Hand, MagicLeapHandTracking_EMagicLeapHandTrackingGesture* Gesture);
		bool STATIC_GetConfiguration(TArray<MagicLeapHandTracking_EMagicLeapHandTrackingGesture>* ActiveStaticGestures, MagicLeapHandTracking_EMagicLeapHandTrackingKeypointFilterLevel* KeypointsFilterLevel, MagicLeapHandTracking_EMagicLeapHandTrackingGestureFilterLevel* GestureFilterLevel, bool* bTrackingEnabled);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
