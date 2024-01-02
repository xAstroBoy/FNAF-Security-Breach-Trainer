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
	 * BlueprintGeneratedClass CameraOverrideComponent.CameraOverrideComponent_C
	 * Size -> 0x005B (FullSize[0x0253] - InheritedSize[0x01F8])
	 */
	class UCameraOverrideComponent_C : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_KN7D[0x8];                                   // 0x01F8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0200(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class APawn*                                               PreviousPawn;                                            // 0x0208(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              TargetActor[0x28];                                       // 0x0210(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      LookAtTime;                                              // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseTime;                                                 // 0x023C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KD5A[0x3];                                   // 0x023D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerCameraOverride_C*                             PlayerCameraOverride;                                    // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       Sound;                                                   // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HidePreviousPawn;                                        // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Running;                                                 // 0x0251(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PossesGregoryOnEnd;                                      // 0x0252(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void FindGregory(class AFNAFBasePlayerCharacter** Gregory);
		void ReleaseCamera();
		void TakeOverCamera();
		void ExecuteUbergraph_CameraOverrideComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
