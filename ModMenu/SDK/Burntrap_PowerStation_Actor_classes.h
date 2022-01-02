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

// BlueprintGeneratedClass Burntrap_PowerStation_Actor.Burntrap_PowerStation_Actor_C
// 0x000C (FullSize[0x0300] - InheritedSize[0x02F4])
class ABurntrap_PowerStation_Actor_C : public APowerStation_Actor_C
{
public:
	unsigned char                                      UnknownData_YAED[0x4];                                     // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Burntrap_PowerStation_Actor.Burntrap_PowerStation_Actor_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Burntrap_PowerStation_Actor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
