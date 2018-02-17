/* Copyright (c) 2014 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */
// #ifndef PCA10040_H
// #define PCA10040_H

// // LEDs definitions for PCA10040
// #define LEDS_NUMBER    4

// #define LED_START      17
// #define LED_1          17
// #define LED_2          18
// #define LED_3          19
// #define LED_4          20
// #define LED_STOP       20

// #define LEDS_LIST { LED_1, LED_2, LED_3, LED_4 }

// #define BSP_LED_0      LED_1
// #define BSP_LED_1      LED_2
// #define BSP_LED_2      LED_3
// #define BSP_LED_3      LED_4

// #define BSP_LED_0_MASK (1<<BSP_LED_0)
// #define BSP_LED_1_MASK (1<<BSP_LED_1)
// #define BSP_LED_2_MASK (1<<BSP_LED_2)
// #define BSP_LED_3_MASK (1<<BSP_LED_3)

// #define LEDS_MASK      (BSP_LED_0_MASK | BSP_LED_1_MASK | BSP_LED_2_MASK | BSP_LED_3_MASK)
// /* all LEDs are lit when GPIO is low */
// #define LEDS_INV_MASK  LEDS_MASK

// #define BUTTONS_NUMBER 4

// #define BUTTON_START   13
// #define BUTTON_1       13
// #define BUTTON_2       14
// #define BUTTON_3       15
// #define BUTTON_4       16
// #define BUTTON_STOP    16
// #define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

// #define BUTTONS_LIST { BUTTON_1, BUTTON_2, BUTTON_3, BUTTON_4 }

// #define BSP_BUTTON_0   BUTTON_1
// #define BSP_BUTTON_1   BUTTON_2
// #define BSP_BUTTON_2   BUTTON_3
// #define BSP_BUTTON_3   BUTTON_4

// #define BSP_BUTTON_0_MASK (1<<BSP_BUTTON_0)
// #define BSP_BUTTON_1_MASK (1<<BSP_BUTTON_1)
// #define BSP_BUTTON_2_MASK (1<<BSP_BUTTON_2)
// #define BSP_BUTTON_3_MASK (1<<BSP_BUTTON_3)

// #define BUTTONS_MASK   0x001E0000

// #define RX_PIN_NUMBER  8
// #define TX_PIN_NUMBER  6
// #define CTS_PIN_NUMBER 7
// #define RTS_PIN_NUMBER 5
// #define HWFC           true

// #define SPIS_MISO_PIN   28  // SPI MISO signal.
// #define SPIS_CSN_PIN    12  // SPI CSN signal.
// #define SPIS_MOSI_PIN   25  // SPI MOSI signal.
// #define SPIS_SCK_PIN    29  // SPI SCK signal.

// #define SPIM0_SCK_PIN   29  // SPI clock GPIO pin number.
// #define SPIM0_MOSI_PIN  25  // SPI Master Out Slave In GPIO pin number.
// #define SPIM0_MISO_PIN  28  // SPI Master In Slave Out GPIO pin number.
// #define SPIM0_SS_PIN    12  // SPI Slave Select GPIO pin number.

// #define SPIM1_SCK_PIN   2   // SPI clock GPIO pin number.
// #define SPIM1_MOSI_PIN  3   // SPI Master Out Slave In GPIO pin number.
// #define SPIM1_MISO_PIN  4   // SPI Master In Slave Out GPIO pin number.
// #define SPIM1_SS_PIN    5   // SPI Slave Select GPIO pin number.

// #define SPIM2_SCK_PIN   12  // SPI clock GPIO pin number.
// #define SPIM2_MOSI_PIN  13  // SPI Master Out Slave In GPIO pin number.
// #define SPIM2_MISO_PIN  14  // SPI Master In Slave Out GPIO pin number.
// #define SPIM2_SS_PIN    15  // SPI Slave Select GPIO pin number.

// // serialization APPLICATION board - temp. setup for running serialized MEMU tests
// #define SER_APP_RX_PIN              23    // UART RX pin number.
// #define SER_APP_TX_PIN              24    // UART TX pin number.
// #define SER_APP_CTS_PIN             2     // UART Clear To Send pin number.
// #define SER_APP_RTS_PIN             25    // UART Request To Send pin number.

