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

// BlueprintGeneratedClass P_RC_GoCart.P_RC_GoCart_C
// 0x0008 (FullSize[0x0378] - InheritedSize[0x0370])
class AP_RC_GoCart_C : public AP_GoKart_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass P_RC_GoCart.P_RC_GoCart_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_P_RC_GoCart(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
