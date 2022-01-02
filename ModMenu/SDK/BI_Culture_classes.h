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

// BlueprintGeneratedClass BI_Culture.BI_Culture_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBI_Culture_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BI_Culture.BI_Culture_C");
		return ptr;
	}



	void OnCultureChanged(TEnumAsByte<fnaf9_ELocalizationCulture> Culture);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
