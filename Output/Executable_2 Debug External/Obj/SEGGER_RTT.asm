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
	.file	"SEGGER_RTT.c"
	.text
.Ltext0:
	.section	.data._aTerminalId,"aw"
	.align	2
	.type	_aTerminalId, %object
	.size	_aTerminalId, 16
_aTerminalId:
	.ascii	"0123456789ABCDEF"
	.global	_SEGGER_RTT
	.section	.bss._SEGGER_RTT,"aw",%nobits
	.align	2
	.type	_SEGGER_RTT, %object
	.size	_SEGGER_RTT, 120
_SEGGER_RTT:
	.space	120
	.section	.bss._acUpBuffer,"aw",%nobits
	.align	2
	.type	_acUpBuffer, %object
	.size	_acUpBuffer, 1024
_acUpBuffer:
	.space	1024
	.section	.bss._acDownBuffer,"aw",%nobits
	.align	2
	.type	_acDownBuffer, %object
	.size	_acDownBuffer, 16
_acDownBuffer:
	.space	16
	.section	.bss._ActiveTerminal,"aw",%nobits
	.type	_ActiveTerminal, %object
	.size	_ActiveTerminal, 1
_ActiveTerminal:
	.space	1
	.section .rodata
	.align	2
.LC0:
	.ascii	"Terminal\000"
	.align	2
.LC1:
	.ascii	"RTT\000"
	.align	2
.LC2:
	.ascii	"SEGGER\000"
	.section	.text._DoInit,"ax",%progbits
	.align	1
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	_DoInit, %function
_DoInit:
.LFB0:
	.file 1 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\SEGGER\\SEGGER_RTT.c"
	.loc 1 264 27
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI0:
	sub	sp, sp, #12
