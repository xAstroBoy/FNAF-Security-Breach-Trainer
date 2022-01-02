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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BI_AIRaceInput.BI_AIRaceInput_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBI_AIRaceInput_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BI_AIRaceInput.BI_AIRaceInput_C");
		return ptr;
	}



	void AITurnRight(float Axis);
	void AIMoveForward(float Axis);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
