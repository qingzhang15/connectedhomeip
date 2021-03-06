/*
 *
 *    Copyright (c) 2020 Project CHIP Authors
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#ifndef APP_CONFIG_H
#define APP_CONFIG_H

// ---- Lighting Example App Config ----

#define APP_ON_OFF_BUTTON BTN_LOCK
#define APP_FUNCTION_BUTTON BTN_FUNCTION

#define SYSTEM_STATE_LED LED_GREEN

// ---- Thread Polling Config ----
#define THREAD_ACTIVE_POLLING_INTERVAL_MS 100
#define THREAD_INACTIVE_POLLING_INTERVAL_MS 1000

#endif // APP_CONFIG_H
