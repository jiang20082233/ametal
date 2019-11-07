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
 * \brief SPI �����жϷ�ʽ���̣�ͨ����׼�ӿ�ʵ��
 *
 * - �������裺
 *   1. �� SPI �� MOSI ���ź� MISO ��������������ģ��ӻ��豸���ػ����ԣ�
 *
 * - ʵ������
 *   1. ����ͨ�� MOSI �������ݣ����������ݴ� MOSI ���أ�
 *   2. ���ڴ�ӡ�����Խ����
 *
 * \note
 *    ����۲촮�ڴ�ӡ�ĵ�����Ϣ����Ҫ�� PIOA_10 �������� PC ���ڵ� TXD��
 *    PIOA_9 �������� PC ���ڵ� RXD��
 *
 * \par Դ����
 * \snippet demo_zlg237_std_spi_master_int.c src_zlg237_std_spi_master_int
 *
 * \internal
 * \par History
 * - 1.00 19-07-23  ari, first implementation.
 * \endinternal
 */

/**
 * \addtogroup demo_if_zlg237_std_spi_master_int
 * \copydoc demo_zlg237_std_spi_master_int.c
 */

/** [src_zlg237_std_spi_master_int] */
#include "ametal.h"
#include "zlg237_pin.h"
#include "am_vdebug.h"
#include "demo_std_entries.h"
#include "am_zlg237_inst_init.h"
#include "demo_am237_core_entries.h"

/**
 * \brief �������
 */
void demo_zlg237_core_std_spi_master_int_entry (void)
{
    AM_DBG_INFO("demo am237_core std spi master int!\r\n");

    demo_std_spi_master_entry(am_zlg237_spi2_int_inst_init(), PIOB_12);

}
/** [src_zlg237_std_spi_master_int] */

/* end of file */