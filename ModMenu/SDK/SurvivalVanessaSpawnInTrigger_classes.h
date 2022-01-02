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

// BlueprintGeneratedClass SurvivalVanessaSpawnInTrigger.SurvivalVanessaSpawnInTrigger_C
// 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
class ASurvivalVanessaSpawnInTrigger_C : public APlayerTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SurvivalVanessaSpawnInTrigger.SurvivalVanessaSpawnInTrigger_C");
		return ptr;
	}



	void OnTriggered();
	void ExecuteUbergraph_SurvivalVanessaSpawnInTrigger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
