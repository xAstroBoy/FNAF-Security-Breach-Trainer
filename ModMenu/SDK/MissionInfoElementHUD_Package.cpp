/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "MissionInfoElementHUD_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MissionInfoElementHUD.MissionInfoElementHUD_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        MissionName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        MissionDescription                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               ContainsIcon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        LeftText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FName                                        KeyName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        RightText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMissionInfoElementHUD_C::Setup(const class FText& MissionName, const class FText& MissionDescription, bool ContainsIcon, const class FText& LeftText, const class FName& KeyName, const class FText& RightText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionInfoElementHUD.MissionInfoElementHUD_C.Setup");
		
		UMissionInfoElementHUD_C_Setup_Params params {};
		params.MissionName = MissionName;
		params.MissionDescription = MissionDescription;
		params.ContainsIcon = ContainsIcon;
		params.LeftText = LeftText;
		params.KeyName = KeyName;
		params.RightText = RightText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function MissionInfoElementHUD.MissionInfoElementHUD_C.ExecuteUbergraph_MissionInfoElementHUD
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMissionInfoElementHUD_C::ExecuteUbergraph_MissionInfoElementHUD(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionInfoElementHUD.MissionInfoElementHUD_C.ExecuteUbergraph_MissionInfoElementHUD");
		
		UMissionInfoElementHUD_C_ExecuteUbergraph_MissionInfoElementHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMissionInfoElementHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionInfoElementHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionInfoElementHUD.MissionInfoElementHUD_C");
		return ptr;
	}

}


