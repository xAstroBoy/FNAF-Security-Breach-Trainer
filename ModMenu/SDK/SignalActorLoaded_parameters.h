#pragma once

// Name: FNAF Security Breach, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function SignalActorLoaded.SignalActorLoaded_C.ReceiveTick
struct ASignalActorLoaded_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SignalActorLoaded.SignalActorLoaded_C.ReceiveBeginPlay
struct ASignalActorLoaded_C_ReceiveBeginPlay_Params
{
};

// Function SignalActorLoaded.SignalActorLoaded_C.ExecuteUbergraph_SignalActorLoaded
struct ASignalActorLoaded_C_ExecuteUbergraph_SignalActorLoaded_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SignalActorLoaded.SignalActorLoaded_C.OnActorLoaded__DelegateSignature
struct ASignalActorLoaded_C_OnActorLoaded__DelegateSignature_Params
{
	class AActor*                                      LoadedActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
