﻿/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "WI_Gregory_FazNotification_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.NewNotification
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_FazNotification_C::NewNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.NewNotification");
		
		UWI_Gregory_FazNotification_C_NewNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.TurnOffNotification
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWI_Gregory_FazNotification_C::TurnOffNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.TurnOffNotification");
		
		UWI_Gregory_FazNotification_C_TurnOffNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.NewMissionAdded
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFMissionState                           MissionState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWI_Gregory_FazNotification_C::NewMissionAdded(const class FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.NewMissionAdded");
		
		UWI_Gregory_FazNotification_C_NewMissionAdded_Params params {};
		params.MissionName = MissionName;
		params.MissionState = MissionState;
		params.MissionInfo = MissionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.MissionUpdated
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        MissionName                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFMissionState                           MissionState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FFNAFMissionInfo                            MissionInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWI_Gregory_FazNotification_C::MissionUpdated(const class FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.MissionUpdated");
		
		UWI_Gregory_FazNotification_C_MissionUpdated_Params params {};
		params.MissionName = MissionName;
		params.MissionState = MissionState;
		params.MissionInfo = MissionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWI_Gregory_FazNotification_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.Construct");
		
		UWI_Gregory_FazNotification_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.EnemyOnCamera
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASecurityCamera*                             SecurityCamera                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_FazNotification_C::EnemyOnCamera(class ASecurityCamera* SecurityCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.EnemyOnCamera");
		
		UWI_Gregory_FazNotification_C_EnemyOnCamera_Params params {};
		params.SecurityCamera = SecurityCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.Lost Sight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASecurityCamera*                             SecurityCamera                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_FazNotification_C::Lost_Sight(class ASecurityCamera* SecurityCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.Lost Sight");
		
		UWI_Gregory_FazNotification_C_Lost_Sight_Params params {};
		params.SecurityCamera = SecurityCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.NewUnreadMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        MessageName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFNAFMessageTableStruct                     MessageInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWI_Gregory_FazNotification_C::NewUnreadMessage(const class FName& MessageName, const struct FFNAFMessageTableStruct& MessageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.NewUnreadMessage");
		
		UWI_Gregory_FazNotification_C_NewUnreadMessage_Params params {};
		params.MessageName = MessageName;
		params.MessageInfo = MessageInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.ExecuteUbergraph_WI_Gregory_FazNotification
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWI_Gregory_FazNotification_C::ExecuteUbergraph_WI_Gregory_FazNotification(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WI_Gregory_FazNotification.WI_Gregory_FazNotification_C.ExecuteUbergraph_WI_Gregory_FazNotification");
		
		UWI_Gregory_FazNotification_C_ExecuteUbergraph_WI_Gregory_FazNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWI_Gregory_FazNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWI_Gregory_FazNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_Gregory_FazNotification.WI_Gregory_FazNotification_C");
		return ptr;
	}

}

