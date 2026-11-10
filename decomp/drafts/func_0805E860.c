typedef struct ObjE860 {
    u8 _pad[2];
    u16 unk2;
} ObjE860;
typedef struct PS860 {
    void *sp0;
    void *sp4;
} PS860;
typedef struct GenObj {
    void *unk0;
    void *unk4;
    void *unk8;
    u16 unkC;
    u16 unkE;
    u8 _p10[2];
    u8 unk12;
} GenObj;
void func_0805E860(GenObj *arg0, s32 arg1) {
    PS860 sp;
    void *obj0;
    void *vt;
    void *fn;
    volatile void *vp;

    obj0 = *(void **)arg0;
    vt = *(void **)obj0;
    {
        register void *spp __asm__("r0");
        spp = &sp;
        fn = *(void **)((u8 *)vt + 0xC);
        ((void (*)(void *, void *, s32))(fn))(spp, obj0, arg1);
    }
    __asm__ volatile("" ::: "memory");
    {
        void *v1;
        void *v0;
        v1 = sp.sp0;
        v0 = sp.sp4;
        arg0->unk4 = v1;
        arg0->unk8 = v0;
    }
    arg0->unkC = 0;
    __asm__ volatile("" ::: "memory");
    arg0->unkE = (s16)(((ObjE860 *)arg0->unk4)->unk2 << 8);
    arg0->unk12 = 1;
}
