/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "SM_DanceFloor01_1_21x21m_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASM_DanceFloor01_1_21x21m_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASM_DanceFloor01_1_21x21m_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SM_DanceFloor01_1_21x21m.SM_DanceFloor01_1_21x21m_C");
		return ptr;
	}

}


