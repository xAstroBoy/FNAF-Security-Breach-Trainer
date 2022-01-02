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

// WidgetBlueprintGeneratedClass WI_MIssions.WI_MIssions_C
// 0x0044 (FullSize[0x0274] - InheritedSize[0x0230])
class UWI_MIssions_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                MissionBox;                                                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox;                                                 // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FFNAFMissionState>                   Missions;                                                  // 0x0248(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                CurrentIndex;                                              // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Has_New;                                                   // 0x025C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M8I9[0x3];                                     // 0x025D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   axisInput;                                                 // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Current_input;                                             // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Recent_Mission_Index;                                      // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WI_MIssions.WI_MIssions_C");
		return ptr;
	}



	void MoveMenu(const struct FVector2D& InVec);
	void CreateMenu();
	void InuputNext();
	void InputPrevious();
	void InputBack();
	void InputPrimary();
	void InputSecondary();
	void InputTertiary();
	void InputLookAxis(const struct FVector2D& Axis);
	void InputOpen();
	void InputZoom(const struct FVector2D& Axis);
	void InputCycle(int Increment);
	void InputDpadDirection(const struct FVector2D& Direction);
	void Reset();
	void Construct();
	void BindAllEvents();
	void GetNewMissions(const struct FName& MissionName, const struct FFNAFMissionState& MissionState, const struct FFNAFMissionInfo& MissionInfo);
	void UpdateMissions();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void InputOptionAxis(const struct FVector2D& Axis);
	void InputMoveAxis(const struct FVector2D& Axis);
	void InputClose();
	void InputAccept();
	void ExecuteUbergraph_WI_MIssions(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
