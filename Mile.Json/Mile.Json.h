/*
 * PROJECT:   Mouri Internal Library Essentials
 * FILE:      Mile.Json.h
 * PURPOSE:   Definition for the Mile.Json
 *
 * LICENSE:   The MIT License
 *
 * MAINTAINER: MouriNaruto (Kenji.Mouri@outlook.com)
 */

#pragma once

#ifndef MILE_JSON
#define MILE_JSON

#if (defined(__cplusplus) && __cplusplus >= 201703L)
#elif (defined(_MSVC_LANG) && _MSVC_LANG >= 201703L)
#else
#error "[Mile.Json] You should use a C++ compiler with the C++17 standard."
#endif

#include "Mile.Json.Implementation/json.hpp"

namespace Mile::Json
{

}

#endif // !MILE_JSON
