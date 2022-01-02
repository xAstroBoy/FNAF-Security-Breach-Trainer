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

// BlueprintGeneratedClass P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C
// 0x0058 (FullSize[0x03D8] - InheritedSize[0x0380])
class AP_VukKartRacer_Staffbot_C : public AP_VukKartRacer_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMissionStateHandler_C*                      MissionStateHandler1;                                      // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMissionStateHandler_C*                      MissionStateHandler;                                       // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MOD_HelmBasic1;                                            // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             End_Gregory_Teleport_Location;                             // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LeftIK;                                                    // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RightIK;                                                   // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaffBotRacer_C*                            StaffBotRacer;                                             // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaffbot_ABP_Racer_C*                       AnimInstance;                                              // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass P_VukKartRacer_Staffbot.P_VukKartRacer_Staffbot_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceivePossessed(class AController* NewController);
	void Force_Interact();
	void BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_0_OnMissionStateHit__DelegateSignature();
	void BndEvt__MissionStateHandler_K2Node_ComponentBoundEvent_1_OnMissionStateAleadyHit__DelegateSignature();
	void BndEvt__MissionStateHandler1_K2Node_ComponentBoundEvent_4_OnMissionStateHit__DelegateSignature();
	void BndEvt__MissionStateHandler1_K2Node_ComponentBoundEvent_5_OnMissionStateAleadyHit__DelegateSignature();
	void ExecuteUbergraph_P_VukKartRacer_Staffbot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
