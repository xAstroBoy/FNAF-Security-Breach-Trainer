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

// BlueprintGeneratedClass StunableInterface.StunableInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStunableInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass StunableInterface.StunableInterface_C");
		return ptr;
	}



	bool CanBeStunned();
	void Unstun();
	void IsStunned(bool* IsStunned);
	void Stun();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
