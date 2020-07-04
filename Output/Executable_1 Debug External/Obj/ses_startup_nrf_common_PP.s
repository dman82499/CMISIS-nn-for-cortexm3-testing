# 1 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\nRF\\Device\\Startup\\ses_startup_nrf_common.s"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\nRF\\Device\\Startup\\ses_startup_nrf_common.s"
# 82 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\nRF\\Device\\Startup\\ses_startup_nrf_common.s"
  .syntax unified

  .global Reset_Handler



  .extern _vectors
  .extern nRFInitialize
  .global afterInitialize

  .section .init, "ax"
  .thumb_func

  .equ VTOR_REG, 0xE000ED08
  .equ FPU_CPACR_REG, 0xE000ED88





Reset_Handler:


  b nRFInitialize
afterInitialize:



  ldr r0, =__RAM_segment_end__
  ldr r1, =0x7
  bics r0, r1
  mov sp, r0




  ldr r0, =SystemInit
  blx r0
# 145 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\nRF\\Device\\Startup\\ses_startup_nrf_common.s"
  ldr r0, =VTOR_REG



  ldr r1, =_vectors

  str r1, [r0]
# 165 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\nRF\\Device\\Startup\\ses_startup_nrf_common.s"
  b _start
