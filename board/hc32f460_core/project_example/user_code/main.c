/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief HC32F460 示例工程
 *
 * - 实验现象:
 *   打印 "Start up successful!"
 *
 * \internal
 * \par Modification history
 * - 1.00 20-01-10  cds, first implementation
 * \endinternal
 */

/**
 * \brief 例程入口
 */
#include "ametal.h"
#include "am_board.h"
#include "am_vdebug.h"
#include "am_delay.h"
#include "am_gpio.h"
#include "am_clk.h"
#include "am_hc32f460.h"
#include "demo_std_entries.h"
#include "am_hc32f460_inst_init.h"
#include "demo_hc32f460_core_entries.h"


int am_main (void)
{
    AM_DBG_INFO("Start up successful!\r\n");
    /* demo例程入口 */
    demo_hc32f460_core_std_led_entry();
//    demo_hc32f460_core_std_gpio_entry();
//    demo_hc32f460_core_std_gpio_trigger_entry();
//    demo_hc32f460_core_hw_gpio_entry();
//    demo_std_uart_ringbuf_entry(am_hc32f460_uart4_inst_init());
//    demo_std_uart_polling_entry(am_hc32f460_uart4_inst_init());
//    demo_hc32f460_core_hw_uart_int_entry();
//    demo_hc32f460_core_std_tim01_timing_entry();
//    demo_hc32f460_core_std_tim02_timing_entry();
//    demo_hc32f460_core_std_timea1_timing_entry();
//    demo_hc32f460_core_std_timea2_timing_entry();
//    demo_hc32f460_core_std_timea3_timing_entry();
//    demo_hc32f460_core_std_timea4_timing_entry();
//    demo_hc32f460_core_std_timea5_timing_entry();
//    demo_hc32f460_core_std_timea6_timing_entry();
//    demo_hc32f460_core_std_tim41_timing_entry();
//    demo_hc32f460_core_std_tim42_timing_entry();
//    demo_hc32f460_core_std_tim43_timing_entry();
//    demo_hc32f460_core_std_tim61_timing_entry();
//    demo_hc32f460_core_std_tim62_timing_entry();
//    demo_hc32f460_core_std_tim63_timing_entry();
//    demo_hc32f460_core_std_timea1_pwm_entry();
//    demo_hc32f460_core_std_timea2_pwm_entry();
//    demo_hc32f460_core_std_timea3_pwm_entry();
//    demo_hc32f460_core_std_timea4_pwm_entry();
//    demo_hc32f460_core_std_timea5_pwm_entry();
//    demo_hc32f460_core_std_timea6_pwm_entry();
//    demo_hc32f460_core_std_tim41_pwm_entry();
//    demo_hc32f460_core_std_tim42_pwm_entry();
//    demo_hc32f460_core_std_tim43_pwm_entry();
//    demo_hc32f460_core_std_adtim61_pwm_entry();
//    demo_hc32f460_core_std_adtim62_pwm_entry();
//    demo_hc32f460_core_std_adtim63_pwm_entry();
//    demo_hc32f460_core_std_timea1_cap_entry();
//    demo_hc32f460_core_std_timea2_cap_entry();
//    demo_hc32f460_core_std_timea3_cap_entry();
//    demo_hc32f460_core_std_timea4_cap_entry();
//    demo_hc32f460_core_std_timea5_cap_entry();
//    demo_hc32f460_core_std_timea6_cap_entry();
//    demo_hc32f460_core_std_adtim61_cap_entry();
//    demo_hc32f460_core_std_adtim62_cap_entry();
//    demo_hc32f460_core_std_adtim63_cap_entry();
//    demo_hc32f460_core_std_i2c_master_sync_entry();
//    demo_hc32f460_core_std_i2c_master_async_entry();
//    demo_hc32f460_core_hw_i2c_master_poll_entry();
//    demo_hc32f460_core_hw_i2c_slave_poll_entry();
//    demo_hc32f460_core_std_rtc_entry();
    while (1) {

    }
}

/* end of file */
