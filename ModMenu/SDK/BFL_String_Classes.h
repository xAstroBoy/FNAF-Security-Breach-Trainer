#pragma once

/**
 * Name: FNAFSB
 * Version: 1
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
	 * BlueprintGeneratedClass BFL_String.BFL_String_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBFL_String_C : public UBlueprintFunctionLibrary
	{
	public:
		void PrintStringWithTypeSimple(const class FString& inString, E_PrintStringWithType_Type Type, E_PrintStringWithType_Duration Duration, bool bPrintTypePrefix, class UObject* __WorldContext);
		void PrintStringWithType(const class FString& inString, E_PrintStringWithType_Type Type, E_PrintStringWithType_Duration Duration, bool bPrintTypePrefix, bool bPrintToScreen, bool bPrintToLog, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
