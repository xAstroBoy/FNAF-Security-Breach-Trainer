/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "AIInformationProvider_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function AIInformationProvider.AIInformationProvider_C.RequestPlayerInformation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     PlayerLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasValidInfo                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIInformationProvider_C::RequestPlayerInformation(struct FVector* PlayerLocation, bool* HasValidInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIInformationProvider.AIInformationProvider_C.RequestPlayerInformation");
		
		UAIInformationProvider_C_RequestPlayerInformation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerLocation != nullptr)
			*PlayerLocation = params.PlayerLocation;
		if (HasValidInfo != nullptr)
			*HasValidInfo = params.HasValidInfo;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAIInformationProvider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIInformationProvider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIInformationProvider.AIInformationProvider_C");
		return ptr;
	}

}


