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
	 * BlueprintGeneratedClass SecurityScreen_Timer.SecurityScreen_Timer_C
	 * Size -> 0x00F0 (FullSize[0x0328] - InheritedSize[0x0238])
	 */
	class ASecurityScreen_Timer_C : public AStaticMeshActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                MOD_Banner_16_10;                                        // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_cable_z;                                              // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Spotlight_Mount;                                      // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_TV_for_wall;                                          // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       InteractTrigger;                                         // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnScreenActive;                                          // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              RenderCamera[0x28];                                      // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       StartOn;                                                 // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HCZF[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStopVideo;                                             // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UWI_SecurityScreenDisplay_C*                         SecurityScreenDisplay;                                   // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBackstage_VannyUI_ForScreen_C*                      BackstageVannyUIForScreen;                               // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Backstage_VannyUI_ForScreen;                             // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              BackstageOGM[0x28];                                      // 0x02D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              OGM[0x28];                                               // 0x0300(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		float GetTimeAsPercentage();
		class FText GetTimeAsText();
		void Bind_Texture_Target(class UTexture* Texture_Target);
		void Find_Camera(bool* Is_Valid, class UTextureRenderTarget** Texture_Target);
		void SetToWidget(class UClass* Class);
		void WidgetToggle(bool Enabled);
		void SetToInstructionCard(E_InstructionCard_Type_E_InstructionCard_Type Type);
		void ReceiveBeginPlay();
		void Set_To_Static();
		void MakeTimersVisible();
		void ExecuteUbergraph_SecurityScreen_Timer(int32_t EntryPoint);
		void OnStopVideo__DelegateSignature();
		void OnScreenActive__DelegateSignature(class ASecurityScreenDisplay_C* Screen);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
