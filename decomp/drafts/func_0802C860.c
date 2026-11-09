s32 GetId__C4Tool(s32);
s32 GetTool__C9ToolStack(s32);
s32 func_08008B6C(s32, s32);
s32 func_08008CD0(s32);
s8 func_0800E550(s32, s32);
s32 func_08025B10(void *);

typedef struct VtC860 { u8 _pad[0x14C]; void *unk14C; } VtC860;
typedef struct HC860 { VtC860 *vt; } HC860;
struct GenObj__func_0802A510;
void func_0802A510(struct GenObj__func_0802A510 *);
typedef struct PairObj { s32 *beg; s32 *end; } PairObj;
typedef struct GenObj {
    HC860 *unk0;
    u8 _pad4[0x10];
    void *unk14;
    u8 _pad18[0x24];
    s32 unk38;
} GenObj;
void func_0802C860(GenObj *arg0) {
    register GenObj *a0 __asm__("r6");
    s8 sp0;
    s32 *p;
    s32 *end;
    s32 var_r0;
    s32 temp_r4;
    PairObj *obj;
    HC860 *o;
    register void *idx __asm__("r4");
    register s32 neg2 __asm__("r5");
    s32 res;

    a0 = arg0;
    {
        register u8 *b __asm__("r1");
        b = (u8 *)a0;
        b += 0x3C;
        *b = 0xA;
        b += 1;
        __asm__ volatile("" : "+r"(b));
        *b = 0x14;
    }
    func_0802A510((struct GenObj__func_0802A510 *)a0);
    o = a0->unk0;
    obj = ((PairObj *(*)(HC860 *))(o->vt->unk14C))(o);
    p = obj->beg;
    end = obj->end;
    if (p == end) goto block_8;
loop_1:
    if ((func_08008CD0(*p) << 0x18) == 0) goto found;
    p += 1;
    if (p != end) goto loop_1;
    goto block_8;
block_8:
    var_r0 = *(end - 1);
    goto after;
after:
    ;
    func_08008B6C(var_r0, 0xBC);
    temp_r4 = *(s32 *)((u8 *)a0 + 0x38);
    sp0 = func_0800E550(temp_r4, GetTool__C9ToolStack(temp_r4 + 0x5C));
    if (GetId__C4Tool((s32)&sp0) != 0x4D) goto path_else;
    idx = a0->unk14;
    neg2 = -2;
    res = func_08025B10(a0);
    ((void (*)(void *, s32, s32))(*(void **)((u8 *)idx + 0x64)))(a0, neg2, res);
    return;
found:
    var_r0 = *p;
    goto after;
path_else:
    idx = a0->unk14;
    res = func_08025B10(a0);
    ((void (*)(void *, s32, s32))(*(void **)((u8 *)idx + 0x64)))(a0, 0, res);
}
