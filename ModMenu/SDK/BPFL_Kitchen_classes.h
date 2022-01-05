#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPFL_Kitchen.BPFL_Kitchen_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_Kitchen_C : public UBlueprintFunctionLibrary
	{
	public:
		class FText STATIC_GetPizzaStationInstruction(TEnumAsByte<PizzaStep_EPizzaStep> PizzaStep, class UObject* __WorldContext);
		class FText STATIC_GetPizzaStationName(TEnumAsByte<PizzaStep_EPizzaStep> PizzaStep, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
