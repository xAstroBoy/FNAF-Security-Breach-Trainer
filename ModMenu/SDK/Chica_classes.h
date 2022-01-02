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

// BlueprintGeneratedClass Chica.Chica_C
// 0x0023 (FullSize[0x0814] - InheritedSize[0x07F1])
class AChica_C : public AAISeeker_C
{
public:
	unsigned char                                      UnknownData_BUTD[0x7];                                     // 0x07F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       GarbageDetectedBB;                                         // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       GarbageLocationBB;                                         // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WalkFastSpeed;                                             // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Chica.Chica_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void On_Garbage_Detected(const struct FVector& GarbageLocation);
	void Smash_In_Compactor();
	void Set_Creep_Mode(bool enable);
	void ExecuteUbergraph_Chica(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
