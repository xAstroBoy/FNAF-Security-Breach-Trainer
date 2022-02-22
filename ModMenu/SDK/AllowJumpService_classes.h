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
	 * BlueprintGeneratedClass AllowJumpService.AllowJumpService_C
	 * Size -> 0x00E8 (FullSize[0x0180] - InheritedSize[0x0098])
	 */
	class UAllowJumpService_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              BBJumpTime;                                              // 0x00A0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              BBPlayerDistance;                                        // 0x00C8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              BBRunSequence;                                           // 0x00F0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              BBAllowJump;                                             // 0x0118(0x0028) Edit, BlueprintVisible
		float                                                      MinJumpTime;                                             // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxJumpTime;                                             // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinPlayerDistance;                                       // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxPlayerDistance;                                       // 0x014C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBlackboardKeySelector                              BBAllowDrop;                                             // 0x0150(0x0028) Edit, BlueprintVisible
		float                                                      MinDropChance;                                           // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDropChance;                                           // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetInterpolatedFloatOverScore(float A, float B, float* Output);
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ExecuteUbergraph_AllowJumpService(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
