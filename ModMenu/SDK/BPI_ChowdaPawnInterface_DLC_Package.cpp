/**
 * Name: FNAFSB
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPawnInterface_DLC.BPI_ChowdaPawnInterface_DLC_C.CamAccessPointStaticTeleported
	 * 		Flags  -> ()
	 */
	void UBPI_ChowdaPawnInterface_DLC_C::CamAccessPointStaticTeleported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPawnInterface_DLC.BPI_ChowdaPawnInterface_DLC_C.CamAccessPointStaticTeleported");
		
		UBPI_ChowdaPawnInterface_DLC_C_CamAccessPointStaticTeleported_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPawnInterface_DLC.BPI_ChowdaPawnInterface_DLC_C.IsSecurityNodePawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPawnType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_ChowdaPawnInterface_DLC_C::IsSecurityNodePawn(bool* IsPawnType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPawnInterface_DLC.BPI_ChowdaPawnInterface_DLC_C.IsSecurityNodePawn");
		
		UBPI_ChowdaPawnInterface_DLC_C_IsSecurityNodePawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPawnType != nullptr)
			*IsPawnType = params.IsPawnType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPawnInterface_DLC.BPI_ChowdaPawnInterface_DLC_C.IsConduitPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPawnType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_ChowdaPawnInterface_DLC_C::IsConduitPawn(bool* IsPawnType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPawnInterface_DLC.BPI_ChowdaPawnInterface_DLC_C.IsConduitPawn");
		
		UBPI_ChowdaPawnInterface_DLC_C_IsConduitPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPawnType != nullptr)
			*IsPawnType = params.IsPawnType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_ChowdaPawnInterface_DLC.BPI_ChowdaPawnInterface_DLC_C.IsCamAccessPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPawnType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_ChowdaPawnInterface_DLC_C::IsCamAccessPawn(bool* IsPawnType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChowdaPawnInterface_DLC.BPI_ChowdaPawnInterface_DLC_C.IsCamAccessPawn");
		
		UBPI_ChowdaPawnInterface_DLC_C_IsCamAccessPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPawnType != nullptr)
			*IsPawnType = params.IsPawnType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_ChowdaPawnInterface_DLC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_ChowdaPawnInterface_DLC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ChowdaPawnInterface_DLC.BPI_ChowdaPawnInterface_DLC_C");
		return ptr;
	}

}


