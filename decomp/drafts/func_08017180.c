typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    u8 _pad5[11];
    s32 unk10;
    s32 unk14;
} GenObj;
void func_08017180(s32 arg0, u32 arg1, GenObj *arg2, s32 arg3, s32 arg4) {
    s32 *var_r4;
    s32 *var_r5;
    s32 temp_r0;
    u32 var_r0;
    u32 var_r1;
    u8 *var_r2;
    u8 temp_r4;
    u8 temp_r7;

    if ((arg0 != 0) && (arg1 != 0)) {
        var_r2 = arg2->unk14;
        if (var_r2 != 0) {
            temp_r0 = arg2->unk10;
            if (temp_r0 != 0) {
                temp_r7 = arg2->unk0;
                if ((u32) (arg3 + temp_r7) <= arg1) {
                    var_r5 = arg0 + (arg3 * 4) + (arg1 * arg4 * 4);
                    temp_r4 = arg2->unk1;
                    var_r0 = 0;
                    if ((u32) temp_r4 > 0U) {
                        do {
                            var_r1 = 0;
                            if ((u32) temp_r7 > 0U) {
                                var_r4 = var_r5;
                                do {
                                    *var_r4 = *((*var_r2 * 4) + temp_r0);
                                    var_r4 += 4;
                                    var_r2 += 1;
                                    var_r1 += 1;
                                } while (var_r1 < (u32) temp_r7);
                            }
                            var_r5 += arg1 * 4;
                            var_r0 += 1;
                        } while (var_r0 < (u32) temp_r4);
                    }
                }
            }
        }
    }
}