// #define SER_APP_SPIM0_SCK_PIN       27     // SPI clock GPIO pin number.
// #define SER_APP_SPIM0_MOSI_PIN      2      // SPI Master Out Slave In GPIO pin number
// #define SER_APP_SPIM0_MISO_PIN      26     // SPI Master In Slave Out GPIO pin number
// #define SER_APP_SPIM0_SS_PIN        23     // SPI Slave Select GPIO pin number
// #define SER_APP_SPIM0_RDY_PIN       25     // SPI READY GPIO pin number
// #define SER_APP_SPIM0_REQ_PIN       24     // SPI REQUEST GPIO pin number

// // serialization CONNECTIVITY board
// #define SER_CON_RX_PIN              24    // UART RX pin number.
// #define SER_CON_TX_PIN              23    // UART TX pin number.
// #define SER_CON_CTS_PIN             25    // UART Clear To Send pin number. Not used if HWFC is set to false.
// #define SER_CON_RTS_PIN             2     // UART Request To Send pin number. Not used if HWFC is set to false.


// #define SER_CON_SPIS_SCK_PIN        27    // SPI SCK signal.
// #define SER_CON_SPIS_MOSI_PIN       2     // SPI MOSI signal.
// #define SER_CON_SPIS_MISO_PIN       26    // SPI MISO signal.
// #define SER_CON_SPIS_CSN_PIN        23    // SPI CSN signal.
// #define SER_CON_SPIS_RDY_PIN        25    // SPI READY GPIO pin number.
// #define SER_CON_SPIS_REQ_PIN        24    // SPI REQUEST GPIO pin number.

// #define SER_CONN_CHIP_RESET_PIN     11    // Pin used to reset connectivity chip


// // Arduino board mappings
// #define ARDUINO_SCL_PIN             27    // SCL signal pin
// #define ARDUINO_SDA_PIN             26    // SDA signal pin
// #define ARDUINO_AREF_PIN            2     // Aref pin
// #define ARDUINO_13_PIN              25    // Digital pin 13
// #define ARDUINO_12_PIN              24    // Digital pin 12
// #define ARDUINO_11_PIN              23    // Digital pin 11
// #define ARDUINO_10_PIN              22    // Digital pin 10
// #define ARDUINO_9_PIN               20    // Digital pin 9
// #define ARDUINO_8_PIN               19    // Digital pin 8

// #define ARDUINO_7_PIN               18    // Digital pin 7
// #define ARDUINO_6_PIN               17    // Digital pin 6
// #define ARDUINO_5_PIN               16    // Digital pin 5
// #define ARDUINO_4_PIN               15    // Digital pin 4
// #define ARDUINO_3_PIN               14    // Digital pin 3
// #define ARDUINO_2_PIN               13    // Digital pin 2
// #define ARDUINO_1_PIN               12    // Digital pin 1
// #define ARDUINO_0_PIN               11    // Digital pin 0

// #define ARDUINO_A0_PIN              3     // Analog channel 0
// #define ARDUINO_A1_PIN              4     // Analog channel 1
// #define ARDUINO_A2_PIN              28    // Analog channel 2
// #define ARDUINO_A3_PIN              29    // Analog channel 3
// #define ARDUINO_A4_PIN              30    // Analog channel 4
// #define ARDUINO_A5_PIN              31    // Analog channel 5

// // Low frequency clock source to be used by the SoftDevice
/*#define NRF_CLOCK_LFCLKSRC      {.source        = NRF_CLOCK_LF_SRC_XTAL,            \
                                 .rc_ctiv       = 0,                                \
                                 .rc_temp_ctiv  = 0,                                \
                                 .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_20_PPM}*/

// #endif // PCA10040_H












/* Copyright (c) 2014 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */

/** @file
 *
 * @defgroup ble_sdk_app_template_main main.c
 * @{
 * @ingroup ble_sdk_app_template
 * @brief Template project main file.
 *
 * This file contains a template for creating a new application. It has the code necessary to wakeup
 * from button, advertise, get a connection restart advertising on disconnect and if no new
 * connection created go back to system-off mode.
 * It can easily be used as a starting point for creating a new application, the comments identified
 * with 'YOUR_JOB' indicates where and how you can customize.
 */

