	.cpu cortex-m33
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 6
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.file	"SEGGER_HardFaultHandler.c"
	.text
.Ltext0:
	.section	.text.HardFaultHandler,"ax",%progbits
	.align	1
	.global	HardFaultHandler
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	HardFaultHandler, %function
HardFaultHandler:
.LFB0:
	.file 1 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\System\\SEGGER_HardFaultHandler.c"
	.loc 1 222 45
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	sub	sp, sp, #8
.LCFI0:
	str	r0, [sp, #4]
	.loc 1 228 7
	ldr	r3, .L5
	ldr	r3, [r3]
	.loc 1 228 6
	cmp	r3, #0
	bge	.L2
	.loc 1 229 15
	ldr	r3, .L5
	ldr	r3, [r3]
	ldr	r2, .L5
	orr	r3, r3, #-2147483648
	str	r3, [r2]
	.loc 1 230 20
	ldr	r3, [sp, #4]
	adds	r3, r3, #24
	ldr	r2, [r3]
	ldr	r3, [sp, #4]
	adds	r3, r3, #24
	adds	r2, r2, #2
	str	r2, [r3]
	.loc 1 231 5
	b	.L4
.L2:
	.loc 1 275 6 discriminator 1
	b	.L2
.L4:
	.loc 1 278 1
	add	sp, sp, #8
.LCFI1:
	@ sp needed
	bx	lr
.L6:
	.align	2
.L5:
	.word	-536810196
.LFE0:
	.size	HardFaultHandler, .-HardFaultHandler
	.section	.debug_frame,"",%progbits
.Lframe0:
	.4byte	.LECIE0-.LSCIE0
.LSCIE0:
	.4byte	0xffffffff
	.byte	0x3
	.ascii	"\000"
	.uleb128 0x1
	.sleb128 -4
	.uleb128 0xe
	.byte	0xc
	.uleb128 0xd
	.uleb128 0
	.align	2
.LECIE0:
.LSFDE0:
	.4byte	.LEFDE0-.LASFDE0
.LASFDE0:
	.4byte	.Lframe0
	.4byte	.LFB0
	.4byte	.LFE0-.LFB0
	.byte	0x4
	.4byte	.LCFI0-.LFB0
	.byte	0xe
	.uleb128 0x8
	.byte	0x4
	.4byte	.LCFI1-.LCFI0
	.byte	0xe
	.uleb128 0
	.align	2
.LEFDE0:
	.text
.Letext0:
	.section	.debug_info,"",%progbits
.Ldebug_info0:
	.4byte	0x55
	.2byte	0x4
	.4byte	.Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.4byte	.LASF0
	.byte	0xc
	.4byte	.LASF1
	.4byte	.LASF2
	.4byte	.Ldebug_ranges0+0
	.4byte	0
	.4byte	.Ldebug_line0
	.uleb128 0x2
	.4byte	.LASF3
	.byte	0x1
	.byte	0xde
	.byte	0x6
	.4byte	.LFB0
	.4byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x4b
	.uleb128 0x3
	.4byte	.LASF4
	.byte	0x1
	.byte	0xde
	.byte	0x25
	.4byte	0x4b
	.uleb128 0x2
	.byte	0x91
	.sleb128 -4
	.byte	0
	.uleb128 0x4
	.byte	0x4
	.4byte	0x51
	.uleb128 0x5
	.byte	0x4
	.byte	0x7
	.4byte	.LASF5
	.byte	0
	.section	.debug_abbrev,"",%progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x2134
	.uleb128 0x19
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_pubnames,"",%progbits
	.4byte	0x23
	.2byte	0x2
	.4byte	.Ldebug_info0
	.4byte	0x59
	.4byte	0x25
	.ascii	"HardFaultHandler\000"
	.4byte	0
	.section	.debug_pubtypes,"",%progbits
	.4byte	0x1f
	.2byte	0x2
	.4byte	.Ldebug_info0
	.4byte	0x59
	.4byte	0x51
	.ascii	"unsigned int\000"
	.4byte	0
	.section	.debug_aranges,"",%progbits
	.4byte	0x1c
	.2byte	0x2
	.4byte	.Ldebug_info0
	.byte	0x4
	.byte	0
	.2byte	0
	.2byte	0
	.4byte	.LFB0
	.4byte	.LFE0-.LFB0
	.4byte	0
	.4byte	0
	.section	.debug_ranges,"",%progbits
.Ldebug_ranges0:
	.4byte	.LFB0
	.4byte	.LFE0
	.4byte	0
	.4byte	0
	.section	.debug_line,"",%progbits
.Ldebug_line0:
	.section	.debug_str,"MS",%progbits,1
.LASF1:
	.ascii	"C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio"
	.ascii	" for ARM Projects\\Executable_1\\System\\SEGGER_Har"
	.ascii	"dFaultHandler.c\000"
.LASF5:
	.ascii	"unsigned int\000"
.LASF2:
	.ascii	"C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio"
	.ascii	" for ARM Projects\\Executable_1\000"
.LASF3:
	.ascii	"HardFaultHandler\000"
.LASF0:
	.ascii	"GNU C11 9.2.1 20191025 (release) [ARM/arm-9-branch "
	.ascii	"revision 277599] -fmessage-length=0 -mcpu=cortex-m3"
	.ascii	"3+nodsp -mlittle-endian -mfloat-abi=soft -mthumb -m"
	.ascii	"tp=soft -munaligned-access -std=gnu11 -g2 -gpubname"
	.ascii	"s -fomit-frame-pointer -fno-dwarf2-cfi-asm -fno-bui"
	.ascii	"ltin -ffunction-sections -fdata-sections -fshort-en"
	.ascii	"ums -fno-common\000"
.LASF4:
	.ascii	"pStack\000"
	.ident	"GCC: (GNU) 9.2.1 20191025 (release) [ARM/arm-9-branch revision 277599]"
