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

// Function SodaBottleSpill.SodaBottleSpill_C.CanDeactivate
struct ASodaBottleSpill_C_CanDeactivate_Params
{
	bool                                               CanDeactivate;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SodaBottleSpill.SodaBottleSpill_C.GetActivatableState
struct ASodaBottleSpill_C_GetActivatableState_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ActivatableState_EActivatableState>    CurrentState;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SodaBottleSpill.SodaBottleSpill_C.CanActivate
struct ASodaBottleSpill_C_CanActivate_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanActivate;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	fnaf9_EConditionFailReason                         CantReason;                                                // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SodaBottleSpill.SodaBottleSpill_C.Shootbottle
struct ASodaBottleSpill_C_Shootbottle_Params
{
};

// Function SodaBottleSpill.SodaBottleSpill_C.OnActivatorDone
struct ASodaBottleSpill_C_OnActivatorDone_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SodaBottleSpill.SodaBottleSpill_C.SetActivated
struct ASodaBottleSpill_C_SetActivated_Params
{
};

// Function SodaBottleSpill.SodaBottleSpill_C.DeactivateObject
struct ASodaBottleSpill_C_DeactivateObject_Params
{
	class AActor*                                      Deactivator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SodaBottleSpill.SodaBottleSpill_C.SetDeactivated
struct ASodaBottleSpill_C_SetDeactivated_Params
{
};

// Function SodaBottleSpill.SodaBottleSpill_C.ActivateObject
struct ASodaBottleSpill_C_ActivateObject_Params
{
	class AActor*                                      Activator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SodaBottleSpill.SodaBottleSpill_C.ExecuteUbergraph_SodaBottleSpill
struct ASodaBottleSpill_C_ExecuteUbergraph_SodaBottleSpill_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
