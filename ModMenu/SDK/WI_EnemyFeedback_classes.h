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

// WidgetBlueprintGeneratedClass WI_EnemyFeedback.WI_EnemyFeedback_C
// 0x0018 (FullSize[0x0258] - InheritedSize[0x0240])
class UWI_EnemyFeedback_C : public UWI_Empty_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            MoveUpAndFadeOut;                                          // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  EnemyHitText;                                              // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_EnemyFeedback.WI_EnemyFeedback_C");
		return ptr;
	}



	void PlayFeedback(float Damage);
	void EndFeedback();
	void Construct();
	void ExecuteUbergraph_WI_EnemyFeedback(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
