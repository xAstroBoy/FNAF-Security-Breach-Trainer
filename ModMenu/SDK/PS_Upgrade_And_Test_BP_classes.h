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
	 * BlueprintGeneratedClass PS_Upgrade_And_Test_BP.PS_Upgrade_And_Test_BP_C
	 * Size -> 0x0BF8 (FullSize[0x0E20] - InheritedSize[0x0228])
	 */
	class APS_Upgrade_And_Test_BP_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       RightEyeRemoveCollider;                                  // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       LeftEyeRemoveCollider;                                   // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    SquareButton_InsideChest;                                // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    SquareButton_Hand;                                       // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    SquareButton_ForeArm;                                    // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    SquareButton_Chest;                                      // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    SquareButton_Bowtie;                                     // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Arm_OpenClose;                                           // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Chest_OpenClose;                                         // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URectLightComponent*                                 RectLight;                                               // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    XButtonTest;                                             // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    CircleButtonTest;                                        // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    TriangleButtonTest;                                      // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    SquareButtonTest;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    XButtonArm1;                                             // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    SquareButtonArm1;                                        // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    CircleButtonArm1;                                        // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    TriangleButtonArm1;                                      // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    XButtonArm2;                                             // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    SquareButtonArm2;                                        // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    CircleButtonArm2;                                        // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    TriangleButtonArm2;                                      // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    XButtonFace1;                                            // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    TriangleButtonFace1;                                     // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    SquareButtonFace2;                                       // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    CircleButtonFace2;                                       // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    XButtonFace2;                                            // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    TriangleButtonFace2;                                     // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    CircleButtonFace1;                                       // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    SquareButtonFace1;                                       // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    CircleButtonChest1;                                      // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    SquareButtonChest1;                                      // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    XButtonChest1;                                           // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    TriangleButtonChest;                                     // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    CircleButtonChest2;                                      // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    SquareButtonChest2;                                      // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    XButtonChest2;                                           // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    SquareButtonHead;                                        // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    XButtonHead;                                             // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    CircleButtonHead;                                        // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    TriangleButtonHead;                                      // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_33;                    // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_32;                    // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_31;                    // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_30;                    // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_29;                    // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_28;                    // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_27;                    // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_26;                    // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_25;                    // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_24;                    // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_23;                    // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_22;                    // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_21;                    // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_20;                    // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_19;                    // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_18;                    // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_17;                    // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_16;                    // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_15;                    // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_14;                    // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_13;                    // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_12;                    // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_11;                    // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_10;                    // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_9;                     // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_8;                     // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_7;                     // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_6;                     // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_Parts_and_Service_Button_Base_5;                     // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     JumpscareTransform;                                      // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       VoiceboxCollider;                                        // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       EyesReplaceCollider;                                     // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       FaceCollider;                                            // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       ChestCollider;                                           // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       BowtieCollider;                                          // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       ArmCloseCollider;                                        // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       ArmRemoveClaws;                                          // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       ArmOpenCollider;                                         // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Green_2_Eye_WireConnector;                               // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Yellow_2_Eye_WireConnector;                              // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Blue_2_Eye_WireConnector;                                // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Red_2_Eye_WireConnector;                                 // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Green_1_Eye_WireConnector;                               // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Yellow_1_Eye_WireConnector;                              // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Red_1_Eye_WireConnector;                                 // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Blue_1_Eye_WireConnector;                                // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Yellow_2_Arm_WireConnector;                              // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Red_2_Arm_WireConnector;                                 // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Blue_2_Arm_WireConnector;                                // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Green_2_Arm_WireConnector;                               // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Yellow_1_Arm_WireConnector;                              // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Red_1_Arm_WireConnector;                                 // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Blue_1_Arm_WireConnector;                                // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Green_1_Arm_WireConnector;                               // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Red_2_Chest_WireConnector;                               // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Blue_2_Chest_WireConnector;                              // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Green_2_Chest_WireConnector;                             // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Yellow_1_Chest_WireConnector;                            // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Red_1_Chest_WireConnector;                               // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Blue_1_Chest_WireConnector;                              // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Green_1_Chest_WireConnector;                             // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Blue_1_Head_WireConnector;                               // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Green_1_Head_WireConnector;                              // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Red_1_Head_WireConnector;                                // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Yellow_1_Head_WireConnector;                             // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Red_1_TestButtton;                                       // 0x0580(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Green_1_TestButtton;                                     // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Yellow_1_TestButtton;                                    // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Blue_1_TestButtton;                                      // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GreenWire_2_eye;                                         // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              RedWire_2_Eye;                                           // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              YellowWire_2_eye;                                        // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              BlueWire_2_eye;                                          // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              YellowWire_1_Eye;                                        // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              BlueWire_1_Eye;                                          // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GreenWire_1_Eye;                                         // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Redwire_1_Eye;                                           // 0x05D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GreenWire_2_Chest;                                       // 0x05E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              RedWire_2_Chest;                                         // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              BlueWire_2_Chest;                                        // 0x05F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              YellowWire_1_Chest;                                      // 0x05F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GreenWire_1_Chest;                                       // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              RedWire_1_Chest;                                         // 0x0608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              BlueWire_1_Chest;                                        // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              YellowWire_2_Arm;                                        // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              YellowWire_1_Arm;                                        // 0x0620(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              RedWire_2_Arm;                                           // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              RedWire_1_Arm;                                           // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GreenWire_2_Arm;                                         // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GreenWire_1_Arm;                                         // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              BlueWire_2_Arm;                                          // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              BlueWire_1_Arm;                                          // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              RedWire_1_head;                                          // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              YellowWire_1_Head;                                       // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GreenWire_1_Head;                                        // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              BlueWire_1_Head;                                         // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     EyeUpgradeScene;                                         // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     VoiceBoxUpgradeScene;                                    // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ArmUpgradeScene;                                         // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PowerUpgradeGameScene;                                   // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              RIG_PartsAndServiceArms;                                 // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPlayerInteractComponent_C*                          PlayerInteractComponent;                                 // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              RIG_Glamrock_Freddy_PartsServ;                           // 0x06B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugEasyMode;                                           // 0x06B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHidden;                                                // 0x06B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsUsingMachine;                                          // 0x06BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasBeenCompleted;                                        // 0x06BB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y3G1[0x4];                                   // 0x06BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACameraActor*                                        ArmCamera;                                               // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACameraActor*                                        EyesCamera;                                              // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACameraActor*                                        ChestCamera;                                             // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACameraActor*                                        ChestCameraZoomed;                                       // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACameraActor*                                        HeadCamera;                                              // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACameraActor*                                        TestingCamera;                                           // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		fnaf9_EFreddyUpgradeType                                   UpgradeType;                                             // 0x06F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QX52[0x7];                                   // 0x06F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> AvailableColorsArray;                                    // 0x06F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> ColorSequenceColorArray;                                 // 0x0708(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    RoundIndex;                                              // 0x0718(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ColorSequenceIndex;                                      // 0x071C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ColorSequenceDelay;                                      // 0x0720(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0ZEJ[0x4];                                   // 0x0724(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum, struct FPS_Upgrade_Freddy_ColorData_DS> SequencePromptData;                                      // 0x0728(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                      ColorDisplayDuration;                                    // 0x0778(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W00H[0x4];                                   // 0x077C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   DefaultMaterial;                                         // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class UStaticMeshComponent*, PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> WireConnectorColorMap;                                   // 0x0788(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum, class UStaticMeshComponent*> WireColorConnectorMap;                                   // 0x07D8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		PS_Upgrade_Fredy_GameState_EPS_Upgrade_Fredy_GameState     GameState;                                               // 0x0828(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AZ5X[0x7];                                   // 0x0829(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UStaticMeshComponent*, PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum> TestingButtonConnectorColorMap;                          // 0x0830(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum, class UStaticMeshComponent*> TestingButtonColorConnectorMap;                          // 0x0880(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                      RoundEndDelay;                                           // 0x08D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxTestingRounds;                                        // 0x08D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              RealChairActor[0x28];                                    // 0x08D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TMap<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum, class USkeletalMeshComponent*> PowerUpgradeWireMap;                                     // 0x0900(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum, class UStaticMeshComponent*> PowerUpgradeConnectorMap;                                // 0x0950(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum, class USkeletalMeshComponent*> ArmUpgradeWireMap;                                       // 0x09A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum, class UStaticMeshComponent*> ArmUpgradeConnectorMap;                                  // 0x09F0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum, class USkeletalMeshComponent*> EyeUpgradeWireMap;                                       // 0x0A40(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum, class UStaticMeshComponent*> EyeUpgradeConnectorMap;                                  // 0x0A90(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum, class USkeletalMeshComponent*> VoiceboxUpgradeWireMap;                                  // 0x0AE0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum, class UStaticMeshComponent*> VoiceboxUpgradeConnectorMap;                             // 0x0B30(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       BowTieHasBeenRemoved;                                    // 0x0B80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4GY1[0x3];                                   // 0x0B81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EyesRemoved;                                             // 0x0B84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ChestHasBeenClosed;                                      // 0x0B88(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UH3J[0x7];                                   // 0x0B89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                MontyOpenArm;                                            // 0x0B90(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Monty_Close_Arm;                                         // 0x0BA8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                MontyRemoveOldClaws;                                     // 0x0BC0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ChicaRemoveBowtie;                                       // 0x0BD8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ChicaRemoveChest;                                        // 0x0BF0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ChicaReplaceBowtie;                                      // 0x0C08(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ChicaReplaceChest;                                       // 0x0C20(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ChicaRemoveVoicebox;                                     // 0x0C38(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                RoxyOpenFace;                                            // 0x0C50(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                RoxyCloseFace;                                           // 0x0C68(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                RoxyRemoveEyes;                                          // 0x0C80(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                RoxyReplaceEyes;                                         // 0x0C98(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UBoxComponent*                                       ValidHitCollider;                                        // 0x0CB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            ArmMaterial;                                             // 0x0CB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            HandMaterial;                                            // 0x0CC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            FaceMaterial;                                            // 0x0CC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            VoiceBoxMaterial;                                        // 0x0CD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            EyeMaterial;                                             // 0x0CD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            ChestAndBowtieMaterial;                                  // 0x0CE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            CurrentMaterial;                                         // 0x0CE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPulsing;                                               // 0x0CF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RSJB[0x3];                                   // 0x0CF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxHighlightValue;                                       // 0x0CF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Highlight_Pulse_Speed_Multiplier;                        // 0x0CF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HK7Q[0x4];                                   // 0x0CFC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            ButtonDarkMaterial;                                      // 0x0D00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            ButtonLightMaterial;                                     // 0x0D08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ValidButtonChild;                                        // 0x0D10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UWidgetComponent*>                            TestButtonUIArray;                                       // 0x0D18(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class UWidgetComponent*>                            HeadButtonUIArray;                                       // 0x0D28(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class UWidgetComponent*>                            FaceButtonUIArray;                                       // 0x0D38(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class UWidgetComponent*>                            ChestButtonUIArray;                                      // 0x0D48(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<class UWidgetComponent*>                            ArmButtonUIArray;                                        // 0x0D58(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		bool                                                       VOFinished;                                              // 0x0D68(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PEV8[0x7];                                   // 0x0D69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            EndoMaterial;                                            // 0x0D70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DidNotClickConnector;                                    // 0x0D78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N9OX[0x7];                                   // 0x0D79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PartsAndServiceCenter[0x28];                             // 0x0D79(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      ButtonBrightnessMultiplier;                              // 0x0DA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InstructionCardHasBeenViewed;                            // 0x0DAC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		E_InstructionCard_Type_E_InstructionCard_Type              CurrentInstructionCard;                                  // 0x0DAD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I1U1[0x2];                                   // 0x0DAE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       ClickedEyeCollider;                                      // 0x0DB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PerformingEyeRemoval;                                    // 0x0DB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MWTW[0x7];                                   // 0x0DB9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UStaticMeshComponent*, class UMaterialInstanceDynamic*> DynamicMaterials;                                        // 0x0DC0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		float                                                      TempBrightnessToReturnTo;                                // 0x0E10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BrightnessSimonButtonFlash;                              // 0x0E14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BrightnessConnectedButton;                               // 0x0E18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BrightnessDisconnectedButton;                            // 0x0E1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetInteractViewLocation(bool* Valid, struct FVector* WorldLocation);
		void GetInteractViewAngles(fnaf9_ECameraAngleFlags* AnglesToCheck);
		void GetInteractibleType(InteractibleType_EInteractibleType* Type, InteractiblePressType_EInteractiblePressType* PressType);
		void CanPlayerInteract(bool* CanInteract, fnaf9_EConditionFailReason* CantReason);
		void UpdateUIOnTick(bool* Output);
		void GetInstructionOverride(class FText* Instruction);
		void InteractIgnoresTrace(bool* IgnoreTrace);
		void GetHUDInstruction(class FText* Instruction);
		void HandleButtonMaterialState(PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum ColorEnum);
		void HideHighlight(class UMaterialInstanceDynamic* Material);
		void ShowHighlight(class UMaterialInstanceDynamic* Material);
		void Set_New_Valid_Collider(class UBoxComponent* ColliderToSet, bool IsForEyeRemovalColliders);
		void HandleSwappingClickEvent();
		void HandleClosingClickEvent();
		void SetupEyeUpgradeSequence();
		void SetupVoiceboxUpgradeSequence();
		void Setup_Arm_Upgrade_Sequence();
		void SetupPowerUpgradeSequence();
		void SetGameStateForUpgradeType();
		void GetInitialCamera(class ACameraActor** Camera);
		void MapAllOpeningSphereComponents();
		void SetupWireStateForUpgradeType(fnaf9_EFreddyUpgradeType Upgrade_Type);
		void MapAllGameWireCompnents();
		void Handle_Face_Button_Click(PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum Color1, PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum Color2);
		void AddRandomColorToSequence();
		void SetupAvailableColorsForTesting();
		void MapAllTestButtonComponents();
		void HandleOpeningClickEvent();
		void HandleTestingClickEvent(PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum* WireColor, bool* ClickedConnector);
		void HandleAttachDetachClickEvent(PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum* WireColor, bool* ClickedConnector);
		void HideUnusedWireComponents();
		void SetupConnectorMapForGameType();
		void SetupAvailableColorsForUpgradeType(fnaf9_EFreddyUpgradeType UpgradeType);
		void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void OnPlayerInteractCancel();
		void OnPlayerHoverEnter(class APawn* PlayerPawn);
		void OnPlayerHoverExit(class APawn* PlayerPawn);
		void PartsAndServiceGame(PartsAndServiceAnimEnum_EPartsAndServiceAnimEnum GameEnum);
		void Off(bool Off);
		void Close(bool Close);
		void TestButton_R();
		void TestButton_B();
		void TestButton_Y();
		void TestButton_G();
		void ResetFreddy();
		void VoiceBoxSwap(bool Off);
		void Out(bool In);
		void OnPlayerInteract(class APawn* PlayerPawn, class APlayerController* PlayerController);
		void InitializeUpgradeGame(fnaf9_EFreddyUpgradeType UpgradeType);
		void PlaySimonSequence();
		void ClickedWire(PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum WireColor, bool ClickedConnector);
		void AnimEnableTesting();
		void ClickedTestButton(PS_Upgrade_Freddy_ColorEnum_EPS_Upgrade_Freddy_ColorEnum ButtonColor, bool ClickedButton);
		void PlayerEndInteraction();
		void ReceiveBeginPlay();
		void SetHidden(bool Hidden);
		void ResetForNextUpgrade();
		void Anim_Reset();
		void Anim_Arm_Swap();
		void Anim_Voicebox_Swap(bool On);
		void Anim_Left_Eye_Swap(bool On);
		void Anim_Right_Eye_Swap(bool On);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_PS_Upgrade_And_Test_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
