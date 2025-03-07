/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef H_BLEHR_SENSOR_
#define H_BLEHR_SENSOR_

#include "nimble/ble.h"
#include "modlog/modlog.h"

#ifdef __cplusplus
extern "C" {
#endif


/** @author Joshua D. JOHN
 * Implementation of the Pulse Oximetry Profile and Service
 *
 *  Pulse Oximetry configuration 
 **/
#define GATT_PLX_UUID                           0x1822
#define GATT_PLX_SPOTCHECK_MEASUREMENT_UUID     0x2A5E
#define GATT_PLX_CONTINUOUS_MEASUREMENT_UUID    0x2A5F
#define GATT_PLX_FEATURES_UUID                  0x2A60
#define GATT_BOND_MANAGEMENT_UUID               0x181E
#define GATT_CURRENT_TIME_UUID                  0x1805     

#define GATT_DEVICE_INFO_UUID                   0x180A
#define GATT_MANUFACTURER_NAME_UUID             0x2A29
#define GATT_MODEL_NUMBER_UUID                  0x2A24

// extern uint16_t hrs_hrm_handle;
extern uint16_t plx_spotm_handle;
extern uint16_t plx_contm_handle;

struct ble_hs_cfg;
struct ble_gatt_register_ctxt;

void gatt_svr_register_cb(struct ble_gatt_register_ctxt *ctxt, void *arg);
int gatt_svr_init(void);

#ifdef __cplusplus
}
#endif

#endif
