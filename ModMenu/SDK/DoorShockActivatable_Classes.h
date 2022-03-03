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
	 * BlueprintGeneratedClass DoorShockActivatable.DoorShockActivatable_C
	 * Size -> 0x004F (FullSize[0x02B8] - InheritedSize[0x0269])
	 */
	class ADoorShockActivatable_C : public AActivatableBase_C
	{
	public:
		unsigned char                                              UnknownData_5GU0[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Box;                                                     // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              DoorManager[0x28];                                       // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Doors_to_shock[0x10];                                    // 0x02A8(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		void CanActivate(class AActor* Activator, bool* CanActivate, fnaf9_EConditionFailReason* CantReason);
		void ActivateObject(class AActor* Activator);
		void ExecuteUbergraph_DoorShockActivatable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
