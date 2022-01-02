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

// BlueprintGeneratedClass ShatteredRoxyController.ShatteredRoxyController_C
// 0x0010 (FullSize[0x03E8] - InheritedSize[0x03D8])
class AShatteredRoxyController_C : public AAISeekerController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              LastHeardTime;                                             // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HearingLossTime;                                           // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ShatteredRoxyController.ShatteredRoxyController_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void On_Sound_Heard(const struct FVector& SoundLocation);
	void Stop_Investigating_Sound();
	void ExecuteUbergraph_ShatteredRoxyController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
