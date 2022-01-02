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

// BlueprintGeneratedClass AlerterInterface.AlerterInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAlerterInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AlerterInterface.AlerterInterface_C");
		return ptr;
	}



	void SetAlertInfo(TArray<fnaf9_EFNAFAISpawnType> TypesToAlert, int NumberOfAlerts);
	void GetAlertInfo(TArray<fnaf9_EFNAFAISpawnType>* TypesToAlert, int* NumberOfAlerts);
	void IsWarningFinished(bool* Finished);
	void Stop_Warning();
	void Start_Warning(int WarningCount);
	void Stop_Alert(const struct FName& Alert);
	void Start_Alert(const struct FName& Alert);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
