/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'NIOS2' in SOPC Builder design 'NIOSII'
 * SOPC Builder design path: ../../NIOSII.sopcinfo
 *
 * Generated: Wed Apr 01 22:40:31 PDT 2020
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00002820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1c
#define ALT_CPU_DCACHE_BYPASS_MASK 0x80000000
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 2048
#define ALT_CPU_EXCEPTION_ADDR 0x08000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x1c
#define ALT_CPU_NAME "NIOS2"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x08000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00002820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x1c
#define NIOS2_DCACHE_BYPASS_MASK 0x80000000
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 2048
#define NIOS2_EXCEPTION_ADDR 0x08000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x1c
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x08000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2


/*
 * GREENLED configuration
 *
 */

#define ALT_MODULE_CLASS_GREENLED altera_avalon_pio
#define GREENLED_BASE 0x30a0
#define GREENLED_BIT_CLEARING_EDGE_REGISTER 0
#define GREENLED_BIT_MODIFYING_OUTPUT_REGISTER 0
#define GREENLED_CAPTURE 0
#define GREENLED_DATA_WIDTH 9
#define GREENLED_DO_TEST_BENCH_WIRING 0
#define GREENLED_DRIVEN_SIM_VALUE 0
#define GREENLED_EDGE_TYPE "NONE"
#define GREENLED_FREQ 50000000
#define GREENLED_HAS_IN 0
#define GREENLED_HAS_OUT 1
#define GREENLED_HAS_TRI 0
#define GREENLED_IRQ -1
#define GREENLED_IRQ_INTERRUPT_CONTROLLER_ID -1
#define GREENLED_IRQ_TYPE "NONE"
#define GREENLED_NAME "/dev/GREENLED"
#define GREENLED_RESET_VALUE 0
#define GREENLED_SPAN 16
#define GREENLED_TYPE "altera_avalon_pio"


/*
 * JTAG configuration
 *
 */

#define ALT_MODULE_CLASS_JTAG altera_avalon_jtag_uart
#define JTAG_BASE 0x30c8
#define JTAG_IRQ 0
#define JTAG_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_NAME "/dev/JTAG"
#define JTAG_READ_DEPTH 64
#define JTAG_READ_THRESHOLD 8
#define JTAG_SPAN 8
#define JTAG_TYPE "altera_avalon_jtag_uart"
#define JTAG_WRITE_DEPTH 64
#define JTAG_WRITE_THRESHOLD 8


/*
 * PUSHB configuration
 *
 */

#define ALT_MODULE_CLASS_PUSHB altera_avalon_pio
#define PUSHB_BASE 0x3000
#define PUSHB_BIT_CLEARING_EDGE_REGISTER 0
#define PUSHB_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PUSHB_CAPTURE 1
#define PUSHB_DATA_WIDTH 4
#define PUSHB_DO_TEST_BENCH_WIRING 0
#define PUSHB_DRIVEN_SIM_VALUE 0
#define PUSHB_EDGE_TYPE "FALLING"
#define PUSHB_FREQ 50000000
#define PUSHB_HAS_IN 1
#define PUSHB_HAS_OUT 0
#define PUSHB_HAS_TRI 0
#define PUSHB_IRQ 2
#define PUSHB_IRQ_INTERRUPT_CONTROLLER_ID 0
#define PUSHB_IRQ_TYPE "EDGE"
#define PUSHB_NAME "/dev/PUSHB"
#define PUSHB_RESET_VALUE 0
#define PUSHB_SPAN 16
#define PUSHB_TYPE "altera_avalon_pio"


/*
 * RAMs1 configuration
 *
 */

#define ALT_MODULE_CLASS_RAMs1 altera_avalon_onchip_memory2
#define RAMS1_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define RAMS1_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define RAMS1_BASE 0x1000
#define RAMS1_CONTENTS_INFO ""
#define RAMS1_DUAL_PORT 0
#define RAMS1_GUI_RAM_BLOCK_TYPE "AUTO"
#define RAMS1_INIT_CONTENTS_FILE "NIOSII_RAMs1"
#define RAMS1_INIT_MEM_CONTENT 1
#define RAMS1_INSTANCE_ID "NONE"
#define RAMS1_IRQ -1
#define RAMS1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RAMS1_NAME "/dev/RAMs1"
#define RAMS1_NON_DEFAULT_INIT_FILE_ENABLED 0
#define RAMS1_RAM_BLOCK_TYPE "AUTO"
#define RAMS1_READ_DURING_WRITE_MODE "DONT_CARE"
#define RAMS1_SINGLE_CLOCK_OP 0
#define RAMS1_SIZE_MULTIPLE 1
#define RAMS1_SIZE_VALUE 4096
#define RAMS1_SPAN 4096
#define RAMS1_TYPE "altera_avalon_onchip_memory2"
#define RAMS1_WRITABLE 1


