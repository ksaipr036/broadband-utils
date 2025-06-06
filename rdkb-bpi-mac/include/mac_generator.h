/*
 * If not stated otherwise in this file or this component's LICENSE file the
 * following copyright and licenses apply:
 *
 * Copyright 2025 RDK Management
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
*/
// mac_generator.h
#ifndef MAC_GENERATOR_H
#define MAC_GENERATOR_H

#include "interface.h"
#include <string>
#include <vector>
#include <cstdint>

// MAC address generation functions
std::string generateMacAddress(const Interface& interface, const std::vector<uint8_t>& serialBytes, int increment = 0);
bool checkIfMacAssigned(const std::string& flagFile = "");
void markMacAssigned(const std::string& flagFile = "");
void writeAllMacAddresses(const std::vector<Interface>& interfaces, const std::vector<std::string>& macAddresses);

#endif // MAC_GENERATOR_H
