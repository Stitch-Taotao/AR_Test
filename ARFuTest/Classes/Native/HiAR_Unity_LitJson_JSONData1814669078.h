﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "HiAR_Unity_LitJson_JSONNode1888574622.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JSONData
struct  JSONData_t1814669078  : public JSONNode_t1888574622
{
public:
	// System.String LitJson.JSONData::m_Data
	String_t* ___m_Data_0;

public:
	inline static int32_t get_offset_of_m_Data_0() { return static_cast<int32_t>(offsetof(JSONData_t1814669078, ___m_Data_0)); }
	inline String_t* get_m_Data_0() const { return ___m_Data_0; }
	inline String_t** get_address_of_m_Data_0() { return &___m_Data_0; }
	inline void set_m_Data_0(String_t* value)
	{
		___m_Data_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Data_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