/*
 * REDLED configuration
 *
 */

#define ALT_MODULE_CLASS_REDLED altera_avalon_pio
#define REDLED_BASE 0x30b0
#define REDLED_BIT_CLEARING_EDGE_REGISTER 0
#define REDLED_BIT_MODIFYING_OUTPUT_REGISTER 0
#define REDLED_CAPTURE 0
#define REDLED_DATA_WIDTH 18
#define REDLED_DO_TEST_BENCH_WIRING 0
#define REDLED_DRIVEN_SIM_VALUE 0
#define REDLED_EDGE_TYPE "NONE"
#define REDLED_FREQ 50000000
#define REDLED_HAS_IN 0
#define REDLED_HAS_OUT 1
#define REDLED_HAS_TRI 0
#define REDLED_IRQ -1
#define REDLED_IRQ_INTERRUPT_CONTROLLER_ID -1
#define REDLED_IRQ_TYPE "NONE"
#define REDLED_NAME "/dev/REDLED"
#define REDLED_RESET_VALUE 0
#define REDLED_SPAN 16
#define REDLED_TYPE "altera_avalon_pio"


/*
 * SWITCH configuration
 *
 */

#define ALT_MODULE_CLASS_SWITCH altera_avalon_pio
#define SWITCH_BASE 0x20
#define SWITCH_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCH_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCH_CAPTURE 0
#define SWITCH_DATA_WIDTH 18
#define SWITCH_DO_TEST_BENCH_WIRING 0
#define SWITCH_DRIVEN_SIM_VALUE 0
#define SWITCH_EDGE_TYPE "NONE"
#define SWITCH_FREQ 50000000
#define SWITCH_HAS_IN 1
#define SWITCH_HAS_OUT 0
#define SWITCH_HAS_TRI 0
#define SWITCH_IRQ -1
#define SWITCH_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWITCH_IRQ_TYPE "NONE"
#define SWITCH_NAME "/dev/SWITCH"
#define SWITCH_RESET_VALUE 0
#define SWITCH_SPAN 16
#define SWITCH_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/JTAG"
#define ALT_STDERR_BASE 0x30c8
#define ALT_STDERR_DEV JTAG
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/JTAG"
#define ALT_STDIN_BASE 0x30c8
#define ALT_STDIN_DEV JTAG
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/JTAG"
#define ALT_STDOUT_BASE 0x30c8
#define ALT_STDOUT_DEV JTAG
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "NIOSII"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK TIMER_0
#define ALT_TIMESTAMP_CLK none


/*
 * sdram configuration
 *
 */

#define ALT_MODULE_CLASS_sdram altera_avalon_new_sdram_controller
#define SDRAM_BASE 0x8000000
#define SDRAM_CAS_LATENCY 3
#define SDRAM_CONTENTS_INFO
#define SDRAM_INIT_NOP_DELAY 0.0
#define SDRAM_INIT_REFRESH_COMMANDS 2
#define SDRAM_IRQ -1
#define SDRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM_IS_INITIALIZED 1
#define SDRAM_NAME "/dev/sdram"
#define SDRAM_POWERUP_DELAY 100.0
#define SDRAM_REFRESH_PERIOD 7.8125
#define SDRAM_REGISTER_DATA_IN 1
#define SDRAM_SDRAM_ADDR_WIDTH 0x19
#define SDRAM_SDRAM_BANK_WIDTH 2
#define SDRAM_SDRAM_COL_WIDTH 10
#define SDRAM_SDRAM_DATA_WIDTH 32
#define SDRAM_SDRAM_NUM_BANKS 4
#define SDRAM_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_SDRAM_ROW_WIDTH 13
#define SDRAM_SHARED_DATA 0
#define SDRAM_SIM_MODEL_BASE 0
#define SDRAM_SPAN 134217728
#define SDRAM_STARVATION_INDICATOR 0
#define SDRAM_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_T_AC 5.4
#define SDRAM_T_MRD 3
#define SDRAM_T_RCD 15.0
#define SDRAM_T_RFC 70.0
#define SDRAM_T_RP 15.0
#define SDRAM_T_WR 14.0


/*
 * seg7_0 configuration
 *
 */

