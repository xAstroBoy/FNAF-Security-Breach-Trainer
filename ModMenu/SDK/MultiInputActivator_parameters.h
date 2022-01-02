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

// Function MultiInputActivator.MultiInputActivator_C.GetNumberActivated
struct AMultiInputActivator_C_GetNumberActivated_Params
{
	int                                                NumberActivated;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MultiInputActivator.MultiInputActivator_C.CheckAllActivatorsOn
struct AMultiInputActivator_C_CheckAllActivatorsOn_Params
{
	bool                                               AllOn;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Count;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MultiInputActivator.MultiInputActivator_C.ReceiveBeginPlay
struct AMultiInputActivator_C_ReceiveBeginPlay_Params
{
};

// Function MultiInputActivator.MultiInputActivator_C.ActivateObject
struct AMultiInputActivator_C_ActivateObject_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MultiInputActivator.MultiInputActivator_C.DeactivateObject
struct AMultiInputActivator_C_DeactivateObject_Params
{
	class AActor*                                      Deactivator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MultiInputActivator.MultiInputActivator_C.Deactivate Inputs
struct AMultiInputActivator_C_Deactivate_Inputs_Params
{
};

// Function MultiInputActivator.MultiInputActivator_C.ExecuteUbergraph_MultiInputActivator
struct AMultiInputActivator_C_ExecuteUbergraph_MultiInputActivator_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MultiInputActivator.MultiInputActivator_C.OnCanActivate__DelegateSignature
struct AMultiInputActivator_C_OnCanActivate__DelegateSignature_Params
{
	int                                                Count;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Activator;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MultiInputActivator.MultiInputActivator_C.OnCantActivate__DelegateSignature
struct AMultiInputActivator_C_OnCantActivate__DelegateSignature_Params
{
	int                                                Count;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Activator;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
