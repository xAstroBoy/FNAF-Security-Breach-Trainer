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

// Function PizzaMakerManager.PizzaMakerManager_C.FinishStep
struct APizzaMakerManager_C_FinishStep_Params
{
	TEnumAsByte<PizzaStep_EPizzaStep>                  Step;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PizzaMakerManager.PizzaMakerManager_C.MoveToPizzaStep
struct APizzaMakerManager_C_MoveToPizzaStep_Params
{
	TEnumAsByte<PizzaStep_EPizzaStep>                  Step;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PizzaMakerManager.PizzaMakerManager_C.ShowNextStationName
struct APizzaMakerManager_C_ShowNextStationName_Params
{
};

// Function PizzaMakerManager.PizzaMakerManager_C.Step Completed
struct APizzaMakerManager_C_Step_Completed_Params
{
	TEnumAsByte<PizzaStep_EPizzaStep>                  Step;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PizzaMakerManager.PizzaMakerManager_C.ReceiveBeginPlay
struct APizzaMakerManager_C_ReceiveBeginPlay_Params
{
};

// Function PizzaMakerManager.PizzaMakerManager_C.PlayStepAudio
struct APizzaMakerManager_C_PlayStepAudio_Params
{
};

// Function PizzaMakerManager.PizzaMakerManager_C.ExecuteUbergraph_PizzaMakerManager
struct APizzaMakerManager_C_ExecuteUbergraph_PizzaMakerManager_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
