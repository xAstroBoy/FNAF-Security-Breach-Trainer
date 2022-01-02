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

// WidgetBlueprintGeneratedClass W_ScoreBoard.W_ScoreBoard_C
// 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
class UW_ScoreBoard_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                DataBox;                                                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_66;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ACheckPointMgr_C*                            CheckPointManger;                                          // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ScoreBoard.W_ScoreBoard_C");
		return ptr;
	}



	void GetCanMove(bool* CanMove);
	void CanMove(bool New_Can_Move);
	void StartRaceCountdown(float TimeTillStart);
	void StartRace();
	void EndRace();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void GameEnd();
	void ExecuteUbergraph_W_ScoreBoard(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
