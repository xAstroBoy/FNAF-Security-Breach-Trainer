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

// BlueprintGeneratedClass ChicaVoiceInterface.ChicaVoiceInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UChicaVoiceInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ChicaVoiceInterface.ChicaVoiceInterface_C");
		return ptr;
	}



	void OnListenStarted();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
