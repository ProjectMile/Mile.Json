/*
 * PROJECT:   Mouri Internal Library Essentials
 * FILE:      Mile.Json.cpp
 * PURPOSE:   Implementation for the Mile.Json
 *
 * LICENSE:   The MIT License
 *
 * MAINTAINER: MouriNaruto (Kenji.Mouri@outlook.com)
 */

#include "Mile.Json.h"

nlohmann::json Mile::Json::GetSubKey(
    nlohmann::json const& RootKey,
    std::string const& KeyName)
{
    return RootKey.contains(KeyName) ? RootKey.at(KeyName) : nlohmann::json();
}

nlohmann::json Mile::Json::ToArray(
    nlohmann::json const& Object)
{
    return Object.is_array() ? Object : nlohmann::json::array();
}

nlohmann::json Mile::Json::ToObject(
    nlohmann::json const& Object)
{
    return Object.is_object() ? Object : nlohmann::json::object();
}

nlohmann::json Mile::Json::ToPrimitive(
    nlohmann::json const& Object)
{
    return Object.is_primitive() ? Object : nlohmann::json();
}

std::string Mile::Json::ToString(
    nlohmann::json const& Object,
    std::string const& Fallback)
{
    return Object.is_string() ? Object.get<std::string>() : Fallback;
}

bool Mile::Json::ToBoolean(
    nlohmann::json const& Object,
    bool const& Fallback)
{
    return Object.is_boolean() ? Object.get<bool>() : Fallback;
}

std::int64_t Mile::Json::ToInt64(
    nlohmann::json const& Object,
    std::int64_t const& Fallback)
{
    return Object.is_number_integer() ? Object.get<std::int64_t>() : Fallback;
}

std::uint64_t Mile::Json::ToUInt64(
    nlohmann::json const& Object,
    std::uint64_t const& Fallback)
{
    return Object.is_number_unsigned() ? Object.get<std::uint64_t>() : Fallback;
}

double Mile::Json::ToDouble(
    nlohmann::json const& Object,
    double const& Fallback)
{
    return Object.is_number_float() ? Object.get<double>() : Fallback;
}