#define ALT_MODULE_CLASS_seg7_0 altera_avalon_pio
#define SEG7_0_BASE 0x3080
#define SEG7_0_BIT_CLEARING_EDGE_REGISTER 0
#define SEG7_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG7_0_CAPTURE 0
#define SEG7_0_DATA_WIDTH 7
#define SEG7_0_DO_TEST_BENCH_WIRING 0
#define SEG7_0_DRIVEN_SIM_VALUE 0
#define SEG7_0_EDGE_TYPE "NONE"
#define SEG7_0_FREQ 50000000
#define SEG7_0_HAS_IN 0
#define SEG7_0_HAS_OUT 1
#define SEG7_0_HAS_TRI 0
#define SEG7_0_IRQ -1
#define SEG7_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG7_0_IRQ_TYPE "NONE"
#define SEG7_0_NAME "/dev/seg7_0"
#define SEG7_0_RESET_VALUE 0
#define SEG7_0_SPAN 16
#define SEG7_0_TYPE "altera_avalon_pio"


/*
 * seg7_1 configuration
 *
 */

#define ALT_MODULE_CLASS_seg7_1 altera_avalon_pio
#define SEG7_1_BASE 0x3070
#define SEG7_1_BIT_CLEARING_EDGE_REGISTER 0
#define SEG7_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG7_1_CAPTURE 0
#define SEG7_1_DATA_WIDTH 7
#define SEG7_1_DO_TEST_BENCH_WIRING 0
#define SEG7_1_DRIVEN_SIM_VALUE 0
#define SEG7_1_EDGE_TYPE "NONE"
#define SEG7_1_FREQ 50000000
#define SEG7_1_HAS_IN 0
#define SEG7_1_HAS_OUT 1
#define SEG7_1_HAS_TRI 0
#define SEG7_1_IRQ -1
#define SEG7_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG7_1_IRQ_TYPE "NONE"
#define SEG7_1_NAME "/dev/seg7_1"
#define SEG7_1_RESET_VALUE 0
#define SEG7_1_SPAN 16
#define SEG7_1_TYPE "altera_avalon_pio"


/*
 * seg7_2 configuration
 *
 */

#define ALT_MODULE_CLASS_seg7_2 altera_avalon_pio
#define SEG7_2_BASE 0x3060
#define SEG7_2_BIT_CLEARING_EDGE_REGISTER 0
#define SEG7_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG7_2_CAPTURE 0
#define SEG7_2_DATA_WIDTH 7
#define SEG7_2_DO_TEST_BENCH_WIRING 0
#define SEG7_2_DRIVEN_SIM_VALUE 0
#define SEG7_2_EDGE_TYPE "NONE"
#define SEG7_2_FREQ 50000000
#define SEG7_2_HAS_IN 0
#define SEG7_2_HAS_OUT 1
#define SEG7_2_HAS_TRI 0
#define SEG7_2_IRQ -1
#define SEG7_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG7_2_IRQ_TYPE "NONE"
#define SEG7_2_NAME "/dev/seg7_2"
#define SEG7_2_RESET_VALUE 0
#define SEG7_2_SPAN 16
#define SEG7_2_TYPE "altera_avalon_pio"


/*
 * seg7_3 configuration
 *
 */

#define ALT_MODULE_CLASS_seg7_3 altera_avalon_pio
#define SEG7_3_BASE 0x3050
#define SEG7_3_BIT_CLEARING_EDGE_REGISTER 0
#define SEG7_3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG7_3_CAPTURE 0
#define SEG7_3_DATA_WIDTH 7
#define SEG7_3_DO_TEST_BENCH_WIRING 0
#define SEG7_3_DRIVEN_SIM_VALUE 0
#define SEG7_3_EDGE_TYPE "NONE"
#define SEG7_3_FREQ 50000000
#define SEG7_3_HAS_IN 0
#define SEG7_3_HAS_OUT 1
#define SEG7_3_HAS_TRI 0
#define SEG7_3_IRQ -1
#define SEG7_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG7_3_IRQ_TYPE "NONE"
#define SEG7_3_NAME "/dev/seg7_3"
#define SEG7_3_RESET_VALUE 0
#define SEG7_3_SPAN 16
#define SEG7_3_TYPE "altera_avalon_pio"


/*
 * seg7_4 configuration
 *
 */

