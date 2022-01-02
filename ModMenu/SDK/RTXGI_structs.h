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
// Enums
//---------------------------------------------------------------------------

// Enum RTXGI.EDDGIRaysPerProbe
enum class RTXGI_EDDGIRaysPerProbe : uint8_t
{
	EDDGIRaysPerProbe__n144        = 0,
	EDDGIRaysPerProbe__n288        = 1,
	EDDGIRaysPerProbe__n432        = 2,
	EDDGIRaysPerProbe__n576        = 3,
	EDDGIRaysPerProbe__n720        = 4,
	EDDGIRaysPerProbe__n864        = 5,
	EDDGIRaysPerProbe__n1008       = 6,
	EDDGIRaysPerProbe__Count       = 7,
	EDDGIRaysPerProbe__EDDGIRaysPerProbe_MAX = 8,

};

// Enum RTXGI.EDDGIDistanceBits
enum class RTXGI_EDDGIDistanceBits : uint8_t
{
	EDDGIDistanceBits__n16         = 0,
	EDDGIDistanceBits__n32         = 1,
	EDDGIDistanceBits__EDDGIDistanceBits_MAX = 2,

};

// Enum RTXGI.EDDGIIrradianceBits
enum class RTXGI_EDDGIIrradianceBits : uint8_t
{
	EDDGIIrradianceBits__n10       = 0,
	EDDGIIrradianceBits__n32       = 1,
	EDDGIIrradianceBits__EDDGIIrradianceBits_MAX = 2,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
