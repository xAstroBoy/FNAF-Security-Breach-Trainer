/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "Animatronic_ABP_Cutscenes_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimatronic_ABP_Cutscenes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimatronic_ABP_Cutscenes_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Animatronic_ABP_Cutscenes.Animatronic_ABP_Cutscenes_C");
		return ptr;
	}

}


