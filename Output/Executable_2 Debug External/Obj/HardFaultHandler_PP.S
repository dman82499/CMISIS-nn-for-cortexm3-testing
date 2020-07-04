# 1 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\System\\HardFaultHandler.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\System\\HardFaultHandler.S"
# 61 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\System\\HardFaultHandler.S"
;
# 80 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\System\\HardFaultHandler.S"
;
# 98 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\System\\HardFaultHandler.S"
        .global HardFault_Handler
        .type HardFault_Handler, function



;
# 120 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\System\\HardFaultHandler.S"
        .extern HardFaultHandler



;
# 133 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\System\\HardFaultHandler.S"
        .syntax unified
        .thumb
        .balign 4
        .text







;






;
# 163 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\System\\HardFaultHandler.S"
HardFault_Handler:
# 190 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\System\\HardFaultHandler.S"
        ;
        tst LR, #4 ;
        ite EQ
        mrseq R0, MSP ;
        mrsne R0, PSP ;




        ldr R1,=HardFaultHandler
        bx R1 ;


        .end




;
