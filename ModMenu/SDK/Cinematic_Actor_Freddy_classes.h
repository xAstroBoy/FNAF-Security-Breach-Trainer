﻿#pragma once

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

// BlueprintGeneratedClass Cinematic_Actor_Freddy.Cinematic_Actor_Freddy_C
// 0x0014 (FullSize[0x0260] - InheritedSize[0x024C])
class ACinematic_Actor_Freddy_C : public ACinematic_Actor_Base_C
{
public:
	unsigned char                                      UnknownData_6KTA[0x4];                                     // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCharacterHourlyMaterialComponent_C*         CharacterHourlyMaterialComponent;                          // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cinematic_Actor_Freddy.Cinematic_Actor_Freddy_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Cinematic_Actor_Freddy(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
