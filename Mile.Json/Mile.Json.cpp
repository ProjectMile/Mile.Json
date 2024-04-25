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