#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "nordic_common.h"
#include "nrf.h"
#include "app_error.h"
#include "ble.h"
#include "ble_hci.h"
#include "ble_srv_common.h"
#include "ble_advdata.h"
#include "ble_advertising.h"
#include "ble_conn_params.h"
// #include "boards.h"
#include "softdevice_handler.h"
#include "app_timer.h"
#include "device_manager.h"
#include "pstorage.h"
#include "app_trace.h"
// #include "bsp.h"
// #include "bsp_btn_ble.h"
#include "sensorsim.h"
#include "nrf_gpio.h"
#include "ble_hci.h"
#include "ble_advdata.h"
#include "ble_advertising.h"
#include "nrf_delay.h"


#define IS_SRVC_CHANGED_CHARACT_PRESENT  1                                          /**< Include or not the service_changed characteristic. if not enabled, the server's database cannot be changed for the lifetime of the device*/

#define CENTRAL_LINK_COUNT               0                                          /**< Number of central links used by the application. When changing this number remember to adjust the RAM settings*/
#define PERIPHERAL_LINK_COUNT            1                                          /**< Number of peripheral links used by the application. When changing this number remember to adjust the RAM settings*/

#define DEVICE_NAME                      "Hello Blake"                               /**< Name of device. Will be included in the advertising data. */
#define APP_ADV_INTERVAL                 300                                        /**< The advertising interval (in units of 0.625 ms. This value corresponds to 25 ms). */
#define APP_ADV_TIMEOUT_IN_SECONDS       180                                        /**< The advertising timeout in units of seconds. */

#define APP_TIMER_PRESCALER              0                                          /**< Value of the RTC1 PRESCALER register. */
#define APP_TIMER_OP_QUEUE_SIZE          4                                          /**< Size of timer operation queues. */

#define MIN_CONN_INTERVAL                MSEC_TO_UNITS(100, UNIT_1_25_MS)           /**< Minimum acceptable connection interval (0.1 seconds). */
#define MAX_CONN_INTERVAL                MSEC_TO_UNITS(200, UNIT_1_25_MS)           /**< Maximum acceptable connection interval (0.2 second). */
#define SLAVE_LATENCY                    0                                          /**< Slave latency. */
#define CONN_SUP_TIMEOUT                 MSEC_TO_UNITS(4000, UNIT_10_MS)            /**< Connection supervisory timeout (4 seconds). */

#define FIRST_CONN_PARAMS_UPDATE_DELAY   APP_TIMER_TICKS(5000, APP_TIMER_PRESCALER) /**< Time from initiating event (connect or start of notification) to first time sd_ble_gap_conn_param_update is called (5 seconds). */
#define NEXT_CONN_PARAMS_UPDATE_DELAY    APP_TIMER_TICKS(30000, APP_TIMER_PRESCALER)/**< Time between each call to sd_ble_gap_conn_param_update after the first call (30 seconds). */
#define MAX_CONN_PARAMS_UPDATE_COUNT     3                                          /**< Number of attempts before giving up the connection parameter negotiation. */

#define SEC_PARAM_BOND                   1                                          /**< Perform bonding. */
#define SEC_PARAM_MITM                   0                                          /**< Man In The Middle protection not required. */
#define SEC_PARAM_LESC                   0                                          /**< LE Secure Connections not enabled. */
#define SEC_PARAM_KEYPRESS               0                                          /**< Keypress notifications not enabled. */
#define SEC_PARAM_IO_CAPABILITIES        BLE_GAP_IO_CAPS_NONE                       /**< No I/O capabilities. */
#define SEC_PARAM_OOB                    0                                          /**< Out Of Band data not available. */
#define SEC_PARAM_MIN_KEY_SIZE           7                                          /**< Minimum encryption key size. */
#define SEC_PARAM_MAX_KEY_SIZE           16                                         /**< Maximum encryption key size. */

#define DEAD_BEEF                        0xDEADBEEF                                 /**< Value used as error code on stack dump, can be used to identify stack location on stack unwind. */

static dm_application_instance_t         m_app_handle;                              /**< Application identifier allocated by device manager */

static uint16_t                          m_conn_handle = BLE_CONN_HANDLE_INVALID;   /**< Handle of the current connection. */

// #define NRF_CLOCK_LF_SRC_RC      (0)                

// nrf52DK
/*#define NRF_CLOCK_LFCLKSRC {.source        = NRF_CLOCK_LF_SRC_XTAL,            \
                                 .rc_ctiv       = 0,                                \
                                 .rc_temp_ctiv  = 0,                                \
                                 .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_20_PPM}*/


