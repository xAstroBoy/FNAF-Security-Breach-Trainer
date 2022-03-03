/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AUnderStageElevatorMesh_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnderStageElevatorMesh_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UnderStageElevatorMesh.UnderStageElevatorMesh_C");
		return ptr;
	}

}


