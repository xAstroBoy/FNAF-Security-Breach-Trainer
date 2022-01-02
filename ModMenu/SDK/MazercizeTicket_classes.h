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

// BlueprintGeneratedClass MazercizeTicket.MazercizeTicket_C
// 0x0037 (FullSize[0x0300] - InheritedSize[0x02C9])
class AMazercizeTicket_C : public APresentCollectible_C
{
public:
	unsigned char                                      UnknownData_HJD8[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      LineSkipper[0x28];                                         // 0x02D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MazercizeTicket.MazercizeTicket_C");
		return ptr;
	}



	void OnCollect();
	void ExecuteUbergraph_MazercizeTicket(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