// Adafruit nrf52
#define NRF_CLOCK_LFCLKSRC  { .source        = NRF_CLOCK_LF_SRC_RC,            \
  .rc_ctiv       = 16,                             \
  .rc_temp_ctiv  = 2,                              \
  .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_20_PPM }

static bool isConnected = false;
// static bool isConnected = false;

/**@brief Callback function for asserts in the SoftDevice.
 *
 * @details This function will be called in case of an assert in the SoftDevice.
 *
 * @warning This handler is an example only and does not fit a final product. You need to analyze
 *          how your product is supposed to react in case of Assert.
 * @warning On assert from the SoftDevice, the system can only recover on reset.
 *
 * @param[in] line_num   Line number of the failing ASSERT call.
 * @param[in] file_name  File name of the failing ASSERT call.
 */
void assert_nrf_callback(uint16_t line_num, const uint8_t * p_file_name)
{
    app_error_handler(DEAD_BEEF, line_num, p_file_name);
}


/**@brief Function for the Timer initialization.
 *
 * @details Initializes the timer module. This creates and starts application timers.
 */
static void timers_init(void)
{
    // Initialize timer module.
    APP_TIMER_INIT(APP_TIMER_PRESCALER, APP_TIMER_OP_QUEUE_SIZE, false);
}


/**@brief Function for the GAP initialization.
 *
 * @details This function sets up all the necessary GAP (Generic Access Profile) parameters of the
 *          device including the device name, appearance, and the preferred connection parameters.
 */
static void gap_params_init(void)
{
    uint32_t                err_code;
    
    // Declearing parameter structs. Try to go to the struct definitions to get
	// more information about what parameters they contain
    ble_gap_conn_params_t   gap_conn_params; 	// Struct to store GAP connection parameters like max min connection interval etc
    ble_gap_conn_sec_mode_t sec_mode;			// Struct to store security parameters 

    // A simple macro that sets the Security Mode and Level bits in sec_mode
	// to require no protection (open link)
    BLE_GAP_CONN_SEC_MODE_SET_OPEN(&sec_mode);

    // Store the device name and security mode in the SoftDevice. Our name is defined to "HelloWorld" in the beginning of this file
    err_code = sd_ble_gap_device_name_set(&sec_mode,
                                          (const uint8_t *)DEVICE_NAME,
                                          strlen(DEVICE_NAME));
    APP_ERROR_CHECK(err_code); // Check for errors

    // Always initialize all fields in structs to zero or you might get unexpected behaviour
    memset(&gap_conn_params, 0, sizeof(gap_conn_params));

    // Populate the GAP connection parameter struct
    gap_conn_params.min_conn_interval = MIN_CONN_INTERVAL;
    gap_conn_params.max_conn_interval = MAX_CONN_INTERVAL;
    gap_conn_params.slave_latency     = SLAVE_LATENCY;
    gap_conn_params.conn_sup_timeout  = CONN_SUP_TIMEOUT;

    // Set GAP Peripheral Preferred Connection Parameters
    // The device use these prefered values when negotiating connection terms with another device
    err_code = sd_ble_gap_ppcp_set(&gap_conn_params);
    APP_ERROR_CHECK(err_code);
                                          
    // Set appearence										  
	sd_ble_gap_appearance_set(0);
	APP_ERROR_CHECK(err_code);// Check for errors                                 
                                          
}


/**@brief Function for handling the Connection Parameters Module.
 *
 * @details This function will be called for all events in the Connection Parameters Module which
 *          are passed to the application.
 *          @note All this function does is to disconnect. This could have been done by simply
 *                setting the disconnect_on_fail config parameter, but instead we use the event
 *                handler mechanism to demonstrate its use.
 *
 * @param[in] p_evt  Event received from the Connection Parameters Module.
 */
static void on_conn_params_evt(ble_conn_params_evt_t * p_evt)
{
    uint32_t err_code;

    if (p_evt->evt_type == BLE_CONN_PARAMS_EVT_FAILED)
    {
        err_code = sd_ble_gap_disconnect(m_conn_handle, BLE_HCI_CONN_INTERVAL_UNACCEPTABLE);
        APP_ERROR_CHECK(err_code);
    }
}


/**@brief Function for handling a Connection Parameters error.
 *
 * @param[in] nrf_error  Error code containing information about what went wrong.
 */
