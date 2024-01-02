#pragma once

/**
 * Name: FNAFSB
 * Version: 1
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
	 * WidgetBlueprintGeneratedClass WI_Cassie_State.WI_Cassie_State_C
	 * Size -> 0x0240 (FullSize[0x04A0] - InheritedSize[0x0260])
	 */
	class UWI_Cassie_State_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    CassieStateFadeOut;                                      // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              CurrentState;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       Crouched;                                                // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Running;                                                 // 0x0279(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NYUO[0x6];                                   // 0x027A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Stand;                                                   // 0x0280(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         Run;                                                     // 0x0308(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         Crouch;                                                  // 0x0390(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         CrouchRun;                                               // 0x0418(0x0088) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void CassieStateUpdate(bool IsCrouched, bool IsRunning);
		void RunningToggle(bool On);
		void CrouchingToggle(bool On);
		void Finished_ABCF86A04A89A23C3A424D9E53D03C7D();
		void FadeOutCassieState();
		void Construct();
		void ExecuteUbergraph_WI_Cassie_State(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
