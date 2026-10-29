    .INCLUDE "asm/macro.inc"
    .SYNTAX UNIFIED

    thumb_func_start func_0800063C
func_0800063C: @ 0x0800063C
    bx lr
    .align 2, 0

    thumb_func_start func_08000640
func_08000640: @ 0x08000640
    push {lr}
    adds r3, r0, #0
    ldr r2, .L0800065C @ =gUnk_03000402
    ldrb r1, [r2]
    cmp r1, #0
    bne .L08000654
    movs r0, #1
    strb r0, [r2]
    ldr r0, .L08000660 @ =gUnk_03000400
    strh r1, [r0]
.L08000654:
    adds r0, r3, #0
    pop {r1}
    bx r1
    .align 2, 0
.L0800065C: .4byte gUnk_03000402
.L08000660: .4byte gUnk_03000400
.L08000664:
    .byte 0x70, 0xB5, 0x82, 0xB0, 0x06, 0x1C, 0x00, 0x22, 0xFF, 0x23, 0x69, 0x46
    .byte 0x88, 0x18, 0x01, 0x78, 0x19, 0x43, 0x01, 0x70, 0x50, 0x1C, 0x00, 0x06, 0x02, 0x0E, 0x07, 0x2A
    .byte 0xF5, 0xD9, 0x00, 0x24, 0x80, 0x25, 0x2D, 0x02, 0x30, 0x1C, 0x21, 0x1C, 0x6A, 0x46, 0x08, 0x23
    .byte 0x00, 0xF0, 0x08, 0xF8, 0x08, 0x34, 0xAC, 0x42, 0xF6, 0xD3, 0x01, 0x20, 0x02, 0xB0, 0x70, 0xBC
    .byte 0x02, 0xBC, 0x08, 0x47

    thumb_func_start func_080006A4
func_080006A4: @ 0x080006A4
    push {r4, r5, r6, r7, lr}
    adds r7, r0, #0
    adds r4, r1, #0
    adds r5, r2, #0
    adds r2, r3, #0
    ldr r1, .L080006E0 @ =gUnk_03000400
    movs r0, #0
    strh r0, [r1]
    cmp r2, #0
    beq .L080006D8
    movs r6, #1
    movs r1, #0xe0
    lsls r1, r1, #0x14
    orrs r1, r4
    adds r0, r5, #0
    bl func_080D38D4
    cmp r0, #0
    beq .L080006D6
    movs r1, #0x80
    lsls r1, r1, #1
    adds r0, r7, #0
    bl func_08000728
    movs r6, #0
.L080006D6:
    adds r0, r6, #0
.L080006D8:
    pop {r4, r5, r6, r7}
    pop {r1}
    bx r1
    .align 2, 0
.L080006E0: .4byte gUnk_03000400

    thumb_func_start func_080006E4
func_080006E4: @ 0x080006E4
    push {r4, r5, lr}
    adds r5, r1, #0
    adds r4, r2, #0
    adds r2, r3, #0
    ldr r1, .L08000708 @ =gUnk_03000400
    movs r0, #0
    strh r0, [r1]
    cmp r2, #0
    beq .L0800070C
    movs r0, #0xe0
    lsls r0, r0, #0x14
    orrs r0, r4
    adds r1, r5, #0
    bl func_080D379C
    movs r0, #1
    b .L0800070E
    .align 2, 0
.L08000708: .4byte gUnk_03000400
.L0800070C:
    movs r0, #0
.L0800070E:
    pop {r4, r5}
    pop {r1}
    bx r1
.L08000714:
    .byte 0x00, 0xB5, 0x00, 0x79, 0x03, 0x22, 0x10, 0x40, 0x03, 0x30, 0xD0, 0xF0
    .byte 0x75, 0xFC, 0x02, 0xBC, 0x08, 0x47, 0x00, 0x00