#define ALT_MODULE_CLASS_seg7_4 altera_avalon_pio
#define SEG7_4_BASE 0x3010
#define SEG7_4_BIT_CLEARING_EDGE_REGISTER 0
#define SEG7_4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG7_4_CAPTURE 0
#define SEG7_4_DATA_WIDTH 7
#define SEG7_4_DO_TEST_BENCH_WIRING 0
#define SEG7_4_DRIVEN_SIM_VALUE 0
#define SEG7_4_EDGE_TYPE "NONE"
#define SEG7_4_FREQ 50000000
#define SEG7_4_HAS_IN 0
#define SEG7_4_HAS_OUT 1
#define SEG7_4_HAS_TRI 0
#define SEG7_4_IRQ -1
#define SEG7_4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG7_4_IRQ_TYPE "NONE"
#define SEG7_4_NAME "/dev/seg7_4"
#define SEG7_4_RESET_VALUE 0
#define SEG7_4_SPAN 16
#define SEG7_4_TYPE "altera_avalon_pio"


/*
 * seg7_5 configuration
 *
 */

#define ALT_MODULE_CLASS_seg7_5 altera_avalon_pio
#define SEG7_5_BASE 0x3020
#define SEG7_5_BIT_CLEARING_EDGE_REGISTER 0
#define SEG7_5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG7_5_CAPTURE 0
#define SEG7_5_DATA_WIDTH 7
#define SEG7_5_DO_TEST_BENCH_WIRING 0
#define SEG7_5_DRIVEN_SIM_VALUE 0
#define SEG7_5_EDGE_TYPE "NONE"
#define SEG7_5_FREQ 50000000
#define SEG7_5_HAS_IN 0
#define SEG7_5_HAS_OUT 1
#define SEG7_5_HAS_TRI 0
#define SEG7_5_IRQ -1
#define SEG7_5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG7_5_IRQ_TYPE "NONE"
#define SEG7_5_NAME "/dev/seg7_5"
#define SEG7_5_RESET_VALUE 0
#define SEG7_5_SPAN 16
#define SEG7_5_TYPE "altera_avalon_pio"


/*
 * seg7_6 configuration
 *
 */

#define ALT_MODULE_CLASS_seg7_6 altera_avalon_pio
#define SEG7_6_BASE 0x3030
#define SEG7_6_BIT_CLEARING_EDGE_REGISTER 0
#define SEG7_6_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG7_6_CAPTURE 0
#define SEG7_6_DATA_WIDTH 7
#define SEG7_6_DO_TEST_BENCH_WIRING 0
#define SEG7_6_DRIVEN_SIM_VALUE 0
#define SEG7_6_EDGE_TYPE "NONE"
#define SEG7_6_FREQ 50000000
#define SEG7_6_HAS_IN 0
#define SEG7_6_HAS_OUT 1
#define SEG7_6_HAS_TRI 0
#define SEG7_6_IRQ -1
#define SEG7_6_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG7_6_IRQ_TYPE "NONE"
#define SEG7_6_NAME "/dev/seg7_6"
#define SEG7_6_RESET_VALUE 0
#define SEG7_6_SPAN 16
#define SEG7_6_TYPE "altera_avalon_pio"


/*
 * seg7_7 configuration
 *
 */

#define ALT_MODULE_CLASS_seg7_7 altera_avalon_pio
#define SEG7_7_BASE 0x3040
#define SEG7_7_BIT_CLEARING_EDGE_REGISTER 0
#define SEG7_7_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEG7_7_CAPTURE 0
#define SEG7_7_DATA_WIDTH 7
#define SEG7_7_DO_TEST_BENCH_WIRING 0
#define SEG7_7_DRIVEN_SIM_VALUE 0
#define SEG7_7_EDGE_TYPE "NONE"
#define SEG7_7_FREQ 50000000
#define SEG7_7_HAS_IN 0
#define SEG7_7_HAS_OUT 1
#define SEG7_7_HAS_TRI 0
#define SEG7_7_IRQ -1
#define SEG7_7_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG7_7_IRQ_TYPE "NONE"
#define SEG7_7_NAME "/dev/seg7_7"
#define SEG7_7_RESET_VALUE 0
#define SEG7_7_SPAN 16
#define SEG7_7_TYPE "altera_avalon_pio"


/*
 * sysid_qsys_0 configuration
 *
 */

#define ALT_MODULE_CLASS_sysid_qsys_0 altera_avalon_sysid_qsys
#define SYSID_QSYS_0_BASE 0x30c0
#define SYSID_QSYS_0_ID 0
#define SYSID_QSYS_0_IRQ -1
#define SYSID_QSYS_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_QSYS_0_NAME "/dev/sysid_qsys_0"
#define SYSID_QSYS_0_SPAN 8
#define SYSID_QSYS_0_TIMESTAMP 1585805769
#define SYSID_QSYS_0_TYPE "altera_avalon_sysid_qsys"


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 0
#define TIMER_0_BASE 0x0
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 0
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 1
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 49999
#define TIMER_0_MULT 0.001
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "ms"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 1
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 1000
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */
