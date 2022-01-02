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
//		Name   -> Function DBG_SeekerWidget.DBG_SeekerWidget_C.Get_CurrentRoomText_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UDBG_SeekerWidget_C::Get_CurrentRoomText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBG_SeekerWidget.DBG_SeekerWidget_C.Get_CurrentRoomText_Text_1");

	UDBG_SeekerWidget_C_Get_CurrentRoomText_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DBG_SeekerWidget.DBG_SeekerWidget_C.Setup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAISeeker_C*                                 AISeeker                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDBG_SeekerWidget_C::Setup(class AAISeeker_C* AISeeker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBG_SeekerWidget.DBG_SeekerWidget_C.Setup");

	UDBG_SeekerWidget_C_Setup_Params params {};
	params.AISeeker = AISeeker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function DBG_SeekerWidget.DBG_SeekerWidget_C.ExecuteUbergraph_DBG_SeekerWidget
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDBG_SeekerWidget_C::ExecuteUbergraph_DBG_SeekerWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBG_SeekerWidget.DBG_SeekerWidget_C.ExecuteUbergraph_DBG_SeekerWidget");

	UDBG_SeekerWidget_C_ExecuteUbergraph_DBG_SeekerWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
