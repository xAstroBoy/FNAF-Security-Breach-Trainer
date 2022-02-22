#pragma once

/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function FreddyInteractibleInterface.FreddyInteractibleInterface_C.GetFreddyActionLocationAndRotation
	 */
	struct UFreddyInteractibleInterface_C_GetFreddyActionLocationAndRotation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FreddyInteractibleInterface.FreddyInteractibleInterface_C.GetFreddyVO
	 */
	struct UFreddyInteractibleInterface_C_GetFreddyVO_Params
	{
	public:
		FreddyVOType_EFreddyVOType                                 VOType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UDialogueWave*>                               FreddyDialog;                                            // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
