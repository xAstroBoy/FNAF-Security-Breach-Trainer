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

// BlueprintGeneratedClass Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C
// 0x001C (FullSize[0x02A8] - InheritedSize[0x028C])
class ASlide_AtriumtoKitchen_Vent_C : public ASlideSystem_C
{
public:
	unsigned char                                      UnknownData_D5DK[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMissionStateHandler_C*                      FlashlightMissionComplete;                                 // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ALMMSplineFollower_C*                        SplineFollower;                                            // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Slide_AtriumtoKitchen_Vent.Slide_AtriumtoKitchen_Vent_C");
		return ptr;
	}



	void GetInstructionOverride(struct FText* Instruction);
	void On_Slide_Entered();
	void FinishedSliding();
	void ExecuteUbergraph_Slide_AtriumtoKitchen_Vent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
