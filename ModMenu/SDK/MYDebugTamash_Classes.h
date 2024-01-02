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
	 * WidgetBlueprintGeneratedClass MYDebugTamash.MYDebugTamash_C
	 * Size -> 0x0101 (FullSize[0x0361] - InheritedSize[0x0260])
	 */
	class UMYDebugTamash_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             BrushWireFrame;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             CollisionPawn;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             CollisionVis;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           EnableDenoiser;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           EnablePP;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    FilterWidth;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             HLODColoration;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             LightingComplexity;                                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             LightingOnly;                                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             LightmapDensity;                                         // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Lit;                                                     // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Lit_DetailLighting;                                      // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             LitLightmapDensity;                                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             LODColoration;                                           // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             MaterialTextureScaleAccuracy;                            // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    MaxBounces;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    MaxPathExposure;                                         // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             MeshUVDensityAccuracy;                                   // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             PathTracing;                                             // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             PrimitiveDistanceAccuracy;                               // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             QuadOverdraw;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RayTracingDebug;                                         // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ReflectionOverride;                                      // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             RequiredTextureResolution;                               // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    SamplesPerPixel;                                         // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ShaderComplexity;                                        // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ShaderComplexityWithQuadOverdraw;                        // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             StationaryLightOverlap;                                  // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Unlit;                                                   // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             VisualizeBuffer;                                         // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Wireframe;                                               // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       Denoiser;                                                // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ViewModes(int32_t ViewModeIndex);
		void Construct();
		void BndEvt__Viewmodes_Lit_DetailLighting_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_LightingOnly_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_LightingComplexity_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_ShaderComplexity_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_LightmapDensity_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_LitLightmapDensity_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_ReflectionOverride_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_VisualizeBuffer_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_StationaryLightOverlap_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_CollisionPawn_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_CollisionVis_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_LODColoration_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_QuadOverdraw_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_PrimitiveDistanceAccuracy_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_MeshUVDensityAccuracy_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_ShaderComplexityWithQuadOverdraw_K2Node_ComponentBoundEvent_15_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_HLODColoration_K2Node_ComponentBoundEvent_16_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_MaterialTextureScaleAccuracy_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_RequiredTextureResolution_K2Node_ComponentBoundEvent_18_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_PathTracing_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_PathTracingDebug_K2Node_ComponentBoundEvent_20_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_BrushWireFrame_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_WireFrame_K2Node_ComponentBoundEvent_22_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Viewmodes_Lit_K2Node_ComponentBoundEvent_23_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__MYDebugTamash_Unlit_K2Node_ComponentBoundEvent_24_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__MYDebugTamash_EnablePP_K2Node_ComponentBoundEvent_25_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__MYDebugTamash_EditableTextBox_296_K2Node_ComponentBoundEvent_26_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__MYDebugTamash_EnableDenoiser_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__MYDebugTamash_MaxBounces_1_K2Node_ComponentBoundEvent_28_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__MYDebugTamash_SamplesPerPixel_1_K2Node_ComponentBoundEvent_29_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__MYDebugTamash_MaxPathExposure_K2Node_ComponentBoundEvent_30_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void ExecuteUbergraph_MYDebugTamash(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