static void conn_params_error_handler(uint32_t nrf_error)
{
    APP_ERROR_HANDLER(nrf_error);
}


/**@brief Function for initializing the Connection Parameters module.
 */
static void conn_params_init(void)
{
    uint32_t               err_code;
    ble_conn_params_init_t cp_init;

    memset(&cp_init, 0, sizeof(cp_init));

    cp_init.p_conn_params                  = NULL;
    cp_init.first_conn_params_update_delay = FIRST_CONN_PARAMS_UPDATE_DELAY;
    cp_init.next_conn_params_update_delay  = NEXT_CONN_PARAMS_UPDATE_DELAY;
    cp_init.max_conn_params_update_count   = MAX_CONN_PARAMS_UPDATE_COUNT;
    cp_init.start_on_notify_cccd_handle    = BLE_GATT_HANDLE_INVALID;
    cp_init.disconnect_on_fail             = false;
    cp_init.evt_handler                    = on_conn_params_evt;
    cp_init.error_handler                  = conn_params_error_handler;

    err_code = ble_conn_params_init(&cp_init);
    APP_ERROR_CHECK(err_code);
}


/**@brief Function for putting the chip into sleep mode.
 *
 * @note This function will not return.
 */
static void sleep_mode_enter(void)
{
    // uint32_t err_code = bsp_indication_set(BSP_INDICATE_IDLE);
    // APP_ERROR_CHECK(err_code);

    // Prepare wakeup buttons.
    // err_code = bsp_btn_ble_sleep_mode_prepare();
    // APP_ERROR_CHECK(err_code);

    // Go to system-off mode (this function will not return; wakeup will cause a reset).
    // err_code = sd_power_system_off();
    // APP_ERROR_CHECK(err_code);
}


/**@brief Function for handling advertising events.
 *
 * @details This function will be called for advertising events which are passed to the application.
 *
 * @param[in] ble_adv_evt  Advertising event.
 */
static void on_adv_evt(ble_adv_evt_t ble_adv_evt)
{
    // uint32_t err_code;

    switch (ble_adv_evt)
    {
        case BLE_ADV_EVT_FAST:
            // err_code = bsp_indication_set(BSP_INDICATE_ADVERTISING);
            // APP_ERROR_CHECK(err_code);
// TODO: Add lights here
            break;
        case BLE_ADV_EVT_IDLE:
            sleep_mode_enter();
            break;
        default:
            break;
    }
}


/**@brief Function for handling the Application's BLE Stack events.
 *
 * @param[in] p_ble_evt  Bluetooth stack event.
 */
static void on_ble_evt(ble_evt_t * p_ble_evt)
{
    // uint32_t err_code;

    switch (p_ble_evt->header.evt_id)
    {
        case BLE_GAP_EVT_CONNECTED:
            // err_code = bsp_indication_set(BSP_INDICATE_CONNECTED);
            // APP_ERROR_CHECK(err_code);
// TODO: ADD LIGHTS HERE
            isConnected = true;
            m_conn_handle = p_ble_evt->evt.gap_evt.conn_handle;
            break;

        case BLE_GAP_EVT_DISCONNECTED:
            isConnected = false;
            m_conn_handle = BLE_CONN_HANDLE_INVALID;
            break;

        default:
            // No implementation needed.
            break;
    }
}


/**@brief Function for dispatching a BLE stack event to all modules with a BLE stack event handler.
 *
 * @details This function is called from the BLE Stack event interrupt handler after a BLE stack
 *          event has been received.
 *
 * @param[in] p_ble_evt  Bluetooth stack event.
 */
static void ble_evt_dispatch(ble_evt_t * p_ble_evt)
{
    dm_ble_evt_handler(p_ble_evt);
    ble_conn_params_on_ble_evt(p_ble_evt);
    // bsp_btn_ble_on_ble_evt(p_ble_evt);
    on_ble_evt(p_ble_evt);
    ble_advertising_on_ble_evt(p_ble_evt);
}


/**@brief Function for dispatching a system event to interested modules.
 *
 * @details This function is called from the System event interrupt handler after a system
 *          event has been received.
 *
 * @param[in] sys_evt  System stack event.
 */
static void sys_evt_dispatch(uint32_t sys_evt)
{
    pstorage_sys_event_handler(sys_evt);
    ble_advertising_on_sys_evt(sys_evt);
}


