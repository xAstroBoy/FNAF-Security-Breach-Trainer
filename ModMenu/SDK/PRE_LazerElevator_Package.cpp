/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "PRE_LazerElevator_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.Elevator Light Sequence Worker
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_LazerElevator_C::Elevator_Light_Sequence_Worker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.Elevator Light Sequence Worker");
		
		APRE_LazerElevator_C_Elevator_Light_Sequence_Worker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_LazerElevator_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.UserConstructionScript");
		
		APRE_LazerElevator_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.LaserTag Elevator Position__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APRE_LazerElevator_C::LaserTag_Elevator_Position__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.LaserTag Elevator Position__FinishedFunc");
		
		APRE_LazerElevator_C_LaserTag_Elevator_Position__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.LaserTag Elevator Position__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APRE_LazerElevator_C::LaserTag_Elevator_Position__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.LaserTag Elevator Position__UpdateFunc");
		
		APRE_LazerElevator_C_LaserTag_Elevator_Position__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.Intensity__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APRE_LazerElevator_C::Intensity__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.Intensity__FinishedFunc");
		
		APRE_LazerElevator_C_Intensity__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.Intensity__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APRE_LazerElevator_C::Intensity__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.Intensity__UpdateFunc");
		
		APRE_LazerElevator_C_Intensity__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.OnCheckpointSave
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_LazerElevator_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.OnCheckpointSave");
		
		APRE_LazerElevator_C_OnCheckpointSave_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.OnGameDataLoaded
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_LazerElevator_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.OnGameDataLoaded");
		
		APRE_LazerElevator_C_OnGameDataLoaded_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.OnStoreGameData
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_LazerElevator_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.OnStoreGameData");
		
		APRE_LazerElevator_C_OnStoreGameData_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.PostGameLoad
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_LazerElevator_C::PostGameLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.PostGameLoad");
		
		APRE_LazerElevator_C_PostGameLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.PostSaveGame
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_LazerElevator_C::PostSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.PostSaveGame");
		
		APRE_LazerElevator_C_PostSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.OpenLaserTagDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APRE_LazerElevator_C::OpenLaserTagDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.OpenLaserTagDoor");
		
		APRE_LazerElevator_C_OpenLaserTagDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.BndEvt__StartGame_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_LazerElevator_C::BndEvt__StartGame_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.BndEvt__StartGame_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		APRE_LazerElevator_C_BndEvt__StartGame_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.Start Elevator Drop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APRE_LazerElevator_C::Start_Elevator_Drop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.Start Elevator Drop");
		
		APRE_LazerElevator_C_Start_Elevator_Drop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APRE_LazerElevator_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.ReceiveBeginPlay");
		
		APRE_LazerElevator_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.ForceDIsableAllDoors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APRE_LazerElevator_C::ForceDIsableAllDoors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.ForceDIsableAllDoors");
		
		APRE_LazerElevator_C_ForceDIsableAllDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.ResetElevatorToTop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APRE_LazerElevator_C::ResetElevatorToTop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.ResetElevatorToTop");
		
		APRE_LazerElevator_C_ResetElevatorToTop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.Flash Lights to Red
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APRE_LazerElevator_C::Flash_Lights_to_Red()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.Flash Lights to Red");
		
		APRE_LazerElevator_C_Flash_Lights_to_Red_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.Start
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APRE_LazerElevator_C::Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.Start");
		
		APRE_LazerElevator_C_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.Reset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APRE_LazerElevator_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.Reset");
		
		APRE_LazerElevator_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.OnCheckpointLoad
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_LazerElevator_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.OnCheckpointLoad");
		
		APRE_LazerElevator_C_OnCheckpointLoad_Params params {};
		params.SaveDataObject = SaveDataObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.PreStartLevatorDrop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APRE_LazerElevator_C::PreStartLevatorDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.PreStartLevatorDrop");
		
		APRE_LazerElevator_C_PreStartLevatorDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.Construct Reset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APRE_LazerElevator_C::Construct_Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.Construct Reset");
		
		APRE_LazerElevator_C_Construct_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.ExecuteUbergraph_PRE_LazerElevator
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRE_LazerElevator_C::ExecuteUbergraph_PRE_LazerElevator(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.ExecuteUbergraph_PRE_LazerElevator");
		
		APRE_LazerElevator_C_ExecuteUbergraph_PRE_LazerElevator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EE6700
	 * 		Name   -> Function PRE_LazerElevator.PRE_LazerElevator_C.Event game Mode__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void APRE_LazerElevator_C::Event_game_Mode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRE_LazerElevator.PRE_LazerElevator_C.Event game Mode__DelegateSignature");
		
		APRE_LazerElevator_C_Event_game_Mode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APRE_LazerElevator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRE_LazerElevator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRE_LazerElevator.PRE_LazerElevator_C");
		return ptr;
	}

}


