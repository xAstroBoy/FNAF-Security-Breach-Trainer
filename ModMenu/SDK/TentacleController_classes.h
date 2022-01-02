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

// BlueprintGeneratedClass TentacleController.TentacleController_C
// 0x003B (FullSize[0x02A4] - InheritedSize[0x0269])
class ATentacleController_C : public AActivatableBase_C
{
public:
	unsigned char                                      UnknownData_0WZB[0x7];                                     // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                                Ak;                                                        // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Intro_Delay;                                               // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UT7Z[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class APRE_Ventilation_BustOpen_C*>         Vents;                                                     // 0x0288(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	class AOGM_Underground_C*                          OGM;                                                       // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              End_Delay;                                                 // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TentacleController.TentacleController_C");
		return ptr;
	}



	void FindClosestTentacle(class APRE_Ventilation_BustOpen_C** Closest_Tentacle);
	void SetActivated();
	void On_Activate();
	void Activate_Tentacle_Closest_To_Player();
	void SetDeactivated();
	void ExecuteUbergraph_TentacleController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
