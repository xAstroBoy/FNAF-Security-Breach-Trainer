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

// BlueprintGeneratedClass BPFL_Kitchen.BPFL_Kitchen_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPFL_Kitchen_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_Kitchen.BPFL_Kitchen_C");
		return ptr;
	}



	struct FText STATIC_GetPizzaStationInstruction(TEnumAsByte<PizzaStep_EPizzaStep> PizzaStep, class UObject* __WorldContext);
	struct FText STATIC_GetPizzaStationName(TEnumAsByte<PizzaStep_EPizzaStep> PizzaStep, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
