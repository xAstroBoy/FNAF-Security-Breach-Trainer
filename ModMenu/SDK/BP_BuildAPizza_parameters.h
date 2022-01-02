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

// Function BP_BuildAPizza.BP_BuildAPizza_C.UpdateMaterials
struct ABP_BuildAPizza_C_UpdateMaterials_Params
{
};

// Function BP_BuildAPizza.BP_BuildAPizza_C.SetMaterial
struct ABP_BuildAPizza_C_SetMaterial_Params
{
	class UPrimitiveComponent*                         Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          MaterialNormal;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          MaterialFOV;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BuildAPizza.BP_BuildAPizza_C.CopyPizza
struct ABP_BuildAPizza_C_CopyPizza_Params
{
	class UChildActorComponent*                        pizza;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BuildAPizza.BP_BuildAPizza_C.ChangeStateHelper
struct ABP_BuildAPizza_C_ChangeStateHelper_Params
{
};

// Function BP_BuildAPizza.BP_BuildAPizza_C.UserConstructionScript
struct ABP_BuildAPizza_C_UserConstructionScript_Params
{
};

// Function BP_BuildAPizza.BP_BuildAPizza_C.ChangeState
struct ABP_BuildAPizza_C_ChangeState_Params
{
	TEnumAsByte<PizzaStep_EPizzaStep>                  PizzaStep;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BuildAPizza.BP_BuildAPizza_C.ExecuteUbergraph_BP_BuildAPizza
struct ABP_BuildAPizza_C_ExecuteUbergraph_BP_BuildAPizza_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
