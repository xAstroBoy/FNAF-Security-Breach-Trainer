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

// BlueprintGeneratedClass PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPartsAndServiceABP_Interface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PartsAndServiceABP_Interface.PartsAndServiceABP_Interface_C");
		return ptr;
	}



	void Close(bool close);
	void Off(bool Off);
	void Out(bool In);
	void VoiceBoxSwap(bool Off);
	void ResetFreddy();
	void TestButton_G();
	void TestButton_Y();
	void TestButton_B();
	void TestButton_R();
	void PartsAndServiceGame(TEnumAsByte<PartsAndServiceAnimEnum_EPartsAndServiceAnimEnum> GameEnum);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
