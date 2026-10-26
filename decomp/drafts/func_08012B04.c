s32 LoadById__12ScriptEngineii(s32);                  /* extern */
s32 func_080D7F3C(s32);                               /* extern */
extern s32 gUnk_0300040C;

void func_08012B04(void *arg0) {
    s32 temp_r4;

    temp_r4 = arg0->unk4;
    LoadById__12ScriptEngineii(gUnk_0300040C + 8);
    func_080D7F3C(temp_r4);
}
