/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "Cinematic_TransformOriginActor_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ACinematic_TransformOriginActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACinematic_TransformOriginActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Cinematic_TransformOriginActor.Cinematic_TransformOriginActor_C");
		return ptr;
	}

}


