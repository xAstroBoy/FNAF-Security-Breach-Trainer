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
	 * Size -> 0x0044 (FullSize[0x8E2C] - InheritedSize[0x8DE8])
	 */
	class UAnimatronic_ABP_FreddyEnding_C : public UAnimatronic_ABP_MASTER_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x8DE8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       PlayerisGregory;                                         // 0x8DF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       first_open;                                              // 0x8DF1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       first_close;                                             // 0x8DF2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ForceOpenChest;                                          // 0x8DF3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isopen_sound;                                            // 0x8DF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GamePlayOpenChest;                                       // 0x8DF5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowSound;                                              // 0x8DF6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R7MH[0x1];                                   // 0x8DF7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PawnVelocity;                                            // 0x8DF8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ZeroVector;                                              // 0x8E04(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            AimRotation;                                             // 0x8E10(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            LastAimRotation;                                         // 0x8E1C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TurnThreshold;                                           // 0x8E28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void ExecuteUbergraph_Animatronic_ABP_FreddyEnding(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
