/*
 * Copyright (c) 2023 Samsung Electronics Co., Ltd All Rights Reserved
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

#include "Log.h"
#include "Configuration.h"
#include "Exception.h"

using namespace ovi;

constexpr int DEFAULT_LOG_LEVEL = 0;

void logger::init(void)
{
	logger::init(Configuration::instance().get(CATEGORY_CORE, CORE_LOG_LEVEL, DEFAULT_LOG_LEVEL));
}

void logger::init(int level)
{
	logger::logLevel = static_cast<LogLevel>(level);
}

void logger::init(const std::string& path)
{
	// TODO: implement
	logger::init(LOG_LEVEL_OFF);
}