/**@brief Function for initializing the BLE stack.
 *
 * @details Initializes the SoftDevice and the BLE event interrupt.
 */
static void ble_stack_init(void)
{

    uint32_t err_code;
    
    nrf_clock_lf_cfg_t clock_lf_cfg = NRF_CLOCK_LFCLKSRC;

    // Initialize the SoftDevice handler module.
    SOFTDEVICE_HANDLER_INIT(&clock_lf_cfg, NULL);
// nrf_gpio_pin_write(17, 1);


// nrf_gpio_pin_write(17, 0);
//     nrf_gpio_pin_write(19, 0);
//     nrf_delay_ms(200);
//     nrf_gpio_pin_write(17, 1);
//     nrf_gpio_pin_write(19, 1);
//     nrf_delay_ms(200);
//     nrf_gpio_pin_write(17, 0);
//     nrf_gpio_pin_write(19, 0);
//     nrf_delay_ms(200);
//     nrf_gpio_pin_write(17, 1);
//     nrf_gpio_pin_write(19, 1);

    
    ble_enable_params_t ble_enable_params;
    err_code = softdevice_enable_get_default_config(CENTRAL_LINK_COUNT,
                                                    PERIPHERAL_LINK_COUNT,
                                                    & ble_enable_params);



    APP_ERROR_CHECK(err_code);
    
    //Check the ram settings against the used number of links
    CHECK_RAM_START_ADDR(CENTRAL_LINK_COUNT,PERIPHERAL_LINK_COUNT);
    
    // Enable BLE stack.
    err_code = softdevice_enable(&ble_enable_params);
    APP_ERROR_CHECK(err_code);

    // Register with the SoftDevice handler module for BLE events.
    err_code = softdevice_ble_evt_handler_set(ble_evt_dispatch);
    APP_ERROR_CHECK(err_code);

    // Register with the SoftDevice handler module for BLE events.
    err_code = softdevice_sys_evt_handler_set(sys_evt_dispatch);
    APP_ERROR_CHECK(err_code);
}


/**@brief Function for handling events from the BSP module.
 *
 * @param[in]   event   Event generated by button press.
 */
// void bsp_event_handler(bsp_event_t event)
// {
//     uint32_t err_code;
//     switch (event)
//     {
//         case BSP_EVENT_SLEEP:
//             sleep_mode_enter();
//             break;

//         case BSP_EVENT_DISCONNECT:
//             err_code = sd_ble_gap_disconnect(m_conn_handle, BLE_HCI_REMOTE_USER_TERMINATED_CONNECTION);
//             if (err_code != NRF_ERROR_INVALID_STATE)
//             {
//                 APP_ERROR_CHECK(err_code);
//             }
//             break;

//         case BSP_EVENT_WHITELIST_OFF:
//             err_code = ble_advertising_restart_without_whitelist();
//             if (err_code != NRF_ERROR_INVALID_STATE)
//             {
//                 APP_ERROR_CHECK(err_code);
//             }
//             break;

//         default:
//             break;
//     }
// }


/**@brief Function for handling the Device Manager events.
 *
 * @param[in] p_evt  Data associated to the device manager event.
 */
static uint32_t device_manager_evt_handler(dm_handle_t const * p_handle,
                                           dm_event_t const  * p_event,
                                           ret_code_t        event_result)
{
    APP_ERROR_CHECK(event_result);

#ifdef BLE_DFU_APP_SUPPORT
    if (p_event->event_id == DM_EVT_LINK_SECURED)
    {
        app_context_load(p_handle);
    }
#endif // BLE_DFU_APP_SUPPORT

    return NRF_SUCCESS;
}


/**@brief Function for the Device Manager initialization.
 *
 * @param[in] erase_bonds  Indicates whether bonding information should be cleared from
 *                         persistent storage during initialization of the Device Manager.
 */
