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
	 * BlueprintGeneratedClass SecurityScreenDisplayBase.SecurityScreenDisplayBase_C
	 * Size -> 0x0075 (FullSize[0x02AD] - InheritedSize[0x0238])
	 */
	class ASecurityScreenDisplayBase_C : public AStaticMeshActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    Widget;                                                  // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              RenderCamera[0x28];                                      // 0x0248(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       StartOn;                                                 // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1TZX[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWI_SecurityScreenDisplay_C*                         SecurityScreenDisplay;                                   // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnStopVideo;                                             // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnScreenActive;                                          // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    ScreenElementIndex;                                      // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SetToStatic;                                             // 0x02AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void BindTextureTarget(class UTexture* TextureTarget);
		void FindCamera(bool* IsValid, class UTextureRenderTarget2D** TextureTarget);
		void ReceiveBeginPlay();
		void SetToStatic();
		void SettoTexture(bool FindCamera, class UTexture* TextureTarget);
		void SetToWidget(class UClass* Class);
		void WidgetToggle(bool Enabled);
		void SetToInstructionCard(E_InstructionCard_Type Type);
		void BeginRender();
		void EndRender();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void PlayVideo(const struct FCinematicCutscene& Video, class UMediaPlayer* MediaPlayer, int32_t ElementIndex);
		void StopVideo();
		void ExecuteUbergraph_SecurityScreenDisplayBase(int32_t EntryPoint);
		void OnScreenActive__DelegateSignature();
		void OnStopVideo__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
