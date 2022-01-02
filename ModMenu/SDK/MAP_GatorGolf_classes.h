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

// BlueprintGeneratedClass MAP_GatorGolf.MAP_GatorGolf_C
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class AMAP_GatorGolf_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MAP_GatorGolf.MAP_GatorGolf_C");
		return ptr;
	}



	void TryAgain();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MAP_GatorGolf(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
