/**
 * Name: FNAFSB
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SecurityNode.BPI_SecurityNode_C.OnSetCameraOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldOverride                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_SecurityNode_C::OnSetCameraOverride(bool ShouldOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SecurityNode.BPI_SecurityNode_C.OnSetCameraOverride");
		
		UBPI_SecurityNode_C_OnSetCameraOverride_Params params {};
		params.ShouldOverride = ShouldOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SecurityNode.BPI_SecurityNode_C.IsNormalWorldSecurityNode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsNormalWorldSecurityNode                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_SecurityNode_C::IsNormalWorldSecurityNode(bool* IsNormalWorldSecurityNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SecurityNode.BPI_SecurityNode_C.IsNormalWorldSecurityNode");
		
		UBPI_SecurityNode_C_IsNormalWorldSecurityNode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsNormalWorldSecurityNode != nullptr)
			*IsNormalWorldSecurityNode = params.IsNormalWorldSecurityNode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_SecurityNode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_SecurityNode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_SecurityNode.BPI_SecurityNode_C");
		return ptr;
	}

}