.LCFI1:
	.loc 1 269 5
	ldr	r3, .L2
	str	r3, [sp, #4]
	.loc 1 270 25
	ldr	r3, [sp, #4]
	movs	r2, #2
	str	r2, [r3, #16]
	.loc 1 271 25
	ldr	r3, [sp, #4]
	movs	r2, #2
	str	r2, [r3, #20]
	.loc 1 275 27
	ldr	r3, [sp, #4]
	ldr	r2, .L2+4
	str	r2, [r3, #24]
	.loc 1 276 27
	ldr	r3, [sp, #4]
	ldr	r2, .L2+8
	str	r2, [r3, #28]
	.loc 1 277 27
	ldr	r3, [sp, #4]
	mov	r2, #1024
	str	r2, [r3, #32]
	.loc 1 278 27
	ldr	r3, [sp, #4]
	movs	r2, #0
	str	r2, [r3, #40]
	.loc 1 279 27
	ldr	r3, [sp, #4]
	movs	r2, #0
	str	r2, [r3, #36]
	.loc 1 280 27
	ldr	r3, [sp, #4]
	movs	r2, #0
	str	r2, [r3, #44]
	.loc 1 284 29
	ldr	r3, [sp, #4]
	ldr	r2, .L2+4
	str	r2, [r3, #72]
	.loc 1 285 29
	ldr	r3, [sp, #4]
	ldr	r2, .L2+12
	str	r2, [r3, #76]
	.loc 1 286 29
	ldr	r3, [sp, #4]
	movs	r2, #16
	str	r2, [r3, #80]
	.loc 1 287 29
	ldr	r3, [sp, #4]
	movs	r2, #0
	str	r2, [r3, #88]
	.loc 1 288 29
	ldr	r3, [sp, #4]
	movs	r2, #0
	str	r2, [r3, #84]
	.loc 1 289 29
	ldr	r3, [sp, #4]
	movs	r2, #0
	str	r2, [r3, #92]
	.loc 1 295 3
	ldr	r3, [sp, #4]
	adds	r3, r3, #7
	ldr	r1, .L2+16
	mov	r0, r3
	bl	strcpy
	.loc 1 296 3
	ldr	r3, [sp, #4]
	ldr	r1, .L2+20
	mov	r0, r3
	bl	strcpy
	.loc 1 297 14
	ldr	r3, [sp, #4]
	movs	r2, #32
	strb	r2, [r3, #6]
	.loc 1 298 1
	nop
	add	sp, sp, #12
.LCFI2:
	@ sp needed
	ldr	pc, [sp], #4
.L3:
	.align	2
.L2:
	.word	_SEGGER_RTT
	.word	.LC0
	.word	_acUpBuffer
	.word	_acDownBuffer
	.word	.LC1
	.word	.LC2
.LFE0:
	.size	_DoInit, .-_DoInit
	.section	.text._WriteBlocking,"ax",%progbits
	.align	1
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	_WriteBlocking, %function
_WriteBlocking:
.LFB1:
	.loc 1 319 101
	@ args = 0, pretend = 0, frame = 32
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI3:
	sub	sp, sp, #36
.LCFI4:
	str	r0, [sp, #12]
	str	r1, [sp, #8]
	str	r2, [sp, #4]
	.loc 1 330 19
	movs	r3, #0
	str	r3, [sp, #24]
	.loc 1 331 9
	ldr	r3, [sp, #12]
	ldr	r3, [r3, #12]
	str	r3, [sp, #20]
.L8:
	.loc 1 333 11
	ldr	r3, [sp, #12]
	ldr	r3, [r3, #16]
	str	r3, [sp, #16]
	.loc 1 334 8
	ldr	r2, [sp, #16]
	ldr	r3, [sp, #20]
	cmp	r2, r3
	bls	.L5
	.loc 1 335 31
	ldr	r2, [sp, #16]
	ldr	r3, [sp, #20]
	subs	r3, r2, r3
	.loc 1 335 23
	subs	r3, r3, #1
	str	r3, [sp, #28]
	b	.L6
.L5:
	.loc 1 337 30
	ldr	r3, [sp, #12]
	ldr	r2, [r3, #8]
	.loc 1 337 62
	ldr	r1, [sp, #16]
	ldr	r3, [sp, #20]
	subs	r3, r1, r3
	.loc 1 337 45
	add	r3, r3, r2
	.loc 1 337 23
	subs	r3, r3, #1
	str	r3, [sp, #28]
.L6:
	.loc 1 339 23
	ldr	r3, [sp, #12]
	ldr	r2, [r3, #8]
	ldr	r3, [sp, #20]
	subs	r3, r2, r3
	.loc 1 339 21
	ldr	r2, [sp, #28]
	cmp	r3, r2
	it	cs
	movcs	r3, r2
	str	r3, [sp, #28]
	.loc 1 340 21
	ldr	r2, [sp, #28]
	ldr	r3, [sp, #4]
	cmp	r3, r2
	it	cs
	movcs	r3, r2
	str	r3, [sp, #28]
	.loc 1 350 5
	ldr	r3, [sp, #12]
	ldr	r2, [r3, #4]
	ldr	r3, [sp, #20]
	add	r3, r3, r2
	ldr	r2, [sp, #28]
	ldr	r1, [sp, #8]
	mov	r0, r3
	bl	memcpy
	.loc 1 351 21
	ldr	r2, [sp, #24]
	ldr	r3, [sp, #28]
	add	r3, r3, r2
	str	r3, [sp, #24]
	.loc 1 352 21
	ldr	r2, [sp, #8]
	ldr	r3, [sp, #28]
	add	r3, r3, r2
	str	r3, [sp, #8]
	.loc 1 353 21
	ldr	r2, [sp, #4]
	ldr	r3, [sp, #28]
	subs	r3, r2, r3
	str	r3, [sp, #4]
	.loc 1 354 21
	ldr	r2, [sp, #20]
	ldr	r3, [sp, #28]
	add	r3, r3, r2
	str	r3, [sp, #20]
	.loc 1 356 23
	ldr	r3, [sp, #12]
	ldr	r3, [r3, #8]
	.loc 1 356 8
	ldr	r2, [sp, #20]
	cmp	r2, r3
	bne	.L7
	.loc 1 357 13
	movs	r3, #0
	str	r3, [sp, #20]
.L7:
	.loc 1 359 18
	ldr	r3, [sp, #12]
	ldr	r2, [sp, #20]
	str	r2, [r3, #12]
	.loc 1 360 3
	ldr	r3, [sp, #4]
	cmp	r3, #0
	bne	.L8
	.loc 1 362 10
	ldr	r3, [sp, #24]
	.loc 1 363 1
	mov	r0, r3
	add	sp, sp, #36
.LCFI5:
	@ sp needed
	ldr	pc, [sp], #4
.LFE1:
	.size	_WriteBlocking, .-_WriteBlocking
	.section	.text._WriteNoCheck,"ax",%progbits
	.align	1
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	_WriteNoCheck, %function
_WriteNoCheck:
.LFB2:
	.loc 1 383 94
	@ args = 0, pretend = 0, frame = 32
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI6:
	sub	sp, sp, #36
.LCFI7:
	str	r0, [sp, #12]
	str	r1, [sp, #8]
	str	r2, [sp, #4]
	.loc 1 391 9
	ldr	r3, [sp, #12]
	ldr	r3, [r3, #12]
	str	r3, [sp, #28]
	.loc 1 392 14
	ldr	r3, [sp, #12]
	ldr	r2, [r3, #8]
	.loc 1 392 7
	ldr	r3, [sp, #28]
	subs	r3, r2, r3
	str	r3, [sp, #24]
	.loc 1 393 6
	ldr	r2, [sp, #24]
	ldr	r3, [sp, #4]
	cmp	r2, r3
	bls	.L11
	.loc 1 405 5
	ldr	r3, [sp, #12]
	ldr	r2, [r3, #4]
	ldr	r3, [sp, #28]
	add	r3, r3, r2
	ldr	r2, [sp, #4]
	ldr	r1, [sp, #8]
	mov	r0, r3
	bl	memcpy
	.loc 1 406 26
	ldr	r2, [sp, #28]
	ldr	r3, [sp, #4]
	add	r2, r2, r3
	.loc 1 406 18
	ldr	r3, [sp, #12]
	str	r2, [r3, #12]
	.loc 1 432 1
	b	.L13
.L11:
	.loc 1 425 20
	ldr	r3, [sp, #24]
	str	r3, [sp, #20]
	.loc 1 426 5
	ldr	r3, [sp, #12]
	ldr	r2, [r3, #4]
	ldr	r3, [sp, #28]
	add	r3, r3, r2
	ldr	r2, [sp, #20]
	ldr	r1, [sp, #8]
	mov	r0, r3
	bl	memcpy
	.loc 1 427 20
	ldr	r2, [sp, #4]
	ldr	r3, [sp, #24]
	subs	r3, r2, r3
	str	r3, [sp, #20]
	.loc 1 428 5
	ldr	r3, [sp, #12]
	ldr	r0, [r3, #4]
	ldr	r2, [sp, #8]
	ldr	r3, [sp, #24]
	add	r3, r3, r2
	ldr	r2, [sp, #20]
	mov	r1, r3
	bl	memcpy
	.loc 1 429 18
	ldr	r3, [sp, #12]
	ldr	r2, [sp, #20]
	str	r2, [r3, #12]
.L13:
	.loc 1 432 1
	nop
	add	sp, sp, #36
.LCFI8:
	@ sp needed
	ldr	pc, [sp], #4
.LFE2:
	.size	_WriteNoCheck, .-_WriteNoCheck
	.section	.text._PostTerminalSwitch,"ax",%progbits
	.align	1
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	_PostTerminalSwitch, %function
_PostTerminalSwitch:
.LFB3:
	.loc 1 447 88
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI9:
	sub	sp, sp, #20
.LCFI10:
	str	r0, [sp, #4]
	mov	r3, r1
	strb	r3, [sp, #3]
	.loc 1 450 9
	movs	r3, #255
	strb	r3, [sp, #12]
	.loc 1 451 23
	ldrb	r3, [sp, #3]	@ zero_extendqisi2
	ldr	r2, .L15
	ldrb	r3, [r2, r3]	@ zero_extendqisi2
	.loc 1 451 9
	strb	r3, [sp, #13]
	.loc 1 452 3
	add	r3, sp, #12
	movs	r2, #2
	mov	r1, r3
	ldr	r0, [sp, #4]
	bl	_WriteBlocking
	.loc 1 453 1
	nop
	add	sp, sp, #20
.LCFI11:
	@ sp needed
	ldr	pc, [sp], #4
.L16:
	.align	2
.L15:
	.word	_aTerminalId
.LFE3:
	.size	_PostTerminalSwitch, .-_PostTerminalSwitch
	.section	.text._GetAvailWriteSpace,"ax",%progbits
	.align	1
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	_GetAvailWriteSpace, %function
_GetAvailWriteSpace:
.LFB4:
	.loc 1 469 66
	@ args = 0, pretend = 0, frame = 24
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	sub	sp, sp, #24
.LCFI12:
	str	r0, [sp, #4]
	.loc 1 477 9
	ldr	r3, [sp, #4]
	ldr	r3, [r3, #16]
	str	r3, [sp, #16]
	.loc 1 478 9
	ldr	r3, [sp, #4]
	ldr	r3, [r3, #12]
	str	r3, [sp, #12]
	.loc 1 479 6
	ldr	r2, [sp, #16]
	ldr	r3, [sp, #12]
	cmp	r2, r3
	bhi	.L18
	.loc 1 480 14
	ldr	r3, [sp, #4]
	ldr	r2, [r3, #8]
	.loc 1 480 34
	ldr	r3, [sp, #12]
	subs	r2, r2, r3
	.loc 1 480 42
	ldr	r3, [sp, #16]
	add	r3, r3, r2
	.loc 1 480 7
	subs	r3, r3, #1
	str	r3, [sp, #20]
	b	.L19
.L18:
	.loc 1 482 15
	ldr	r2, [sp, #16]
	ldr	r3, [sp, #12]
	subs	r3, r2, r3
	.loc 1 482 7
	subs	r3, r3, #1
	str	r3, [sp, #20]
.L19:
	.loc 1 484 10
	ldr	r3, [sp, #20]
	.loc 1 485 1
	mov	r0, r3
	add	sp, sp, #24
.LCFI13:
	@ sp needed
	bx	lr
.LFE4:
	.size	_GetAvailWriteSpace, .-_GetAvailWriteSpace
	.section	.text.SEGGER_RTT_ReadNoLock,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_ReadNoLock
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_ReadNoLock, %function
SEGGER_RTT_ReadNoLock:
.LFB5:
	.loc 1 510 88
	@ args = 0, pretend = 0, frame = 40
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI14:
	sub	sp, sp, #44
.LCFI15:
	str	r0, [sp, #12]
	str	r1, [sp, #8]
	str	r2, [sp, #4]
	.loc 1 521 3
	ldr	r3, .L27
	ldrb	r3, [r3]	@ zero_extendqisi2
	cmp	r3, #0
	bne	.L22
	.loc 1 521 3 is_stmt 0 discriminator 1
	bl	_DoInit
.L22:
	.loc 1 522 9 is_stmt 1
	ldr	r2, [sp, #12]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	adds	r3, r3, #72
	ldr	r2, .L27
	add	r3, r3, r2
	str	r3, [sp, #24]
	.loc 1 523 11
	ldr	r3, [sp, #8]
	str	r3, [sp, #28]
	.loc 1 524 9
	ldr	r3, [sp, #24]
	ldr	r3, [r3, #16]
	str	r3, [sp, #32]
	.loc 1 525 9
	ldr	r3, [sp, #24]
	ldr	r3, [r3, #12]
	str	r3, [sp, #20]
	.loc 1 526 16
	movs	r3, #0
	str	r3, [sp, #36]
	.loc 1 530 6
	ldr	r2, [sp, #32]
	ldr	r3, [sp, #20]
	cmp	r2, r3
	bls	.L23
	.loc 1 531 24
	ldr	r3, [sp, #24]
	ldr	r2, [r3, #8]
	.loc 1 531 17
	ldr	r3, [sp, #32]
	subs	r3, r2, r3
	str	r3, [sp, #16]
	.loc 1 532 17
	ldr	r2, [sp, #16]
	ldr	r3, [sp, #4]
	cmp	r3, r2
	it	cs
	movcs	r3, r2
	str	r3, [sp, #16]
	.loc 1 542 5
	ldr	r3, [sp, #24]
	ldr	r2, [r3, #4]
	ldr	r3, [sp, #32]
	add	r3, r3, r2
	ldr	r2, [sp, #16]
	mov	r1, r3
	ldr	r0, [sp, #28]
	bl	memcpy
	.loc 1 543 18
	ldr	r2, [sp, #36]
	ldr	r3, [sp, #16]
	add	r3, r3, r2
	str	r3, [sp, #36]
	.loc 1 544 18
	ldr	r2, [sp, #28]
	ldr	r3, [sp, #16]
	add	r3, r3, r2
	str	r3, [sp, #28]
	.loc 1 545 18
	ldr	r2, [sp, #4]
	ldr	r3, [sp, #16]
	subs	r3, r2, r3
	str	r3, [sp, #4]
	.loc 1 546 18
	ldr	r2, [sp, #32]
	ldr	r3, [sp, #16]
	add	r3, r3, r2
	str	r3, [sp, #32]
	.loc 1 551 23
	ldr	r3, [sp, #24]
	ldr	r3, [r3, #8]
	.loc 1 551 8
	ldr	r2, [sp, #32]
	cmp	r2, r3
	bne	.L23
	.loc 1 552 13
	movs	r3, #0
	str	r3, [sp, #32]
.L23:
	.loc 1 558 15
	ldr	r2, [sp, #20]
	ldr	r3, [sp, #32]
	subs	r3, r2, r3
	str	r3, [sp, #16]
	.loc 1 559 15
	ldr	r2, [sp, #16]
	ldr	r3, [sp, #4]
	cmp	r3, r2
	it	cs
	movcs	r3, r2
	str	r3, [sp, #16]
	.loc 1 560 6
	ldr	r3, [sp, #16]
	cmp	r3, #0
	beq	.L24
	.loc 1 570 5
	ldr	r3, [sp, #24]
	ldr	r2, [r3, #4]
	ldr	r3, [sp, #32]
	add	r3, r3, r2
	ldr	r2, [sp, #16]
	mov	r1, r3
	ldr	r0, [sp, #28]
	bl	memcpy
	.loc 1 571 18
	ldr	r2, [sp, #36]
	ldr	r3, [sp, #16]
	add	r3, r3, r2
	str	r3, [sp, #36]
	.loc 1 572 18
	ldr	r2, [sp, #28]
	ldr	r3, [sp, #16]
	add	r3, r3, r2
	str	r3, [sp, #28]
	.loc 1 573 18
	ldr	r2, [sp, #4]
	ldr	r3, [sp, #16]
	subs	r3, r2, r3
	str	r3, [sp, #4]
	.loc 1 574 18
	ldr	r2, [sp, #32]
	ldr	r3, [sp, #16]
	add	r3, r3, r2
	str	r3, [sp, #32]
.L24:
	.loc 1 577 6
	ldr	r3, [sp, #36]
	cmp	r3, #0
	beq	.L25
	.loc 1 578 18
	ldr	r3, [sp, #24]
	ldr	r2, [sp, #32]
	str	r2, [r3, #16]
.L25:
	.loc 1 581 10
	ldr	r3, [sp, #36]
	.loc 1 582 1
	mov	r0, r3
	add	sp, sp, #44
.LCFI16:
	@ sp needed
	ldr	pc, [sp], #4
.L28:
	.align	2
.L27:
	.word	_SEGGER_RTT
.LFE5:
	.size	SEGGER_RTT_ReadNoLock, .-SEGGER_RTT_ReadNoLock
	.section	.text.SEGGER_RTT_Read,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_Read
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_Read, %function
SEGGER_RTT_Read:
.LFB6:
	.loc 1 600 84
	@ args = 0, pretend = 0, frame = 24
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI17:
	sub	sp, sp, #28
.LCFI18:
	str	r0, [sp, #12]
	str	r1, [sp, #8]
	str	r2, [sp, #4]
.LBB2:
	.loc 1 603 3
	.syntax unified
@ 603 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	mrs   r3, basepri  
	mov   r1, #32       
	msr   basepri, r1  
	
@ 0 "" 2
	.thumb
	.syntax unified
	str	r3, [sp, #20]
	.loc 1 607 18
	ldr	r2, [sp, #4]
	ldr	r1, [sp, #8]
	ldr	r0, [sp, #12]
	bl	SEGGER_RTT_ReadNoLock
	str	r0, [sp, #16]
	.loc 1 611 3
	ldr	r3, [sp, #20]
	.syntax unified
@ 611 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	msr   basepri, r3  
	
@ 0 "" 2
	.thumb
	.syntax unified
.LBE2:
	.loc 1 613 10
	ldr	r3, [sp, #16]
	.loc 1 614 1
	mov	r0, r3
	add	sp, sp, #28
.LCFI19:
	@ sp needed
	ldr	pc, [sp], #4
.LFE6:
	.size	SEGGER_RTT_Read, .-SEGGER_RTT_Read
	.section	.text.SEGGER_RTT_WriteWithOverwriteNoLock,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_WriteWithOverwriteNoLock
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_WriteWithOverwriteNoLock, %function
SEGGER_RTT_WriteWithOverwriteNoLock:
.LFB7:
	.loc 1 639 104
	@ args = 0, pretend = 0, frame = 32
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI20:
	sub	sp, sp, #36
.LCFI21:
	str	r0, [sp, #12]
	str	r1, [sp, #8]
	str	r2, [sp, #4]
	.loc 1 647 9
	ldr	r3, [sp, #8]
	str	r3, [sp, #28]
	.loc 1 651 9
	ldr	r3, [sp, #12]
	adds	r2, r3, #1
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	ldr	r2, .L41
	add	r3, r3, r2
	str	r3, [sp, #20]
	.loc 1 655 12
	ldr	r3, [sp, #20]
	ldr	r2, [r3, #12]
	.loc 1 655 28
	ldr	r3, [sp, #20]
	ldr	r3, [r3, #16]
	.loc 1 655 6
	cmp	r2, r3
	bne	.L32
	.loc 1 656 18
	ldr	r3, [sp, #20]
	ldr	r3, [r3, #8]
	.loc 1 656 11
	subs	r3, r3, #1
	str	r3, [sp, #24]
	b	.L33
.L32:
	.loc 1 657 20
	ldr	r3, [sp, #20]
	ldr	r2, [r3, #12]
	.loc 1 657 35
	ldr	r3, [sp, #20]
	ldr	r3, [r3, #16]
	.loc 1 657 13
	cmp	r2, r3
	bcs	.L34
	.loc 1 658 18
	ldr	r3, [sp, #20]
	ldr	r2, [r3, #16]
	.loc 1 658 33
	ldr	r3, [sp, #20]
	ldr	r3, [r3, #12]
	.loc 1 658 26
	subs	r3, r2, r3
	.loc 1 658 11
	subs	r3, r3, #1
	str	r3, [sp, #24]
	b	.L33
.L34:
	.loc 1 660 18
	ldr	r3, [sp, #20]
	ldr	r2, [r3, #16]
	.loc 1 660 33
	ldr	r3, [sp, #20]
	ldr	r3, [r3, #12]
	.loc 1 660 26
	subs	r2, r2, r3
	.loc 1 660 53
	ldr	r3, [sp, #20]
	ldr	r3, [r3, #8]
	.loc 1 660 46
	add	r3, r3, r2
	.loc 1 660 11
	subs	r3, r3, #1
	str	r3, [sp, #24]
.L33:
	.loc 1 662 6
	ldr	r2, [sp, #4]
	ldr	r3, [sp, #24]
	cmp	r2, r3
	bls	.L35
	.loc 1 663 18
	ldr	r3, [sp, #20]
	ldr	r2, [r3, #16]
	.loc 1 663 31
	ldr	r1, [sp, #4]
	ldr	r3, [sp, #24]
	subs	r3, r1, r3
	.loc 1 663 18
	add	r2, r2, r3
	ldr	r3, [sp, #20]
	str	r2, [r3, #16]
	.loc 1 664 11
	b	.L36
.L37:
	.loc 1 665 20
	ldr	r3, [sp, #20]
	ldr	r2, [r3, #16]
	.loc 1 665 28
	ldr	r3, [sp, #20]
	ldr	r3, [r3, #8]
	.loc 1 665 20
	subs	r2, r2, r3
	ldr	r3, [sp, #20]
	str	r2, [r3, #16]
.L36:
	.loc 1 664 17
	ldr	r3, [sp, #20]
	ldr	r2, [r3, #16]
	.loc 1 664 33
	ldr	r3, [sp, #20]
	ldr	r3, [r3, #8]
	.loc 1 664 11
	cmp	r2, r3
	bcs	.L37
.L35:
	.loc 1 671 16
	ldr	r3, [sp, #20]
	ldr	r2, [r3, #8]
	.loc 1 671 38
	ldr	r3, [sp, #20]
	ldr	r3, [r3, #12]
	.loc 1 671 9
	subs	r3, r2, r3
	str	r3, [sp, #24]
.L40:
	.loc 1 673 8
	ldr	r2, [sp, #24]
	ldr	r3, [sp, #4]
	cmp	r2, r3
	bls	.L38
	.loc 1 685 7
	ldr	r3, [sp, #20]
	ldr	r2, [r3, #4]
	ldr	r3, [sp, #20]
	ldr	r3, [r3, #12]
	add	r3, r3, r2
	ldr	r2, [sp, #4]
	ldr	r1, [sp, #28]
	mov	r0, r3
	bl	memcpy
	.loc 1 686 20
	ldr	r3, [sp, #20]
	ldr	r2, [r3, #12]
	ldr	r3, [sp, #4]
	add	r2, r2, r3
	ldr	r3, [sp, #20]
	str	r2, [r3, #12]
	.loc 1 688 7
	b	.L39
.L38:
	.loc 1 701 7
	ldr	r3, [sp, #20]
	ldr	r2, [r3, #4]
	ldr	r3, [sp, #20]
	ldr	r3, [r3, #12]
	add	r3, r3, r2
	ldr	r2, [sp, #24]
	ldr	r1, [sp, #28]
	mov	r0, r3
	bl	memcpy
	.loc 1 702 13
	ldr	r2, [sp, #28]
	ldr	r3, [sp, #24]
	add	r3, r3, r2
	str	r3, [sp, #28]
	.loc 1 703 20
	ldr	r3, [sp, #20]
	movs	r2, #0
	str	r2, [r3, #12]
	.loc 1 704 16
	ldr	r2, [sp, #4]
	ldr	r3, [sp, #24]
	subs	r3, r2, r3
	str	r3, [sp, #4]
	.loc 1 706 21
	ldr	r3, [sp, #20]
	ldr	r3, [r3, #8]
	.loc 1 706 13
	subs	r3, r3, #1
	str	r3, [sp, #24]
	.loc 1 708 3
	ldr	r3, [sp, #4]
	cmp	r3, #0
	bne	.L40
	.loc 1 709 1
	nop
.L39:
	nop
	add	sp, sp, #36
.LCFI22:
	@ sp needed
	ldr	pc, [sp], #4
.L42:
	.align	2
.L41:
	.word	_SEGGER_RTT
.LFE7:
	.size	SEGGER_RTT_WriteWithOverwriteNoLock, .-SEGGER_RTT_WriteWithOverwriteNoLock
	.section	.text.SEGGER_RTT_WriteSkipNoLock,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_WriteSkipNoLock
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_WriteSkipNoLock, %function
SEGGER_RTT_WriteSkipNoLock:
.LFB8:
	.loc 1 735 99
	@ args = 0, pretend = 0, frame = 40
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI23:
	sub	sp, sp, #44
.LCFI24:
	str	r0, [sp, #12]
	str	r1, [sp, #8]
	str	r2, [sp, #4]
	.loc 1 746 9
	ldr	r3, [sp, #8]
	str	r3, [sp, #36]
	.loc 1 750 9
	ldr	r3, [sp, #12]
	adds	r2, r3, #1
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	ldr	r2, .L50
	add	r3, r3, r2
	str	r3, [sp, #32]
	.loc 1 751 9
	ldr	r3, [sp, #32]
	ldr	r3, [r3, #16]
	str	r3, [sp, #28]
	.loc 1 752 9
	ldr	r3, [sp, #32]
	ldr	r3, [r3, #12]
	str	r3, [sp, #24]
	.loc 1 766 6
	ldr	r2, [sp, #28]
	ldr	r3, [sp, #24]
	cmp	r2, r3
	bhi	.L44
	.loc 1 770 18
	ldr	r3, [sp, #32]
	ldr	r2, [r3, #8]
	.loc 1 770 38
	ldr	r3, [sp, #24]
	subs	r3, r2, r3
	.loc 1 770 11
	subs	r3, r3, #1
	str	r3, [sp, #20]
	.loc 1 771 8
	ldr	r2, [sp, #20]
	ldr	r3, [sp, #4]
	cmp	r2, r3
	bcc	.L45
	.loc 1 780 7
	ldr	r3, [sp, #32]
	ldr	r2, [r3, #4]
	ldr	r3, [sp, #24]
	add	r3, r3, r2
	ldr	r2, [sp, #4]
	ldr	r1, [sp, #36]
	mov	r0, r3
	bl	memcpy
	.loc 1 781 28
	ldr	r2, [sp, #24]
	ldr	r3, [sp, #4]
	add	r2, r2, r3
	.loc 1 781 20
	ldr	r3, [sp, #32]
	str	r2, [r3, #12]
	.loc 1 783 14
	movs	r3, #1
	b	.L46
.L45:
	.loc 1 788 11
	ldr	r2, [sp, #20]
	ldr	r3, [sp, #28]
	add	r3, r3, r2
	str	r3, [sp, #20]
	.loc 1 792 8
	ldr	r2, [sp, #20]
	ldr	r3, [sp, #4]
	cmp	r2, r3
	bcc	.L47
	.loc 1 796 18
	ldr	r3, [sp, #32]
	ldr	r2, [r3, #8]
	.loc 1 796 11
	ldr	r3, [sp, #24]
	subs	r3, r2, r3
	str	r3, [sp, #16]
	.loc 1 797 10
	ldr	r2, [sp, #16]
	ldr	r3, [sp, #4]
	cmp	r2, r3
	bls	.L48
	.loc 1 806 9
	ldr	r3, [sp, #32]
	ldr	r2, [r3, #4]
	ldr	r3, [sp, #24]
	add	r3, r3, r2
	ldr	r2, [sp, #4]
	ldr	r1, [sp, #36]
	mov	r0, r3
	bl	memcpy
	.loc 1 807 30
	ldr	r2, [sp, #24]
	ldr	r3, [sp, #4]
	add	r2, r2, r3
	.loc 1 807 22
	ldr	r3, [sp, #32]
	str	r2, [r3, #12]
	b	.L49
.L48:
	.loc 1 826 9
	ldr	r3, [sp, #32]
	ldr	r2, [r3, #4]
	ldr	r3, [sp, #24]
	add	r3, r3, r2
	ldr	r2, [sp, #16]
	ldr	r1, [sp, #36]
	mov	r0, r3
	bl	memcpy
	.loc 1 827 9
	ldr	r3, [sp, #32]
	ldr	r0, [r3, #4]
	ldr	r2, [sp, #36]
	ldr	r3, [sp, #16]
	adds	r1, r2, r3
	ldr	r2, [sp, #4]
	ldr	r3, [sp, #16]
	subs	r3, r2, r3
	mov	r2, r3
	bl	memcpy
	.loc 1 828 33
	ldr	r2, [sp, #4]
	ldr	r3, [sp, #16]
	subs	r2, r2, r3
	.loc 1 828 22
	ldr	r3, [sp, #32]
	str	r2, [r3, #12]
.L49:
	.loc 1 831 14
	movs	r3, #1
	b	.L46
.L44:
	.loc 1 834 19
	ldr	r2, [sp, #28]
	ldr	r3, [sp, #24]
	subs	r3, r2, r3
	.loc 1 834 11
	subs	r3, r3, #1
	str	r3, [sp, #20]
	.loc 1 835 8
	ldr	r2, [sp, #20]
	ldr	r3, [sp, #4]
	cmp	r2, r3
	bcc	.L47
	.loc 1 844 7
	ldr	r3, [sp, #32]
	ldr	r2, [r3, #4]
	ldr	r3, [sp, #24]
	add	r3, r3, r2
	ldr	r2, [sp, #4]
	ldr	r1, [sp, #36]
	mov	r0, r3
	bl	memcpy
	.loc 1 845 28
	ldr	r2, [sp, #24]
	ldr	r3, [sp, #4]
	add	r2, r2, r3
	.loc 1 845 20
	ldr	r3, [sp, #32]
	str	r2, [r3, #12]
	.loc 1 847 14
	movs	r3, #1
	b	.L46
.L47:
	.loc 1 853 10
	movs	r3, #0
.L46:
	.loc 1 854 1
	mov	r0, r3
	add	sp, sp, #44
.LCFI25:
	@ sp needed
	ldr	pc, [sp], #4
.L51:
	.align	2
.L50:
	.word	_SEGGER_RTT
.LFE8:
	.size	SEGGER_RTT_WriteSkipNoLock, .-SEGGER_RTT_WriteSkipNoLock
	.section	.text.SEGGER_RTT_WriteNoLock,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_WriteNoLock
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_WriteNoLock, %function
SEGGER_RTT_WriteNoLock:
.LFB9:
	.loc 1 879 95
	@ args = 0, pretend = 0, frame = 32
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI26:
	sub	sp, sp, #36
.LCFI27:
	str	r0, [sp, #12]
	str	r1, [sp, #8]
	str	r2, [sp, #4]
	.loc 1 885 9
	ldr	r3, [sp, #8]
	str	r3, [sp, #24]
	.loc 1 889 9
	ldr	r3, [sp, #12]
	adds	r2, r3, #1
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	ldr	r2, .L61
	add	r3, r3, r2
	str	r3, [sp, #20]
	.loc 1 893 16
	ldr	r3, [sp, #20]
	ldr	r3, [r3, #20]
	.loc 1 893 3
	cmp	r3, #2
	beq	.L53
	cmp	r3, #2
	bhi	.L54
	cmp	r3, #0
	beq	.L55
	cmp	r3, #1
	beq	.L56
	b	.L54
.L55:
	.loc 1 899 13
	ldr	r0, [sp, #20]
	bl	_GetAvailWriteSpace
	str	r0, [sp, #16]
	.loc 1 900 8
	ldr	r2, [sp, #16]
	ldr	r3, [sp, #4]
	cmp	r2, r3
	bcs	.L57
	.loc 1 901 14
	movs	r3, #0
	str	r3, [sp, #28]
	.loc 1 906 5
	b	.L59
.L57:
	.loc 1 903 14
	ldr	r3, [sp, #4]
	str	r3, [sp, #28]
	.loc 1 904 7
	ldr	r2, [sp, #4]
	ldr	r1, [sp, #24]
	ldr	r0, [sp, #20]
	bl	_WriteNoCheck
	.loc 1 906 5
	b	.L59
.L56:
	.loc 1 911 13
	ldr	r0, [sp, #20]
	bl	_GetAvailWriteSpace
	str	r0, [sp, #16]
	.loc 1 912 12
	ldr	r2, [sp, #4]
	ldr	r3, [sp, #16]
	cmp	r3, r2
	it	cs
	movcs	r3, r2
	str	r3, [sp, #28]
	.loc 1 913 5
	ldr	r2, [sp, #28]
	ldr	r1, [sp, #24]
	ldr	r0, [sp, #20]
	bl	_WriteNoCheck
	.loc 1 914 5
	b	.L59
.L53:
	.loc 1 919 14
	ldr	r2, [sp, #4]
	ldr	r1, [sp, #24]
	ldr	r0, [sp, #20]
	bl	_WriteBlocking
	str	r0, [sp, #28]
	.loc 1 920 5
	b	.L59
.L54:
	.loc 1 922 12
	movs	r3, #0
	str	r3, [sp, #28]
	.loc 1 923 5
	nop
.L59:
	.loc 1 928 10
	ldr	r3, [sp, #28]
	.loc 1 929 1
	mov	r0, r3
	add	sp, sp, #36
.LCFI28:
	@ sp needed
	ldr	pc, [sp], #4
.L62:
	.align	2
.L61:
	.word	_SEGGER_RTT
.LFE9:
	.size	SEGGER_RTT_WriteNoLock, .-SEGGER_RTT_WriteNoLock
	.section	.text.SEGGER_RTT_Write,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_Write
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_Write, %function
SEGGER_RTT_Write:
.LFB10:
	.loc 1 950 89
	@ args = 0, pretend = 0, frame = 24
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI29:
	sub	sp, sp, #28
.LCFI30:
	str	r0, [sp, #12]
	str	r1, [sp, #8]
	str	r2, [sp, #4]
	.loc 1 953 3
	ldr	r3, .L66
	ldrb	r3, [r3]	@ zero_extendqisi2
	cmp	r3, #0
	bne	.L64
	.loc 1 953 3 is_stmt 0 discriminator 1
	bl	_DoInit
.L64:
.LBB3:
	.loc 1 954 3 is_stmt 1
	.syntax unified
@ 954 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	mrs   r3, basepri  
	mov   r1, #32       
	msr   basepri, r1  
	
@ 0 "" 2
	.thumb
	.syntax unified
	str	r3, [sp, #20]
	.loc 1 958 12
	ldr	r2, [sp, #4]
	ldr	r1, [sp, #8]
	ldr	r0, [sp, #12]
	bl	SEGGER_RTT_WriteNoLock
	str	r0, [sp, #16]
	.loc 1 962 3
	ldr	r3, [sp, #20]
	.syntax unified
@ 962 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	msr   basepri, r3  
	
@ 0 "" 2
	.thumb
	.syntax unified
.LBE3:
	.loc 1 964 10
	ldr	r3, [sp, #16]
	.loc 1 965 1
	mov	r0, r3
	add	sp, sp, #28
.LCFI31:
	@ sp needed
	ldr	pc, [sp], #4
.L67:
	.align	2
.L66:
	.word	_SEGGER_RTT
.LFE10:
	.size	SEGGER_RTT_Write, .-SEGGER_RTT_Write
	.section	.text.SEGGER_RTT_WriteString,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_WriteString
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_WriteString, %function
SEGGER_RTT_WriteString:
.LFB11:
	.loc 1 987 70
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI32:
	sub	sp, sp, #20
.LCFI33:
	str	r0, [sp, #4]
	str	r1, [sp]
	.loc 1 990 9
	ldr	r0, [sp]
	bl	strlen
	str	r0, [sp, #12]
	.loc 1 991 10
	ldr	r2, [sp, #12]
	ldr	r1, [sp]
	ldr	r0, [sp, #4]
	bl	SEGGER_RTT_Write
	mov	r3, r0
	.loc 1 992 1
	mov	r0, r3
	add	sp, sp, #20
.LCFI34:
	@ sp needed
	ldr	pc, [sp], #4
.LFE11:
	.size	SEGGER_RTT_WriteString, .-SEGGER_RTT_WriteString
	.section	.text.SEGGER_RTT_PutCharSkipNoLock,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_PutCharSkipNoLock
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_PutCharSkipNoLock, %function
SEGGER_RTT_PutCharSkipNoLock:
.LFB12:
	.loc 1 1017 69
	@ args = 0, pretend = 0, frame = 24
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	sub	sp, sp, #24
.LCFI35:
	str	r0, [sp, #4]
	mov	r3, r1
	strb	r3, [sp, #3]
	.loc 1 1024 9
	ldr	r3, [sp, #4]
	adds	r2, r3, #1
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	ldr	r2, .L75
	add	r3, r3, r2
	str	r3, [sp, #12]
	.loc 1 1028 16
	ldr	r3, [sp, #12]
	ldr	r3, [r3, #12]
	.loc 1 1028 9
	adds	r3, r3, #1
	str	r3, [sp, #20]
	.loc 1 1029 21
	ldr	r3, [sp, #12]
	ldr	r3, [r3, #8]
	.loc 1 1029 6
	ldr	r2, [sp, #20]
	cmp	r2, r3
	bne	.L71
	.loc 1 1030 11
	movs	r3, #0
	str	r3, [sp, #20]
.L71:
	.loc 1 1035 21
	ldr	r3, [sp, #12]
	ldr	r3, [r3, #16]
	.loc 1 1035 6
	ldr	r2, [sp, #20]
	cmp	r2, r3
	beq	.L72
	.loc 1 1036 10
	ldr	r3, [sp, #12]
	ldr	r2, [r3, #4]
	.loc 1 1036 25
	ldr	r3, [sp, #12]
	ldr	r3, [r3, #12]
	.loc 1 1036 19
	add	r3, r3, r2
	.loc 1 1036 34
	ldrb	r2, [sp, #3]
	strb	r2, [r3]
	.loc 1 1037 18
	ldr	r3, [sp, #12]
	ldr	r2, [sp, #20]
	str	r2, [r3, #12]
	.loc 1 1038 12
	movs	r3, #1
	str	r3, [sp, #16]
	b	.L73
.L72:
	.loc 1 1040 12
	movs	r3, #0
	str	r3, [sp, #16]
.L73:
	.loc 1 1043 10
	ldr	r3, [sp, #16]
	.loc 1 1044 1
	mov	r0, r3
	add	sp, sp, #24
.LCFI36:
	@ sp needed
	bx	lr
.L76:
	.align	2
.L75:
	.word	_SEGGER_RTT
.LFE12:
	.size	SEGGER_RTT_PutCharSkipNoLock, .-SEGGER_RTT_PutCharSkipNoLock
	.section	.text.SEGGER_RTT_PutCharSkip,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_PutCharSkip
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_PutCharSkip, %function
SEGGER_RTT_PutCharSkip:
.LFB13:
	.loc 1 1064 63
	@ args = 0, pretend = 0, frame = 24
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI37:
	sub	sp, sp, #28
.LCFI38:
	str	r0, [sp, #4]
	mov	r3, r1
	strb	r3, [sp, #3]
	.loc 1 1071 3
	ldr	r3, .L83
	ldrb	r3, [r3]	@ zero_extendqisi2
	cmp	r3, #0
	bne	.L78
	.loc 1 1071 3 is_stmt 0 discriminator 1
	bl	_DoInit
.L78:
.LBB4:
	.loc 1 1072 3 is_stmt 1
	.syntax unified
@ 1072 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	mrs   r3, basepri  
	mov   r1, #32       
	msr   basepri, r1  
	
@ 0 "" 2
	.thumb
	.syntax unified
	str	r3, [sp, #12]
	.loc 1 1076 9
	ldr	r3, [sp, #4]
	adds	r2, r3, #1
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	ldr	r2, .L83
	add	r3, r3, r2
	str	r3, [sp, #8]
	.loc 1 1080 16
	ldr	r3, [sp, #8]
	ldr	r3, [r3, #12]
	.loc 1 1080 9
	adds	r3, r3, #1
	str	r3, [sp, #20]
	.loc 1 1081 21
	ldr	r3, [sp, #8]
	ldr	r3, [r3, #8]
	.loc 1 1081 6
	ldr	r2, [sp, #20]
	cmp	r2, r3
	bne	.L79
	.loc 1 1082 11
	movs	r3, #0
	str	r3, [sp, #20]
.L79:
	.loc 1 1087 21
	ldr	r3, [sp, #8]
	ldr	r3, [r3, #16]
	.loc 1 1087 6
	ldr	r2, [sp, #20]
	cmp	r2, r3
	beq	.L80
	.loc 1 1088 10
	ldr	r3, [sp, #8]
	ldr	r2, [r3, #4]
	.loc 1 1088 25
	ldr	r3, [sp, #8]
	ldr	r3, [r3, #12]
	.loc 1 1088 19
	add	r3, r3, r2
	.loc 1 1088 34
	ldrb	r2, [sp, #3]
	strb	r2, [r3]
	.loc 1 1089 18
	ldr	r3, [sp, #8]
	ldr	r2, [sp, #20]
	str	r2, [r3, #12]
	.loc 1 1090 12
	movs	r3, #1
	str	r3, [sp, #16]
	b	.L81
.L80:
	.loc 1 1092 12
	movs	r3, #0
	str	r3, [sp, #16]
.L81:
	.loc 1 1097 3
	ldr	r3, [sp, #12]
	.syntax unified
@ 1097 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	msr   basepri, r3  
	
@ 0 "" 2
	.thumb
	.syntax unified
.LBE4:
	.loc 1 1099 10
	ldr	r3, [sp, #16]
	.loc 1 1100 1
	mov	r0, r3
	add	sp, sp, #28
.LCFI39:
	@ sp needed
	ldr	pc, [sp], #4
.L84:
	.align	2
.L83:
	.word	_SEGGER_RTT
.LFE13:
	.size	SEGGER_RTT_PutCharSkip, .-SEGGER_RTT_PutCharSkip
	.section	.text.SEGGER_RTT_PutChar,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_PutChar
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_PutChar, %function
SEGGER_RTT_PutChar:
.LFB14:
	.loc 1 1120 59
	@ args = 0, pretend = 0, frame = 24
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI40:
	sub	sp, sp, #28
.LCFI41:
	str	r0, [sp, #4]
	mov	r3, r1
	strb	r3, [sp, #3]
	.loc 1 1127 3
	ldr	r3, .L93
	ldrb	r3, [r3]	@ zero_extendqisi2
	cmp	r3, #0
	bne	.L86
	.loc 1 1127 3 is_stmt 0 discriminator 1
	bl	_DoInit
.L86:
.LBB5:
	.loc 1 1128 3 is_stmt 1
	.syntax unified
@ 1128 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	mrs   r3, basepri  
	mov   r1, #32       
	msr   basepri, r1  
	
@ 0 "" 2
	.thumb
	.syntax unified
	str	r3, [sp, #12]
	.loc 1 1132 9
	ldr	r3, [sp, #4]
	adds	r2, r3, #1
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	ldr	r2, .L93
	add	r3, r3, r2
	str	r3, [sp, #8]
	.loc 1 1136 16
	ldr	r3, [sp, #8]
	ldr	r3, [r3, #12]
	.loc 1 1136 9
	adds	r3, r3, #1
	str	r3, [sp, #20]
	.loc 1 1137 21
	ldr	r3, [sp, #8]
	ldr	r3, [r3, #8]
	.loc 1 1137 6
	ldr	r2, [sp, #20]
	cmp	r2, r3
	bne	.L87
	.loc 1 1138 11
	movs	r3, #0
	str	r3, [sp, #20]
.L87:
	.loc 1 1143 12
	ldr	r3, [sp, #8]
	ldr	r3, [r3, #20]
	.loc 1 1143 6
	cmp	r3, #2
	bne	.L88
	.loc 1 1144 11
	nop
.L89:
	.loc 1 1144 26 discriminator 1
	ldr	r3, [sp, #8]
	ldr	r3, [r3, #16]
	.loc 1 1144 11 discriminator 1
	ldr	r2, [sp, #20]
	cmp	r2, r3
	beq	.L89
.L88:
	.loc 1 1151 21
	ldr	r3, [sp, #8]
	ldr	r3, [r3, #16]
	.loc 1 1151 6
	ldr	r2, [sp, #20]
	cmp	r2, r3
	beq	.L90
	.loc 1 1152 10
	ldr	r3, [sp, #8]
	ldr	r2, [r3, #4]
	.loc 1 1152 25
	ldr	r3, [sp, #8]
	ldr	r3, [r3, #12]
	.loc 1 1152 19
	add	r3, r3, r2
	.loc 1 1152 34
	ldrb	r2, [sp, #3]
	strb	r2, [r3]
	.loc 1 1153 18
	ldr	r3, [sp, #8]
	ldr	r2, [sp, #20]
	str	r2, [r3, #12]
	.loc 1 1154 12
	movs	r3, #1
	str	r3, [sp, #16]
	b	.L91
.L90:
	.loc 1 1156 12
	movs	r3, #0
	str	r3, [sp, #16]
.L91:
	.loc 1 1161 3
	ldr	r3, [sp, #12]
	.syntax unified
@ 1161 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	msr   basepri, r3  
	
@ 0 "" 2
	.thumb
	.syntax unified
.LBE5:
	.loc 1 1163 10
	ldr	r3, [sp, #16]
	.loc 1 1164 1
	mov	r0, r3
	add	sp, sp, #28
.LCFI42:
	@ sp needed
	ldr	pc, [sp], #4
.L94:
	.align	2
.L93:
	.word	_SEGGER_RTT
.LFE14:
	.size	SEGGER_RTT_PutChar, .-SEGGER_RTT_PutChar
	.section	.text.SEGGER_RTT_GetKey,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_GetKey
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_GetKey, %function
SEGGER_RTT_GetKey:
.LFB15:
	.loc 1 1181 29
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI43:
	sub	sp, sp, #12
.LCFI44:
	.loc 1 1185 12
	add	r3, sp, #3
	movs	r2, #1
	mov	r1, r3
	movs	r0, #0
	bl	SEGGER_RTT_Read
	mov	r3, r0
	.loc 1 1185 5
	str	r3, [sp, #4]
	.loc 1 1186 6
	ldr	r3, [sp, #4]
	cmp	r3, #1
	bne	.L96
	.loc 1 1187 9
	ldrb	r3, [sp, #3]	@ zero_extendqisi2
	.loc 1 1187 7
	str	r3, [sp, #4]
	b	.L97
.L96:
	.loc 1 1189 7
	mov	r3, #-1
	str	r3, [sp, #4]
.L97:
	.loc 1 1191 10
	ldr	r3, [sp, #4]
	.loc 1 1192 1
	mov	r0, r3
	add	sp, sp, #12
.LCFI45:
	@ sp needed
	ldr	pc, [sp], #4
.LFE15:
	.size	SEGGER_RTT_GetKey, .-SEGGER_RTT_GetKey
	.section	.text.SEGGER_RTT_WaitKey,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_WaitKey
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_WaitKey, %function
SEGGER_RTT_WaitKey:
.LFB16:
	.loc 1 1209 30
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI46:
	sub	sp, sp, #12
.LCFI47:
.L100:
	.loc 1 1213 9 discriminator 1
	bl	SEGGER_RTT_GetKey
	str	r0, [sp, #4]
	.loc 1 1214 3 discriminator 1
	ldr	r3, [sp, #4]
	cmp	r3, #0
	blt	.L100
	.loc 1 1215 10
	ldr	r3, [sp, #4]
	.loc 1 1216 1
	mov	r0, r3
	add	sp, sp, #12
.LCFI48:
	@ sp needed
	ldr	pc, [sp], #4
.LFE16:
	.size	SEGGER_RTT_WaitKey, .-SEGGER_RTT_WaitKey
	.section	.text.SEGGER_RTT_HasKey,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_HasKey
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_HasKey, %function
SEGGER_RTT_HasKey:
.LFB17:
	.loc 1 1232 29
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI49:
	sub	sp, sp, #12
.LCFI50:
	.loc 1 1236 3
	ldr	r3, .L107
	ldrb	r3, [r3]	@ zero_extendqisi2
	cmp	r3, #0
	bne	.L103
	.loc 1 1236 3 is_stmt 0 discriminator 1
	bl	_DoInit
.L103:
	.loc 1 1237 9 is_stmt 1
	ldr	r3, .L107
	ldr	r3, [r3, #88]
	str	r3, [sp]
	.loc 1 1238 36
	ldr	r3, .L107
	ldr	r3, [r3, #84]
	.loc 1 1238 6
	ldr	r2, [sp]
	cmp	r2, r3
	beq	.L104
	.loc 1 1239 7
	movs	r3, #1
	str	r3, [sp, #4]
	b	.L105
.L104:
	.loc 1 1241 7
	movs	r3, #0
	str	r3, [sp, #4]
.L105:
	.loc 1 1243 10
	ldr	r3, [sp, #4]
	.loc 1 1244 1
	mov	r0, r3
	add	sp, sp, #12
.LCFI51:
	@ sp needed
	ldr	pc, [sp], #4
.L108:
	.align	2
.L107:
	.word	_SEGGER_RTT
.LFE17:
	.size	SEGGER_RTT_HasKey, .-SEGGER_RTT_HasKey
	.section	.text.SEGGER_RTT_HasData,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_HasData
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_HasData, %function
SEGGER_RTT_HasData:
.LFB18:
	.loc 1 1258 51
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	sub	sp, sp, #16
.LCFI52:
	str	r0, [sp, #4]
	.loc 1 1262 9
	ldr	r2, [sp, #4]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	adds	r3, r3, #72
	ldr	r2, .L111
	add	r3, r3, r2
	str	r3, [sp, #12]
	.loc 1 1263 5
	ldr	r3, [sp, #12]
	ldr	r3, [r3, #12]
	str	r3, [sp, #8]
	.loc 1 1264 19
	ldr	r3, [sp, #12]
	ldr	r3, [r3, #16]
	.loc 1 1264 12
	ldr	r2, [sp, #8]
	subs	r3, r2, r3
	.loc 1 1265 1
	mov	r0, r3
	add	sp, sp, #16
.LCFI53:
	@ sp needed
	bx	lr
.L112:
	.align	2
.L111:
	.word	_SEGGER_RTT
.LFE18:
	.size	SEGGER_RTT_HasData, .-SEGGER_RTT_HasData
	.section	.text.SEGGER_RTT_HasDataUp,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_HasDataUp
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_HasDataUp, %function
SEGGER_RTT_HasDataUp:
.LFB19:
	.loc 1 1279 53
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	sub	sp, sp, #16
.LCFI54:
	str	r0, [sp, #4]
	.loc 1 1283 9
	ldr	r3, [sp, #4]
	adds	r2, r3, #1
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	ldr	r2, .L115
	add	r3, r3, r2
	str	r3, [sp, #12]
	.loc 1 1284 5
	ldr	r3, [sp, #12]
	ldr	r3, [r3, #16]
	str	r3, [sp, #8]
	.loc 1 1285 15
	ldr	r3, [sp, #12]
	ldr	r2, [r3, #12]
	.loc 1 1285 23
	ldr	r3, [sp, #8]
	subs	r3, r2, r3
	.loc 1 1286 1
	mov	r0, r3
	add	sp, sp, #16
.LCFI55:
	@ sp needed
	bx	lr
.L116:
	.align	2
.L115:
	.word	_SEGGER_RTT
.LFE19:
	.size	SEGGER_RTT_HasDataUp, .-SEGGER_RTT_HasDataUp
	.section	.text.SEGGER_RTT_AllocDownBuffer,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_AllocDownBuffer
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_AllocDownBuffer, %function
SEGGER_RTT_AllocDownBuffer:
.LFB20:
	.loc 1 1307 103
	@ args = 0, pretend = 0, frame = 24
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI56:
	sub	sp, sp, #28
.LCFI57:
	str	r0, [sp, #12]
	str	r1, [sp, #8]
	str	r2, [sp, #4]
	str	r3, [sp]
	.loc 1 1310 3
	ldr	r3, .L126
	ldrb	r3, [r3]	@ zero_extendqisi2
	cmp	r3, #0
	bne	.L118
	.loc 1 1310 3 is_stmt 0 discriminator 1
	bl	_DoInit
.L118:
.LBB6:
	.loc 1 1311 3 is_stmt 1
	.syntax unified
@ 1311 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	mrs   r3, basepri  
	mov   r1, #32       
	msr   basepri, r1  
	
@ 0 "" 2
	.thumb
	.syntax unified
	str	r3, [sp, #16]
	.loc 1 1312 15
	movs	r3, #0
	str	r3, [sp, #20]
.L121:
	.loc 1 1314 39
	ldr	r1, .L126
	ldr	r2, [sp, #20]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #76
	ldr	r3, [r3]
	.loc 1 1314 8
	cmp	r3, #0
	beq	.L125
	.loc 1 1317 16
	ldr	r3, [sp, #20]
	adds	r3, r3, #1
	str	r3, [sp, #20]
	.loc 1 1318 37
	ldr	r3, .L126
	ldr	r3, [r3, #20]
	.loc 1 1318 3
	ldr	r2, [sp, #20]
	cmp	r2, r3
	blt	.L121
	b	.L120
.L125:
	.loc 1 1315 7
	nop
.L120:
	.loc 1 1319 32
	ldr	r3, .L126
	ldr	r3, [r3, #20]
	.loc 1 1319 6
	ldr	r2, [sp, #20]
	cmp	r2, r3
	bge	.L122
	.loc 1 1320 49
	ldr	r1, .L126
	ldr	r2, [sp, #20]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #72
	ldr	r2, [sp, #12]
	str	r2, [r3]
	.loc 1 1321 49
	ldr	r1, .L126
	ldr	r2, [sp, #20]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #76
	ldr	r2, [sp, #8]
	str	r2, [r3]
	.loc 1 1322 49
	ldr	r1, .L126
	ldr	r2, [sp, #20]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #80
	ldr	r2, [sp, #4]
	str	r2, [r3]
	.loc 1 1323 49
	ldr	r1, .L126
	ldr	r2, [sp, #20]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #88
	movs	r2, #0
	str	r2, [r3]
	.loc 1 1324 49
	ldr	r1, .L126
	ldr	r2, [sp, #20]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #84
	movs	r2, #0
	str	r2, [r3]
	.loc 1 1325 49
	ldr	r1, .L126
	ldr	r2, [sp, #20]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #92
	ldr	r2, [sp]
	str	r2, [r3]
	b	.L123
.L122:
	.loc 1 1327 17
	mov	r3, #-1
	str	r3, [sp, #20]
.L123:
	.loc 1 1329 3
	ldr	r3, [sp, #16]
	.syntax unified
@ 1329 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	msr   basepri, r3  
	
@ 0 "" 2
	.thumb
	.syntax unified
.LBE6:
	.loc 1 1330 10
	ldr	r3, [sp, #20]
	.loc 1 1331 1
	mov	r0, r3
	add	sp, sp, #28
.LCFI58:
	@ sp needed
	ldr	pc, [sp], #4
.L127:
	.align	2
.L126:
	.word	_SEGGER_RTT
.LFE20:
	.size	SEGGER_RTT_AllocDownBuffer, .-SEGGER_RTT_AllocDownBuffer
	.section	.text.SEGGER_RTT_AllocUpBuffer,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_AllocUpBuffer
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_AllocUpBuffer, %function
SEGGER_RTT_AllocUpBuffer:
.LFB21:
	.loc 1 1352 101
	@ args = 0, pretend = 0, frame = 24
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI59:
	sub	sp, sp, #28
.LCFI60:
	str	r0, [sp, #12]
	str	r1, [sp, #8]
	str	r2, [sp, #4]
	str	r3, [sp]
	.loc 1 1355 3
	ldr	r3, .L137
	ldrb	r3, [r3]	@ zero_extendqisi2
	cmp	r3, #0
	bne	.L129
	.loc 1 1355 3 is_stmt 0 discriminator 1
	bl	_DoInit
.L129:
.LBB7:
	.loc 1 1356 3 is_stmt 1
	.syntax unified
@ 1356 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	mrs   r3, basepri  
	mov   r1, #32       
	msr   basepri, r1  
	
@ 0 "" 2
	.thumb
	.syntax unified
	str	r3, [sp, #16]
	.loc 1 1357 15
	movs	r3, #0
	str	r3, [sp, #20]
.L132:
	.loc 1 1359 37
	ldr	r1, .L137
	ldr	r3, [sp, #20]
	adds	r2, r3, #1
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #4
	ldr	r3, [r3]
	.loc 1 1359 8
	cmp	r3, #0
	beq	.L136
	.loc 1 1362 16
	ldr	r3, [sp, #20]
	adds	r3, r3, #1
	str	r3, [sp, #20]
	.loc 1 1363 37
	ldr	r3, .L137
	ldr	r3, [r3, #16]
	.loc 1 1363 3
	ldr	r2, [sp, #20]
	cmp	r2, r3
	blt	.L132
	b	.L131
.L136:
	.loc 1 1360 7
	nop
.L131:
	.loc 1 1364 32
	ldr	r3, .L137
	ldr	r3, [r3, #16]
	.loc 1 1364 6
	ldr	r2, [sp, #20]
	cmp	r2, r3
	bge	.L133
	.loc 1 1365 47
	ldr	r1, .L137
	ldr	r3, [sp, #20]
	adds	r2, r3, #1
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	ldr	r2, [sp, #12]
	str	r2, [r3]
	.loc 1 1366 47
	ldr	r1, .L137
	ldr	r3, [sp, #20]
	adds	r2, r3, #1
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #4
	ldr	r2, [sp, #8]
	str	r2, [r3]
	.loc 1 1367 47
	ldr	r1, .L137
	ldr	r2, [sp, #20]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #32
	ldr	r2, [sp, #4]
	str	r2, [r3]
	.loc 1 1368 47
	ldr	r1, .L137
	ldr	r2, [sp, #20]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #40
	movs	r2, #0
	str	r2, [r3]
	.loc 1 1369 47
	ldr	r1, .L137
	ldr	r2, [sp, #20]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #36
	movs	r2, #0
	str	r2, [r3]
	.loc 1 1370 47
	ldr	r1, .L137
	ldr	r2, [sp, #20]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #44
	ldr	r2, [sp]
	str	r2, [r3]
	b	.L134
.L133:
	.loc 1 1372 17
	mov	r3, #-1
	str	r3, [sp, #20]
.L134:
	.loc 1 1374 3
	ldr	r3, [sp, #16]
	.syntax unified
@ 1374 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	msr   basepri, r3  
	
@ 0 "" 2
	.thumb
	.syntax unified
.LBE7:
	.loc 1 1375 10
	ldr	r3, [sp, #20]
	.loc 1 1376 1
	mov	r0, r3
	add	sp, sp, #28
.LCFI61:
	@ sp needed
	ldr	pc, [sp], #4
.L138:
	.align	2
.L137:
	.word	_SEGGER_RTT
.LFE21:
	.size	SEGGER_RTT_AllocUpBuffer, .-SEGGER_RTT_AllocUpBuffer
	.section	.text.SEGGER_RTT_ConfigUpBuffer,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_ConfigUpBuffer
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_ConfigUpBuffer, %function
SEGGER_RTT_ConfigUpBuffer:
.LFB22:
	.loc 1 1403 124
	@ args = 4, pretend = 0, frame = 24
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI62:
	sub	sp, sp, #28
.LCFI63:
	str	r0, [sp, #12]
	str	r1, [sp, #8]
	str	r2, [sp, #4]
	str	r3, [sp]
	.loc 1 1406 3
	ldr	r3, .L145
	ldrb	r3, [r3]	@ zero_extendqisi2
	cmp	r3, #0
	bne	.L140
	.loc 1 1406 3 is_stmt 0 discriminator 1
	bl	_DoInit
.L140:
	.loc 1 1407 42 is_stmt 1
	ldr	r3, .L145
	ldr	r3, [r3, #16]
	.loc 1 1407 21
	mov	r2, r3
	.loc 1 1407 6
	ldr	r3, [sp, #12]
	cmp	r3, r2
	bcs	.L141
.LBB8:
	.loc 1 1408 5
	.syntax unified
@ 1408 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	mrs   r3, basepri  
	mov   r1, #32       
	msr   basepri, r1  
	
@ 0 "" 2
	.thumb
	.syntax unified
	str	r3, [sp, #16]
	.loc 1 1409 8
	ldr	r3, [sp, #12]
	cmp	r3, #0
	beq	.L142
	.loc 1 1410 49
	ldr	r1, .L145
	ldr	r3, [sp, #12]
	adds	r2, r3, #1
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	ldr	r2, [sp, #8]
	str	r2, [r3]
	.loc 1 1411 49
	ldr	r1, .L145
	ldr	r3, [sp, #12]
	adds	r2, r3, #1
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #4
	ldr	r2, [sp, #4]
	str	r2, [r3]
	.loc 1 1412 49
	ldr	r1, .L145
	ldr	r2, [sp, #12]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #32
	ldr	r2, [sp]
	str	r2, [r3]
	.loc 1 1413 49
	ldr	r1, .L145
	ldr	r2, [sp, #12]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #40
	movs	r2, #0
	str	r2, [r3]
	.loc 1 1414 49
	ldr	r1, .L145
	ldr	r2, [sp, #12]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #36
	movs	r2, #0
	str	r2, [r3]
.L142:
	.loc 1 1416 49
	ldr	r1, .L145
	ldr	r2, [sp, #12]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #44
	ldr	r2, [sp, #32]
	str	r2, [r3]
	.loc 1 1417 5
	ldr	r3, [sp, #16]
	.syntax unified
@ 1417 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	msr   basepri, r3  
	
@ 0 "" 2
	.thumb
	.syntax unified
.LBE8:
	.loc 1 1418 7
	movs	r3, #0
	str	r3, [sp, #20]
	b	.L143
.L141:
	.loc 1 1420 7
	mov	r3, #-1
	str	r3, [sp, #20]
.L143:
	.loc 1 1422 10
	ldr	r3, [sp, #20]
	.loc 1 1423 1
	mov	r0, r3
	add	sp, sp, #28
.LCFI64:
	@ sp needed
	ldr	pc, [sp], #4
.L146:
	.align	2
.L145:
	.word	_SEGGER_RTT
.LFE22:
	.size	SEGGER_RTT_ConfigUpBuffer, .-SEGGER_RTT_ConfigUpBuffer
	.section	.text.SEGGER_RTT_ConfigDownBuffer,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_ConfigDownBuffer
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_ConfigDownBuffer, %function
SEGGER_RTT_ConfigDownBuffer:
.LFB23:
	.loc 1 1450 126
	@ args = 4, pretend = 0, frame = 24
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI65:
	sub	sp, sp, #28
.LCFI66:
	str	r0, [sp, #12]
	str	r1, [sp, #8]
	str	r2, [sp, #4]
	str	r3, [sp]
	.loc 1 1453 3
	ldr	r3, .L153
	ldrb	r3, [r3]	@ zero_extendqisi2
	cmp	r3, #0
	bne	.L148
	.loc 1 1453 3 is_stmt 0 discriminator 1
	bl	_DoInit
.L148:
	.loc 1 1454 42 is_stmt 1
	ldr	r3, .L153
	ldr	r3, [r3, #20]
	.loc 1 1454 21
	mov	r2, r3
	.loc 1 1454 6
	ldr	r3, [sp, #12]
	cmp	r3, r2
	bcs	.L149
.LBB9:
	.loc 1 1455 5
	.syntax unified
@ 1455 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	mrs   r3, basepri  
	mov   r1, #32       
	msr   basepri, r1  
	
@ 0 "" 2
	.thumb
	.syntax unified
	str	r3, [sp, #16]
	.loc 1 1456 8
	ldr	r3, [sp, #12]
	cmp	r3, #0
	beq	.L150
	.loc 1 1457 51
	ldr	r1, .L153
	ldr	r2, [sp, #12]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #72
	ldr	r2, [sp, #8]
	str	r2, [r3]
	.loc 1 1458 51
	ldr	r1, .L153
	ldr	r2, [sp, #12]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #76
	ldr	r2, [sp, #4]
	str	r2, [r3]
	.loc 1 1459 51
	ldr	r1, .L153
	ldr	r2, [sp, #12]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #80
	ldr	r2, [sp]
	str	r2, [r3]
	.loc 1 1460 51
	ldr	r1, .L153
	ldr	r2, [sp, #12]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #88
	movs	r2, #0
	str	r2, [r3]
	.loc 1 1461 51
	ldr	r1, .L153
	ldr	r2, [sp, #12]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #84
	movs	r2, #0
	str	r2, [r3]
.L150:
	.loc 1 1463 51
	ldr	r1, .L153
	ldr	r2, [sp, #12]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #92
	ldr	r2, [sp, #32]
	str	r2, [r3]
	.loc 1 1464 5
	ldr	r3, [sp, #16]
	.syntax unified
@ 1464 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	msr   basepri, r3  
	
@ 0 "" 2
	.thumb
	.syntax unified
.LBE9:
	.loc 1 1465 7
	movs	r3, #0
	str	r3, [sp, #20]
	b	.L151
.L149:
	.loc 1 1467 7
	mov	r3, #-1
	str	r3, [sp, #20]
.L151:
	.loc 1 1469 10
	ldr	r3, [sp, #20]
	.loc 1 1470 1
	mov	r0, r3
	add	sp, sp, #28
.LCFI67:
	@ sp needed
	ldr	pc, [sp], #4
.L154:
	.align	2
.L153:
	.word	_SEGGER_RTT
.LFE23:
	.size	SEGGER_RTT_ConfigDownBuffer, .-SEGGER_RTT_ConfigDownBuffer
	.section	.text.SEGGER_RTT_SetNameUpBuffer,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_SetNameUpBuffer
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_SetNameUpBuffer, %function
SEGGER_RTT_SetNameUpBuffer:
.LFB24:
	.loc 1 1488 73
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI68:
	sub	sp, sp, #20
.LCFI69:
	str	r0, [sp, #4]
	str	r1, [sp]
	.loc 1 1491 3
	ldr	r3, .L160
	ldrb	r3, [r3]	@ zero_extendqisi2
	cmp	r3, #0
	bne	.L156
	.loc 1 1491 3 is_stmt 0 discriminator 1
	bl	_DoInit
.L156:
	.loc 1 1492 42 is_stmt 1
	ldr	r3, .L160
	ldr	r3, [r3, #16]
	.loc 1 1492 21
	mov	r2, r3
	.loc 1 1492 6
	ldr	r3, [sp, #4]
	cmp	r3, r2
	bcs	.L157
.LBB10:
	.loc 1 1493 5
	.syntax unified
@ 1493 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	mrs   r3, basepri  
	mov   r1, #32       
	msr   basepri, r1  
	
@ 0 "" 2
	.thumb
	.syntax unified
	str	r3, [sp, #8]
	.loc 1 1494 40
	ldr	r1, .L160
	ldr	r3, [sp, #4]
	adds	r2, r3, #1
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	ldr	r2, [sp]
	str	r2, [r3]
	.loc 1 1495 5
	ldr	r3, [sp, #8]
	.syntax unified
@ 1495 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	msr   basepri, r3  
	
@ 0 "" 2
	.thumb
	.syntax unified
.LBE10:
	.loc 1 1496 7
	movs	r3, #0
	str	r3, [sp, #12]
	b	.L158
.L157:
	.loc 1 1498 7
	mov	r3, #-1
	str	r3, [sp, #12]
.L158:
	.loc 1 1500 10
	ldr	r3, [sp, #12]
	.loc 1 1501 1
	mov	r0, r3
	add	sp, sp, #20
.LCFI70:
	@ sp needed
	ldr	pc, [sp], #4
.L161:
	.align	2
.L160:
	.word	_SEGGER_RTT
.LFE24:
	.size	SEGGER_RTT_SetNameUpBuffer, .-SEGGER_RTT_SetNameUpBuffer
	.section	.text.SEGGER_RTT_SetNameDownBuffer,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_SetNameDownBuffer
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_SetNameDownBuffer, %function
SEGGER_RTT_SetNameDownBuffer:
.LFB25:
	.loc 1 1519 75
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI71:
	sub	sp, sp, #20
.LCFI72:
	str	r0, [sp, #4]
	str	r1, [sp]
	.loc 1 1522 3
	ldr	r3, .L167
	ldrb	r3, [r3]	@ zero_extendqisi2
	cmp	r3, #0
	bne	.L163
	.loc 1 1522 3 is_stmt 0 discriminator 1
	bl	_DoInit
.L163:
	.loc 1 1523 42 is_stmt 1
	ldr	r3, .L167
	ldr	r3, [r3, #20]
	.loc 1 1523 21
	mov	r2, r3
	.loc 1 1523 6
	ldr	r3, [sp, #4]
	cmp	r3, r2
	bcs	.L164
.LBB11:
	.loc 1 1524 5
	.syntax unified
@ 1524 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	mrs   r3, basepri  
	mov   r1, #32       
	msr   basepri, r1  
	
@ 0 "" 2
	.thumb
	.syntax unified
	str	r3, [sp, #8]
	.loc 1 1525 42
	ldr	r1, .L167
	ldr	r2, [sp, #4]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #72
	ldr	r2, [sp]
	str	r2, [r3]
	.loc 1 1526 5
	ldr	r3, [sp, #8]
	.syntax unified
@ 1526 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	msr   basepri, r3  
	
@ 0 "" 2
	.thumb
	.syntax unified
.LBE11:
	.loc 1 1527 7
	movs	r3, #0
	str	r3, [sp, #12]
	b	.L165
.L164:
	.loc 1 1529 7
	mov	r3, #-1
	str	r3, [sp, #12]
.L165:
	.loc 1 1531 10
	ldr	r3, [sp, #12]
	.loc 1 1532 1
	mov	r0, r3
	add	sp, sp, #20
.LCFI73:
	@ sp needed
	ldr	pc, [sp], #4
.L168:
	.align	2
.L167:
	.word	_SEGGER_RTT
.LFE25:
	.size	SEGGER_RTT_SetNameDownBuffer, .-SEGGER_RTT_SetNameDownBuffer
	.section	.text.SEGGER_RTT_SetFlagsUpBuffer,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_SetFlagsUpBuffer
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_SetFlagsUpBuffer, %function
SEGGER_RTT_SetFlagsUpBuffer:
.LFB26:
	.loc 1 1550 71
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI74:
	sub	sp, sp, #20
.LCFI75:
	str	r0, [sp, #4]
	str	r1, [sp]
	.loc 1 1553 3
	ldr	r3, .L174
	ldrb	r3, [r3]	@ zero_extendqisi2
	cmp	r3, #0
	bne	.L170
	.loc 1 1553 3 is_stmt 0 discriminator 1
	bl	_DoInit
.L170:
	.loc 1 1554 42 is_stmt 1
	ldr	r3, .L174
	ldr	r3, [r3, #16]
	.loc 1 1554 21
	mov	r2, r3
	.loc 1 1554 6
	ldr	r3, [sp, #4]
	cmp	r3, r2
	bcs	.L171
.LBB12:
	.loc 1 1555 5
	.syntax unified
@ 1555 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	mrs   r3, basepri  
	mov   r1, #32       
	msr   basepri, r1  
	
@ 0 "" 2
	.thumb
	.syntax unified
	str	r3, [sp, #8]
	.loc 1 1556 40
	ldr	r1, .L174
	ldr	r2, [sp, #4]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #44
	ldr	r2, [sp]
	str	r2, [r3]
	.loc 1 1557 5
	ldr	r3, [sp, #8]
	.syntax unified
@ 1557 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	msr   basepri, r3  
	
@ 0 "" 2
	.thumb
	.syntax unified
.LBE12:
	.loc 1 1558 7
	movs	r3, #0
	str	r3, [sp, #12]
	b	.L172
.L171:
	.loc 1 1560 7
	mov	r3, #-1
	str	r3, [sp, #12]
.L172:
	.loc 1 1562 10
	ldr	r3, [sp, #12]
	.loc 1 1563 1
	mov	r0, r3
	add	sp, sp, #20
.LCFI76:
	@ sp needed
	ldr	pc, [sp], #4
.L175:
	.align	2
.L174:
	.word	_SEGGER_RTT
.LFE26:
	.size	SEGGER_RTT_SetFlagsUpBuffer, .-SEGGER_RTT_SetFlagsUpBuffer
	.section	.text.SEGGER_RTT_SetFlagsDownBuffer,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_SetFlagsDownBuffer
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_SetFlagsDownBuffer, %function
SEGGER_RTT_SetFlagsDownBuffer:
.LFB27:
	.loc 1 1581 73
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI77:
	sub	sp, sp, #20
.LCFI78:
	str	r0, [sp, #4]
	str	r1, [sp]
	.loc 1 1584 3
	ldr	r3, .L181
	ldrb	r3, [r3]	@ zero_extendqisi2
	cmp	r3, #0
	bne	.L177
	.loc 1 1584 3 is_stmt 0 discriminator 1
	bl	_DoInit
.L177:
	.loc 1 1585 42 is_stmt 1
	ldr	r3, .L181
	ldr	r3, [r3, #20]
	.loc 1 1585 21
	mov	r2, r3
	.loc 1 1585 6
	ldr	r3, [sp, #4]
	cmp	r3, r2
	bcs	.L178
.LBB13:
	.loc 1 1586 5
	.syntax unified
@ 1586 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	mrs   r3, basepri  
	mov   r1, #32       
	msr   basepri, r1  
	
@ 0 "" 2
	.thumb
	.syntax unified
	str	r3, [sp, #8]
	.loc 1 1587 42
	ldr	r1, .L181
	ldr	r2, [sp, #4]
	mov	r3, r2
	lsls	r3, r3, #1
	add	r3, r3, r2
	lsls	r3, r3, #3
	add	r3, r3, r1
	adds	r3, r3, #92
	ldr	r2, [sp]
	str	r2, [r3]
	.loc 1 1588 5
	ldr	r3, [sp, #8]
	.syntax unified
@ 1588 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	msr   basepri, r3  
	
@ 0 "" 2
	.thumb
	.syntax unified
.LBE13:
	.loc 1 1589 7
	movs	r3, #0
	str	r3, [sp, #12]
	b	.L179
.L178:
	.loc 1 1591 7
	mov	r3, #-1
	str	r3, [sp, #12]
.L179:
	.loc 1 1593 10
	ldr	r3, [sp, #12]
	.loc 1 1594 1
	mov	r0, r3
	add	sp, sp, #20
.LCFI79:
	@ sp needed
	ldr	pc, [sp], #4
.L182:
	.align	2
.L181:
	.word	_SEGGER_RTT
.LFE27:
	.size	SEGGER_RTT_SetFlagsDownBuffer, .-SEGGER_RTT_SetFlagsDownBuffer
	.section	.text.SEGGER_RTT_Init,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_Init
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_Init, %function
SEGGER_RTT_Init:
.LFB28:
	.loc 1 1605 29
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r3, lr}
.LCFI80:
	.loc 1 1606 3
	bl	_DoInit
	.loc 1 1607 1
	nop
	pop	{r3, pc}
.LFE28:
	.size	SEGGER_RTT_Init, .-SEGGER_RTT_Init
	.section	.text.SEGGER_RTT_SetTerminal,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_SetTerminal
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_SetTerminal, %function
SEGGER_RTT_SetTerminal:
.LFB29:
	.loc 1 1623 46
	@ args = 0, pretend = 0, frame = 32
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI81:
	sub	sp, sp, #36
.LCFI82:
	mov	r3, r0
	strb	r3, [sp, #7]
	.loc 1 1629 3
	ldr	r3, .L192
	ldrb	r3, [r3]	@ zero_extendqisi2
	cmp	r3, #0
	bne	.L185
	.loc 1 1629 3 is_stmt 0 discriminator 1
	bl	_DoInit
.L185:
	.loc 1 1631 5 is_stmt 1
	movs	r3, #0
	str	r3, [sp, #28]
	.loc 1 1632 9
	movs	r3, #255
	strb	r3, [sp, #12]
	.loc 1 1633 6
	ldrb	r3, [sp, #7]	@ zero_extendqisi2
	cmp	r3, #15
	bhi	.L186
	.loc 1 1634 26
	ldrb	r3, [sp, #7]	@ zero_extendqisi2
	.loc 1 1634 25
	ldr	r2, .L192+4
	ldrb	r3, [r2, r3]	@ zero_extendqisi2
	.loc 1 1634 11
	strb	r3, [sp, #13]
	.loc 1 1635 11
	ldr	r3, .L192+8
	str	r3, [sp, #24]
.LBB14:
	.loc 1 1636 5
	.syntax unified
@ 1636 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	mrs   r3, basepri  
	mov   r1, #32       
	msr   basepri, r1  
	
@ 0 "" 2
	.thumb
	.syntax unified
	str	r3, [sp, #20]
	.loc 1 1637 15
	ldr	r3, [sp, #24]
	ldr	r3, [r3, #20]
	.loc 1 1637 23
	and	r3, r3, #3
	.loc 1 1637 8
	cmp	r3, #2
	bne	.L187
	.loc 1 1638 23
	ldr	r2, .L192+12
	ldrb	r3, [sp, #7]
	strb	r3, [r2]
	.loc 1 1639 7
	add	r3, sp, #12
	movs	r2, #2
	mov	r1, r3
	ldr	r0, [sp, #24]
	bl	_WriteBlocking
	b	.L188
.L187:
	.loc 1 1641 15
	ldr	r0, [sp, #24]
	bl	_GetAvailWriteSpace
	str	r0, [sp, #16]
	.loc 1 1642 10
	ldr	r3, [sp, #16]
	cmp	r3, #1
	bls	.L189
	.loc 1 1643 25
	ldr	r2, .L192+12
	ldrb	r3, [sp, #7]
	strb	r3, [r2]
	.loc 1 1644 9
	add	r3, sp, #12
	movs	r2, #2
	mov	r1, r3
	ldr	r0, [sp, #24]
	bl	_WriteNoCheck
	b	.L188
.L189:
	.loc 1 1646 11
	mov	r3, #-1
	str	r3, [sp, #28]
.L188:
	.loc 1 1649 5
	ldr	r3, [sp, #20]
	.syntax unified
@ 1649 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	msr   basepri, r3  
	
@ 0 "" 2
	.thumb
	.syntax unified
.LBE14:
	b	.L190
.L186:
	.loc 1 1651 7
	mov	r3, #-1
	str	r3, [sp, #28]
.L190:
	.loc 1 1653 10
	ldr	r3, [sp, #28]
	.loc 1 1654 1
	mov	r0, r3
	add	sp, sp, #36
.LCFI83:
	@ sp needed
	ldr	pc, [sp], #4
.L193:
	.align	2
.L192:
	.word	_SEGGER_RTT
	.word	_aTerminalId
	.word	_SEGGER_RTT+24
	.word	_ActiveTerminal
.LFE29:
	.size	SEGGER_RTT_SetTerminal, .-SEGGER_RTT_SetTerminal
	.section	.text.SEGGER_RTT_TerminalOut,"ax",%progbits
	.align	1
	.global	SEGGER_RTT_TerminalOut
	.syntax unified
	.thumb
	.thumb_func
	.fpu softvfp
	.type	SEGGER_RTT_TerminalOut, %function
SEGGER_RTT_TerminalOut:
.LFB30:
	.loc 1 1673 61
	@ args = 0, pretend = 0, frame = 32
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
.LCFI84:
	sub	sp, sp, #36
.LCFI85:
	mov	r3, r0
	str	r1, [sp]
	strb	r3, [sp, #7]
	.loc 1 1679 3
	ldr	r3, .L208
	ldrb	r3, [r3]	@ zero_extendqisi2
	cmp	r3, #0
	bne	.L195
	.loc 1 1679 3 is_stmt 0 discriminator 1
	bl	_DoInit
.L195:
	.loc 1 1683 6 is_stmt 1
	ldrb	r3, [sp, #7]	@ zero_extendqisi2
	cmp	r3, #15
	bhi	.L196
	.loc 1 1687 11
	ldr	r3, .L208+4
	str	r3, [sp, #24]
	.loc 1 1692 15
	ldr	r0, [sp]
	bl	strlen
	str	r0, [sp, #20]
.LBB15:
	.loc 1 1696 5
	.syntax unified
@ 1696 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	mrs   r3, basepri  
	mov   r1, #32       
	msr   basepri, r1  
	
@ 0 "" 2
	.thumb
	.syntax unified
	str	r3, [sp, #16]
	.loc 1 1697 13
	ldr	r0, [sp, #24]
	bl	_GetAvailWriteSpace
	str	r0, [sp, #12]
	.loc 1 1698 18
	ldr	r3, [sp, #24]
	ldr	r3, [r3, #20]
	.loc 1 1698 26
	and	r3, r3, #3
	.loc 1 1698 5
	cmp	r3, #2
	beq	.L197
	cmp	r3, #2
	bhi	.L198
	cmp	r3, #0
	beq	.L199
	cmp	r3, #1
	beq	.L200
	b	.L198
.L199:
	.loc 1 1704 28
	ldr	r3, [sp, #20]
	adds	r3, r3, #4
	.loc 1 1704 10
	ldr	r2, [sp, #12]
	cmp	r2, r3
	bcs	.L201
	.loc 1 1705 16
	movs	r3, #0
	str	r3, [sp, #28]
	.loc 1 1711 7
	b	.L203
.L201:
	.loc 1 1707 9
	ldrb	r3, [sp, #7]	@ zero_extendqisi2
	mov	r1, r3
	ldr	r0, [sp, #24]
	bl	_PostTerminalSwitch
	.loc 1 1708 23
	ldr	r2, [sp, #20]
	ldr	r1, [sp]
	ldr	r0, [sp, #24]
	bl	_WriteBlocking
	mov	r3, r0
	.loc 1 1708 16
	str	r3, [sp, #28]
	.loc 1 1709 9
	ldr	r3, .L208+8
	ldrb	r3, [r3]	@ zero_extendqisi2
	mov	r1, r3
	ldr	r0, [sp, #24]
	bl	_PostTerminalSwitch
	.loc 1 1711 7
	b	.L203
.L200:
	.loc 1 1718 10
	ldr	r3, [sp, #12]
	cmp	r3, #3
	bhi	.L204
	.loc 1 1719 16
	mov	r3, #-1
	str	r3, [sp, #28]
	.loc 1 1725 7
	b	.L203
.L204:
	.loc 1 1721 9
	ldrb	r3, [sp, #7]	@ zero_extendqisi2
	mov	r1, r3
	ldr	r0, [sp, #24]
	bl	_PostTerminalSwitch
	.loc 1 1722 66
	ldr	r3, [sp, #12]
	subs	r2, r3, #4
	.loc 1 1722 23
	ldr	r3, [sp, #20]
	cmp	r3, r2
	it	cs
	movcs	r3, r2
	mov	r2, r3
	ldr	r1, [sp]
	ldr	r0, [sp, #24]
	bl	_WriteBlocking
	mov	r3, r0
	.loc 1 1722 16
	str	r3, [sp, #28]
	.loc 1 1723 9
	ldr	r3, .L208+8
	ldrb	r3, [r3]	@ zero_extendqisi2
	mov	r1, r3
	ldr	r0, [sp, #24]
	bl	_PostTerminalSwitch
	.loc 1 1725 7
	b	.L203
.L197:
	.loc 1 1730 7
	ldrb	r3, [sp, #7]	@ zero_extendqisi2
	mov	r1, r3
	ldr	r0, [sp, #24]
	bl	_PostTerminalSwitch
	.loc 1 1731 21
	ldr	r2, [sp, #20]
	ldr	r1, [sp]
	ldr	r0, [sp, #24]
	bl	_WriteBlocking
	mov	r3, r0
	.loc 1 1731 14
	str	r3, [sp, #28]
	.loc 1 1732 7
	ldr	r3, .L208+8
	ldrb	r3, [r3]	@ zero_extendqisi2
	mov	r1, r3
	ldr	r0, [sp, #24]
	bl	_PostTerminalSwitch
	.loc 1 1733 7
	b	.L203
.L198:
	.loc 1 1735 14
	mov	r3, #-1
	str	r3, [sp, #28]
	.loc 1 1736 7
	nop
.L203:
	.loc 1 1741 5
	ldr	r3, [sp, #16]
	.syntax unified
@ 1741 "C:\Users\Devan\Documents\SEGGER Embedded Studio for ARM Projects\Executable_1\SEGGER\SEGGER_RTT.c" 1
	msr   basepri, r3  
	
@ 0 "" 2
	.thumb
	.syntax unified
.LBE15:
	b	.L206
.L196:
	.loc 1 1743 12
	mov	r3, #-1
	str	r3, [sp, #28]
.L206:
	.loc 1 1745 10
	ldr	r3, [sp, #28]
	.loc 1 1746 1
	mov	r0, r3
	add	sp, sp, #36
.LCFI86:
	@ sp needed
	ldr	pc, [sp], #4
.L209:
	.align	2
.L208:
	.word	_SEGGER_RTT
	.word	_SEGGER_RTT+24
	.word	_ActiveTerminal
.LFE30:
	.size	SEGGER_RTT_TerminalOut, .-SEGGER_RTT_TerminalOut
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
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI1-.LCFI0
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.4byte	.LCFI2-.LCFI1
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE0:
.LSFDE2:
	.4byte	.LEFDE2-.LASFDE2
.LASFDE2:
	.4byte	.Lframe0
	.4byte	.LFB1
	.4byte	.LFE1-.LFB1
	.byte	0x4
	.4byte	.LCFI3-.LFB1
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI4-.LCFI3
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.4byte	.LCFI5-.LCFI4
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE2:
.LSFDE4:
	.4byte	.LEFDE4-.LASFDE4
.LASFDE4:
	.4byte	.Lframe0
	.4byte	.LFB2
	.4byte	.LFE2-.LFB2
	.byte	0x4
	.4byte	.LCFI6-.LFB2
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI7-.LCFI6
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.4byte	.LCFI8-.LCFI7
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE4:
.LSFDE6:
	.4byte	.LEFDE6-.LASFDE6
.LASFDE6:
	.4byte	.Lframe0
	.4byte	.LFB3
	.4byte	.LFE3-.LFB3
	.byte	0x4
	.4byte	.LCFI9-.LFB3
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI10-.LCFI9
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.4byte	.LCFI11-.LCFI10
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE6:
.LSFDE8:
	.4byte	.LEFDE8-.LASFDE8
.LASFDE8:
	.4byte	.Lframe0
	.4byte	.LFB4
	.4byte	.LFE4-.LFB4
	.byte	0x4
	.4byte	.LCFI12-.LFB4
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.4byte	.LCFI13-.LCFI12
	.byte	0xe
	.uleb128 0
	.align	2
.LEFDE8:
.LSFDE10:
	.4byte	.LEFDE10-.LASFDE10
.LASFDE10:
	.4byte	.Lframe0
	.4byte	.LFB5
	.4byte	.LFE5-.LFB5
	.byte	0x4
	.4byte	.LCFI14-.LFB5
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI15-.LCFI14
	.byte	0xe
	.uleb128 0x30
	.byte	0x4
	.4byte	.LCFI16-.LCFI15
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE10:
.LSFDE12:
	.4byte	.LEFDE12-.LASFDE12
.LASFDE12:
	.4byte	.Lframe0
	.4byte	.LFB6
	.4byte	.LFE6-.LFB6
	.byte	0x4
	.4byte	.LCFI17-.LFB6
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI18-.LCFI17
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.4byte	.LCFI19-.LCFI18
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE12:
.LSFDE14:
	.4byte	.LEFDE14-.LASFDE14
.LASFDE14:
	.4byte	.Lframe0
	.4byte	.LFB7
	.4byte	.LFE7-.LFB7
	.byte	0x4
	.4byte	.LCFI20-.LFB7
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI21-.LCFI20
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.4byte	.LCFI22-.LCFI21
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE14:
.LSFDE16:
	.4byte	.LEFDE16-.LASFDE16
.LASFDE16:
	.4byte	.Lframe0
	.4byte	.LFB8
	.4byte	.LFE8-.LFB8
	.byte	0x4
	.4byte	.LCFI23-.LFB8
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI24-.LCFI23
	.byte	0xe
	.uleb128 0x30
	.byte	0x4
	.4byte	.LCFI25-.LCFI24
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE16:
.LSFDE18:
	.4byte	.LEFDE18-.LASFDE18
.LASFDE18:
	.4byte	.Lframe0
	.4byte	.LFB9
	.4byte	.LFE9-.LFB9
	.byte	0x4
	.4byte	.LCFI26-.LFB9
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI27-.LCFI26
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.4byte	.LCFI28-.LCFI27
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE18:
.LSFDE20:
	.4byte	.LEFDE20-.LASFDE20
.LASFDE20:
	.4byte	.Lframe0
	.4byte	.LFB10
	.4byte	.LFE10-.LFB10
	.byte	0x4
	.4byte	.LCFI29-.LFB10
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI30-.LCFI29
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.4byte	.LCFI31-.LCFI30
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE20:
.LSFDE22:
	.4byte	.LEFDE22-.LASFDE22
.LASFDE22:
	.4byte	.Lframe0
	.4byte	.LFB11
	.4byte	.LFE11-.LFB11
	.byte	0x4
	.4byte	.LCFI32-.LFB11
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI33-.LCFI32
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.4byte	.LCFI34-.LCFI33
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE22:
.LSFDE24:
	.4byte	.LEFDE24-.LASFDE24
.LASFDE24:
	.4byte	.Lframe0
	.4byte	.LFB12
	.4byte	.LFE12-.LFB12
	.byte	0x4
	.4byte	.LCFI35-.LFB12
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.4byte	.LCFI36-.LCFI35
	.byte	0xe
	.uleb128 0
	.align	2
.LEFDE24:
.LSFDE26:
	.4byte	.LEFDE26-.LASFDE26
.LASFDE26:
	.4byte	.Lframe0
	.4byte	.LFB13
	.4byte	.LFE13-.LFB13
	.byte	0x4
	.4byte	.LCFI37-.LFB13
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI38-.LCFI37
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.4byte	.LCFI39-.LCFI38
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE26:
.LSFDE28:
	.4byte	.LEFDE28-.LASFDE28
.LASFDE28:
	.4byte	.Lframe0
	.4byte	.LFB14
	.4byte	.LFE14-.LFB14
	.byte	0x4
	.4byte	.LCFI40-.LFB14
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI41-.LCFI40
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.4byte	.LCFI42-.LCFI41
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE28:
.LSFDE30:
	.4byte	.LEFDE30-.LASFDE30
.LASFDE30:
	.4byte	.Lframe0
	.4byte	.LFB15
	.4byte	.LFE15-.LFB15
	.byte	0x4
	.4byte	.LCFI43-.LFB15
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI44-.LCFI43
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.4byte	.LCFI45-.LCFI44
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE30:
.LSFDE32:
	.4byte	.LEFDE32-.LASFDE32
.LASFDE32:
	.4byte	.Lframe0
	.4byte	.LFB16
	.4byte	.LFE16-.LFB16
	.byte	0x4
	.4byte	.LCFI46-.LFB16
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI47-.LCFI46
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.4byte	.LCFI48-.LCFI47
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE32:
.LSFDE34:
	.4byte	.LEFDE34-.LASFDE34
.LASFDE34:
	.4byte	.Lframe0
	.4byte	.LFB17
	.4byte	.LFE17-.LFB17
	.byte	0x4
	.4byte	.LCFI49-.LFB17
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI50-.LCFI49
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.4byte	.LCFI51-.LCFI50
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE34:
.LSFDE36:
	.4byte	.LEFDE36-.LASFDE36
.LASFDE36:
	.4byte	.Lframe0
	.4byte	.LFB18
	.4byte	.LFE18-.LFB18
	.byte	0x4
	.4byte	.LCFI52-.LFB18
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.4byte	.LCFI53-.LCFI52
	.byte	0xe
	.uleb128 0
	.align	2
.LEFDE36:
.LSFDE38:
	.4byte	.LEFDE38-.LASFDE38
.LASFDE38:
	.4byte	.Lframe0
	.4byte	.LFB19
	.4byte	.LFE19-.LFB19
	.byte	0x4
	.4byte	.LCFI54-.LFB19
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.4byte	.LCFI55-.LCFI54
	.byte	0xe
	.uleb128 0
	.align	2
.LEFDE38:
.LSFDE40:
	.4byte	.LEFDE40-.LASFDE40
.LASFDE40:
	.4byte	.Lframe0
	.4byte	.LFB20
	.4byte	.LFE20-.LFB20
	.byte	0x4
	.4byte	.LCFI56-.LFB20
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI57-.LCFI56
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.4byte	.LCFI58-.LCFI57
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE40:
.LSFDE42:
	.4byte	.LEFDE42-.LASFDE42
.LASFDE42:
	.4byte	.Lframe0
	.4byte	.LFB21
	.4byte	.LFE21-.LFB21
	.byte	0x4
	.4byte	.LCFI59-.LFB21
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI60-.LCFI59
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.4byte	.LCFI61-.LCFI60
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE42:
.LSFDE44:
	.4byte	.LEFDE44-.LASFDE44
.LASFDE44:
	.4byte	.Lframe0
	.4byte	.LFB22
	.4byte	.LFE22-.LFB22
	.byte	0x4
	.4byte	.LCFI62-.LFB22
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI63-.LCFI62
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.4byte	.LCFI64-.LCFI63
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE44:
.LSFDE46:
	.4byte	.LEFDE46-.LASFDE46
.LASFDE46:
	.4byte	.Lframe0
	.4byte	.LFB23
	.4byte	.LFE23-.LFB23
	.byte	0x4
	.4byte	.LCFI65-.LFB23
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI66-.LCFI65
	.byte	0xe
	.uleb128 0x20
	.byte	0x4
	.4byte	.LCFI67-.LCFI66
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE46:
.LSFDE48:
	.4byte	.LEFDE48-.LASFDE48
.LASFDE48:
	.4byte	.Lframe0
	.4byte	.LFB24
	.4byte	.LFE24-.LFB24
	.byte	0x4
	.4byte	.LCFI68-.LFB24
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI69-.LCFI68
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.4byte	.LCFI70-.LCFI69
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE48:
.LSFDE50:
	.4byte	.LEFDE50-.LASFDE50
.LASFDE50:
	.4byte	.Lframe0
	.4byte	.LFB25
	.4byte	.LFE25-.LFB25
	.byte	0x4
	.4byte	.LCFI71-.LFB25
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI72-.LCFI71
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.4byte	.LCFI73-.LCFI72
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE50:
.LSFDE52:
	.4byte	.LEFDE52-.LASFDE52
.LASFDE52:
	.4byte	.Lframe0
	.4byte	.LFB26
	.4byte	.LFE26-.LFB26
	.byte	0x4
	.4byte	.LCFI74-.LFB26
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI75-.LCFI74
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.4byte	.LCFI76-.LCFI75
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE52:
.LSFDE54:
	.4byte	.LEFDE54-.LASFDE54
.LASFDE54:
	.4byte	.Lframe0
	.4byte	.LFB27
	.4byte	.LFE27-.LFB27
	.byte	0x4
	.4byte	.LCFI77-.LFB27
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI78-.LCFI77
	.byte	0xe
	.uleb128 0x18
	.byte	0x4
	.4byte	.LCFI79-.LCFI78
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE54:
.LSFDE56:
	.4byte	.LEFDE56-.LASFDE56
.LASFDE56:
	.4byte	.Lframe0
	.4byte	.LFB28
	.4byte	.LFE28-.LFB28
	.byte	0x4
	.4byte	.LCFI80-.LFB28
	.byte	0xe
	.uleb128 0x8
	.byte	0x83
	.uleb128 0x2
	.byte	0x8e
	.uleb128 0x1
	.align	2
.LEFDE56:
.LSFDE58:
	.4byte	.LEFDE58-.LASFDE58
.LASFDE58:
	.4byte	.Lframe0
	.4byte	.LFB29
	.4byte	.LFE29-.LFB29
	.byte	0x4
	.4byte	.LCFI81-.LFB29
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI82-.LCFI81
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.4byte	.LCFI83-.LCFI82
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE58:
.LSFDE60:
	.4byte	.LEFDE60-.LASFDE60
.LASFDE60:
	.4byte	.Lframe0
	.4byte	.LFB30
	.4byte	.LFE30-.LFB30
	.byte	0x4
	.4byte	.LCFI84-.LFB30
	.byte	0xe
	.uleb128 0x4
	.byte	0x8e
	.uleb128 0x1
	.byte	0x4
	.4byte	.LCFI85-.LCFI84
	.byte	0xe
	.uleb128 0x28
	.byte	0x4
	.4byte	.LCFI86-.LCFI85
	.byte	0xe
	.uleb128 0x4
	.align	2
.LEFDE60:
	.text
.Letext0:
	.file 2 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 4.52c/include/__crossworks.h"
	.file 3 "C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio for ARM Projects\\Executable_1\\SEGGER\\SEGGER_RTT.h"
	.section	.debug_info,"",%progbits
.Ldebug_info0:
	.4byte	0x14a5
	.2byte	0x4
	.4byte	.Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.4byte	.LASF142
	.byte	0xc
	.4byte	.LASF143
	.4byte	.LASF144
	.4byte	.Ldebug_ranges0+0
	.4byte	0
	.4byte	.Ldebug_line0
	.uleb128 0x2
	.byte	0x4
	.uleb128 0x3
	.4byte	.LASF52
	.byte	0x8
	.byte	0x2
	.byte	0x82
	.byte	0x8
	.4byte	0x4f
	.uleb128 0x4
	.4byte	.LASF0
	.byte	0x2
	.byte	0x83
	.byte	0x7
	.4byte	0x4f
	.byte	0
	.uleb128 0x4
	.4byte	.LASF1
	.byte	0x2
	.byte	0x84
	.byte	0x8
	.4byte	0x56
	.byte	0x4
	.byte	0
	.uleb128 0x5
	.byte	0x4
	.byte	0x5
	.ascii	"int\000"
	.uleb128 0x6
	.byte	0x4
	.byte	0x5
	.4byte	.LASF2
	.uleb128 0x7
	.4byte	0x4f
	.4byte	0x76
	.uleb128 0x8
	.4byte	0x76
	.uleb128 0x8
	.4byte	0x88
	.uleb128 0x8
	.4byte	0x94
	.byte	0
	.uleb128 0x9
	.byte	0x4
	.4byte	0x7c
	.uleb128 0x6
	.byte	0x1
	.byte	0x8
	.4byte	.LASF3
	.uleb128 0xa
	.4byte	0x7c
	.uleb128 0x6
	.byte	0x4
	.byte	0x7
	.4byte	.LASF4
	.uleb128 0xb
	.4byte	0x88
	.uleb128 0x9
	.byte	0x4
	.4byte	0x27
	.uleb128 0x7
	.4byte	0x4f
	.4byte	0xb8
	.uleb128 0x8
	.4byte	0xb8
	.uleb128 0x8
	.4byte	0xbe
	.uleb128 0x8
	.4byte	0x88
	.uleb128 0x8
	.4byte	0x94
	.byte	0
	.uleb128 0x9
	.byte	0x4
	.4byte	0x88
	.uleb128 0x9
	.byte	0x4
	.4byte	0x83
	.uleb128 0xc
	.byte	0x58
	.byte	0x2
	.byte	0x8a
	.byte	0x9
	.4byte	0x26e
	.uleb128 0x4
	.4byte	.LASF5
	.byte	0x2
	.byte	0x8c
	.byte	0xf
	.4byte	0xbe
	.byte	0
	.uleb128 0x4
	.4byte	.LASF6
	.byte	0x2
	.byte	0x8d
	.byte	0xf
	.4byte	0xbe
	.byte	0x4
	.uleb128 0x4
	.4byte	.LASF7
	.byte	0x2
	.byte	0x8e
	.byte	0xf
	.4byte	0xbe
	.byte	0x8
	.uleb128 0x4
	.4byte	.LASF8
	.byte	0x2
	.byte	0x90
	.byte	0xf
	.4byte	0xbe
	.byte	0xc
	.uleb128 0x4
	.4byte	.LASF9
	.byte	0x2
	.byte	0x91
	.byte	0xf
	.4byte	0xbe
	.byte	0x10
	.uleb128 0x4
	.4byte	.LASF10
	.byte	0x2
	.byte	0x92
	.byte	0xf
	.4byte	0xbe
	.byte	0x14
	.uleb128 0x4
	.4byte	.LASF11
	.byte	0x2
	.byte	0x93
	.byte	0xf
	.4byte	0xbe
	.byte	0x18
	.uleb128 0x4
	.4byte	.LASF12
	.byte	0x2
	.byte	0x94
	.byte	0xf
	.4byte	0xbe
	.byte	0x1c
	.uleb128 0x4
	.4byte	.LASF13
	.byte	0x2
	.byte	0x95
	.byte	0xf
	.4byte	0xbe
	.byte	0x20
	.uleb128 0x4
	.4byte	.LASF14
	.byte	0x2
	.byte	0x96
	.byte	0xf
	.4byte	0xbe
	.byte	0x24
	.uleb128 0x4
	.4byte	.LASF15
	.byte	0x2
	.byte	0x98
	.byte	0x8
	.4byte	0x7c
	.byte	0x28
	.uleb128 0x4
	.4byte	.LASF16
	.byte	0x2
	.byte	0x99
	.byte	0x8
	.4byte	0x7c
	.byte	0x29
	.uleb128 0x4
	.4byte	.LASF17
	.byte	0x2
	.byte	0x9a
	.byte	0x8
	.4byte	0x7c
	.byte	0x2a
	.uleb128 0x4
	.4byte	.LASF18
	.byte	0x2
	.byte	0x9b
	.byte	0x8
	.4byte	0x7c
	.byte	0x2b
	.uleb128 0x4
	.4byte	.LASF19
	.byte	0x2
	.byte	0x9c
	.byte	0x8
	.4byte	0x7c
	.byte	0x2c
	.uleb128 0x4
	.4byte	.LASF20
	.byte	0x2
	.byte	0x9d
	.byte	0x8
	.4byte	0x7c
	.byte	0x2d
	.uleb128 0x4
	.4byte	.LASF21
	.byte	0x2
	.byte	0x9e
	.byte	0x8
	.4byte	0x7c
	.byte	0x2e
	.uleb128 0x4
	.4byte	.LASF22
	.byte	0x2
	.byte	0x9f
	.byte	0x8
	.4byte	0x7c
	.byte	0x2f
	.uleb128 0x4
	.4byte	.LASF23
	.byte	0x2
	.byte	0xa0
	.byte	0x8
	.4byte	0x7c
	.byte	0x30
	.uleb128 0x4
	.4byte	.LASF24
	.byte	0x2
	.byte	0xa1
	.byte	0x8
	.4byte	0x7c
	.byte	0x31
	.uleb128 0x4
	.4byte	.LASF25
	.byte	0x2
	.byte	0xa2
	.byte	0x8
	.4byte	0x7c
	.byte	0x32
	.uleb128 0x4
	.4byte	.LASF26
	.byte	0x2
	.byte	0xa3
	.byte	0x8
	.4byte	0x7c
	.byte	0x33
	.uleb128 0x4
	.4byte	.LASF27
	.byte	0x2
	.byte	0xa4
	.byte	0x8
	.4byte	0x7c
	.byte	0x34
	.uleb128 0x4
	.4byte	.LASF28
	.byte	0x2
	.byte	0xa5
	.byte	0x8
	.4byte	0x7c
	.byte	0x35
	.uleb128 0x4
	.4byte	.LASF29
	.byte	0x2
	.byte	0xaa
	.byte	0xf
	.4byte	0xbe
	.byte	0x38
	.uleb128 0x4
	.4byte	.LASF30
	.byte	0x2
	.byte	0xab
	.byte	0xf
	.4byte	0xbe
	.byte	0x3c
	.uleb128 0x4
	.4byte	.LASF31
	.byte	0x2
	.byte	0xac
	.byte	0xf
	.4byte	0xbe
	.byte	0x40
	.uleb128 0x4
	.4byte	.LASF32
	.byte	0x2
	.byte	0xad
	.byte	0xf
	.4byte	0xbe
	.byte	0x44
	.uleb128 0x4
	.4byte	.LASF33
	.byte	0x2
	.byte	0xae
	.byte	0xf
	.4byte	0xbe
	.byte	0x48
	.uleb128 0x4
	.4byte	.LASF34
	.byte	0x2
	.byte	0xaf
	.byte	0xf
	.4byte	0xbe
	.byte	0x4c
	.uleb128 0x4
	.4byte	.LASF35
	.byte	0x2
	.byte	0xb0
	.byte	0xf
	.4byte	0xbe
	.byte	0x50
	.uleb128 0x4
	.4byte	.LASF36
	.byte	0x2
	.byte	0xb1
	.byte	0xf
	.4byte	0xbe
	.byte	0x54
	.byte	0
	.uleb128 0xd
	.4byte	.LASF46
	.byte	0x2
	.byte	0xb2
	.byte	0x3
	.4byte	0xc4
	.uleb128 0xa
	.4byte	0x26e
	.uleb128 0x6
	.byte	0x1
	.byte	0x8
	.4byte	.LASF37
	.uleb128 0xa
	.4byte	0x27f
	.uleb128 0xc
	.byte	0x20
	.byte	0x2
	.byte	0xc8
	.byte	0x9
	.4byte	0x2fd
	.uleb128 0x4
	.4byte	.LASF38
	.byte	0x2
	.byte	0xca
	.byte	0x9
	.4byte	0x311
	.byte	0
	.uleb128 0x4
	.4byte	.LASF39
	.byte	0x2
	.byte	0xcb
	.byte	0x9
	.4byte	0x326
	.byte	0x4
	.uleb128 0x4
	.4byte	.LASF40
	.byte	0x2
	.byte	0xcc
	.byte	0x9
	.4byte	0x326
	.byte	0x8
	.uleb128 0x4
	.4byte	.LASF41
	.byte	0x2
	.byte	0xcf
	.byte	0x9
	.4byte	0x340
	.byte	0xc
	.uleb128 0x4
	.4byte	.LASF42
	.byte	0x2
	.byte	0xd0
	.byte	0xa
	.4byte	0x355
	.byte	0x10
	.uleb128 0x4
	.4byte	.LASF43
	.byte	0x2
	.byte	0xd1
	.byte	0xa
	.4byte	0x355
	.byte	0x14
	.uleb128 0x4
	.4byte	.LASF44
	.byte	0x2
	.byte	0xd4
	.byte	0x9
	.4byte	0x35b
	.byte	0x18
	.uleb128 0x4
	.4byte	.LASF45
	.byte	0x2
	.byte	0xd5
	.byte	0x9
	.4byte	0x361
	.byte	0x1c
	.byte	0
	.uleb128 0x7
	.4byte	0x4f
	.4byte	0x311
	.uleb128 0x8
	.4byte	0x4f
	.uleb128 0x8
	.4byte	0x4f
	.byte	0
	.uleb128 0x9
	.byte	0x4
	.4byte	0x2fd
	.uleb128 0x7
	.4byte	0x4f
	.4byte	0x326
	.uleb128 0x8
	.4byte	0x4f
	.byte	0
	.uleb128 0x9
	.byte	0x4
	.4byte	0x317
	.uleb128 0x7
	.4byte	0x4f
	.4byte	0x340
	.uleb128 0x8
	.4byte	0x56
	.uleb128 0x8
	.4byte	0x4f
	.byte	0
	.uleb128 0x9
	.byte	0x4
	.4byte	0x32c
	.uleb128 0x7
	.4byte	0x56
	.4byte	0x355
	.uleb128 0x8
	.4byte	0x56
	.byte	0
	.uleb128 0x9
	.byte	0x4
	.4byte	0x346
	.uleb128 0x9
	.byte	0x4
	.4byte	0x5d
	.uleb128 0x9
	.byte	0x4
	.4byte	0x9a
	.uleb128 0xd
	.4byte	.LASF47
	.byte	0x2
	.byte	0xd6
	.byte	0x3
	.4byte	0x28b
	.uleb128 0xa
	.4byte	0x367
	.uleb128 0xc
	.byte	0xc
	.byte	0x2
	.byte	0xd8
	.byte	0x9
	.4byte	0x3a9
	.uleb128 0x4
	.4byte	.LASF48
	.byte	0x2
	.byte	0xd9
	.byte	0xf
	.4byte	0xbe
	.byte	0
	.uleb128 0x4
	.4byte	.LASF49
	.byte	0x2
	.byte	0xda
	.byte	0x25
	.4byte	0x3a9
	.byte	0x4
	.uleb128 0x4
	.4byte	.LASF50
	.byte	0x2
	.byte	0xdb
	.byte	0x28
	.4byte	0x3af
	.byte	0x8
	.byte	0
	.uleb128 0x9
	.byte	0x4
	.4byte	0x27a
	.uleb128 0x9
	.byte	0x4
	.4byte	0x373
	.uleb128 0xd
	.4byte	.LASF51
	.byte	0x2
	.byte	0xdc
	.byte	0x3
	.4byte	0x378
	.uleb128 0xa
	.4byte	0x3b5
	.uleb128 0x3
	.4byte	.LASF53
	.byte	0x14
	.byte	0x2
	.byte	0xe0
	.byte	0x10
	.4byte	0x3e1
	.uleb128 0x4
	.4byte	.LASF54
	.byte	0x2
	.byte	0xe1
	.byte	0x20
	.4byte	0x3e1
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0x3f1
	.4byte	0x3f1
	.uleb128 0xf
	.4byte	0x88
	.byte	0x4
	.byte	0
	.uleb128 0x9
	.byte	0x4
	.4byte	0x3c1
	.uleb128 0x10
	.4byte	.LASF55
	.byte	0x2
	.2byte	0x10a
	.byte	0x1a
	.4byte	0x3c6
	.uleb128 0x10
	.4byte	.LASF56
	.byte	0x2
	.2byte	0x111
	.byte	0x24
	.4byte	0x3c1
	.uleb128 0x10
	.4byte	.LASF57
	.byte	0x2
	.2byte	0x114
	.byte	0x2c
	.4byte	0x373
	.uleb128 0x10
	.4byte	.LASF58
	.byte	0x2
	.2byte	0x115
	.byte	0x2c
	.4byte	0x373
	.uleb128 0xe
	.4byte	0x286
	.4byte	0x43b
	.uleb128 0xf
	.4byte	0x88
	.byte	0x7f
	.byte	0
	.uleb128 0xa
	.4byte	0x42b
	.uleb128 0x10
	.4byte	.LASF59
	.byte	0x2
	.2byte	0x117
	.byte	0x23
	.4byte	0x43b
	.uleb128 0xe
	.4byte	0x83
	.4byte	0x458
	.uleb128 0x11
	.byte	0
	.uleb128 0xa
	.4byte	0x44d
	.uleb128 0x10
	.4byte	.LASF60
	.byte	0x2
	.2byte	0x119
	.byte	0x13
	.4byte	0x458
	.uleb128 0x10
	.4byte	.LASF61
	.byte	0x2
	.2byte	0x11a
	.byte	0x13
	.4byte	0x458
	.uleb128 0x10
	.4byte	.LASF62
	.byte	0x2
	.2byte	0x11b
	.byte	0x13
	.4byte	0x458
	.uleb128 0x10
	.4byte	.LASF63
	.byte	0x2
	.2byte	0x11c
	.byte	0x13
	.4byte	0x458
	.uleb128 0x10
	.4byte	.LASF64
	.byte	0x2
	.2byte	0x11e
	.byte	0x13
	.4byte	0x458
	.uleb128 0x10
	.4byte	.LASF65
	.byte	0x2
	.2byte	0x11f
	.byte	0x13
	.4byte	0x458
	.uleb128 0x10
	.4byte	.LASF66
	.byte	0x2
	.2byte	0x120
	.byte	0x13
	.4byte	0x458
	.uleb128 0x10
	.4byte	.LASF67
	.byte	0x2
	.2byte	0x121
	.byte	0x13
	.4byte	0x458
	.uleb128 0x10
	.4byte	.LASF68
	.byte	0x2
	.2byte	0x122
	.byte	0x13
	.4byte	0x458
	.uleb128 0x10
	.4byte	.LASF69
	.byte	0x2
	.2byte	0x123
	.byte	0x13
	.4byte	0x458
	.uleb128 0x7
	.4byte	0x4f
	.4byte	0x4ee
	.uleb128 0x8
	.4byte	0x4ee
	.byte	0
	.uleb128 0x9
	.byte	0x4
	.4byte	0x4f9
	.uleb128 0x12
	.4byte	.LASF145
	.uleb128 0xa
	.4byte	0x4f4
	.uleb128 0x10
	.4byte	.LASF70
	.byte	0x2
	.2byte	0x139
	.byte	0xe
	.4byte	0x50b
	.uleb128 0x9
	.byte	0x4
	.4byte	0x4df
	.uleb128 0x7
	.4byte	0x4f
	.4byte	0x520
	.uleb128 0x8
	.4byte	0x520
	.byte	0
	.uleb128 0x9
	.byte	0x4
	.4byte	0x4f4
	.uleb128 0x10
	.4byte	.LASF71
	.byte	0x2
	.2byte	0x13a
	.byte	0xe
	.4byte	0x533
	.uleb128 0x9
	.byte	0x4
	.4byte	0x511
	.uleb128 0x6
	.byte	0x2
	.byte	0x7
	.4byte	.LASF72
	.uleb128 0x13
	.4byte	.LASF73
	.byte	0x2
	.2byte	0x151
	.byte	0x18
	.4byte	0x54d
	.uleb128 0x9
	.byte	0x4
	.4byte	0x553
	.uleb128 0x7
	.4byte	0xbe
	.4byte	0x562
	.uleb128 0x8
	.4byte	0x4f
	.byte	0
	.uleb128 0x14
	.4byte	.LASF74
	.byte	0x8
	.byte	0x2
	.2byte	0x153
	.byte	0x10
	.4byte	0x58d
	.uleb128 0x15
	.4byte	.LASF75
	.byte	0x2
	.2byte	0x155
	.byte	0x1c
	.4byte	0x540
	.byte	0
	.uleb128 0x15
	.4byte	.LASF76
	.byte	0x2
	.2byte	0x156
	.byte	0x21
	.4byte	0x58d
	.byte	0x4
	.byte	0
	.uleb128 0x9
	.byte	0x4
	.4byte	0x562
	.uleb128 0x13
	.4byte	.LASF77
	.byte	0x2
	.2byte	0x157
	.byte	0x3
	.4byte	0x562
	.uleb128 0x10
	.4byte	.LASF78
	.byte	0x2
	.2byte	0x15b
	.byte	0x1f
	.4byte	0x5ad
	.uleb128 0x9
	.byte	0x4
	.4byte	0x593
	.uleb128 0x6
	.byte	0x8
	.byte	0x5
	.4byte	.LASF79
	.uleb128 0xc
	.byte	0x18
	.byte	0x3
	.byte	0x4c
	.byte	0x9
	.4byte	0x612
	.uleb128 0x4
	.4byte	.LASF80
	.byte	0x3
	.byte	0x4d
	.byte	0x16
	.4byte	0xbe
	.byte	0
	.uleb128 0x4
	.4byte	.LASF81
	.byte	0x3
	.byte	0x4e
	.byte	0x16
	.4byte	0x76
	.byte	0x4
	.uleb128 0x4
	.4byte	.LASF82
	.byte	0x3
	.byte	0x4f
	.byte	0x16
	.4byte	0x88
	.byte	0x8
	.uleb128 0x4
	.4byte	.LASF83
	.byte	0x3
	.byte	0x50
	.byte	0x16
	.4byte	0x88
	.byte	0xc
	.uleb128 0x4
	.4byte	.LASF84
	.byte	0x3
	.byte	0x51
	.byte	0x16
	.4byte	0x8f
	.byte	0x10
	.uleb128 0x4
	.4byte	.LASF85
	.byte	0x3
	.byte	0x52
	.byte	0x16
	.4byte	0x88
	.byte	0x14
	.byte	0
	.uleb128 0xd
	.4byte	.LASF86
	.byte	0x3
	.byte	0x53
	.byte	0x3
	.4byte	0x5ba
	.uleb128 0xc
	.byte	0x18
	.byte	0x3
	.byte	0x59
	.byte	0x9
	.4byte	0x676
	.uleb128 0x4
	.4byte	.LASF80
	.byte	0x3
	.byte	0x5a
	.byte	0x16
	.4byte	0xbe
	.byte	0
	.uleb128 0x4
	.4byte	.LASF81
	.byte	0x3
	.byte	0x5b
	.byte	0x16
	.4byte	0x76
	.byte	0x4
	.uleb128 0x4
	.4byte	.LASF82
	.byte	0x3
	.byte	0x5c
	.byte	0x16
	.4byte	0x88
	.byte	0x8
	.uleb128 0x4
	.4byte	.LASF83
	.byte	0x3
	.byte	0x5d
	.byte	0x16
	.4byte	0x8f
	.byte	0xc
	.uleb128 0x4
	.4byte	.LASF84
	.byte	0x3
	.byte	0x5e
	.byte	0x16
	.4byte	0x88
	.byte	0x10
	.uleb128 0x4
	.4byte	.LASF85
	.byte	0x3
	.byte	0x5f
	.byte	0x16
	.4byte	0x88
	.byte	0x14
	.byte	0
	.uleb128 0xd
	.4byte	.LASF87
	.byte	0x3
	.byte	0x60
	.byte	0x3
	.4byte	0x61e
	.uleb128 0xc
	.byte	0x78
	.byte	0x3
	.byte	0x67
	.byte	0x9
	.4byte	0x6cd
	.uleb128 0x4
	.4byte	.LASF88
	.byte	0x3
	.byte	0x68
	.byte	0x1b
	.4byte	0x6cd
	.byte	0
	.uleb128 0x4
	.4byte	.LASF89
	.byte	0x3
	.byte	0x69
	.byte	0x1b
	.4byte	0x4f
	.byte	0x10
	.uleb128 0x4
	.4byte	.LASF90
	.byte	0x3
	.byte	0x6a
	.byte	0x1b
	.4byte	0x4f
	.byte	0x14
	.uleb128 0x16
	.ascii	"aUp\000"
	.byte	0x3
	.byte	0x6b
	.byte	0x1b
	.4byte	0x6dd
	.byte	0x18
	.uleb128 0x4
	.4byte	.LASF91
	.byte	0x3
	.byte	0x6c
	.byte	0x1b
	.4byte	0x6ed
	.byte	0x48
	.byte	0
	.uleb128 0xe
	.4byte	0x7c
	.4byte	0x6dd
	.uleb128 0xf
	.4byte	0x88
	.byte	0xf
	.byte	0
	.uleb128 0xe
	.4byte	0x612
	.4byte	0x6ed
	.uleb128 0xf
	.4byte	0x88
	.byte	0x1
	.byte	0
	.uleb128 0xe
	.4byte	0x676
	.4byte	0x6fd
	.uleb128 0xf
	.4byte	0x88
	.byte	0x1
	.byte	0
	.uleb128 0xd
	.4byte	.LASF92
	.byte	0x3
	.byte	0x6d
	.byte	0x3
	.4byte	0x682
	.uleb128 0x17
	.4byte	.LASF93
	.byte	0x3
	.byte	0x75
	.byte	0x16
	.4byte	0x6fd
	.uleb128 0xe
	.4byte	0x27f
	.4byte	0x725
	.uleb128 0xf
	.4byte	0x88
	.byte	0xf
	.byte	0
	.uleb128 0x18
	.4byte	.LASF94
	.byte	0x1
	.byte	0xe3
	.byte	0x16
	.4byte	0x715
	.uleb128 0x5
	.byte	0x3
	.4byte	_aTerminalId
	.uleb128 0x19
	.4byte	0x709
	.byte	0x1
	.byte	0xee
	.byte	0x1
	.uleb128 0x5
	.byte	0x3
	.4byte	_SEGGER_RTT
	.uleb128 0xe
	.4byte	0x7c
	.4byte	0x756
	.uleb128 0x1a
	.4byte	0x88
	.2byte	0x3ff
	.byte	0
	.uleb128 0x18
	.4byte	.LASF95
	.byte	0x1
	.byte	0xf0
	.byte	0x1
	.4byte	0x745
	.uleb128 0x5
	.byte	0x3
	.4byte	_acUpBuffer
	.uleb128 0x18
	.4byte	.LASF96
	.byte	0x1
	.byte	0xf1
	.byte	0x1
	.4byte	0x6cd
	.uleb128 0x5
	.byte	0x3
	.4byte	_acDownBuffer
	.uleb128 0x18
	.4byte	.LASF97
	.byte	0x1
	.byte	0xf3
	.byte	0xd
	.4byte	0x7c
	.uleb128 0x5
	.byte	0x3
	.4byte	_ActiveTerminal
	.uleb128 0x1b
	.4byte	.LASF104
	.byte	0x1
	.2byte	0x689
	.byte	0x5
	.4byte	0x4f
	.4byte	.LFB30
	.4byte	.LFE30-.LFB30
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x820
	.uleb128 0x1c
	.4byte	.LASF98
	.byte	0x1
	.2byte	0x689
	.byte	0x22
	.4byte	0x7c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x1d
	.ascii	"s\000"
	.byte	0x1
	.2byte	0x689
	.byte	0x3a
	.4byte	0xbe
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1e
	.4byte	.LASF99
	.byte	0x1
	.2byte	0x68a
	.byte	0x19
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1e
	.4byte	.LASF100
	.byte	0x1
	.2byte	0x68b
	.byte	0x19
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1e
	.4byte	.LASF101
	.byte	0x1
	.2byte	0x68c
	.byte	0x19
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1e
	.4byte	.LASF102
	.byte	0x1
	.2byte	0x68d
	.byte	0x19
	.4byte	0x820
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.uleb128 0x1f
	.4byte	.LBB15
	.4byte	.LBE15-.LBB15
	.uleb128 0x1e
	.4byte	.LASF103
	.byte	0x1
	.2byte	0x6a0
	.byte	0x5
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0x9
	.byte	0x4
	.4byte	0x612
	.uleb128 0x1b
	.4byte	.LASF105
	.byte	0x1
	.2byte	0x657
	.byte	0x5
	.4byte	0x4f
	.4byte	.LFB29
	.4byte	.LFE29-.LFB29
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x8a9
	.uleb128 0x1c
	.4byte	.LASF98
	.byte	0x1
	.2byte	0x657
	.byte	0x22
	.4byte	0x7c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -33
	.uleb128 0x20
	.ascii	"ac\000"
	.byte	0x1
	.2byte	0x658
	.byte	0x19
	.4byte	0x8a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1e
	.4byte	.LASF102
	.byte	0x1
	.2byte	0x659
	.byte	0x19
	.4byte	0x820
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.uleb128 0x1e
	.4byte	.LASF101
	.byte	0x1
	.2byte	0x65a
	.byte	0xc
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x20
	.ascii	"r\000"
	.byte	0x1
	.2byte	0x65b
	.byte	0x7
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1f
	.4byte	.LBB14
	.4byte	.LBE14-.LBB14
	.uleb128 0x1e
	.4byte	.LASF103
	.byte	0x1
	.2byte	0x664
	.byte	0x5
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0xe
	.4byte	0x27f
	.4byte	0x8b9
	.uleb128 0xf
	.4byte	0x88
	.byte	0x1
	.byte	0
	.uleb128 0x21
	.4byte	.LASF146
	.byte	0x1
	.2byte	0x645
	.byte	0x6
	.4byte	.LFB28
	.4byte	.LFE28-.LFB28
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x1b
	.4byte	.LASF106
	.byte	0x1
	.2byte	0x62d
	.byte	0x5
	.4byte	0x4f
	.4byte	.LFB27
	.4byte	.LFE27-.LFB27
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x930
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x62d
	.byte	0x2c
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1c
	.4byte	.LASF85
	.byte	0x1
	.2byte	0x62d
	.byte	0x42
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x20
	.ascii	"r\000"
	.byte	0x1
	.2byte	0x62e
	.byte	0x7
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1f
	.4byte	.LBB13
	.4byte	.LBE13-.LBB13
	.uleb128 0x1e
	.4byte	.LASF103
	.byte	0x1
	.2byte	0x632
	.byte	0x5
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.byte	0
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF108
	.byte	0x1
	.2byte	0x60e
	.byte	0x5
	.4byte	0x4f
	.4byte	.LFB26
	.4byte	.LFE26-.LFB26
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x994
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x60e
	.byte	0x2a
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1c
	.4byte	.LASF85
	.byte	0x1
	.2byte	0x60e
	.byte	0x40
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x20
	.ascii	"r\000"
	.byte	0x1
	.2byte	0x60f
	.byte	0x7
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1f
	.4byte	.LBB12
	.4byte	.LBE12-.LBB12
	.uleb128 0x1e
	.4byte	.LASF103
	.byte	0x1
	.2byte	0x613
	.byte	0x5
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.byte	0
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF109
	.byte	0x1
	.2byte	0x5ef
	.byte	0x5
	.4byte	0x4f
	.4byte	.LFB25
	.4byte	.LFE25-.LFB25
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x9f8
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x5ef
	.byte	0x2b
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1c
	.4byte	.LASF80
	.byte	0x1
	.2byte	0x5ef
	.byte	0x44
	.4byte	0xbe
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x20
	.ascii	"r\000"
	.byte	0x1
	.2byte	0x5f0
	.byte	0x7
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1f
	.4byte	.LBB11
	.4byte	.LBE11-.LBB11
	.uleb128 0x1e
	.4byte	.LASF103
	.byte	0x1
	.2byte	0x5f4
	.byte	0x5
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.byte	0
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF110
	.byte	0x1
	.2byte	0x5d0
	.byte	0x5
	.4byte	0x4f
	.4byte	.LFB24
	.4byte	.LFE24-.LFB24
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xa5c
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x5d0
	.byte	0x29
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1c
	.4byte	.LASF80
	.byte	0x1
	.2byte	0x5d0
	.byte	0x42
	.4byte	0xbe
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x20
	.ascii	"r\000"
	.byte	0x1
	.2byte	0x5d1
	.byte	0x7
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1f
	.4byte	.LBB10
	.4byte	.LBE10-.LBB10
	.uleb128 0x1e
	.4byte	.LASF103
	.byte	0x1
	.2byte	0x5d5
	.byte	0x5
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.byte	0
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF111
	.byte	0x1
	.2byte	0x5aa
	.byte	0x5
	.4byte	0x4f
	.4byte	.LFB23
	.4byte	.LFE23-.LFB23
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xaf0
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x5aa
	.byte	0x2a
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1c
	.4byte	.LASF80
	.byte	0x1
	.2byte	0x5aa
	.byte	0x43
	.4byte	0xbe
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1c
	.4byte	.LASF81
	.byte	0x1
	.2byte	0x5aa
	.byte	0x50
	.4byte	0x25
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1c
	.4byte	.LASF112
	.byte	0x1
	.2byte	0x5aa
	.byte	0x62
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1c
	.4byte	.LASF85
	.byte	0x1
	.2byte	0x5aa
	.byte	0x77
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x20
	.ascii	"r\000"
	.byte	0x1
	.2byte	0x5ab
	.byte	0x7
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1f
	.4byte	.LBB9
	.4byte	.LBE9-.LBB9
	.uleb128 0x1e
	.4byte	.LASF103
	.byte	0x1
	.2byte	0x5af
	.byte	0x5
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.byte	0
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF113
	.byte	0x1
	.2byte	0x57b
	.byte	0x5
	.4byte	0x4f
	.4byte	.LFB22
	.4byte	.LFE22-.LFB22
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb84
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x57b
	.byte	0x28
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1c
	.4byte	.LASF80
	.byte	0x1
	.2byte	0x57b
	.byte	0x41
	.4byte	0xbe
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1c
	.4byte	.LASF81
	.byte	0x1
	.2byte	0x57b
	.byte	0x4e
	.4byte	0x25
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1c
	.4byte	.LASF112
	.byte	0x1
	.2byte	0x57b
	.byte	0x60
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1c
	.4byte	.LASF85
	.byte	0x1
	.2byte	0x57b
	.byte	0x75
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 0
	.uleb128 0x20
	.ascii	"r\000"
	.byte	0x1
	.2byte	0x57c
	.byte	0x7
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1f
	.4byte	.LBB8
	.4byte	.LBE8-.LBB8
	.uleb128 0x1e
	.4byte	.LASF103
	.byte	0x1
	.2byte	0x580
	.byte	0x5
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.byte	0
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF114
	.byte	0x1
	.2byte	0x548
	.byte	0x5
	.4byte	0x4f
	.4byte	.LFB21
	.4byte	.LFE21-.LFB21
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc0a
	.uleb128 0x1c
	.4byte	.LASF80
	.byte	0x1
	.2byte	0x548
	.byte	0x2a
	.4byte	0xbe
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1c
	.4byte	.LASF81
	.byte	0x1
	.2byte	0x548
	.byte	0x37
	.4byte	0x25
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1c
	.4byte	.LASF112
	.byte	0x1
	.2byte	0x548
	.byte	0x49
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1c
	.4byte	.LASF85
	.byte	0x1
	.2byte	0x548
	.byte	0x5e
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1e
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x549
	.byte	0x7
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1f
	.4byte	.LBB7
	.4byte	.LBE7-.LBB7
	.uleb128 0x1e
	.4byte	.LASF103
	.byte	0x1
	.2byte	0x54c
	.byte	0x3
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.byte	0
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF115
	.byte	0x1
	.2byte	0x51b
	.byte	0x5
	.4byte	0x4f
	.4byte	.LFB20
	.4byte	.LFE20-.LFB20
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xc90
	.uleb128 0x1c
	.4byte	.LASF80
	.byte	0x1
	.2byte	0x51b
	.byte	0x2c
	.4byte	0xbe
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1c
	.4byte	.LASF81
	.byte	0x1
	.2byte	0x51b
	.byte	0x39
	.4byte	0x25
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1c
	.4byte	.LASF112
	.byte	0x1
	.2byte	0x51b
	.byte	0x4b
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1c
	.4byte	.LASF85
	.byte	0x1
	.2byte	0x51b
	.byte	0x60
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1e
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x51c
	.byte	0x7
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1f
	.4byte	.LBB6
	.4byte	.LBE6-.LBB6
	.uleb128 0x1e
	.4byte	.LASF103
	.byte	0x1
	.2byte	0x51f
	.byte	0x3
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.byte	0
	.byte	0
	.uleb128 0x22
	.4byte	.LASF116
	.byte	0x1
	.2byte	0x4ff
	.byte	0xa
	.4byte	0x88
	.4byte	.LFB19
	.4byte	.LFE19-.LFB19
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xcda
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x4ff
	.byte	0x28
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1e
	.4byte	.LASF102
	.byte	0x1
	.2byte	0x500
	.byte	0x19
	.4byte	0x820
	.uleb128 0x2
	.byte	0x91
	.sleb128 -4
	.uleb128 0x20
	.ascii	"v\000"
	.byte	0x1
	.2byte	0x501
	.byte	0x1b
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -8
	.byte	0
	.uleb128 0x22
	.4byte	.LASF117
	.byte	0x1
	.2byte	0x4ea
	.byte	0xa
	.4byte	0x88
	.4byte	.LFB18
	.4byte	.LFE18-.LFB18
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd24
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x4ea
	.byte	0x26
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1e
	.4byte	.LASF102
	.byte	0x1
	.2byte	0x4eb
	.byte	0x1b
	.4byte	0xd24
	.uleb128 0x2
	.byte	0x91
	.sleb128 -4
	.uleb128 0x20
	.ascii	"v\000"
	.byte	0x1
	.2byte	0x4ec
	.byte	0x1b
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -8
	.byte	0
	.uleb128 0x9
	.byte	0x4
	.4byte	0x676
	.uleb128 0x1b
	.4byte	.LASF118
	.byte	0x1
	.2byte	0x4d0
	.byte	0x5
	.4byte	0x4f
	.4byte	.LFB17
	.4byte	.LFE17-.LFB17
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd64
	.uleb128 0x1e
	.4byte	.LASF84
	.byte	0x1
	.2byte	0x4d1
	.byte	0xc
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.uleb128 0x20
	.ascii	"r\000"
	.byte	0x1
	.2byte	0x4d2
	.byte	0x7
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF119
	.byte	0x1
	.2byte	0x4b9
	.byte	0x5
	.4byte	0x4f
	.4byte	.LFB16
	.4byte	.LFE16-.LFB16
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xd8e
	.uleb128 0x20
	.ascii	"r\000"
	.byte	0x1
	.2byte	0x4ba
	.byte	0x7
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF120
	.byte	0x1
	.2byte	0x49d
	.byte	0x5
	.4byte	0x4f
	.4byte	.LFB15
	.4byte	.LFE15-.LFB15
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xdc6
	.uleb128 0x20
	.ascii	"c\000"
	.byte	0x1
	.2byte	0x49e
	.byte	0x8
	.4byte	0x7c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -13
	.uleb128 0x20
	.ascii	"r\000"
	.byte	0x1
	.2byte	0x49f
	.byte	0x7
	.4byte	0x4f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF121
	.byte	0x1
	.2byte	0x460
	.byte	0xa
	.4byte	0x88
	.4byte	.LFB14
	.4byte	.LFE14-.LFB14
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xe4a
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x460
	.byte	0x26
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1d
	.ascii	"c\000"
	.byte	0x1
	.2byte	0x460
	.byte	0x38
	.4byte	0x7c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -29
	.uleb128 0x1e
	.4byte	.LASF102
	.byte	0x1
	.2byte	0x461
	.byte	0x19
	.4byte	0x820
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1e
	.4byte	.LASF83
	.byte	0x1
	.2byte	0x462
	.byte	0x19
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1e
	.4byte	.LASF99
	.byte	0x1
	.2byte	0x463
	.byte	0x19
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.uleb128 0x1f
	.4byte	.LBB5
	.4byte	.LBE5-.LBB5
	.uleb128 0x1e
	.4byte	.LASF103
	.byte	0x1
	.2byte	0x468
	.byte	0x3
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF122
	.byte	0x1
	.2byte	0x428
	.byte	0xa
	.4byte	0x88
	.4byte	.LFB13
	.4byte	.LFE13-.LFB13
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xece
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x428
	.byte	0x2a
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1d
	.ascii	"c\000"
	.byte	0x1
	.2byte	0x428
	.byte	0x3c
	.4byte	0x7c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -29
	.uleb128 0x1e
	.4byte	.LASF102
	.byte	0x1
	.2byte	0x429
	.byte	0x19
	.4byte	0x820
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1e
	.4byte	.LASF83
	.byte	0x1
	.2byte	0x42a
	.byte	0x19
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1e
	.4byte	.LASF99
	.byte	0x1
	.2byte	0x42b
	.byte	0x19
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.uleb128 0x1f
	.4byte	.LBB4
	.4byte	.LBE4-.LBB4
	.uleb128 0x1e
	.4byte	.LASF103
	.byte	0x1
	.2byte	0x430
	.byte	0x3
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x22
	.4byte	.LASF123
	.byte	0x1
	.2byte	0x3f9
	.byte	0xa
	.4byte	0x88
	.4byte	.LFB12
	.4byte	.LFE12-.LFB12
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf38
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x3f9
	.byte	0x30
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1d
	.ascii	"c\000"
	.byte	0x1
	.2byte	0x3f9
	.byte	0x42
	.4byte	0x7c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -21
	.uleb128 0x1e
	.4byte	.LASF102
	.byte	0x1
	.2byte	0x3fa
	.byte	0x19
	.4byte	0x820
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1e
	.4byte	.LASF83
	.byte	0x1
	.2byte	0x3fb
	.byte	0x19
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -4
	.uleb128 0x1e
	.4byte	.LASF99
	.byte	0x1
	.2byte	0x3fc
	.byte	0x19
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -8
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF124
	.byte	0x1
	.2byte	0x3db
	.byte	0xa
	.4byte	0x88
	.4byte	.LFB11
	.4byte	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xf82
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x3db
	.byte	0x2a
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1d
	.ascii	"s\000"
	.byte	0x1
	.2byte	0x3db
	.byte	0x43
	.4byte	0xbe
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x20
	.ascii	"Len\000"
	.byte	0x1
	.2byte	0x3dc
	.byte	0xc
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF125
	.byte	0x1
	.2byte	0x3b6
	.byte	0xa
	.4byte	0x88
	.4byte	.LFB10
	.4byte	.LFE10-.LFB10
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xff8
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x3b6
	.byte	0x24
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1c
	.4byte	.LASF81
	.byte	0x1
	.2byte	0x3b6
	.byte	0x3d
	.4byte	0xff8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1c
	.4byte	.LASF126
	.byte	0x1
	.2byte	0x3b6
	.byte	0x4f
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1e
	.4byte	.LASF99
	.byte	0x1
	.2byte	0x3b7
	.byte	0xc
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.uleb128 0x1f
	.4byte	.LBB3
	.4byte	.LBE3-.LBB3
	.uleb128 0x1e
	.4byte	.LASF103
	.byte	0x1
	.2byte	0x3ba
	.byte	0x3
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.byte	0
	.byte	0
	.uleb128 0x9
	.byte	0x4
	.4byte	0xffe
	.uleb128 0x23
	.uleb128 0x1b
	.4byte	.LASF127
	.byte	0x1
	.2byte	0x36f
	.byte	0xa
	.4byte	0x88
	.4byte	.LFB9
	.4byte	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x108b
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x36f
	.byte	0x2a
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1c
	.4byte	.LASF81
	.byte	0x1
	.2byte	0x36f
	.byte	0x43
	.4byte	0xff8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1c
	.4byte	.LASF126
	.byte	0x1
	.2byte	0x36f
	.byte	0x55
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1e
	.4byte	.LASF99
	.byte	0x1
	.2byte	0x370
	.byte	0x19
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1e
	.4byte	.LASF101
	.byte	0x1
	.2byte	0x371
	.byte	0x19
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1e
	.4byte	.LASF128
	.byte	0x1
	.2byte	0x372
	.byte	0x19
	.4byte	0xbe
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.uleb128 0x1e
	.4byte	.LASF102
	.byte	0x1
	.2byte	0x373
	.byte	0x19
	.4byte	0x820
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF129
	.byte	0x1
	.2byte	0x2df
	.byte	0xa
	.4byte	0x88
	.4byte	.LFB8
	.4byte	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1137
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x2df
	.byte	0x2e
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1c
	.4byte	.LASF81
	.byte	0x1
	.2byte	0x2df
	.byte	0x47
	.4byte	0xff8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1c
	.4byte	.LASF126
	.byte	0x1
	.2byte	0x2df
	.byte	0x59
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1e
	.4byte	.LASF128
	.byte	0x1
	.2byte	0x2e0
	.byte	0x19
	.4byte	0xbe
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1e
	.4byte	.LASF102
	.byte	0x1
	.2byte	0x2e1
	.byte	0x19
	.4byte	0x820
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.uleb128 0x1e
	.4byte	.LASF101
	.byte	0x1
	.2byte	0x2e2
	.byte	0x19
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1e
	.4byte	.LASF84
	.byte	0x1
	.2byte	0x2e3
	.byte	0x19
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1e
	.4byte	.LASF83
	.byte	0x1
	.2byte	0x2e4
	.byte	0x19
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x20
	.ascii	"Rem\000"
	.byte	0x1
	.2byte	0x2e5
	.byte	0x19
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.byte	0
	.uleb128 0x24
	.4byte	.LASF147
	.byte	0x1
	.2byte	0x27f
	.byte	0x6
	.4byte	.LFB7
	.4byte	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x11af
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x27f
	.byte	0x33
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1c
	.4byte	.LASF81
	.byte	0x1
	.2byte	0x27f
	.byte	0x4c
	.4byte	0xff8
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1c
	.4byte	.LASF126
	.byte	0x1
	.2byte	0x27f
	.byte	0x5e
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1e
	.4byte	.LASF128
	.byte	0x1
	.2byte	0x280
	.byte	0x19
	.4byte	0xbe
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1e
	.4byte	.LASF102
	.byte	0x1
	.2byte	0x281
	.byte	0x19
	.4byte	0x820
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1e
	.4byte	.LASF101
	.byte	0x1
	.2byte	0x282
	.byte	0x19
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF130
	.byte	0x1
	.2byte	0x258
	.byte	0xa
	.4byte	0x88
	.4byte	.LFB6
	.4byte	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1225
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x258
	.byte	0x23
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1c
	.4byte	.LASF81
	.byte	0x1
	.2byte	0x258
	.byte	0x36
	.4byte	0x25
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1c
	.4byte	.LASF112
	.byte	0x1
	.2byte	0x258
	.byte	0x48
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1e
	.4byte	.LASF131
	.byte	0x1
	.2byte	0x259
	.byte	0xc
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.uleb128 0x1f
	.4byte	.LBB2
	.4byte	.LBE2-.LBB2
	.uleb128 0x1e
	.4byte	.LASF103
	.byte	0x1
	.2byte	0x25b
	.byte	0x3
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.byte	0
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF132
	.byte	0x1
	.2byte	0x1fe
	.byte	0xa
	.4byte	0x88
	.4byte	.LFB5
	.4byte	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x12d1
	.uleb128 0x1c
	.4byte	.LASF107
	.byte	0x1
	.2byte	0x1fe
	.byte	0x29
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1c
	.4byte	.LASF128
	.byte	0x1
	.2byte	0x1fe
	.byte	0x3c
	.4byte	0x25
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1c
	.4byte	.LASF112
	.byte	0x1
	.2byte	0x1fe
	.byte	0x4c
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x1e
	.4byte	.LASF133
	.byte	0x1
	.2byte	0x1ff
	.byte	0x1b
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1e
	.4byte	.LASF131
	.byte	0x1
	.2byte	0x200
	.byte	0x1b
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1e
	.4byte	.LASF84
	.byte	0x1
	.2byte	0x201
	.byte	0x1b
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.uleb128 0x1e
	.4byte	.LASF83
	.byte	0x1
	.2byte	0x202
	.byte	0x1b
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1e
	.4byte	.LASF81
	.byte	0x1
	.2byte	0x203
	.byte	0x1b
	.4byte	0x12d1
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1e
	.4byte	.LASF102
	.byte	0x1
	.2byte	0x204
	.byte	0x1b
	.4byte	0xd24
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x9
	.byte	0x4
	.4byte	0x27f
	.uleb128 0x25
	.4byte	.LASF137
	.byte	0x1
	.2byte	0x1d5
	.byte	0x11
	.4byte	0x88
	.4byte	.LFB4
	.4byte	.LFE4-.LFB4
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1331
	.uleb128 0x1c
	.4byte	.LASF102
	.byte	0x1
	.2byte	0x1d5
	.byte	0x3b
	.4byte	0x820
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1e
	.4byte	.LASF84
	.byte	0x1
	.2byte	0x1d6
	.byte	0xc
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -8
	.uleb128 0x1e
	.4byte	.LASF83
	.byte	0x1
	.2byte	0x1d7
	.byte	0xc
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x20
	.ascii	"r\000"
	.byte	0x1
	.2byte	0x1d8
	.byte	0xc
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -4
	.byte	0
	.uleb128 0x26
	.4byte	.LASF134
	.byte	0x1
	.2byte	0x1bf
	.byte	0xd
	.4byte	.LFB3
	.4byte	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x1378
	.uleb128 0x1c
	.4byte	.LASF102
	.byte	0x1
	.2byte	0x1bf
	.byte	0x37
	.4byte	0x820
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1c
	.4byte	.LASF98
	.byte	0x1
	.2byte	0x1bf
	.byte	0x4c
	.4byte	0x27f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -21
	.uleb128 0x20
	.ascii	"ac\000"
	.byte	0x1
	.2byte	0x1c0
	.byte	0x11
	.4byte	0x8a9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.byte	0
	.uleb128 0x26
	.4byte	.LASF135
	.byte	0x1
	.2byte	0x17f
	.byte	0xd
	.4byte	.LFB2
	.4byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x13f0
	.uleb128 0x1c
	.4byte	.LASF102
	.byte	0x1
	.2byte	0x17f
	.byte	0x31
	.4byte	0x820
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1c
	.4byte	.LASF128
	.byte	0x1
	.2byte	0x17f
	.byte	0x44
	.4byte	0xbe
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1c
	.4byte	.LASF126
	.byte	0x1
	.2byte	0x17f
	.byte	0x54
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1e
	.4byte	.LASF136
	.byte	0x1
	.2byte	0x180
	.byte	0xc
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x1e
	.4byte	.LASF83
	.byte	0x1
	.2byte	0x181
	.byte	0xc
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x20
	.ascii	"Rem\000"
	.byte	0x1
	.2byte	0x182
	.byte	0xc
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.byte	0
	.uleb128 0x27
	.4byte	.LASF138
	.byte	0x1
	.2byte	0x13f
	.byte	0x11
	.4byte	0x88
	.4byte	.LFB1
	.4byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x147c
	.uleb128 0x1c
	.4byte	.LASF102
	.byte	0x1
	.2byte	0x13f
	.byte	0x36
	.4byte	0x820
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x1c
	.4byte	.LASF81
	.byte	0x1
	.2byte	0x13f
	.byte	0x49
	.4byte	0xbe
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1c
	.4byte	.LASF126
	.byte	0x1
	.2byte	0x13f
	.byte	0x5b
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x1e
	.4byte	.LASF139
	.byte	0x1
	.2byte	0x140
	.byte	0xc
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.uleb128 0x1e
	.4byte	.LASF140
	.byte	0x1
	.2byte	0x141
	.byte	0xc
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -16
	.uleb128 0x1e
	.4byte	.LASF84
	.byte	0x1
	.2byte	0x142
	.byte	0xc
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x1e
	.4byte	.LASF83
	.byte	0x1
	.2byte	0x143
	.byte	0xc
	.4byte	0x88
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x26
	.4byte	.LASF141
	.byte	0x1
	.2byte	0x108
	.byte	0xd
	.4byte	.LFB0
	.4byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x14a2
	.uleb128 0x20
	.ascii	"p\000"
	.byte	0x1
	.2byte	0x109
	.byte	0x12
	.4byte	0x14a2
	.uleb128 0x2
	.byte	0x91
	.sleb128 -12
	.byte	0
	.uleb128 0x9
	.byte	0x4
	.4byte	0x6fd
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
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0xd
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
	.uleb128 0x38
	.uleb128 0xb
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
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x6
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
	.uleb128 0x7
	.uleb128 0x15
	.byte	0x1
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x35
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x13
	.byte	0x1
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x16
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
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x21
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0x13
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x14
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x15
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x16
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x17
	.uleb128 0x34
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
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x18
	.uleb128 0x34
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
	.uleb128 0x19
	.uleb128 0x34
	.byte	0
	.uleb128 0x47
	.uleb128 0x13
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x1a
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x5
	.byte	0
	.byte	0
	.uleb128 0x1b
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1c
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x1d
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x1e
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x1f
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.byte	0
	.byte	0
	.uleb128 0x20
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x21
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
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
	.uleb128 0x2116
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x22
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
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
	.uleb128 0x23
	.uleb128 0x26
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x24
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
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
	.uleb128 0x2116
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x25
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
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
	.uleb128 0x26
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
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
	.uleb128 0x2116
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x27
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_pubnames,"",%progbits
	.4byte	0x3d8
	.2byte	0x2
	.4byte	.Ldebug_info0
	.4byte	0x14a9
	.4byte	0x725
	.ascii	"_aTerminalId\000"
	.4byte	0x737
	.ascii	"_SEGGER_RTT\000"
	.4byte	0x756
	.ascii	"_acUpBuffer\000"
	.4byte	0x768
	.ascii	"_acDownBuffer\000"
	.4byte	0x77a
	.ascii	"_ActiveTerminal\000"
	.4byte	0x756
	.ascii	"_acUpBuffer\000"
	.4byte	0x768
	.ascii	"_acDownBuffer\000"
	.4byte	0x77a
	.ascii	"_ActiveTerminal\000"
	.4byte	0x737
	.ascii	"_SEGGER_RTT\000"
	.4byte	0x78c
	.ascii	"SEGGER_RTT_TerminalOut\000"
	.4byte	0x826
	.ascii	"SEGGER_RTT_SetTerminal\000"
	.4byte	0x8b9
	.ascii	"SEGGER_RTT_Init\000"
	.4byte	0x8cc
	.ascii	"SEGGER_RTT_SetFlagsDownBuffer\000"
	.4byte	0x930
	.ascii	"SEGGER_RTT_SetFlagsUpBuffer\000"
	.4byte	0x994
	.ascii	"SEGGER_RTT_SetNameDownBuffer\000"
	.4byte	0x9f8
	.ascii	"SEGGER_RTT_SetNameUpBuffer\000"
	.4byte	0xa5c
	.ascii	"SEGGER_RTT_ConfigDownBuffer\000"
	.4byte	0xaf0
	.ascii	"SEGGER_RTT_ConfigUpBuffer\000"
	.4byte	0xb84
	.ascii	"SEGGER_RTT_AllocUpBuffer\000"
	.4byte	0xc0a
	.ascii	"SEGGER_RTT_AllocDownBuffer\000"
	.4byte	0xc90
	.ascii	"SEGGER_RTT_HasDataUp\000"
	.4byte	0xcda
	.ascii	"SEGGER_RTT_HasData\000"
	.4byte	0xd2a
	.ascii	"SEGGER_RTT_HasKey\000"
	.4byte	0xd64
	.ascii	"SEGGER_RTT_WaitKey\000"
	.4byte	0xd8e
	.ascii	"SEGGER_RTT_GetKey\000"
	.4byte	0xdc6
	.ascii	"SEGGER_RTT_PutChar\000"
	.4byte	0xe4a
	.ascii	"SEGGER_RTT_PutCharSkip\000"
	.4byte	0xece
	.ascii	"SEGGER_RTT_PutCharSkipNoLock\000"
	.4byte	0xf38
	.ascii	"SEGGER_RTT_WriteString\000"
	.4byte	0xf82
	.ascii	"SEGGER_RTT_Write\000"
	.4byte	0xfff
	.ascii	"SEGGER_RTT_WriteNoLock\000"
	.4byte	0x108b
	.ascii	"SEGGER_RTT_WriteSkipNoLock\000"
	.4byte	0x1137
	.ascii	"SEGGER_RTT_WriteWithOverwriteNoLock\000"
	.4byte	0x11af
	.ascii	"SEGGER_RTT_Read\000"
	.4byte	0x1225
	.ascii	"SEGGER_RTT_ReadNoLock\000"
	.4byte	0x12d7
	.ascii	"_GetAvailWriteSpace\000"
	.4byte	0x1331
	.ascii	"_PostTerminalSwitch\000"
	.4byte	0x1378
	.ascii	"_WriteNoCheck\000"
	.4byte	0x13f0
	.ascii	"_WriteBlocking\000"
	.4byte	0x147c
	.ascii	"_DoInit\000"
	.4byte	0
	.section	.debug_pubtypes,"",%progbits
	.4byte	0x174
	.2byte	0x2
	.4byte	.Ldebug_info0
	.4byte	0x14a9
	.4byte	0x4f
	.ascii	"int\000"
	.4byte	0x56
	.ascii	"long int\000"
	.4byte	0x27
	.ascii	"__mbstate_s\000"
	.4byte	0x7c
	.ascii	"char\000"
	.4byte	0x88
	.ascii	"unsigned int\000"
	.4byte	0x26e
	.ascii	"__RAL_locale_data_t\000"
	.4byte	0x27f
	.ascii	"unsigned char\000"
	.4byte	0x367
	.ascii	"__RAL_locale_codeset_t\000"
	.4byte	0x3b5
	.ascii	"__RAL_locale_t\000"
	.4byte	0x3c6
	.ascii	"__locale_s\000"
	.4byte	0x539
	.ascii	"short unsigned int\000"
	.4byte	0x540
	.ascii	"__RAL_error_decoder_fn_t\000"
	.4byte	0x562
	.ascii	"__RAL_error_decoder_s\000"
	.4byte	0x593
	.ascii	"__RAL_error_decoder_t\000"
	.4byte	0x5b3
	.ascii	"long long int\000"
	.4byte	0x612
	.ascii	"SEGGER_RTT_BUFFER_UP\000"
	.4byte	0x676
	.ascii	"SEGGER_RTT_BUFFER_DOWN\000"
	.4byte	0x6fd
	.ascii	"SEGGER_RTT_CB\000"
	.4byte	0
	.section	.debug_aranges,"",%progbits
	.4byte	0x10c
	.2byte	0x2
	.4byte	.Ldebug_info0
	.byte	0x4
	.byte	0
	.2byte	0
	.2byte	0
	.4byte	.LFB0
	.4byte	.LFE0-.LFB0
	.4byte	.LFB1
	.4byte	.LFE1-.LFB1
	.4byte	.LFB2
	.4byte	.LFE2-.LFB2
	.4byte	.LFB3
	.4byte	.LFE3-.LFB3
	.4byte	.LFB4
	.4byte	.LFE4-.LFB4
	.4byte	.LFB5
	.4byte	.LFE5-.LFB5
	.4byte	.LFB6
	.4byte	.LFE6-.LFB6
	.4byte	.LFB7
	.4byte	.LFE7-.LFB7
	.4byte	.LFB8
	.4byte	.LFE8-.LFB8
	.4byte	.LFB9
	.4byte	.LFE9-.LFB9
	.4byte	.LFB10
	.4byte	.LFE10-.LFB10
	.4byte	.LFB11
	.4byte	.LFE11-.LFB11
	.4byte	.LFB12
	.4byte	.LFE12-.LFB12
	.4byte	.LFB13
	.4byte	.LFE13-.LFB13
	.4byte	.LFB14
	.4byte	.LFE14-.LFB14
	.4byte	.LFB15
	.4byte	.LFE15-.LFB15
	.4byte	.LFB16
	.4byte	.LFE16-.LFB16
	.4byte	.LFB17
	.4byte	.LFE17-.LFB17
	.4byte	.LFB18
	.4byte	.LFE18-.LFB18
	.4byte	.LFB19
	.4byte	.LFE19-.LFB19
	.4byte	.LFB20
	.4byte	.LFE20-.LFB20
	.4byte	.LFB21
	.4byte	.LFE21-.LFB21
	.4byte	.LFB22
	.4byte	.LFE22-.LFB22
	.4byte	.LFB23
	.4byte	.LFE23-.LFB23
	.4byte	.LFB24
	.4byte	.LFE24-.LFB24
	.4byte	.LFB25
	.4byte	.LFE25-.LFB25
	.4byte	.LFB26
	.4byte	.LFE26-.LFB26
	.4byte	.LFB27
	.4byte	.LFE27-.LFB27
	.4byte	.LFB28
	.4byte	.LFE28-.LFB28
	.4byte	.LFB29
	.4byte	.LFE29-.LFB29
	.4byte	.LFB30
	.4byte	.LFE30-.LFB30
	.4byte	0
	.4byte	0
	.section	.debug_ranges,"",%progbits
.Ldebug_ranges0:
	.4byte	.LFB0
	.4byte	.LFE0
	.4byte	.LFB1
	.4byte	.LFE1
	.4byte	.LFB2
	.4byte	.LFE2
	.4byte	.LFB3
	.4byte	.LFE3
	.4byte	.LFB4
	.4byte	.LFE4
	.4byte	.LFB5
	.4byte	.LFE5
	.4byte	.LFB6
	.4byte	.LFE6
	.4byte	.LFB7
	.4byte	.LFE7
	.4byte	.LFB8
	.4byte	.LFE8
	.4byte	.LFB9
	.4byte	.LFE9
	.4byte	.LFB10
	.4byte	.LFE10
	.4byte	.LFB11
	.4byte	.LFE11
	.4byte	.LFB12
	.4byte	.LFE12
	.4byte	.LFB13
	.4byte	.LFE13
	.4byte	.LFB14
	.4byte	.LFE14
	.4byte	.LFB15
	.4byte	.LFE15
	.4byte	.LFB16
	.4byte	.LFE16
	.4byte	.LFB17
	.4byte	.LFE17
	.4byte	.LFB18
	.4byte	.LFE18
	.4byte	.LFB19
	.4byte	.LFE19
	.4byte	.LFB20
	.4byte	.LFE20
	.4byte	.LFB21
	.4byte	.LFE21
	.4byte	.LFB22
	.4byte	.LFE22
	.4byte	.LFB23
	.4byte	.LFE23
	.4byte	.LFB24
	.4byte	.LFE24
	.4byte	.LFB25
	.4byte	.LFE25
	.4byte	.LFB26
	.4byte	.LFE26
	.4byte	.LFB27
	.4byte	.LFE27
	.4byte	.LFB28
	.4byte	.LFE28
	.4byte	.LFB29
	.4byte	.LFE29
	.4byte	.LFB30
	.4byte	.LFE30
	.4byte	0
	.4byte	0
	.section	.debug_line,"",%progbits
.Ldebug_line0:
	.section	.debug_str,"MS",%progbits,1
.LASF116:
	.ascii	"SEGGER_RTT_HasDataUp\000"
.LASF9:
	.ascii	"currency_symbol\000"
.LASF103:
	.ascii	"LockState\000"
.LASF66:
	.ascii	"__RAL_data_utf8_space\000"
.LASF90:
	.ascii	"MaxNumDownBuffers\000"
.LASF61:
	.ascii	"__RAL_c_locale_abbrev_day_names\000"
.LASF126:
	.ascii	"NumBytes\000"
.LASF57:
	.ascii	"__RAL_codeset_ascii\000"
.LASF73:
	.ascii	"__RAL_error_decoder_fn_t\000"
.LASF86:
	.ascii	"SEGGER_RTT_BUFFER_UP\000"
.LASF141:
	.ascii	"_DoInit\000"
.LASF17:
	.ascii	"p_cs_precedes\000"
.LASF129:
	.ascii	"SEGGER_RTT_WriteSkipNoLock\000"
.LASF68:
	.ascii	"__RAL_data_utf8_minus\000"
.LASF87:
	.ascii	"SEGGER_RTT_BUFFER_DOWN\000"
.LASF135:
	.ascii	"_WriteNoCheck\000"
.LASF142:
	.ascii	"GNU C11 9.2.1 20191025 (release) [ARM/arm-9-branch "
	.ascii	"revision 277599] -fmessage-length=0 -mcpu=cortex-m3"
	.ascii	"3+nodsp -mlittle-endian -mfloat-abi=soft -mthumb -m"
	.ascii	"tp=soft -munaligned-access -std=gnu11 -g2 -gpubname"
	.ascii	"s -fomit-frame-pointer -fno-dwarf2-cfi-asm -fno-bui"
	.ascii	"ltin -ffunction-sections -fdata-sections -fshort-en"
	.ascii	"ums -fno-common\000"
.LASF52:
	.ascii	"__mbstate_s\000"
.LASF71:
	.ascii	"__user_get_time_of_day\000"
.LASF121:
	.ascii	"SEGGER_RTT_PutChar\000"
.LASF34:
	.ascii	"date_format\000"
.LASF76:
	.ascii	"next\000"
.LASF32:
	.ascii	"abbrev_month_names\000"
.LASF79:
	.ascii	"long long int\000"
.LASF131:
	.ascii	"NumBytesRead\000"
.LASF55:
	.ascii	"__RAL_global_locale\000"
.LASF36:
	.ascii	"date_time_format\000"
.LASF42:
	.ascii	"__towupper\000"
.LASF146:
	.ascii	"SEGGER_RTT_Init\000"
.LASF147:
	.ascii	"SEGGER_RTT_WriteWithOverwriteNoLock\000"
.LASF122:
	.ascii	"SEGGER_RTT_PutCharSkip\000"
.LASF95:
	.ascii	"_acUpBuffer\000"
.LASF2:
	.ascii	"long int\000"
.LASF93:
	.ascii	"_SEGGER_RTT\000"
.LASF65:
	.ascii	"__RAL_data_utf8_comma\000"
.LASF8:
	.ascii	"int_curr_symbol\000"
.LASF132:
	.ascii	"SEGGER_RTT_ReadNoLock\000"
.LASF143:
	.ascii	"C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio"
	.ascii	" for ARM Projects\\Executable_1\\SEGGER\\SEGGER_RTT"
	.ascii	".c\000"
.LASF100:
	.ascii	"FragLen\000"
.LASF13:
	.ascii	"positive_sign\000"
.LASF23:
	.ascii	"int_p_cs_precedes\000"
.LASF1:
	.ascii	"__wchar\000"
.LASF120:
	.ascii	"SEGGER_RTT_GetKey\000"
.LASF104:
	.ascii	"SEGGER_RTT_TerminalOut\000"
.LASF128:
	.ascii	"pData\000"
.LASF145:
	.ascii	"timeval\000"
.LASF12:
	.ascii	"mon_grouping\000"
.LASF41:
	.ascii	"__iswctype\000"
.LASF22:
	.ascii	"n_sign_posn\000"
.LASF84:
	.ascii	"RdOff\000"
.LASF106:
	.ascii	"SEGGER_RTT_SetFlagsDownBuffer\000"
.LASF137:
	.ascii	"_GetAvailWriteSpace\000"
.LASF4:
	.ascii	"unsigned int\000"
.LASF25:
	.ascii	"int_p_sep_by_space\000"
.LASF10:
	.ascii	"mon_decimal_point\000"
.LASF33:
	.ascii	"am_pm_indicator\000"
.LASF64:
	.ascii	"__RAL_data_utf8_period\000"
.LASF7:
	.ascii	"grouping\000"
.LASF43:
	.ascii	"__towlower\000"
.LASF69:
	.ascii	"__RAL_data_empty_string\000"
.LASF6:
	.ascii	"thousands_sep\000"
.LASF48:
	.ascii	"name\000"
.LASF39:
	.ascii	"__toupper\000"
.LASF20:
	.ascii	"n_sep_by_space\000"
.LASF49:
	.ascii	"data\000"
.LASF14:
	.ascii	"negative_sign\000"
.LASF72:
	.ascii	"short unsigned int\000"
.LASF105:
	.ascii	"SEGGER_RTT_SetTerminal\000"
.LASF107:
	.ascii	"BufferIndex\000"
.LASF29:
	.ascii	"day_names\000"
.LASF117:
	.ascii	"SEGGER_RTT_HasData\000"
.LASF24:
	.ascii	"int_n_cs_precedes\000"
.LASF80:
	.ascii	"sName\000"
.LASF53:
	.ascii	"__locale_s\000"
.LASF140:
	.ascii	"NumBytesWritten\000"
.LASF108:
	.ascii	"SEGGER_RTT_SetFlagsUpBuffer\000"
.LASF136:
	.ascii	"NumBytesAtOnce\000"
.LASF51:
	.ascii	"__RAL_locale_t\000"
.LASF35:
	.ascii	"time_format\000"
.LASF21:
	.ascii	"p_sign_posn\000"
.LASF113:
	.ascii	"SEGGER_RTT_ConfigUpBuffer\000"
.LASF59:
	.ascii	"__RAL_ascii_ctype_map\000"
.LASF102:
	.ascii	"pRing\000"
.LASF139:
	.ascii	"NumBytesToWrite\000"
.LASF75:
	.ascii	"decode\000"
.LASF45:
	.ascii	"__mbtowc\000"
.LASF30:
	.ascii	"abbrev_day_names\000"
.LASF112:
	.ascii	"BufferSize\000"
.LASF125:
	.ascii	"SEGGER_RTT_Write\000"
.LASF96:
	.ascii	"_acDownBuffer\000"
.LASF19:
	.ascii	"n_cs_precedes\000"
.LASF40:
	.ascii	"__tolower\000"
.LASF115:
	.ascii	"SEGGER_RTT_AllocDownBuffer\000"
.LASF70:
	.ascii	"__user_set_time_of_day\000"
.LASF82:
	.ascii	"SizeOfBuffer\000"
.LASF58:
	.ascii	"__RAL_codeset_utf8\000"
.LASF54:
	.ascii	"__category\000"
.LASF0:
	.ascii	"__state\000"
.LASF109:
	.ascii	"SEGGER_RTT_SetNameDownBuffer\000"
.LASF88:
	.ascii	"acID\000"
.LASF114:
	.ascii	"SEGGER_RTT_AllocUpBuffer\000"
.LASF37:
	.ascii	"unsigned char\000"
.LASF60:
	.ascii	"__RAL_c_locale_day_names\000"
.LASF124:
	.ascii	"SEGGER_RTT_WriteString\000"
.LASF16:
	.ascii	"frac_digits\000"
.LASF78:
	.ascii	"__RAL_error_decoder_head\000"
.LASF89:
	.ascii	"MaxNumUpBuffers\000"
.LASF111:
	.ascii	"SEGGER_RTT_ConfigDownBuffer\000"
.LASF11:
	.ascii	"mon_thousands_sep\000"
.LASF46:
	.ascii	"__RAL_locale_data_t\000"
.LASF130:
	.ascii	"SEGGER_RTT_Read\000"
.LASF91:
	.ascii	"aDown\000"
.LASF127:
	.ascii	"SEGGER_RTT_WriteNoLock\000"
.LASF27:
	.ascii	"int_p_sign_posn\000"
.LASF81:
	.ascii	"pBuffer\000"
.LASF3:
	.ascii	"char\000"
.LASF118:
	.ascii	"SEGGER_RTT_HasKey\000"
.LASF18:
	.ascii	"p_sep_by_space\000"
.LASF138:
	.ascii	"_WriteBlocking\000"
.LASF110:
	.ascii	"SEGGER_RTT_SetNameUpBuffer\000"
.LASF85:
	.ascii	"Flags\000"
.LASF92:
	.ascii	"SEGGER_RTT_CB\000"
.LASF56:
	.ascii	"__RAL_c_locale\000"
.LASF101:
	.ascii	"Avail\000"
.LASF47:
	.ascii	"__RAL_locale_codeset_t\000"
.LASF123:
	.ascii	"SEGGER_RTT_PutCharSkipNoLock\000"
.LASF50:
	.ascii	"codeset\000"
.LASF28:
	.ascii	"int_n_sign_posn\000"
.LASF133:
	.ascii	"NumBytesRem\000"
.LASF97:
	.ascii	"_ActiveTerminal\000"
.LASF62:
	.ascii	"__RAL_c_locale_month_names\000"
.LASF38:
	.ascii	"__isctype\000"
.LASF134:
	.ascii	"_PostTerminalSwitch\000"
.LASF74:
	.ascii	"__RAL_error_decoder_s\000"
.LASF77:
	.ascii	"__RAL_error_decoder_t\000"
.LASF94:
	.ascii	"_aTerminalId\000"
.LASF15:
	.ascii	"int_frac_digits\000"
.LASF83:
	.ascii	"WrOff\000"
.LASF31:
	.ascii	"month_names\000"
.LASF119:
	.ascii	"SEGGER_RTT_WaitKey\000"
.LASF26:
	.ascii	"int_n_sep_by_space\000"
.LASF98:
	.ascii	"TerminalId\000"
.LASF144:
	.ascii	"C:\\Users\\Devan\\Documents\\SEGGER Embedded Studio"
	.ascii	" for ARM Projects\\Executable_1\000"
.LASF99:
	.ascii	"Status\000"
.LASF67:
	.ascii	"__RAL_data_utf8_plus\000"
.LASF63:
	.ascii	"__RAL_c_locale_abbrev_month_names\000"
.LASF44:
	.ascii	"__wctomb\000"
.LASF5:
	.ascii	"decimal_point\000"
	.ident	"GCC: (GNU) 9.2.1 20191025 (release) [ARM/arm-9-branch revision 277599]"
