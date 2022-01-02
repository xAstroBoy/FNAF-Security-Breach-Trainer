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

// Function FreddyInteractibleActor.FreddyInteractibleActor_C.GetFreddyVO
struct AFreddyInteractibleActor_C_GetFreddyVO_Params
{
	TEnumAsByte<FreddyVOType_EFreddyVOType>            VOType;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UDialogueWave*>                       FreddyDialog;                                              // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function FreddyInteractibleActor.FreddyInteractibleActor_C.GetFreddyActionLocationAndRotation
struct AFreddyInteractibleActor_C_GetFreddyActionLocationAndRotation_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
