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
	 * 		Name   -> Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.NewNotification
	 * 		Flags  -> ()
	 */
	void UWI_Freddy_FazNotification_C::NewNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.NewNotification");
		
		UWI_Freddy_FazNotification_C_NewNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.TurnOffNotification
	 * 		Flags  -> ()
	 */
	void UWI_Freddy_FazNotification_C::TurnOffNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.TurnOffNotification");
		
		UWI_Freddy_FazNotification_C_TurnOffNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.NewMissionAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFMissionState                           MissionState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWI_Freddy_FazNotification_C::NewMissionAdded(const class FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.NewMissionAdded");
		
		UWI_Freddy_FazNotification_C_NewMissionAdded_Params params {};
		params.MissionName = MissionName;
		params.MissionState = MissionState;
		params.MissionInfo = MissionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.MissionUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFMissionState                           MissionState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWI_Freddy_FazNotification_C::MissionUpdated(const class FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.MissionUpdated");
		
		UWI_Freddy_FazNotification_C_MissionUpdated_Params params {};
		params.MissionName = MissionName;
		params.MissionState = MissionState;
		params.MissionInfo = MissionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.Construct
	 * 		Flags  -> ()
	 */
	void UWI_Freddy_FazNotification_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.Construct");
		
		UWI_Freddy_FazNotification_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.EnemyOnCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASecurityCamera*                             SecurityCamera                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Freddy_FazNotification_C::EnemyOnCamera(class ASecurityCamera* SecurityCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.EnemyOnCamera");
		
		UWI_Freddy_FazNotification_C_EnemyOnCamera_Params params {};
		params.SecurityCamera = SecurityCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.Lost Sight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASecurityCamera*                             SecurityCamera                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Freddy_FazNotification_C::LostSight(class ASecurityCamera* SecurityCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.Lost Sight");
		
		UWI_Freddy_FazNotification_C_LostSight_Params params {};
		params.SecurityCamera = SecurityCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.NewMessageAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MessageName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFMessageTableStruct                     MessageInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWI_Freddy_FazNotification_C::NewMessageAdded(const class FName& MessageName, const struct FFNAFMessageTableStruct& MessageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.NewMessageAdded");
		
		UWI_Freddy_FazNotification_C_NewMessageAdded_Params params {};
		params.MessageName = MessageName;
		params.MessageInfo = MessageInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.New Message
	 * 		Flags  -> ()
	 */
	void UWI_Freddy_FazNotification_C::NewMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.New Message");
		
		UWI_Freddy_FazNotification_C_NewMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.UpdateFazWatchColor
	 * 		Flags  -> ()
	 */
	void UWI_Freddy_FazNotification_C::UpdateFazWatchColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.UpdateFazWatchColor");
		
		UWI_Freddy_FazNotification_C_UpdateFazWatchColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.ExecuteUbergraph_WI_Freddy_FazNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Freddy_FazNotification_C::ExecuteUbergraph_WI_Freddy_FazNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Freddy_FazNotification.WI_Freddy_FazNotification_C.ExecuteUbergraph_WI_Freddy_FazNotification");
		
		UWI_Freddy_FazNotification_C_ExecuteUbergraph_WI_Freddy_FazNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWI_Freddy_FazNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_Freddy_FazNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_Freddy_FazNotification.WI_Freddy_FazNotification_C");
		return ptr;
	}

}


