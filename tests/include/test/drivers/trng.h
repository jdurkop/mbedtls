/*
 * Test driver for context size functions
 */
/*  Copyright The Mbed TLS Contributors
 *  SPDX-License-Identifier: Apache-2.0
 *
 *  Licensed under the Apache License, Version 2.0 (the "License"); you may
 *  not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef PSA_CRYPTO_TEST_DRIVERS_TRNG_H
#define PSA_CRYPTO_TEST_DRIVERS_TRNG_H

#if !defined(MBEDTLS_CONFIG_FILE)
#include "mbedtls/config.h"
#else
#include MBEDTLS_CONFIG_FILE
#endif

#if defined(PSA_CRYPTO_DRIVER_TEST)
#include <psa/crypto_driver_common.h>

/** \def TEST_DRIVER_TRNG_GET_FUNCTION
 *
 * If TEST_DRIVER_TRNG_GET_FUNCTION is defined, the test driver
 * provides a trng_get entry point, otherwise, it does not.
 */
//#define TEST_DRIVER_TRNG_GET_FUNCTION

#ifdef TEST_DRIVER_TRNG_GET_FUNCTION
psa_status_t test_trng_get(
    uint8_t* buffer,
    size_t buffer_length,
    size_t* output_length );
#endif /* TEST_DRIVER_TRNG_GET_FUNCTION */

#endif /* PSA_CRYPTO_DRIVER_TEST */
#endif /* PSA_CRYPTO_TEST_DRIVERS_TRNG_H */
