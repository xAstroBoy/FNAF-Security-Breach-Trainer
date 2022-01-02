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

// BlueprintGeneratedClass BI_UserInputUI.BI_UserInputUI_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBI_UserInputUI_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BI_UserInputUI.BI_UserInputUI_C");
		return ptr;
	}



	void Reset();
	void InputDpadDirection(const struct FVector2D& Direction);
	void InputCycle(int Increment);
	void InputZoom(const struct FVector2D& Axis);
	void InputOpen();
	void InputOptionAxis(const struct FVector2D& Axis);
	void InputLookAxis(const struct FVector2D& Axis);
	void InputMoveAxis(const struct FVector2D& Axis);
	void InputTertiary();
	void InputSecondary();
	void InputPrimary();
	void InputAccept();
	void InputBack();
	void InputClose();
	void InputPrevious();
	void InuputNext();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
