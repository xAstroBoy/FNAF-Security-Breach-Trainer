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
//		Name   -> Function ShatteredRoxy.ShatteredRoxy_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AShatteredRoxy_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShatteredRoxy.ShatteredRoxy_C.ReceiveBeginPlay");

	AShatteredRoxy_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ShatteredRoxy.ShatteredRoxy_C.Handle Sight
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Updated_Actor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AShatteredRoxy_C::Handle_Sight(class AActor* Updated_Actor, bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShatteredRoxy.ShatteredRoxy_C.Handle Sight");

	AShatteredRoxy_C_Handle_Sight_Params params {};
	params.Updated_Actor = Updated_Actor;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ShatteredRoxy.ShatteredRoxy_C.Stop Investigating Sound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AShatteredRoxy_C::Stop_Investigating_Sound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShatteredRoxy.ShatteredRoxy_C.Stop Investigating Sound");

	AShatteredRoxy_C_Stop_Investigating_Sound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ShatteredRoxy.ShatteredRoxy_C.OnListenStarted
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AShatteredRoxy_C::OnListenStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShatteredRoxy.ShatteredRoxy_C.OnListenStarted");

	AShatteredRoxy_C_OnListenStarted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00EE6700
//		Name   -> Function ShatteredRoxy.ShatteredRoxy_C.ExecuteUbergraph_ShatteredRoxy
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AShatteredRoxy_C::ExecuteUbergraph_ShatteredRoxy(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ShatteredRoxy.ShatteredRoxy_C.ExecuteUbergraph_ShatteredRoxy");

	AShatteredRoxy_C_ExecuteUbergraph_ShatteredRoxy_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
