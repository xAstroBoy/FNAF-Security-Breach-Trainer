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
	 * BlueprintGeneratedClass AreaManager.AreaManager_C
	 * Size -> 0x00C9 (FullSize[0x02F1] - InheritedSize[0x0228])
	 */
	class AAreaManager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TMap<TEnumAsByte<Areas_EAreas>, struct FRoomArray>         AreaRooms;                                               // 0x0238(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              RoomsToArea[0x50];                                       // 0x0288(0x0050) UNKNOWN PROPERTY: MapProperty
		TEnumAsByte<Areas_EAreas>                                  PlayerCurrentArea;                                       // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X9AL[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerEnteredArea;                                     // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TEnumAsByte<Areas_EAreas>                                  PlayerNewArea;                                           // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void On_Player_Entered_Room(class ARoomAreaBase* Room);
		void ExecuteUbergraph_AreaManager(int EntryPoint);
		void OnPlayerEnteredArea__DelegateSignature(TEnumAsByte<Areas_EAreas> NewArea);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
