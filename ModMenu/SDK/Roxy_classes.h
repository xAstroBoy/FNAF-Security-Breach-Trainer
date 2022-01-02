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

// BlueprintGeneratedClass Roxy.Roxy_C
// 0x001F (FullSize[0x0810] - InheritedSize[0x07F1])
class ARoxy_C : public AAISeeker_C
{
public:
	unsigned char                                      UnknownData_CRN4[0x7];                                     // 0x07F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UAkAudioEvent*>                       RoxyHowl;                                                  // 0x0800(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Roxy.Roxy_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void Random_Howling(bool enable);
	void ExecuteUbergraph_Roxy(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
