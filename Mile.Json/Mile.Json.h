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
    /**
     * @brief Get the JSON object via the subkey name in the root JSON object
     *        without throwing exceptions.
     * @param RootKey The root JSON object.
     * @param KeyName The subkey name.
     * @return Return the corresponding JSON object if the subkey name in the
     *         root JSON object is existed, or the JSON object with the null
     *         value.
     */
    nlohmann::json GetSubKey(
        nlohmann::json const& RootKey,
        std::string const& KeyName);
}

#endif // !MILE_JSON
