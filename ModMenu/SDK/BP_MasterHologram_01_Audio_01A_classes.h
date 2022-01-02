#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasterHologram_01_Audio_01A.BP_MasterHologram_01_Audio_01A_C
// 0x004C (FullSize[0x0338] - InheritedSize[0x02EC])
class ABP_MasterHologram_01_Audio_01A_C : public ABP_MasterHologram_01_C
{
public:
	unsigned char                                      UnknownData_07KL[0x4];                                     // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_Component_3;                                         // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Audio_Component_2;                                         // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_Audio_;                                                // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Set_Audio_Component_at_BP_Origin_;                         // 0x0309(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SSB3[0x6];                                     // 0x030A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  Audio_File;                                                // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Use_2nd_Audio_Clip_;                                       // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3DMP[0x7];                                     // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  Audio_File_2;                                              // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Volume_Intensity;                                          // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Attenuation_Min_Distance;                                  // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Attenuation_Max_Falloff_Distance;                          // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Loop_Delay;                                                // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterHologram_01_Audio_01A.BP_MasterHologram_01_Audio_01A_C");
		return ptr;
	}



	void AudioComponent_Destroy_Function();
	void AudioClip_Set_Function();
	void Audio_SetLocation_Function(class UAudioComponent* Audio_Component);
	void AudioClip2_Set_Function();
	void AudioSettings_Function(class UAudioComponent* Audio_Component);
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Audio_Component_1_K2Node_ComponentBoundEvent_6_OnAudioFinished__DelegateSignature();
	void BndEvt__Audio_Component_2_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
	void SwitchColorForScenario();
	void ExecuteUbergraph_BP_MasterHologram_01_Audio_01A(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
