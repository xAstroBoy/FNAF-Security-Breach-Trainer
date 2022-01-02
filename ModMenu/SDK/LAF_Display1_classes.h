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

// BlueprintGeneratedClass LAF_Display1.LAF_Display1_C
// 0x0017 (FullSize[0x02C4] - InheritedSize[0x02AD])
class ALAF_Display1_C : public ASecurityScreenDisplayBase_C
{
public:
	unsigned char                                      UnknownData_BNW8[0x3];                                     // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInterface*                          InitialMaterial;                                           // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ElementIndex;                                              // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass LAF_Display1.LAF_Display1_C");
		return ptr;
	}



	void StopEmitter();
	void PlayEmitter();
	void ToggleInRange(bool InRange);
	void ReceiveBeginPlay();
	void Stop_Video();
	void ExecuteUbergraph_LAF_Display1(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
