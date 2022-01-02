// Name: FNAF Security Breach, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.GetButton
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABasicButton_C*                              AsBasic_Button                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_StageButton_C::GetButton(class ABasicButton_C** AsBasic_Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.GetButton");

	ABP_StageButton_C_GetButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsBasic_Button != nullptr)
		*AsBasic_Button = params.AsBasic_Button;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_StageButton_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.UserConstructionScript");

	ABP_StageButton_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.Up->Down__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_StageButton_C::Up__Down__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.Up->Down__FinishedFunc");

	ABP_StageButton_C_Up__Down__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.Up->Down__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_StageButton_C::Up__Down__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.Up->Down__UpdateFunc");

	ABP_StageButton_C_Up__Down__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.Down->Up__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_StageButton_C::Down__Up__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.Down->Up__FinishedFunc");

	ABP_StageButton_C_Down__Up__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.Down->Up__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_StageButton_C::Down__Up__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.Down->Up__UpdateFunc");

	ABP_StageButton_C_Down__Up__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.PostSaveGame
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_StageButton_C::PostSaveGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.PostSaveGame");

	ABP_StageButton_C_PostSaveGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.OnStoreGameData
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_StageButton_C::OnStoreGameData(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.OnStoreGameData");

	ABP_StageButton_C_OnStoreGameData_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.OnGameDataLoaded
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_StageButton_C::OnGameDataLoaded(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.OnGameDataLoaded");

	ABP_StageButton_C_OnGameDataLoaded_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.MoveDown
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_StageButton_C::MoveDown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.MoveDown");

	ABP_StageButton_C_MoveDown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.MoveUp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_StageButton_C::MoveUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.MoveUp");

	ABP_StageButton_C_MoveUp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.ChangeColor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ChangeColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_StageButton_C::ChangeColor(bool ChangeColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.ChangeColor");

	ABP_StageButton_C_ChangeColor_Params params {};
	params.ChangeColor = ChangeColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.OnCheckpointSave
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_StageButton_C::OnCheckpointSave(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.OnCheckpointSave");

	ABP_StageButton_C_OnCheckpointSave_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.BndEvt__StageShowStateHandler_K2Node_ComponentBoundEvent_0_OnObjectStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWorldStateHandlerComponent*                 Handler                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_StageButton_C::BndEvt__StageShowStateHandler_K2Node_ComponentBoundEvent_0_OnObjectStateChanged__DelegateSignature(class UWorldStateHandlerComponent* Handler, bool bState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.BndEvt__StageShowStateHandler_K2Node_ComponentBoundEvent_0_OnObjectStateChanged__DelegateSignature");

	ABP_StageButton_C_BndEvt__StageShowStateHandler_K2Node_ComponentBoundEvent_0_OnObjectStateChanged__DelegateSignature_Params params {};
	params.Handler = Handler;
	params.bState = bState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_StageButton_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.ReceiveBeginPlay");

	ABP_StageButton_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.ButtonPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_StageButton_C::ButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.ButtonPressed");

	ABP_StageButton_C_ButtonPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.Startup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_StageButton_C::Startup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.Startup");

	ABP_StageButton_C_Startup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.PostGameLoad
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_StageButton_C::PostGameLoad()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.PostGameLoad");

	ABP_StageButton_C_PostGameLoad_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.OnCheckpointLoad
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFNAFSaveData*                               SaveDataObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_StageButton_C::OnCheckpointLoad(class UFNAFSaveData* SaveDataObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.OnCheckpointLoad");

	ABP_StageButton_C_OnCheckpointLoad_Params params {};
	params.SaveDataObject = SaveDataObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function BP_StageButton.BP_StageButton_C.ExecuteUbergraph_BP_StageButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_StageButton_C::ExecuteUbergraph_BP_StageButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_StageButton.BP_StageButton_C.ExecuteUbergraph_BP_StageButton");

	ABP_StageButton_C_ExecuteUbergraph_BP_StageButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
