s32 func_08008B6C(s32, s32);
s32 func_08008CD0(s32);

typedef struct VtC908 { u8 _pad[0x14C]; void *unk14C; } VtC908;
typedef struct HC908 { VtC908 *vt; } HC908;
typedef struct PairObj { s32 *beg; s32 *end; } PairObj;
typedef struct GenObj {
    HC908 *unk0;
    u8 _pad4[0x3C];
    u8 unk40;
    u8 unk41;
    u8 unk42;
} GenObj;
void func_0802C908(GenObj *arg0) {
    register GenObj *a0 __asm__("r4");
    register u8 *pa __asm__("r3");
    register u8 *pb __asm__("r2");
    register s32 t41 __asm__("r0");
    s32 *p;
    s32 *end;
    s32 var_r0;
    PairObj *obj;
    HC908 *o;

    a0 = arg0;
    pa = (u8 *)a0 + 0x41;
    t41 = *pa;
    if (t41 != 0) {
        pb = (u8 *)a0 + 0x40;
        if ((s32) *pb < (s32) (t41 - 1)) {
            register u8 *pc __asm__("r1");
            s32 t42;
            s32 t40;
            pc = (u8 *)a0 + 0x42;
            t42 = *pc + 1;
            *pc = t42;
            if ((u8)t42 != 0x14) {
                goto rest;
            }
            *pc = 0;
            t40 = *pb + 1;
            *pb = t40;
            if ((u8)t40 != 5) {
                goto rest;
            }
            o = a0->unk0;
            obj = ((PairObj *(*)(HC908 *))(o->vt->unk14C))(o);
            p = obj->beg;
            end = obj->end;
            if (p == end) {
                goto block_8;
            }
loop_5:
            if ((func_08008CD0(*p) << 0x18) != 0) {
                p += 1;
                if (p != end) {
                    goto loop_5;
                }
                goto block_8;
            }
            var_r0 = *p;
            goto after;
block_8:
            var_r0 = *(end - 1);
after:
            func_08008B6C(var_r0, 0xB8);
        }
    }
rest:;
}
