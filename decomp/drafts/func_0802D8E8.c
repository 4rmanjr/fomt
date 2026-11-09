s32 func_08025A40(void *, s32);

typedef struct V8E8 { u8 _pad[0x140]; void *f140; } V8E8;
typedef struct H8E8 { V8E8 *vt; } H8E8;
typedef struct PS8 { s32 sp0; s32 sp4; } PS8;
typedef struct GenObj {
    u8 _pad0[4];
    u16 unk4;
} GenObj;
void func_0802D8E8(GenObj *arg0, GenObj *arg1) {
    PS8 sp;
    s32 sp8v;
    s32 var_r2;
    s32 var_r3;
    s32 var_r4;
    register GenObj *a5 __asm__("r5");
    void *temp_r0;

    a5 = arg0;
    var_r3 = 0;
    sp8v = var_r3;
    var_r4 = 0;
    if (arg1 != 0) {
        var_r3 = *(u16 *)arg1;
        sp8v = *(u16 *)((u8 *)arg1 + 4);
        var_r4 = *(u16 *)((u8 *)arg1 + 8);
    }
    if (*(u8 *)((u8 *)a5 + 0xC3) != 0) {
        {
            register u8 *q __asm__("r1");
            q = (u8 *)a5 + 0x3C;
            *q = 0;
        }
        return;
    }
    var_r2 = ((u32)(var_r3 << 0x1E) >> 0x1F);
    var_r2 = var_r2 | ((u32)(var_r3 << 0x16) >> 0x1F);
    if (var_r2 != 0) {
        if ((((u32)(var_r4 << 0x19) >> 0x1F) | ((u32)(var_r4 << 0x1A) >> 0x1F)) != 0) {
            func_08025A40(a5, 1);
            return;
        }
        var_r2 = ((u32)(var_r4 << 0x18) >> 0x1F) | ((u32)(var_r4 << 0x1B) >> 0x1F);
        {
            register s32 tmp0 __asm__("r0");
            tmp0 = ((u32)(sp8v << 0x1E) >> 0x1F) | var_r2;
            var_r4 = ((u32)(sp8v << 0x16) >> 0x1F) | tmp0;
        }
        if (var_r4 != 0) {
            func_08025A40(a5, 0);
            return;
        }
        var_r2 = 1 & *(u8 *)&sp8v;
        if (var_r2 != 0) {
            temp_r0 = *(void **)a5;
            {
                void **vtp;
                void *fn;
                vtp = (void **)((u8 *)(((H8E8 *)temp_r0)->vt) + 0x140);
                sp.sp0 = 0x3CE;
                sp.sp4 = var_r4;
                fn = *vtp;
                ((void (*)(void *, void *, s32))(fn))(temp_r0, &sp, 0);
            }
            {
                register u8 *qq __asm__("r0");
                qq = (u8 *)a5;
                qq += 0x3C;
                *qq = (u8)var_r4;
            }
            return;
        }
        if (1 & *((u8 *)&sp8v + 1)) {
            goto block_12;
        }
    } else {
block_12:
        {
            register u8 *qq __asm__("r0");
            qq = (u8 *)a5;
            qq += 0x3C;
            *qq = (u8)var_r2;
        }
    }
}
