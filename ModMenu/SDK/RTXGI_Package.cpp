/**
 * Name: FNAF Security Breach
 * Version: 2
 */

#include "../pch.h"
#include "RTXGI_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x005DF250
	 * 		Name   -> Function RTXGI.DDGIBlueprintLibrary.ClearProbeData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDDGIVolumeComponent*                        DDGIVolumeComponent                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDDGIBlueprintLibrary::STATIC_ClearProbeData(class UDDGIVolumeComponent* DDGIVolumeComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTXGI.DDGIBlueprintLibrary.ClearProbeData");
		
		UDDGIBlueprintLibrary_ClearProbeData_Params params {};
		params.DDGIVolumeComponent = DDGIVolumeComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDDGIBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDDGIBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RTXGI.DDGIBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ADDGIVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADDGIVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RTXGI.DDGIVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005DF2C0
	 * 		Name   -> Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UDDGIVolumeComponent::DDGIClearVolumes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes");
		
		UDDGIVolumeComponent_DDGIClearVolumes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDDGIVolumeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDDGIVolumeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RTXGI.DDGIVolumeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URTXGIPluginSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URTXGIPluginSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RTXGI.RTXGIPluginSettings");
		return ptr;
	}

}


