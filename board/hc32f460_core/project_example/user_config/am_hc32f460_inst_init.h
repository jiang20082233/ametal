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
 * \brief HC32F460 ���� ʵ����ʼ����������
 *
 * ���������豸��I2C��SPI��ADC...����ʵ����ʼ���������ڱ�ͷ�ļ���������ʹ��ʵ��
 * ��ʼ���������������ɻ��һ������ľ����Ȼ��ʹ����صĽӿں�����������в�����
 *
 * \sa am_zlg118_inst_init.h
 * \internal
 * \par Modification history
 * - 1.00 15-12-11  tee, first implementation
 * \endinternal
 */

#ifndef __AM_HC32F460_INST_INIT_H
#define __AM_HC32F460_INST_INIT_H

#ifdef __cplusplus
extern "C" {
#endif

#include "ametal.h"
#include "am_adc.h"
#include "am_crc.h"
#include "am_i2c.h"
#include "am_i2c_slv.h"
#include "am_timer.h"
#include "am_cap.h"
#include "am_pwm.h"
#include "am_wdt.h"
#include "am_spi.h"
#include "am_led.h"
#include "am_uart.h"
#include "am_dac.h"
#include "am_rtc.h"
#include "am_ftl.h"
#include "am_temp.h"
#include "am_delay.h"
#include "am_hc595.h"
#include "am_ili9341.h"
#include "am_rx8025t.h"
#include "am_digitron_disp.h"
#include "am_ep24cxx.h"
#include "am_mx25xx.h"
#include "am_mtd.h"
#include "am_rngbuf.h"
#include "am_input.h"

//#include "am_zlg118_pcnt.h"
//#include "amhw_zlg118_rtc.h"
//#include "am_zlg118_pwr.h"
//#include "am_hwconf_zlg118_led_gpio.h"
//#include "am_hwconf_led_gpio.h"
//#include "am_hwconf_key_gpio.h"
//#include "am_hwconf_buzzer_pwm.h"
//#include "am_hwconf_debug_uart.h"
#include "am_hwconf_system_tick_softimer.h"
//#include "am_hwconf_lm75.h"
//#include "am_hwconf_microport.h"
//#include "am_hwconf_miniport_zlg72128.h"
//#include "am_hwconf_miniport_595.h"
//#include "am_hwconf_miniport_view.h"
//#include "am_hwconf_miniport_led.h"
//#include "am_hwconf_miniport_key.h"
//#include "am_hwconf_miniport_view_key.h"
//#include "am_event_input_key.h"
//#include "am_event_category_input.h"

/**
 * \addtogroup am_if_zlg118_inst_init
 * \copydoc am_zlg118_inst_init.h
 * @{
 */


///**
// * \brief  timer_pwm ����
// *
// * \param[in] pwm_handle : cap��׼���
// *
// * \param[in] pwm_chan   : cap ͨ��
// */
//void demo_std_timer_pwm_entry (am_pwm_handle_t pwm_handle, int pwm_chan);
//
///**
// * \brief  timer_cap ����
// *
// * \param[in] cap_handle : cap��׼���
// *
// * \param[in] cap_chan   : cap ͨ��
// */
//void demo_std_timer_cap_entry (am_cap_handle_t cap_handle, int cap_chan);
//
///**
// * \brief  uart_polling ����
// *
// * \param[in] handle : uart��׼���
// */
//void demo_std_uart_polling_entry (am_uart_handle_t handle);
//
///**
// * \brief  delay ����
// *
// * \param[in] led_id : led id��
// */
//void demo_std_delay_entry (int led_id);
//
///**
// * \brief  key_digitron ����
// *
// * \param[in] rtc_handle : rtc ��׼���
// */
//void demo_std_rtc_entry (am_rtc_handle_t rtc_handle);
//
///**
// * \brief  key_digitron ����
// *
// * \param[in] id : key id��
// */
//void demo_std_key_digitron_rngbuf_entry (int32_t id);
//
///**
// * \brief  hc595_led ����
// *
// * \param[in] led_id_start : ��ʼled id��
// *
// * \param[in] num          : led����
// */
//void demo_std_led_water_light_entry (int led_id_start, int num);
//
///**
// * \brief  hc595_led ����
// *
// * \param[in] ��
// */
// void demo_std_4key_entry (void);
//
///**
// * \brief  hc595_led ����
// *
// * \param[in] hc595_handle  : ��׼hc595���
// */
// void demo_std_hc595_led_entry (am_hc595_handle_t hc595_handle);
///**
// * \brief  digitron_temp ����
// *
// * \param[in] temp_handle  : ��׼temp_handle���
// *
// * \param[in] id        : id��
// */
//void demo_std_digitron_temp_entry (int32_t id, am_temp_handle_t temp_handle);
///**
// * \brief  key_digitron ����
// *
// * \param[in] id     : id��
// */
//void demo_std_key_digitron_entry (int32_t id);
//
///**
// * \brief  digitron ����
// *
// * \param[in] id     : id��
// */
//void demo_std_digitron_60s_counting_entry (int32_t id);
//
///**
// * \brief  mtd ����
// *
// * \param[in] rtc_handle     : rtc ���
// */
//void demo_std_rtc_entry (am_rtc_handle_t rtc_handle);
//
///**
// * \brief  mtd ����
// *
// * \param[in] mtd_handle     : mtd ���
// *
// * \param[in] test_lenth     : ���Գ���
// */
//void demo_mtd_entry (am_mtd_handle_t mtd_handle, int32_t test_lenth);
//
///**
// * \brief  ftl ����
// *
// * \param[in] ftl_handle     : ftl ���
// *
// * \param[in] test_lenth     : ���Գ���
// */
//void demo_ftl_entry (am_ftl_handle_t ftl_handle, int32_t test_lenth);
//
///**
// * \brief ep24cxx����
// *
// * \param[in] mx25xx_handle    :    mx25xx���
// *
// * \param[in] test_lenth       :   ���Գ���
// */
//void demo_mx25xx_entry (am_mx25xx_handle_t mx25xx_handle,
//                        int32_t test_lenth);
///**
// * \brief ep24cxx����
// *
// * \param[in] ep24cxx_handle    :   ep24cxx���
// *
// * \param[in] test_lenth        :   ���Գ���
// */
//void demo_ep24cxx_entry (am_ep24cxx_handle_t ep24cxx_handle,
//                         int32_t test_lenth);
//
///**
// * \brief timer��ʱ��
// *
// * \param[in] am_timer_handle_t  : timer���
// *
// * \param[in] timing_chan        : ͨ��
// */
//void demo_std_timer_timing_entry (am_timer_handle_t handle,
//                                  int               timing_chan);
//
///**
// * \brief MiniPort-ZLG72128 ʵ����ʼ��
// *
// * \param ��
// *
// * \return ���� AW_OK Ϊ��ʼ���ɹ�������Ϊ��ʼ��ʧ��
// */
//int am_miniport_zlg72128_inst_init (void);
//
///**
// * \brief ʵ����ʼ������
// *
// * \param ��
// *
// * \return ���� AW_OK Ϊ��ʼ���ɹ�������Ϊ��ʼ��ʧ��
// */
//int am_key_gpio_inst_init (void);
//
/**
 * \brief �ж�ʵ����ʼ������ʼ���ж�����
 *
 * \param ��
 *
 * \return ���� AW_OK Ϊ��ʼ���ɹ�������Ϊ��ʼ��ʧ��
 */
int am_hc32f460_nvic_inst_init (void);
//
///**
// * \brief �ж�ʵ�����ʼ��
// *
// * \param ��
// *
// * \return ��
// */
//void am_zlg118_nvic_inst_deinit (void);
//
///**
// * \brief ILI9341 ʵ����ʼ������� ILI9341 ��׼������
// *
// * \param ��
// *
// * \return ILI9341 ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_ili9341_handle_t am_zlg118_ili9341_inst_init (void);
//
///**
// * \brief ILI9341 ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_ili9341_inst_init() ������õ� ILI9341
// *                   ��׼������
// *
// * \return ��
// */
//void am_zlg118_ili9341_inst_deinit (am_ili9341_handle_t handle);
//
///**
// * \brief ADC ʵ����ʼ������� ADC ��׼������
// *
// * \param ��
// *
// * \return ADC ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_adc_handle_t am_zlg118_adc_inst_init (void);
//
///**
// * \brief ADC ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_adc1_inst_init() ������õ� ADC ��׼������
// *
// * \return ��
// */
//void am_zlg118_adc_inst_deinit (am_adc_handle_t handle);

/**
 * \brief CLK ʵ����ʼ������ʼ��ϵͳʱ��
 *
 * \param ��
 *
 * \return ���� AW_OK Ϊ��ʼ���ɹ�������Ϊ��ʼ��ʧ��
 */
int am_hc32f460_clk_inst_init (void);

///**
// * \brief CRC ʵ����ʼ������� CRC ��׼������
// *
// * \param ��
// *
// * \return CRC ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_crc_handle_t am_zlg118_crc_inst_init (void);
//
///**
// * \brief CRC ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_crc_inst_init() ������õ� CRC ��׼������
// *
// * \return ��
// */
//void am_zlg118_crc_inst_deinit (am_crc_handle_t handle);
//
///**
// * \brief DAC ʵ����ʼ������� DAC ��׼������
// *
// * \param ��
// *
// * \return DAC ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_dac_handle_t am_zlg118_dac_inst_init (void);
//
///**
// * \brief DAC ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_dac_inst_init() ������õ� DAC ��׼������
// *
// * \return ��
// */
//void am_zlg118_dac_inst_deinit (am_dac_handle_t handle);
//
///**
// * \brief DMA ʵ����ʼ��
// *
// * \param ��
// *
// * \return ���� AW_OK Ϊ��ʼ���ɹ�������Ϊ��ʼ��ʧ��
// */
//int am_zlg118_dma_inst_init (void);
//
///**
// * \brief DMA ʵ�����ʼ��
// *
// * \param ��
// *
// * \return ��
// */
//void am_zlg118_dma_inst_deinit (void);
//
/**
 * \brief GPIO ʵ����ʼ��
 *
 * \param ��
 *
 * \return ���� AW_OK Ϊ��ʼ���ɹ�������Ϊ��ʼ��ʧ��
 */
int am_hc32f460_gpio_inst_init (void);
//
///**
// * \brief GPIO ʵ�����ʼ��
// *
// * \param ��
// *
// * \return ��
// */
//void am_zlg118_gpio_inst_deinit (void);
//
///**
// * \brief I2C1 ʵ����ʼ������� I2C ��׼������
// *
// * \param ��
// *
// * \return I2C ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_i2c_handle_t am_zlg118_i2c1_inst_init (void);
//
///**
// * \brief I2C1 ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_i2c1_inst_init() ������õ� I2C ��׼������
// *
// * \return ��
// */
//void am_zlg118_i2c1_inst_deinit (am_i2c_handle_t handle);
//
///**
// * \brief I2C2 ʵ����ʼ������� I2C ��׼������
// *
// * \param ��
// *
// * \return I2C ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_i2c_handle_t am_zlg118_i2c0_inst_init (void);
//
///**
// * \brief I2C2 ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_i2c2_inst_init() ������õ� I2C ��׼������
// *
// * \return ��
// */
//void am_zlg118_i2c0_inst_deinit (am_i2c_handle_t handle);
//
///**
// * \brief I2C1 �ӻ�ʵ����ʼ������� I2C �ӻ���׼������
// *
// * \param ��
// *
// * \return I2C �ӻ���׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_i2c_slv_handle_t am_zlg118_i2c1_slv_inst_init (void);
//
///**
// * \brief I2C1 �ӻ�ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_i2c1_slv_inst_init() ����
// *                   ��õ� I2C �ӻ���׼������
// *
// * \return ��
// */
//void am_zlg118_i2c1_slv_inst_deinit (am_i2c_slv_handle_t handle);
//
///**
// * \brief I2C2 �ӻ�ʵ����ʼ������� I2C �ӻ���׼������
// *
// * \param ��
// *
// * \return I2C �ӻ���׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_i2c_slv_handle_t am_zlg118_i2c0_slv_inst_init (void);
//
///**
// * \brief I2C2 �ӻ�ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_i2c2_slv_inst_init() ����
// *                   ��õ� I2C �ӻ���׼������
// *
// * \return ��
// */
//void am_zlg118_i2c0_slv_inst_deinit (am_i2c_slv_handle_t handle);
//
///**
// * \brief IWDG ʵ����ʼ������� WDT ��׼������
// *
// * \param ��
// *
// * \return WDT ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_wdt_handle_t am_zlg118_iwdg_inst_init (void);
//
///**
// * \brief IWDG ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_iwdg_inst_init() ������õ� WDT ��׼������
// *
// * \return ��
// */
//void am_zlg118_iwdg_inst_deinit (am_wdt_handle_t handle);
//
///**
// * \brief PWR ʵ����ʼ��
// *
// * \param ��
// *
// * \return PWR ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
////am_zlg118_pwr_handle_t am_zlg118_pwr_inst_init (void);
//
///**
// * \brief PWR ʵ�����ʼ��
// *
// * \param ��
// *
// * \return ��
// */
//void am_zlg118_pwr_inst_deinit (void);
//
///**
// * \brief RTC ʵ����ʼ������� RTC ��׼������
// *
// * \param ��
// *
// * \return RTC ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_rtc_handle_t am_zlg118_rtc_inst_init (void);
//
///**
// * \brief RTC ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_rtc_inst_init() ������õ� RTC ��׼������
// *
// * \return ��
// */
//void am_zlg118_rtc_inst_deinit (am_rtc_handle_t handle);
//
///**
// * \brief SPI0 DMA ʵ����ʼ������� SPI ��׼������
// *
// * \param ��
// *
// * \return SPI ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_spi_handle_t am_zlg118_spi0_dma_inst_init (void);
//
///**
// * \brief SPI2 DMA ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_spi0_dma_inst_init() ����
// *                   ��õ� SPI ��׼������
// *
// * \return ��
// */
//void am_zlg118_spi0_dma_inst_deinit (am_spi_handle_t handle);
//
///**
// * \brief SPI1 DMA ʵ����ʼ������� SPI ��׼������
// *
// * \param ��
// *
// * \return SPI ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_spi_handle_t am_zlg118_spi1_dma_inst_init (void);
//
///**
// * \brief SPI1 DMA ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_spi1_dma_inst_init() ����
// *                   ��õ� SPI ��׼������
// *
// * \return ��
// */
//void am_zlg118_spi1_dma_inst_deinit (am_spi_handle_t handle);
//
///**
// * \brief SPI0 INT ʵ����ʼ������� SPI ��׼������
// *
// * \param ��
// *
// * \return SPI ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_spi_handle_t am_zlg118_spi0_int_inst_init (void);
//
///**
// * \brief SPI0 INT ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_spi0_int_inst_init() ����
// *                   ��õ� SPI ��׼������
// *
// * \return ��
// */
//void am_zlg118_spi0_int_inst_deinit (am_spi_handle_t handle);
//
///**
// * \brief SPI1 INT ʵ����ʼ������� SPI ��׼������
// *
// * \param ��
// *
// * \return SPI ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_spi_handle_t am_zlg118_spi1_int_inst_init (void);
//
///**
// * \brief SPI1 INT ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_spi1_int_inst_init() ����
// *                   ��õ� SPI ��׼������
// *
// * \return ��
// */
//void am_zlg118_spi1_int_inst_deinit (am_spi_handle_t handle);
//
///**
// * \brief SPI0 poll ʵ����ʼ������� SPI ��׼������
// *
// * \param ��
// *
// * \return SPI ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_spi_handle_t am_zlg118_spi0_poll_inst_init (void);
//
///**
// * \brief SPI2 poll ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_spi0_poll_inst_init() ����
// *                   ��õ� SPI ��׼������
// *
// * \return ��
// */
//void am_zlg118_spi0_poll_inst_deinit (am_spi_handle_t handle);
//
///**
// * \brief SPI1 poll ʵ����ʼ������� SPI ��׼������
// *
// * \param ��
// *
// * \return SPI ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_spi_handle_t am_zlg118_spi1_poll_inst_init (void);
//
///**
// * \brief SPI1 poll ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_spi1_poll_inst_init() ����
// *                   ��õ� SPI ��׼������
// *
// * \return ��
// */
//void am_zlg118_spi1_poll_inst_deinit (am_spi_handle_t handle);
//
/**
 * \brief SYSTICK ʵ����ʼ������� TIMER ��׼������
 *
 * \param ��
 *
 * \return TIMER ��׼����������Ϊ NULL��������ʼ��ʧ��
 */
am_timer_handle_t am_hc32f460_systick_inst_init (void);
//
///**
// * \brief SYSTICK ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_systick_inst_init() ����
// *                   ��õ� TIMER ��׼������
// *
// * \return ��
// */
//void am_zlg118_systick_inst_deinit (am_timer_handle_t handle);
//
///**
// * \brief TIM0 CAP ʵ����ʼ������� CAP ��׼������
// *
// * \param ��
// *
// * \return CAP ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_cap_handle_t am_zlg118_tim0_cap_inst_init (void);
//
///**
// * \brief TIM0 CAP ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim3_cap_inst_init() ����
// *                   ��õ� CAP ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim0_cap_inst_deinit (am_cap_handle_t handle);
//
///**
// * \brief TIM1 CAP ʵ����ʼ������� CAP ��׼������
// *
// * \param ��
// *
// * \return CAP ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_cap_handle_t am_zlg118_tim1_cap_inst_init (void);
//
///**
// * \brief TIM1 CAP ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim1_cap_inst_init() ����
// *                   ��õ� CAP ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim1_cap_inst_deinit (am_cap_handle_t handle);
//
///**
// * \brief TIM2 CAP ʵ����ʼ������� CAP ��׼������
// *
// * \param ��
// *
// * \return CAP ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_cap_handle_t am_zlg118_tim2_cap_inst_init (void);
//
///**
// * \brief TIM2 CAP ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim2_cap_inst_init() ����
// *                   ��õ� CAP ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim2_cap_inst_deinit (am_cap_handle_t handle);
//
///**
// * \brief TIM3 CAP ʵ����ʼ������� CAP ��׼������
// *
// * \param ��
// *
// * \return CAP ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_cap_handle_t am_zlg118_tim3_cap_inst_init (void);
//
///**
// * \brief TIM3 CAP ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim3_cap_inst_init() ����
// *                   ��õ� CAP ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim3_cap_inst_deinit (am_cap_handle_t handle);
//
///**
// * \brief TIM0 PWM ʵ����ʼ������� PWM ��׼������
// *
// * \param ��
// *
// * \return PWM ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_pwm_handle_t am_zlg118_tim0_pwm_inst_init (void);
//
///**
// * \brief TIM0 PWM ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim1_pwm_inst_init() ����
// *                   ��õ� PWM ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim0_pwm_inst_deinit (am_pwm_handle_t handle);
//
///**
// * \brief TIM1 PWM ʵ����ʼ������� PWM ��׼������
// *
// * \param ��
// *
// * \return PWM ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_pwm_handle_t am_zlg118_tim1_pwm_inst_init (void);
//
///**
// * \brief TIM1 PWM ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim1_pwm_inst_init() ����
// *                   ��õ� PWM ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim1_pwm_inst_deinit (am_pwm_handle_t handle);
//
///**
// * \brief TIM2 PWM ʵ����ʼ������� PWM ��׼������
// *
// * \param ��
// *
// * \return PWM ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_pwm_handle_t am_zlg118_tim2_pwm_inst_init (void);
//
///**
// * \brief TIM2 PWM ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim2_pwm_inst_init() ����
// *                   ��õ� PWM ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim2_pwm_inst_deinit (am_pwm_handle_t handle);
//
///**
// * \brief TIM3 PWM ʵ����ʼ������� PWM ��׼������
// *
// * \param ��
// *
// * \return PWM ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_pwm_handle_t am_zlg118_tim3_pwm_inst_init (void);
//
///**
// * \brief TIM3 PWM ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim3_pwm_inst_init() ����
// *                   ��õ� PWM ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim3_pwm_inst_deinit (am_pwm_handle_t handle);
//
//
///**
// * \brief TIM0 TIMING ʵ����ʼ������� TIMER ��׼������
// *
// * \param ��
// *
// * \return PWM ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_timer_handle_t am_zlg118_tim0_timing_inst_init (void);
//
///**
// * \brief TIM0 TIMING ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim0_timing_inst_init() ����
// *                   ��õ� TIMER ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim0_timing_inst_deinit (am_timer_handle_t handle);
//
///**
// * \brief TIM1 TIMING ʵ����ʼ������� TIMER ��׼������
// *
// * \param ��
// *
// * \return PWM ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_timer_handle_t am_zlg118_tim1_timing_inst_init (void);
//
///**
// * \brief TIM1 TIMING ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim1_timing_inst_init() ����
// *                   ��õ� TIMER ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim1_timing_inst_deinit (am_timer_handle_t handle);
//
///**
// * \brief TIM2 TIMING ʵ����ʼ������� TIMER ��׼������
// *
// * \param ��
// *
// * \return PWM ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_timer_handle_t am_zlg118_tim2_timing_inst_init (void);
//
///**
// * \brief TIM2 TIMING ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim2_timing_inst_init() ����
// *                   ��õ� TIMER ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim2_timing_inst_deinit (am_timer_handle_t handle);
//
///**
// * \brief TIM3 TIMING ʵ����ʼ������� TIMER ��׼������
// *
// * \param ��
// *
// * \return PWM ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_timer_handle_t am_zlg118_tim3_timing_inst_init (void);
//
///**
// * \brief TIM3 TIMING ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim3_timing_inst_init() ����
// *                   ��õ� TIMER ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim3_timing_inst_deinit (am_timer_handle_t handle);
//
///**
// * \brief LPTIM0 TIMING ʵ����ʼ������� TIMER ��׼������
// *
// * \param ��
// *
// * \return PWM ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_timer_handle_t am_zlg118_lptim0_timing_inst_init (void);
//
///**
// * \brief LPTIM0 TIMING ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_lptim0_timing_inst_init() ����
// *                   ��õ� TIMER ��׼������
// *
// * \return ��
// */
//void am_zlg118_lptim0_timing_inst_deinit (am_timer_handle_t handle);
//
///**
// * \brief LPTIM1 TIMING ʵ����ʼ������� TIMER ��׼������
// *
// * \param ��
// *
// * \return PWM ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_timer_handle_t am_zlg118_lptim1_timing_inst_init (void);
//
///**
// * \brief LPTIM1 TIMING ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_lptim1_timing_inst_init() ����
// *                   ��õ� TIMER ��׼������
// *
// * \return ��
// */
//void am_zlg118_lptim1_timing_inst_deinit (am_timer_handle_t handle);
//
///**
// * \brief ADTIM4 CAP ʵ����ʼ������� CAP ��׼������
// *
// * \param ��
// *
// * \return CAP ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_cap_handle_t am_zlg118_tim4_cap_inst_init (void);
//
///**
// * \brief ADTIM4 CAP ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim4_cap_inst_init() ����
// *                   ��õ� CAP ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim4_cap_inst_deinit (am_cap_handle_t handle);
//
///**
// * \brief ADTIM5 CAP ʵ����ʼ������� CAP ��׼������
// *
// * \param ��
// *
// * \return CAP ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_cap_handle_t am_zlg118_tim5_cap_inst_init (void);
//
///**
// * \brief ADTIM5 CAP ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim5_cap_inst_init() ����
// *                   ��õ� CAP ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim5_cap_inst_deinit (am_cap_handle_t handle);
//
///**
// * \brief ADTIM6 CAP ʵ����ʼ������� CAP ��׼������
// *
// * \param ��
// *
// * \return CAP ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_cap_handle_t am_zlg118_tim6_cap_inst_init (void);
//
///**
// * \brief ADTIM6 CAP ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim6_cap_inst_init() ����
// *                   ��õ� CAP ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim6_cap_inst_deinit (am_cap_handle_t handle);
//
///**
// * \brief ADTIM4 PWM ʵ����ʼ������� PWM ��׼������
// *
// * \param ��
// *
// * \return PWM ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_pwm_handle_t am_zlg118_tim4_pwm_inst_init (void);
//
///**
// * \brief ADTIM4 PWM ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim4_pwm_inst_init() ����
// *                   ��õ� PWM ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim4_pwm_inst_deinit (am_pwm_handle_t handle);
//
///**
// * \brief ADTIM5 PWM ʵ����ʼ������� PWM ��׼������
// *
// * \param ��
// *
// * \return PWM ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_pwm_handle_t am_zlg118_tim5_pwm_inst_init (void);
//
///**
// * \brief ADTIM5 PWM ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim5_pwm_inst_init() ����
// *                   ��õ� PWM ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim5_pwm_inst_deinit (am_pwm_handle_t handle);
//
///**
// * \brief ADTIM6 PWM ʵ����ʼ������� PWM ��׼������
// *
// * \param ��
// *
// * \return PWM ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_pwm_handle_t am_zlg118_tim6_pwm_inst_init (void);
//
///**
// * \brief ADTIM6 PWM ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim6_pwm_inst_init() ����
// *                   ��õ� PWM ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim6_pwm_inst_deinit (am_pwm_handle_t handle);
//
///**
// * \brief ADTIM4 timing ʵ����ʼ������� CAP ��׼������
// *
// * \param ��
// *
// * \return CAP ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_timer_handle_t am_zlg118_tim4_timing_inst_init (void);
//
///**
// * \brief ADTIM4 timing ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim4_timing_inst_init() ����
// *                   ��õ� CAP ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim4_timing_inst_deinit (am_timer_handle_t handle);
//
///**
// * \brief ADTIM5 timing ʵ����ʼ������� CAP ��׼������
// *
// * \param ��
// *
// * \return CAP ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_timer_handle_t am_zlg118_tim5_timing_inst_init (void);
//
///**
// * \brief ADTIM5 timing ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim5_timing_inst_init() ����
// *                   ��õ� CAP ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim5_timing_inst_deinit (am_timer_handle_t handle);
//
///**
// * \brief ADTIM6 timing ʵ����ʼ������� CAP ��׼������
// *
// * \param ��
// *
// * \return CAP ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_timer_handle_t am_zlg118_tim6_timing_inst_init (void);
//
///**
// * \brief ADTIM6 timing ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_tim6_timing_inst_init() ����
// *                   ��õ� CAP ��׼������
// *
// * \return ��
// */
//void am_zlg118_tim6_timing_inst_deinit (am_timer_handle_t handle);
//

/**
 * \brief UART1 ʵ����ʼ������� UART ��׼������
 *
 * \param ��
 *
 * \return UART ��׼����������Ϊ NULL��������ʼ��ʧ��
 */
am_uart_handle_t am_hc32f460_uart1_inst_init (void);

/**
 * \brief UART1 ʵ�����ʼ��
 *
 * \param[in] handle ͨ�� am_hc32f460_uart1_inst_init() ������õ� UART ��׼������
 *
 * \return ��
 */
void am_hc32f460_uart1_inst_deinit (am_uart_handle_t handle);

/**
 * \brief UART2 ʵ����ʼ������� UART ��׼������
 *
 * \param ��
 *
 * \return UART ��׼����������Ϊ NULL��������ʼ��ʧ��
 */
am_uart_handle_t am_hc32f460_uart2_inst_init (void);

/**
 * \brief UART2 ʵ�����ʼ��
 *
 * \param[in] handle ͨ�� am_hc32f460_uart2_inst_init() ������õ� UART ��׼������
 *
 * \return ��
 */
void am_hc32f460_uart2_inst_deinit (am_uart_handle_t handle);

/**
 * \brief UART3 ʵ����ʼ������� UART ��׼������
 *
 * \param ��
 *
 * \return UART ��׼����������Ϊ NULL��������ʼ��ʧ��
 */
am_uart_handle_t am_hc32f460_uart3_inst_init (void);

/**
 * \brief UART3 ʵ�����ʼ��
 *
 * \param[in] handle ͨ�� am_hc32f460_uart3_inst_init() ������õ� UART ��׼������
 *
 * \return ��
 */
void am_hc32f460_uart3_inst_deinit (am_uart_handle_t handle);
/**
 * \brief UART4 ʵ����ʼ������� UART ��׼������
 *
 * \param ��
 *
 * \return UART ��׼����������Ϊ NULL��������ʼ��ʧ��
 */
am_uart_handle_t am_hc32f460_uart4_inst_init (void);

/**
 * \brief UART4 ʵ�����ʼ��
 *
 * \param[in] handle ͨ�� am_hc32f460_uart4_inst_init() ������õ� UART ��׼������
 *
 * \return ��
 */
void am_hc32f460_uart4_inst_deinit (am_uart_handle_t handle);
//
///**
// * \brief LPUART0 ʵ����ʼ������� UART ��׼������
// *
// * \param ��
// *
// * \return UART ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_uart_handle_t am_zlg118_lpuart0_inst_init (void);
//
///**
// * \brief LPUART0 ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_lpuart0_inst_init() ������õ� UART ��׼������
// *
// * \return ��
// */
//void am_zlg118_lpuart0_inst_deinit (am_uart_handle_t handle);
//
///**
// * \brief LPUART1 ʵ����ʼ������� UART ��׼������
// *
// * \param ��
// *
// * \return UART ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_uart_handle_t am_zlg118_lpuart1_inst_init (void);
//
///**
// * \brief LPUART1 ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_lpuart1_inst_init() ������õ� UART ��׼������
// *
// * \return ��
// */
//void am_zlg118_lpuart1_inst_deinit (am_uart_handle_t handle);
//
///**
// * \brief WDT ʵ����ʼ������� WDT ��׼������
// *
// * \param ��
// *
// * \return WDT ��׼����������Ϊ NULL��������ʼ��ʧ��
// */
//am_wdt_handle_t am_zlg118_wdt_inst_init (void);
//
///**
// * \brief WDT ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_wdt_inst_init() ������õ� WDT ��׼������
// *
// * \return ��
// */
//void am_zlg118_wdt_inst_deinit (am_wdt_handle_t handle);
//
///**
// * \brief PCNT ʵ����ʼ�������PCNT ������
// *
// * \param ��
// *
// * \return PCNT ����������Ϊ NULL��������ʼ��ʧ��
// */
//am_zlg118_pcnt_handle_t am_zlg118_pcnt_inst_init (void);
//
///**
// * \brief PCNT ʵ�����ʼ��
// *
// * \param[in] handle ͨ�� am_zlg118_pcnt1_inst_init() ������õ� PCNT ������
// *
// * \return ��
// */
//void am_zlg118_pcnt_inst_deinit (am_zlg118_pcnt_handle_t handle);

int am_hc32f460_led_gpio_inst_init (void);
am_uart_handle_t am_debug_uart_inst_init (void);

am_timer_handle_t am_hc32f460_tim01_timing_inst_init (void);
am_timer_handle_t am_hc32f460_tim02_timing_inst_init (void);
am_timer_handle_t am_hc32f460_timea1_timing_inst_init (void);
am_timer_handle_t am_hc32f460_timea2_timing_inst_init (void);
am_timer_handle_t am_hc32f460_timea3_timing_inst_init (void);
am_timer_handle_t am_hc32f460_timea4_timing_inst_init (void);
am_timer_handle_t am_hc32f460_timea5_timing_inst_init (void);
am_timer_handle_t am_hc32f460_timea6_timing_inst_init (void);
am_timer_handle_t am_hc32f460_tim41_timing_inst_init (void);
am_timer_handle_t am_hc32f460_tim42_timing_inst_init (void);
am_timer_handle_t am_hc32f460_tim43_timing_inst_init (void);
am_timer_handle_t am_hc32f460_tim61_timing_inst_init (void);
am_timer_handle_t am_hc32f460_tim62_timing_inst_init (void);
am_timer_handle_t am_hc32f460_tim63_timing_inst_init (void);

am_pwm_handle_t   am_hc32f460_timea1_pwm_inst_init (void);
am_pwm_handle_t   am_hc32f460_timea2_pwm_inst_init (void);
am_pwm_handle_t   am_hc32f460_timea3_pwm_inst_init (void);
am_pwm_handle_t   am_hc32f460_timea4_pwm_inst_init (void);
am_pwm_handle_t   am_hc32f460_timea5_pwm_inst_init (void);
am_pwm_handle_t   am_hc32f460_timea6_pwm_inst_init (void);
am_pwm_handle_t   am_hc32f460_tim41_pwm_inst_init (void);
am_pwm_handle_t   am_hc32f460_tim42_pwm_inst_init (void);
am_pwm_handle_t   am_hc32f460_tim43_pwm_inst_init (void);
am_pwm_handle_t   am_hc32f460_adtim61_pwm_inst_init (void);
am_pwm_handle_t   am_hc32f460_adtim62_pwm_inst_init (void);
am_pwm_handle_t   am_hc32f460_adtim63_pwm_inst_init (void);

am_cap_handle_t   am_hc32f460_timea1_cap_inst_init (void);
am_cap_handle_t   am_hc32f460_timea2_cap_inst_init (void);
am_cap_handle_t   am_hc32f460_timea3_cap_inst_init (void);
am_cap_handle_t   am_hc32f460_timea4_cap_inst_init (void);
am_cap_handle_t   am_hc32f460_timea5_cap_inst_init (void);
am_cap_handle_t   am_hc32f460_timea6_cap_inst_init (void);
am_cap_handle_t   am_hc32f460_adtim61_cap_inst_init (void);
am_cap_handle_t   am_hc32f460_adtim62_cap_inst_init (void);
am_cap_handle_t   am_hc32f460_adtim63_cap_inst_init (void);
am_i2c_handle_t   am_hc32f460_i2c1_inst_init (void);
am_i2c_slv_handle_t  am_hc32f460_i2c1_slv_inst_init (void);
/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif  /* __AM_ZLG118_INST_INIT_H */

/* end of file */