﻿#pragma once

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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraFunctions.CameraFunctions_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCameraFunctions_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CameraFunctions.CameraFunctions_C");
		return ptr;
	}



	bool STATIC_Is_Visible_in_Camera(const struct FVector& Location, TArray<class AActor*> ActorsToIgnore, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
