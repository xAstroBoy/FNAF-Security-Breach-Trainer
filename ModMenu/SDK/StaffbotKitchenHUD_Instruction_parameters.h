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

// Function StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C.SetCompleted
struct UStaffbotKitchenHUD_Instruction_C_SetCompleted_Params
{
};

// Function StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C.SetVisible
struct UStaffbotKitchenHUD_Instruction_C_SetVisible_Params
{
	bool                                               IsVisible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C.SetInstructionText
struct UStaffbotKitchenHUD_Instruction_C_SetInstructionText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C.PreConstruct
struct UStaffbotKitchenHUD_Instruction_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StaffbotKitchenHUD_Instruction.StaffbotKitchenHUD_Instruction_C.ExecuteUbergraph_StaffbotKitchenHUD_Instruction
struct UStaffbotKitchenHUD_Instruction_C_ExecuteUbergraph_StaffbotKitchenHUD_Instruction_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
