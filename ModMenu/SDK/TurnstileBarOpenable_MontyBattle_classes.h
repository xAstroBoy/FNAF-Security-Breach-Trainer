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

// BlueprintGeneratedClass TurnstileBarOpenable_MontyBattle.TurnstileBarOpenable_MontyBattle_C
// 0x0001 (FullSize[0x0273] - InheritedSize[0x0272])
class ATurnstileBarOpenable_MontyBattle_C : public ATurnstileBarOpenable_C
{
public:
	bool                                               Left_;                                                     // 0x0272(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TurnstileBarOpenable_MontyBattle.TurnstileBarOpenable_MontyBattle_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
