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
	 * AnimBlueprintGeneratedClass Animatronic_ABP_FreddyEnding.Animatronic_ABP_FreddyEnding_C
	 * Size -> 0x004B (FullSize[0x8E54] - InheritedSize[0x8E09])
	 */
	class UAnimatronic_ABP_FreddyEnding_C : public UAnimatronic_ABP_MASTER_C
	{
	public:
		unsigned char                                              UnknownData_FBIF[0x7];                                   // 0x8E09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x8E10(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       PlayerisGregory;                                         // 0x8E18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       first_open;                                              // 0x8E19(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       first_close;                                             // 0x8E1A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ForceOpenChest;                                          // 0x8E1B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isopen_sound;                                            // 0x8E1C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GamePlayOpenChest;                                       // 0x8E1D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowSound;                                              // 0x8E1E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IEAV[0x1];                                   // 0x8E1F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PawnVelocity;                                            // 0x8E20(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ZeroVector;                                              // 0x8E2C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            AimRotation;                                             // 0x8E38(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            LastAimRotation;                                         // 0x8E44(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TurnThreshold;                                           // 0x8E50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TurnFunciton();
		void footstep();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintBeginPlay();
		void OnAnimInstanceSwap();
		void SetHeadAimTarget(const struct FVector& AimLocation);
		void HeadAimEvent(bool OnOff);
		void AnimNotify_R_Foot_Down();
		void AnimNotify_L_Foot_Down();
		void Open_Chest();
		void Close_Chest();
		void Force_Open();
		void Force_Close();
		void CanJumpscareEvent();
		void AnimNotify_chest_open();
		void AnimNotify_chest_close();
		void AnimNotify_chestexit();
		void VoAnimEvent(class UAkAudioEvent* AK_Event);
		void ExecuteUbergraph_Animatronic_ABP_FreddyEnding(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
