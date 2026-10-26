s32 __builtin_delete(void *);                         /* extern */
extern s32 __vt_7AEntity;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[4];
    s32 unk10;
    s32 unk14;
} GenObj;
void func_080DCE60(GenObj *arg0, s32 arg1) {
    GenObj *temp_r1;

    arg0->unk14 = &__vt_7AEntity;
    temp_r1 = arg0->unk10;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
