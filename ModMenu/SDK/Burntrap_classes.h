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

// BlueprintGeneratedClass Burntrap.Burntrap_C
// 0x0013 (FullSize[0x0804] - InheritedSize[0x07F1])
class ABurntrap_C : public AAISeeker_C
{
public:
	unsigned char                                      UnknownData_SEIX[0x7];                                     // 0x07F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Health;                                                    // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Burntrap.Burntrap_C");
		return ptr;
	}



	void ApplyDammage(float Dammage_Amount);
	void ExecuteUbergraph_Burntrap(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
