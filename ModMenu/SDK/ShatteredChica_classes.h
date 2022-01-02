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

// BlueprintGeneratedClass ShatteredChica.ShatteredChica_C
// 0x0045 (FullSize[0x0859] - InheritedSize[0x0814])
class AShatteredChica_C : public AChica_C
{
public:
	unsigned char                                      UnknownData_47KK[0x4];                                     // 0x0814(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0818(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInterpMoveComponent_C*                      InterpMoveComponent;                                       // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HeadAimLocation_1;                                         // 0x0828(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InterpParam;                                               // 0x0834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RunSequenceBB;                                             // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                HeadSpinTimerHandle;                                       // 0x0840(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FName                                       HeadRotateBB;                                              // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentHeadAngle;                                          // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HeadSpinRate;                                              // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HeadRotating;                                              // 0x0858(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ShatteredChica.ShatteredChica_C");
		return ptr;
	}



	void SetCanHeadRotate(bool BoolValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Break_Through_Wall(const struct FVector& Start_Position, const struct FVector& End_Position);
	void BndEvt__InterpMoveComponent_K2Node_ComponentBoundEvent_0_OnInterpFinished__DelegateSignature();
	void Spin_Head();
	void Start_Head_Spin_Timer();
	void On_Head_Spin_Time();
	void Stop_Head_Spin_Timer();
	void Stop_Head_Spin();
	void ExecuteUbergraph_ShatteredChica(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
