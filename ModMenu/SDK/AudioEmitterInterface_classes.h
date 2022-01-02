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

// BlueprintGeneratedClass AudioEmitterInterface.AudioEmitterInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAudioEmitterInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AudioEmitterInterface.AudioEmitterInterface_C");
		return ptr;
	}



	void ToggleInRange(bool InRange);
	void PlayEmitter();
	void StopEmitter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
