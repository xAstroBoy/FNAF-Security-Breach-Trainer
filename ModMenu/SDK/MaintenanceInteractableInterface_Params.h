#pragma once

/**
 * Name: FNAFSB
 * Version: 1
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
	 * Function MaintenanceInteractableInterface.MaintenanceInteractableInterface_C.IsActivated
	 */
	struct UMaintenanceInteractableInterface_C_IsActivated_Params
	{
	public:
		bool                                                       Off;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MaintenanceInteractableInterface.MaintenanceInteractableInterface_C.IsMaintenanceInteractable
	 */
	struct UMaintenanceInteractableInterface_C_IsMaintenanceInteractable_Params
	{
	public:
		bool                                                       IsMaintenanceInteractable;                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
