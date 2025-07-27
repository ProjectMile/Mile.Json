/*
 * PROJECT:    Mouri Internal Library Essentials
 * FILE:       Mile.Json.h
 * PURPOSE:    Definition for the Mile.Json
 *
 * LICENSE:    The MIT License
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

    /**
     * @brief Convert the JSON object with array without throwing exceptions.
     * @param Object The source JSON object.
     * @return Return the source JSON object if the source JSON object value
     *         type is array, or the JSON object with the empty array.
     */
    nlohmann::json ToArray(
        nlohmann::json const& Object);

    /**
     * @brief Convert the JSON object with object without throwing exceptions.
     * @param Object The source JSON object.
     * @return Return the source JSON object if the source JSON object value
     *         type is object, or the JSON object with the empty object.
     */
    nlohmann::json ToObject(
        nlohmann::json const& Object);

    /**
     * @brief Convert the JSON object with primitive value without throwing
     *        exceptions.
     * @param Object The source JSON object.
     * @return Return the source JSON object if the source JSON object value
     *         type is primitive value, or the JSON object with the null value.
     */
    nlohmann::json ToPrimitive(
        nlohmann::json const& Object);

    /**
     * @brief Convert the JSON object to string without throwing exceptions.
     * @param Object The source JSON object.
     * @param Fallback The fallback value.
     * @return Return the corresponding string if the source JSON object value
     *         type is string, or the fallback string.
     */
    std::string ToString(
        nlohmann::json const& Object,
        std::string const& Fallback = std::string());

    /**
     * @brief Convert the JSON object to boolean value without throwing
     *        exceptions.
     * @param Object The source JSON object.
     * @param Fallback The fallback value.
     * @return Return the corresponding boolean value if the source JSON object
     *         value type is boolean, or the fallback boolean value.
     */
    bool ToBoolean(
        nlohmann::json const& Object,
        bool const& Fallback = false);

    /**
     * @brief Convert the JSON object to signed integer value without throwing
     *        exceptions.
     * @param Object The source JSON object.
     * @param Fallback The fallback value.
     * @return Return the corresponding signed integer value if the source JSON
     *         object value type is boolean, or the fallback signed integer
     *         value.
     */
    std::int64_t ToInt64(
        nlohmann::json const& Object,
        std::int64_t const& Fallback = 0);

    /**
     * @brief Convert the JSON object to unsigned integer value without throwing
     *        exceptions.
     * @param Object The source JSON object.
     * @param Fallback The fallback value.
     * @return Return the corresponding unsigned integer value if the source
     *         JSON object value type is boolean, or the fallback unsigned
     *         integer value.
     */
    std::uint64_t ToUInt64(
        nlohmann::json const& Object,
        std::uint64_t const& Fallback = 0);

    /**
     * @brief Convert the JSON object to floating point value without throwing
     *        exceptions.
     * @param Object The source JSON object.
     * @param Fallback The fallback value.
     * @return Return the corresponding floating point value if the source JSON
     *         object value type is boolean, or the fallback unsigned floating
     *         point.
     */
    double ToDouble(
        nlohmann::json const& Object,
        double const& Fallback = 0.0);
}

#endif // !MILE_JSON
