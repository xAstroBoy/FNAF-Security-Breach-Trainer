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

// BlueprintGeneratedClass MAP_WorldAmbience.MAP_WorldAmbience_C
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class AMAP_WorldAmbience_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MAP_WorldAmbience.MAP_WorldAmbience_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_MAP_WorldAmbience(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
