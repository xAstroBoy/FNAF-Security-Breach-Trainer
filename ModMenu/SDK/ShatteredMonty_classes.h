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

// BlueprintGeneratedClass ShatteredMonty.ShatteredMonty_C
// 0x0027 (FullSize[0x0818] - InheritedSize[0x07F1])
class AShatteredMonty_C : public AAISeeker_C
{
public:
	unsigned char                                      UnknownData_3V0U[0x7];                                     // 0x07F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       HidingLocationKey;                                         // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PlayerKey;                                                 // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       IsHidingKey;                                               // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ShatteredMonty.ShatteredMonty_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void EnterHideMode(class AActor* HideActor);
	void ExitHideMode(class AActor* HideActor);
	void ExecuteUbergraph_ShatteredMonty(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