static void device_manager_init(bool erase_bonds)
{
    uint32_t               err_code;
    dm_init_param_t        init_param = {.clear_persistent_data = erase_bonds};
    dm_application_param_t register_param;

    // Initialize persistent storage module.
    err_code = pstorage_init();
    APP_ERROR_CHECK(err_code);

    err_code = dm_init(&init_param);
    APP_ERROR_CHECK(err_code);

    memset(&register_param.sec_param, 0, sizeof(ble_gap_sec_params_t));

    register_param.sec_param.bond         = SEC_PARAM_BOND;
    register_param.sec_param.mitm         = SEC_PARAM_MITM;
    register_param.sec_param.lesc         = SEC_PARAM_LESC;
    register_param.sec_param.keypress     = SEC_PARAM_KEYPRESS;
    register_param.sec_param.io_caps      = SEC_PARAM_IO_CAPABILITIES;
    register_param.sec_param.oob          = SEC_PARAM_OOB;
    register_param.sec_param.min_key_size = SEC_PARAM_MIN_KEY_SIZE;
    register_param.sec_param.max_key_size = SEC_PARAM_MAX_KEY_SIZE;
    register_param.evt_handler            = device_manager_evt_handler;
    register_param.service_type           = DM_PROTOCOL_CNTXT_GATT_SRVR_ID;

    err_code = dm_register(&m_app_handle, &register_param);
    APP_ERROR_CHECK(err_code);
}


/**@brief Function for initializing the Advertising functionality.
 */
static void advertising_init(void)
{
    uint32_t      err_code;
    ble_advdata_t advdata;

    // Build advertising data struct to pass into @ref ble_advertising_init.
    memset(&advdata, 0, sizeof(advdata));

    advdata.name_type               = BLE_ADVDATA_FULL_NAME;
    advdata.flags                   = BLE_GAP_ADV_FLAGS_LE_ONLY_GENERAL_DISC_MODE;

    ble_adv_modes_config_t options = {0};
    options.ble_adv_fast_enabled  = BLE_ADV_FAST_ENABLED;
    options.ble_adv_fast_interval = APP_ADV_INTERVAL;
    options.ble_adv_fast_timeout  = APP_ADV_TIMEOUT_IN_SECONDS;

    err_code = ble_advertising_init(&advdata, NULL, &options, on_adv_evt, NULL);
    APP_ERROR_CHECK(err_code);
}


/**@brief Function for initializing buttons and leds.
 *
 * @param[out] p_erase_bonds  Will be true if the clear bonding button was pressed to wake the application up.
 */
// static void buttons_leds_init(bool * p_erase_bonds)
// {
//     bsp_event_t startup_event;

//     uint32_t err_code = bsp_init(BSP_INIT_LED | BSP_INIT_BUTTONS,
//                                  APP_TIMER_TICKS(100, APP_TIMER_PRESCALER), 
//                                  bsp_event_handler);
//     APP_ERROR_CHECK(err_code);

//     err_code = bsp_btn_ble_init(NULL, &startup_event);
//     APP_ERROR_CHECK(err_code);

//     *p_erase_bonds = (startup_event == BSP_EVENT_CLEAR_BONDING_DATA);
// }


/**@brief Function for the Power manager.
 */
// static void power_manage(void)
// {
//     uint32_t err_code = sd_app_evt_wait();
//     APP_ERROR_CHECK(err_code);
// }


/**@brief Function for application main entry.
 */
int main(void)
{

    nrf_gpio_cfg_output(17);
    nrf_gpio_cfg_output(19);
    
    nrf_gpio_pin_write(17, 0);
    nrf_gpio_pin_write(19, 0);
    


    uint32_t err_code;
    bool erase_bonds = false;

    // Initialize.
    timers_init();
    // buttons_leds_init(&erase_bonds);
    ble_stack_init();

    device_manager_init(erase_bonds);
    gap_params_init();
    advertising_init();
    conn_params_init();

    // Start execution.
    err_code = ble_advertising_start(BLE_ADV_MODE_FAST);
    APP_ERROR_CHECK(err_code);

    // Enter main loop.
    for (;;)
    {
        // If not connected blink red light every half a second
        nrf_gpio_pin_write(17, 0);
        // nrf_gpio_pin_write(19, 0);
        nrf_delay_ms(200);
        nrf_gpio_pin_write(17, 1);
        // nrf_gpio_pin_write(19, 1);
        nrf_delay_ms(200);


        // if connected blink Red light evert second
        if (isConnected) {
            nrf_gpio_pin_write(19, 0);
            // nrf_gpio_pin_write(19, 0);
            nrf_delay_ms(1000);
            nrf_gpio_pin_write(19, 1);
            // nrf_gpio_pin_write(19, 1);
            nrf_delay_ms(1000);
        }
    }
}

/**
 * @}
 */
