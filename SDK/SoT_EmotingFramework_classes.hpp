#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EmotingFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EmotingFramework.EmoteCoin
// 0x0118 (0x05C8 - 0x04B0)
class AEmoteCoin : public AActor
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x04B0(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmotingFramework.EmoteCoin"));
		return ptr;
	}

};


// Class EmotingFramework.EmoteSettings
// 0x0008 (0x0040 - 0x0038)
class UEmoteSettings : public UDeveloperSettings
{
public:
	int                                                Pages;                                                    // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmotingFramework.EmoteSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
