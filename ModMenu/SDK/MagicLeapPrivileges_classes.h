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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapPrivilegesFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_RequestPrivilegeAsync(MagicLeapPrivileges_EMagicLeapPrivilege Privilege, const class FScriptDelegate& ResultDelegate);
		bool STATIC_RequestPrivilege(MagicLeapPrivileges_EMagicLeapPrivilege Privilege);
		bool STATIC_CheckPrivilege(MagicLeapPrivileges_EMagicLeapPrivilege Privilege);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
