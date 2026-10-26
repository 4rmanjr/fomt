s32 ClearUnk__12ScriptEngine(s32);                    /* extern */
s32 func_080007EC(void *, s32);                       /* extern */
extern s32 gUnk_0300040C;
extern s32 vtable_unk_080E5E64;

typedef struct GenObj {
    void *unk0;
    s32 unk4;
    struct GenObj *unk8;
    u8 _padC[232];
    struct GenObj *unkF4;
} GenObj;
void func_08011FE8(GenObj *arg0, s32 arg1) {
    GenObj *temp_r1;

    arg0->unk0 = &vtable_unk_080E5E64;
    ClearUnk__12ScriptEngine(gUnk_0300040C + 8);
    temp_r1 = arg0->unk4;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unkF4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}
