# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08048FFC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08048FFC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08048FFC/opencode/common.h" 1
# 1 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h" 1
# 31 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h"
# 1 "/home/armanjr/gitproject/fomt/tools/agbcc/include/limits.h" 1
# 32 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h" 2



typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;



typedef signed char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef int int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long uint_fast64_t;



typedef int intptr_t;
typedef unsigned int uintptr_t;



typedef long long intmax_t;
typedef unsigned long long uintmax_t;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08048FFC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08048FFC/opencode/func.c" 2
s32 AddStocking__9FarmHouse(void *);
s32 AddStoredBushels__4BarnUi(s32);
s32 AddStoredBushels__4CoopUi(s32);
s32 AddVase__9FarmHouse(s32);
s32 GetStoredBushelCount__C4Barn(s32);
s32 GetStoredBushelCount__C4Coop(s32);
s32 GetUnk10__C4Farm(s32);
s32 GetUnkFlag11__C4Farm(s32);
s32 HasVase__C9FarmHouse(s32);
s32 SetFestivalWinner__6Animal();
s32 SetStockingArticleId__9FarmHouseUi(void *, u8);
s32 SubtractStoredBushels__4BarnUi(s32, s32);
s32 SubtractStoredBushels__4CoopUi(s32, s32);
s32 func_080125EC();
s32 func_08016834(s32, s32, s32);
s32 func_080168D4(s32, s32);
s32 func_08016AFC(s32, s32);
s32 func_08016C10();
s32 func_08045638(void *, s32, s32, u8);
s32 func_0804590C(void *, u16);
s32 func_0804E3D8(void *, s32, s32);
s32 func_0809C600(void *, u16);
s32 func_0809C644(void *, u16);
s32 func_0809EAE0();
s32 func_0809EAEC(s32);
s32 func_080A03A4(void *, u8);
s32 func_080A0A04(s32);
s32 method_08009B68__4FarmUi(s32);
s32 method_08009BAC__4FarmUi(s32, s32);
s32 method_08009C60__4Farm(s32);

void func_08048FFC(void *arg0, u16 arg1, u8 arg2) {
    s8 sp4;
    s16 *var_r1_6;
    s32 *var_r0_2;
    s32 *var_r3_2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r0_9;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r2_9;
    s32 temp_sb;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r1_5;
    s32 var_r1_7;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_4;
    s32 var_r2_5;
    s32 var_r2_8;
    s32 var_r2_9;
    s32 var_r3;
    s32 var_r3_3;
    u16 var_r2_6;
    u32 temp_r1;
    u32 temp_r1_407;
    u32 var_r0;
    u32 var_r1_8;
    u8 *var_r1;
    u8 *var_r3_4;
    u8 var_r2_3;
    u8 var_r2_7;
    void *temp_r1_100;
    void *temp_r1_101;
    void *temp_r1_102;
    void *temp_r1_103;
    void *temp_r1_104;
    void *temp_r1_105;
    void *temp_r1_106;
    void *temp_r1_107;
    void *temp_r1_108;
    void *temp_r1_109;
    void *temp_r1_10;
    void *temp_r1_110;
    void *temp_r1_111;
    void *temp_r1_112;
    void *temp_r1_113;
    void *temp_r1_114;
    void *temp_r1_115;
    void *temp_r1_116;
    void *temp_r1_117;
    void *temp_r1_118;
    void *temp_r1_119;
    void *temp_r1_11;
    void *temp_r1_120;
    void *temp_r1_121;
    void *temp_r1_122;
    void *temp_r1_123;
    void *temp_r1_124;
    void *temp_r1_125;
    void *temp_r1_126;
    void *temp_r1_127;
    void *temp_r1_128;
    void *temp_r1_129;
    void *temp_r1_12;
    void *temp_r1_130;
    void *temp_r1_131;
    void *temp_r1_132;
    void *temp_r1_133;
    void *temp_r1_134;
    void *temp_r1_135;
    void *temp_r1_136;
    void *temp_r1_137;
    void *temp_r1_138;
    void *temp_r1_139;
    void *temp_r1_13;
    void *temp_r1_140;
    void *temp_r1_141;
    void *temp_r1_142;
    void *temp_r1_143;
    void *temp_r1_144;
    void *temp_r1_145;
    void *temp_r1_146;
    void *temp_r1_147;
    void *temp_r1_148;
    void *temp_r1_149;
    void *temp_r1_14;
    void *temp_r1_150;
    void *temp_r1_151;
    void *temp_r1_152;
    void *temp_r1_153;
    void *temp_r1_154;
    void *temp_r1_155;
    void *temp_r1_156;
    void *temp_r1_157;
    void *temp_r1_158;
    void *temp_r1_159;
    void *temp_r1_15;
    void *temp_r1_160;
    void *temp_r1_161;
    void *temp_r1_162;
    void *temp_r1_163;
    void *temp_r1_164;
    void *temp_r1_165;
    void *temp_r1_166;
    void *temp_r1_167;
    void *temp_r1_168;
    void *temp_r1_169;
    void *temp_r1_16;
    void *temp_r1_170;
    void *temp_r1_171;
    void *temp_r1_172;
    void *temp_r1_173;
    void *temp_r1_174;
    void *temp_r1_175;
    void *temp_r1_176;
    void *temp_r1_177;
    void *temp_r1_178;
    void *temp_r1_179;
    void *temp_r1_17;
    void *temp_r1_180;
    void *temp_r1_181;
    void *temp_r1_182;
    void *temp_r1_183;
    void *temp_r1_184;
    void *temp_r1_185;
    void *temp_r1_186;
    void *temp_r1_187;
    void *temp_r1_188;
    void *temp_r1_189;
    void *temp_r1_18;
    void *temp_r1_190;
    void *temp_r1_191;
    void *temp_r1_192;
    void *temp_r1_193;
    void *temp_r1_194;
    void *temp_r1_195;
    void *temp_r1_196;
    void *temp_r1_197;
    void *temp_r1_198;
    void *temp_r1_199;
    void *temp_r1_19;
    void *temp_r1_200;
    void *temp_r1_201;
    void *temp_r1_202;
    void *temp_r1_203;
    void *temp_r1_204;
    void *temp_r1_205;
    void *temp_r1_206;
    void *temp_r1_207;
    void *temp_r1_208;
    void *temp_r1_209;
    void *temp_r1_20;
    void *temp_r1_210;
    void *temp_r1_211;
    void *temp_r1_212;
    void *temp_r1_213;
    void *temp_r1_214;
    void *temp_r1_215;
    void *temp_r1_216;
    void *temp_r1_217;
    void *temp_r1_218;
    void *temp_r1_219;
    void *temp_r1_21;
    void *temp_r1_220;
    void *temp_r1_221;
    void *temp_r1_222;
    void *temp_r1_223;
    void *temp_r1_224;
    void *temp_r1_225;
    void *temp_r1_226;
    void *temp_r1_227;
    void *temp_r1_228;
    void *temp_r1_229;
    void *temp_r1_22;
    void *temp_r1_230;
    void *temp_r1_231;
    void *temp_r1_232;
    void *temp_r1_233;
    void *temp_r1_234;
    void *temp_r1_235;
    void *temp_r1_236;
    void *temp_r1_237;
    void *temp_r1_238;
    void *temp_r1_239;
    void *temp_r1_23;
    void *temp_r1_240;
    void *temp_r1_241;
    void *temp_r1_242;
    void *temp_r1_243;
    void *temp_r1_244;
    void *temp_r1_245;
    void *temp_r1_246;
    void *temp_r1_247;
    void *temp_r1_248;
    void *temp_r1_249;
    void *temp_r1_24;
    void *temp_r1_250;
    void *temp_r1_251;
    void *temp_r1_252;
    void *temp_r1_253;
    void *temp_r1_254;
    void *temp_r1_255;
    void *temp_r1_256;
    void *temp_r1_257;
    void *temp_r1_258;
    void *temp_r1_259;
    void *temp_r1_25;
    void *temp_r1_260;
    void *temp_r1_261;
    void *temp_r1_262;
    void *temp_r1_263;
    void *temp_r1_264;
    void *temp_r1_265;
    void *temp_r1_266;
    void *temp_r1_267;
    void *temp_r1_268;
    void *temp_r1_269;
    void *temp_r1_26;
    void *temp_r1_270;
    void *temp_r1_271;
    void *temp_r1_272;
    void *temp_r1_273;
    void *temp_r1_274;
    void *temp_r1_275;
    void *temp_r1_276;
    void *temp_r1_277;
    void *temp_r1_278;
    void *temp_r1_279;
    void *temp_r1_27;
    void *temp_r1_280;
    void *temp_r1_281;
    void *temp_r1_282;
    void *temp_r1_283;
    void *temp_r1_284;
    void *temp_r1_285;
    void *temp_r1_286;
    void *temp_r1_287;
    void *temp_r1_288;
    void *temp_r1_289;
    void *temp_r1_28;
    void *temp_r1_290;
    void *temp_r1_291;
    void *temp_r1_292;
    void *temp_r1_293;
    void *temp_r1_294;
    void *temp_r1_295;
    void *temp_r1_296;
    void *temp_r1_297;
    void *temp_r1_298;
    void *temp_r1_299;
    void *temp_r1_29;
    void *temp_r1_300;
    void *temp_r1_301;
    void *temp_r1_302;
    void *temp_r1_303;
    void *temp_r1_304;
    void *temp_r1_305;
    void *temp_r1_306;
    void *temp_r1_307;
    void *temp_r1_308;
    void *temp_r1_309;
    void *temp_r1_30;
    void *temp_r1_310;
    void *temp_r1_311;
    void *temp_r1_312;
    void *temp_r1_313;
    void *temp_r1_314;
    void *temp_r1_315;
    void *temp_r1_316;
    void *temp_r1_317;
    void *temp_r1_318;
    void *temp_r1_319;
    void *temp_r1_31;
    void *temp_r1_320;
    void *temp_r1_321;
    void *temp_r1_322;
    void *temp_r1_323;
    void *temp_r1_324;
    void *temp_r1_325;
    void *temp_r1_326;
    void *temp_r1_327;
    void *temp_r1_328;
    void *temp_r1_329;
    void *temp_r1_32;
    void *temp_r1_330;
    void *temp_r1_331;
    void *temp_r1_332;
    void *temp_r1_333;
    void *temp_r1_334;
    void *temp_r1_335;
    void *temp_r1_336;
    void *temp_r1_337;
    void *temp_r1_338;
    void *temp_r1_339;
    void *temp_r1_33;
    void *temp_r1_340;
    void *temp_r1_341;
    void *temp_r1_342;
    void *temp_r1_343;
    void *temp_r1_344;
    void *temp_r1_345;
    void *temp_r1_346;
    void *temp_r1_347;
    void *temp_r1_348;
    void *temp_r1_349;
    void *temp_r1_34;
    void *temp_r1_350;
    void *temp_r1_351;
    void *temp_r1_352;
    void *temp_r1_353;
    void *temp_r1_354;
    void *temp_r1_355;
    void *temp_r1_356;
    void *temp_r1_357;
    void *temp_r1_358;
    void *temp_r1_359;
    void *temp_r1_35;
    void *temp_r1_360;
    void *temp_r1_361;
    void *temp_r1_362;
    void *temp_r1_363;
    void *temp_r1_364;
    void *temp_r1_365;
    void *temp_r1_366;
    void *temp_r1_367;
    void *temp_r1_368;
    void *temp_r1_369;
    void *temp_r1_36;
    void *temp_r1_370;
    void *temp_r1_371;
    void *temp_r1_372;
    void *temp_r1_373;
    void *temp_r1_374;
    void *temp_r1_375;
    void *temp_r1_376;
    void *temp_r1_377;
    void *temp_r1_378;
    void *temp_r1_379;
    void *temp_r1_37;
    void *temp_r1_380;
    void *temp_r1_381;
    void *temp_r1_382;
    void *temp_r1_383;
    void *temp_r1_384;
    void *temp_r1_385;
    void *temp_r1_386;
    void *temp_r1_387;
    void *temp_r1_388;
    void *temp_r1_389;
    void *temp_r1_38;
    void *temp_r1_390;
    void *temp_r1_391;
    void *temp_r1_392;
    void *temp_r1_393;
    void *temp_r1_394;
    void *temp_r1_395;
    void *temp_r1_396;
    void *temp_r1_397;
    void *temp_r1_398;
    void *temp_r1_399;
    void *temp_r1_39;
    void *temp_r1_400;
    void *temp_r1_401;
    void *temp_r1_402;
    void *temp_r1_403;
    void *temp_r1_404;
    void *temp_r1_405;
    void *temp_r1_406;
    void *temp_r1_40;
    void *temp_r1_41;
    void *temp_r1_42;
    void *temp_r1_43;
    void *temp_r1_44;
    void *temp_r1_45;
    void *temp_r1_46;
    void *temp_r1_47;
    void *temp_r1_48;
    void *temp_r1_49;
    void *temp_r1_50;
    void *temp_r1_51;
    void *temp_r1_52;
    void *temp_r1_53;
    void *temp_r1_54;
    void *temp_r1_55;
    void *temp_r1_56;
    void *temp_r1_57;
    void *temp_r1_58;
    void *temp_r1_59;
    void *temp_r1_5;
    void *temp_r1_60;
    void *temp_r1_61;
    void *temp_r1_62;
    void *temp_r1_63;
    void *temp_r1_64;
    void *temp_r1_65;
    void *temp_r1_66;
    void *temp_r1_67;
    void *temp_r1_68;
    void *temp_r1_69;
    void *temp_r1_6;
    void *temp_r1_70;
    void *temp_r1_71;
    void *temp_r1_72;
    void *temp_r1_73;
    void *temp_r1_74;
    void *temp_r1_75;
    void *temp_r1_76;
    void *temp_r1_77;
    void *temp_r1_78;
    void *temp_r1_79;
    void *temp_r1_7;
    void *temp_r1_80;
    void *temp_r1_81;
    void *temp_r1_82;
    void *temp_r1_83;
    void *temp_r1_84;
    void *temp_r1_85;
    void *temp_r1_86;
    void *temp_r1_87;
    void *temp_r1_88;
    void *temp_r1_89;
    void *temp_r1_8;
    void *temp_r1_90;
    void *temp_r1_91;
    void *temp_r1_92;
    void *temp_r1_93;
    void *temp_r1_94;
    void *temp_r1_95;
    void *temp_r1_96;
    void *temp_r1_97;
    void *temp_r1_98;
    void *temp_r1_99;
    void *temp_r1_9;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r2_6;
    void *temp_r2_7;
    void *temp_r2_8;
    void *temp_r3;
    void *temp_r3_10;
    void *temp_r3_11;
    void *temp_r3_12;
    void *temp_r3_13;
    void *temp_r3_14;
    void *temp_r3_15;
    void *temp_r3_16;
    void *temp_r3_17;
    void *temp_r3_18;
    void *temp_r3_19;
    void *temp_r3_20;
    void *temp_r3_21;
    void *temp_r3_22;
    void *temp_r3_23;
    void *temp_r3_24;
    void *temp_r3_25;
    void *temp_r3_26;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_8;
    void *temp_r3_9;

    temp_sb = func_0804590C();
    temp_r1 = arg1 - 0x1C;
    switch (temp_r1) {
    case 0xF:
        if ((arg2 == 0) && ((GetUnkFlag11__C4Farm(arg0->unk350 + 0x14) << 0x18) != 0)) {
            method_08009C60__4Farm(arg0->unk350 + 0x14);
        }
        break;
    case 0xC:
        temp_r1_2 = arg2 - GetUnk10__C4Farm(arg0->unk350 + 0x14);
        if (temp_r1_2 >= 0) {
            method_08009B68__4FarmUi(arg0->unk350 + 0x14);
        } else {
            method_08009BAC__4FarmUi(arg0->unk350 + 0x14, 0 - temp_r1_2);
        }
        break;
    case 0xD:
        temp_r1_3 = arg2 - GetStoredBushelCount__C4Barn(arg0->unk350 + 0x5F0);
        if (temp_r1_3 >= 0) {
            AddStoredBushels__4BarnUi(arg0->unk350 + 0x5F0);
        } else {
            SubtractStoredBushels__4BarnUi(arg0->unk350 + 0x5F0, 0 - temp_r1_3);
        }
        break;
    case 0xE:
        temp_r1_4 = arg2 - GetStoredBushelCount__C4Coop(arg0->unk350 + 0x410);
        if (temp_r1_4 >= 0) {
            AddStoredBushels__4CoopUi(arg0->unk350 + 0x410);
        } else {
            SubtractStoredBushels__4CoopUi(arg0->unk350 + 0x410, 0 - temp_r1_4);
        }
        break;
    case 0x19:
        var_r0 = (u32) ((0 - arg2) | arg2) >> 0x1F;
        var_r1 = arg0->unk350 + 0x2148;
block_578:
        *var_r1 = (u8) var_r0;
        break;
    case 0x13:
        temp_r0 = func_080A0A04(arg0->unk350 + 0x1CD4);
        if ((temp_r0 != 0) && (arg2 != 0) && ((func_0809EAE0() << 0x18) == 0)) {
            func_0809EAEC(temp_r0);
        }
        break;
    case 0x0:
        if (((HasVase__C9FarmHouse(arg0->unk350 + 0x1F4) << 0x18) == 0) && (arg2 != 0)) {
            AddVase__9FarmHouse(arg0->unk350 + 0x1F4);
        }
        break;
    case 0x177:
        temp_r2 = arg0->unk350;
        temp_r2->unk219C = (u8) ((-0x11 & temp_r2->unk219C) | ((arg2 & 1) * 0x10));
        if (arg2 != 0) {
            if (arg0->unk354 != 0) {
                var_r1_2 = 4;
block_32:
                func_08016834(arg0->unk354, var_r1_2, 0);
            }
        } else {
            temp_r0_2 = arg0->unk354;
            if (temp_r0_2 != 0) {
                func_080168D4(temp_r0_2, 4);
            }
        }
        break;
    case 0x16C:
        temp_r2_2 = arg0->unk350;
        temp_r2_2->unk219A = (u8) ((-3 & temp_r2_2->unk219A) | ((arg2 & 1) * 2));
        if (arg2 == 0) {
block_33:
            temp_r0_3 = arg0->unk354;
            if (temp_r0_3 != 0) {
                func_080168D4(temp_r0_3, 0);
            }
        } else {
block_30:
            if (arg0->unk354 != 0) {
                var_r1_2 = 0;
                goto block_32;
            }
        }
        break;
    case 0x18F:
        temp_r2_3 = arg0->unk350;
        temp_r2_3->unk21A1 = (u8) ((-5 & temp_r2_3->unk21A1) | ((arg2 & 1) * 4));
        if (arg2 != 0) {
            goto block_30;
        }
        goto block_33;
    case 0x2:
        AddStocking__9FarmHouse(arg0->unk350 + 0x1F4);
        var_r0_2 = arg0 + 0x354;
block_37:
        if (*var_r0_2 != 0) {
            func_08016C10();
        }
        break;
    case 0x3:
        SetStockingArticleId__9FarmHouseUi(arg0->unk350 + 0x1F4, arg2);
        var_r0_2 = arg0 + 0x354;
        goto block_37;
    case 0x231:
        func_080A03A4(arg0->unk350 + 0x1CD4, arg2);
        break;
    case 0x16E:
        temp_r2_4 = arg0->unk350;
        temp_r2_4->unk219A = (u8) ((-0x11 & temp_r2_4->unk219A) | ((arg2 & 1) * 0x10));
        if (arg2 != 0) {
            temp_r0_4 = arg0->unk354;
            if (temp_r0_4 != 0) {
                var_r2 = func_08016AFC(temp_r0_4, 0);
                var_r1_3 = 0;
block_58:
                if (func_0804E3D8(arg0, var_r1_3, var_r2) != 0) {
                    SetFestivalWinner__6Animal();
                }
            }
        }
        break;
    case 0x179:
        temp_r1_5 = arg0->unk350;
        temp_r1_5->unk219C = (u8) ((0x7F & temp_r1_5->unk219C) | (arg2 << 7));
        if (arg2 != 0) {
            temp_r0_5 = arg0->unk354;
            if (temp_r0_5 != 0) {
                var_r2 = func_08016AFC(temp_r0_5, 4);
                var_r1_3 = 4;
                goto block_58;
            }
        }
        break;
    case 0x17D:
        temp_r2_5 = arg0->unk350;
        temp_r2_5->unk219D = (u8) ((-0x21 & temp_r2_5->unk219D) | ((arg2 & 1) << 5));
        if (arg2 != 0) {
            temp_r0_6 = arg0->unk354;
            if (temp_r0_6 != 0) {
                var_r2 = func_08016AFC(temp_r0_6, 3);
                var_r1_3 = 3;
                goto block_58;
            }
        }
        break;
    case 0x181:
        temp_r2_6 = arg0->unk350;
        temp_r2_6->unk219E = (u8) ((-9 & temp_r2_6->unk219E) | ((arg2 & 1) * 8));
        if (arg2 != 0) {
            temp_r0_7 = arg0->unk354;
            if (temp_r0_7 != 0) {
                var_r2 = func_08016AFC(temp_r0_7, 1);
                var_r1_3 = 1;
                goto block_58;
            }
        }
        break;
    case 0x191:
        temp_r2_7 = arg0->unk350;
        temp_r2_7->unk21A1 = (u8) ((-0x21 & temp_r2_7->unk21A1) | ((arg2 & 1) << 5));
        if (arg2 != 0) {
            temp_r0_8 = arg0->unk354;
            if (temp_r0_8 != 0) {
                var_r2 = func_08016AFC(temp_r0_8, 0);
                var_r1_3 = 0;
                goto block_58;
            }
        }
        break;
    case 0x195:
        temp_r2_8 = arg0->unk350;
        temp_r2_8->unk21A2 = (u8) ((-9 & temp_r2_8->unk21A2) | ((arg2 & 1) * 8));
        if (arg2 != 0) {
            temp_r0_9 = arg0->unk354;
            if (temp_r0_9 != 0) {
                var_r2 = func_08016AFC(temp_r0_9, 2);
                var_r1_3 = 2;
                goto block_58;
            }
        }
        break;
    case 0x2A:
        sp4 = 0;
        var_r1_4 = 0x46;
        var_r2_2 = 0x13;
block_124:
        func_08045638(arg0, var_r1_4, var_r2_2, arg2);
        break;
    case 0x2B:
        sp4 = 0;
        var_r1_4 = 0x47;
        var_r2_2 = 0x13;
        goto block_124;
    case 0x2D:
        sp4 = 0;
        var_r1_4 = 0x49;
        var_r2_2 = 0x13;
        goto block_124;
    case 0x2E:
        sp4 = 0;
        var_r1_4 = 0x4A;
        var_r2_2 = 0x13;
        goto block_124;
    case 0x2F:
        sp4 = 0;
        var_r1_4 = 0x4B;
        var_r2_2 = 0x13;
        goto block_124;
    case 0x30:
        sp4 = 0;
        var_r1_4 = 0x4C;
        var_r2_2 = 0x13;
        goto block_124;
    case 0x32:
        sp4 = 0;
        var_r1_4 = 0x4E;
        var_r2_2 = 3;
        goto block_124;
    case 0x33:
        sp4 = 0;
        var_r1_4 = 0x4F;
        var_r2_2 = 3;
        goto block_124;
    case 0x34:
        sp4 = 0;
        var_r1_4 = 0x50;
        var_r2_2 = 3;
        goto block_124;
    case 0x36:
        sp4 = 0;
        var_r1_4 = 0x52;
        var_r2_2 = 3;
        goto block_124;
    case 0x38:
        sp4 = 0;
        var_r1_4 = 0x54;
        var_r2_2 = 3;
        goto block_124;
    case 0x39:
        sp4 = 0;
        var_r1_4 = 0x55;
        var_r2_2 = 3;
        goto block_124;
    case 0x3B:
        sp4 = 0;
        var_r1_4 = 0x57;
        var_r2_2 = 0x19;
        goto block_124;
    case 0x3C:
        sp4 = 0;
        var_r1_4 = 0x58;
        var_r2_2 = 0x19;
        goto block_124;
    case 0x3E:
        sp4 = 0;
        var_r1_4 = 0x5A;
        var_r2_2 = 0x19;
        goto block_124;
    case 0x40:
        sp4 = 0;
        var_r1_4 = 0x5C;
        var_r2_2 = 0x19;
        goto block_124;
    case 0x42:
        sp4 = 0;
        var_r1_4 = 0x5E;
        var_r2_2 = 0x19;
        goto block_124;
    case 0x43:
        sp4 = 0;
        var_r1_4 = 0x5F;
        var_r2_2 = 0x19;
        goto block_124;
    case 0x45:
        sp4 = 0;
        var_r1_4 = 0x61;
        var_r2_2 = 0xC;
        goto block_124;
    case 0x46:
        sp4 = 0;
        var_r1_4 = 0x62;
        var_r2_2 = 0xC;
        goto block_124;
    case 0x48:
        sp4 = 0;
        var_r1_4 = 0x64;
        var_r2_2 = 0xC;
        goto block_124;
    case 0x49:
        sp4 = 0;
        var_r1_4 = 0x65;
        var_r2_2 = 0xC;
        goto block_124;
    case 0x4A:
        sp4 = 0;
        var_r1_4 = 0x66;
        var_r2_2 = 0xC;
        goto block_124;
    case 0x4B:
        sp4 = 0;
        var_r1_4 = 0x67;
        var_r2_2 = 0xC;
        goto block_124;
    case 0x4D:
        sp4 = 0;
        var_r1_4 = 0x69;
block_123:
        var_r2_2 = 0x15;
        goto block_124;
    case 0x4E:
        sp4 = 0;
        var_r1_4 = 0x6A;
        goto block_123;
    case 0x4F:
        sp4 = 0;
        var_r1_4 = 0x6B;
        goto block_123;
    case 0x51:
        sp4 = 0;
        var_r1_4 = 0x6D;
        goto block_123;
    case 0x52:
        sp4 = 0;
        var_r1_4 = 0x6E;
        goto block_123;
    case 0x53:
        sp4 = 0;
        var_r1_4 = 0x6F;
        goto block_123;
    case 0x156:
        var_r1_4 = 0x172;
        sp4 = 0;
        var_r2_2 = 0x1F;
        goto block_124;
    case 0x157:
        var_r1_4 = 0x173;
        sp4 = 0;
        var_r2_2 = 0x1F;
        goto block_124;
    case 0x55:
        sp4 = 1;
        var_r1_4 = 0x71;
        var_r2_2 = 0x13;
        goto block_124;
    case 0x56:
        sp4 = 1;
        var_r1_4 = 0x72;
        var_r2_2 = 0x13;
        goto block_124;
    case 0x57:
        sp4 = 1;
        var_r1_4 = 0x73;
        var_r2_2 = 0x13;
        goto block_124;
    case 0x58:
        sp4 = 1;
        var_r1_4 = 0x74;
        var_r2_2 = 0x13;
        goto block_124;
    case 0x59:
        sp4 = 1;
        var_r1_4 = 0x75;
        var_r2_2 = 0x13;
        goto block_124;
    case 0x5A:
        sp4 = 1;
        var_r1_4 = 0x76;
        var_r2_2 = 0x13;
        goto block_124;
    case 0x5B:
        sp4 = 1;
        var_r1_4 = 0x77;
        var_r2_2 = 0x13;
        goto block_124;
    case 0x5E:
        sp4 = 1;
        var_r1_4 = 0x7A;
        var_r2_2 = 3;
        goto block_124;
    case 0x5F:
        sp4 = 1;
        var_r1_4 = 0x7B;
        var_r2_2 = 3;
        goto block_124;
    case 0x60:
        sp4 = 1;
        var_r1_4 = 0x7C;
        var_r2_2 = 3;
        goto block_124;
    case 0x61:
        sp4 = 1;
        var_r1_4 = 0x7D;
        var_r2_2 = 3;
        goto block_124;
    case 0x62:
        sp4 = 1;
        var_r1_4 = 0x7E;
        var_r2_2 = 3;
        goto block_124;
    case 0x63:
        sp4 = 1;
        var_r1_4 = 0x7F;
        var_r2_2 = 3;
        goto block_124;
    case 0x66:
        sp4 = 1;
        var_r1_4 = 0x82;
        var_r2_2 = 0x19;
        goto block_124;
    case 0x67:
        sp4 = 1;
        var_r1_4 = 0x83;
        var_r2_2 = 0x19;
        goto block_124;
    case 0x68:
        sp4 = 1;
        var_r1_4 = 0x84;
        var_r2_2 = 0x19;
        goto block_124;
    case 0x69:
        sp4 = 1;
        var_r1_4 = 0x85;
        var_r2_2 = 0x19;
        goto block_124;
    case 0x6A:
        sp4 = 1;
        var_r1_4 = 0x86;
        var_r2_2 = 0x19;
        goto block_124;
    case 0x6B:
        sp4 = 1;
        var_r1_4 = 0x87;
        var_r2_2 = 0x19;
        goto block_124;
    case 0x6E:
        sp4 = 1;
        var_r1_4 = 0x8A;
        var_r2_2 = 0xC;
        goto block_124;
    case 0x6F:
        sp4 = 1;
        var_r1_4 = 0x8B;
        var_r2_2 = 0xC;
        goto block_124;
    case 0x70:
        sp4 = 1;
        var_r1_4 = 0x8C;
        var_r2_2 = 0xC;
        goto block_124;
    case 0x71:
        sp4 = 1;
        var_r1_4 = 0x8D;
        var_r2_2 = 0xC;
        goto block_124;
    case 0x72:
        sp4 = 1;
        var_r1_4 = 0x8E;
        var_r2_2 = 0xC;
        goto block_124;
    case 0x73:
        sp4 = 1;
        var_r1_4 = 0x8F;
        var_r2_2 = 0xC;
        goto block_124;
    case 0x76:
        sp4 = 1;
        var_r1_4 = 0x92;
        goto block_123;
    case 0x77:
        sp4 = 1;
        var_r1_4 = 0x93;
        goto block_123;
    case 0x78:
        sp4 = 1;
        var_r1_4 = 0x94;
        goto block_123;
    case 0x79:
        sp4 = 1;
        var_r1_4 = 0x95;
        goto block_123;
    case 0x7A:
        sp4 = 1;
        var_r1_4 = 0x96;
        goto block_123;
    case 0x7B:
        sp4 = 1;
        var_r1_4 = 0x97;
        goto block_123;
    case 0x31:
        temp_r1_6 = arg0->unk350;
        var_r1 = temp_r1_6 + 0x215A;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_6->unk215A;
        var_r0_3 = -7;
block_577:
        var_r0 = (var_r0_3 & var_r2_3) | var_r3;
        goto block_578;
    case 0x3A:
        temp_r1_7 = arg0->unk350;
        var_r1 = temp_r1_7 + 0x215A;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_7->unk215A;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x44:
        temp_r1_8 = arg0->unk350;
        var_r1 = temp_r1_8 + 0x215B;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_8->unk215B;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x4C:
        temp_r1_9 = arg0->unk350;
        var_r1 = temp_r1_9 + 0x215B;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_9->unk215B;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x54:
        temp_r1_10 = arg0->unk350;
        var_r1 = temp_r1_10 + 0x215C;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_10->unk215C;
        var_r0_3 = -7;
        goto block_577;
    case 0x2C:
        temp_r1_11 = arg0->unk350;
        var_r1 = temp_r1_11 + 0x215A;
        var_r0 = (-2 & temp_r1_11->unk215A) | (arg2 & 1);
        goto block_578;
    case 0x35:
        temp_r1_12 = arg0->unk350;
        var_r1 = temp_r1_12 + 0x215A;
        var_r3 = (arg2 & 1) * 8;
        var_r2_3 = temp_r1_12->unk215A;
        var_r0_3 = -9;
        goto block_577;
    case 0x37:
        temp_r1_13 = arg0->unk350;
        var_r1 = temp_r1_13 + 0x215A;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_13->unk215A;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x3D:
        temp_r1_14 = arg0->unk350;
        var_r1 = temp_r1_14 + 0x215B;
        var_r0 = (-2 & temp_r1_14->unk215B) | (arg2 & 1);
        goto block_578;
    case 0x3F:
        temp_r1_15 = arg0->unk350;
        var_r1 = temp_r1_15 + 0x215B;
        var_r3 = (arg2 & 1) * 2;
        var_r2_3 = temp_r1_15->unk215B;
        var_r0_3 = -3;
        goto block_577;
    case 0x41:
        temp_r1_16 = arg0->unk350;
        var_r1 = temp_r1_16 + 0x215B;
        var_r3 = (arg2 & 1) * 4;
        var_r2_3 = temp_r1_16->unk215B;
        var_r0_3 = -5;
        goto block_577;
    case 0x47:
        temp_r1_17 = arg0->unk350;
        var_r1 = temp_r1_17 + 0x215B;
        var_r3 = (arg2 & 1) << 5;
        var_r2_3 = temp_r1_17->unk215B;
        var_r0_3 = -0x21;
        goto block_577;
    case 0x50:
        temp_r1_18 = arg0->unk350;
        var_r1 = temp_r1_18 + 0x215C;
        var_r0 = (-2 & temp_r1_18->unk215C) | (arg2 & 1);
        goto block_578;
    case 0x5C:
        temp_r1_19 = arg0->unk350;
        var_r1 = temp_r1_19 + 0x215C;
        var_r3 = (arg2 & 1) * 8;
        var_r2_3 = temp_r1_19->unk215C;
        var_r0_3 = -9;
        goto block_577;
    case 0x64:
        temp_r1_20 = arg0->unk350;
        var_r1 = temp_r1_20 + 0x215C;
        var_r3 = (arg2 & 1) << 5;
        var_r2_3 = temp_r1_20->unk215C;
        var_r0_3 = -0x21;
        goto block_577;
    case 0x6C:
        temp_r1_21 = arg0->unk350;
        var_r1 = temp_r1_21 + 0x215C;
        var_r3 = arg2 << 7;
        var_r2_3 = temp_r1_21->unk215C;
        var_r0_3 = 0x7F;
        goto block_577;
    case 0x74:
        temp_r1_22 = arg0->unk350;
        var_r1 = temp_r1_22 + 0x215D;
        var_r3 = (arg2 & 1) * 2;
        var_r2_3 = temp_r1_22->unk215D;
        var_r0_3 = -3;
        goto block_577;
    case 0x7C:
        temp_r1_23 = arg0->unk350;
        var_r1 = temp_r1_23 + 0x215D;
        var_r3 = (arg2 & 1) * 8;
        var_r2_3 = temp_r1_23->unk215D;
        var_r0_3 = -9;
        goto block_577;
    case 0x5D:
        temp_r1_24 = arg0->unk350;
        var_r1 = temp_r1_24 + 0x215C;
        var_r3 = (arg2 & 1) * 0x10;
        var_r2_3 = temp_r1_24->unk215C;
        var_r0_3 = -0x11;
        goto block_577;
    case 0x65:
        var_r2_4 = 0x215C;
block_576:
        var_r1 = arg0->unk350 + var_r2_4;
        var_r3 = (arg2 & 1) << 6;
        var_r2_3 = *var_r1;
        var_r0_3 = -0x41;
        goto block_577;
    case 0x6D:
        temp_r1_25 = arg0->unk350;
        var_r1 = temp_r1_25 + 0x215D;
        var_r0 = (-2 & temp_r1_25->unk215D) | (arg2 & 1);
        goto block_578;
    case 0x75:
        temp_r1_26 = arg0->unk350;
        var_r1 = temp_r1_26 + 0x215D;
        var_r3 = (arg2 & 1) * 4;
        var_r2_3 = temp_r1_26->unk215D;
        var_r0_3 = -5;
        goto block_577;
    case 0x7D:
        temp_r1_27 = arg0->unk350;
        var_r1 = temp_r1_27 + 0x215D;
        var_r3 = (arg2 & 1) * 0x10;
        var_r2_3 = temp_r1_27->unk215D;
        var_r0_3 = -0x11;
        goto block_577;
    case 0x7E:
        temp_r1_28 = arg0->unk350;
        var_r1 = temp_r1_28 + 0x215D;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_28->unk215D;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x7F:
        temp_r3 = arg0->unk350;
        var_r3_2 = temp_r3 + 0x215C;
        var_r1_5 = (3 & arg2) << 0xF;
        var_r0_4 = (s32) temp_r3->unk215C;
        var_r2_5 = 0xFFFE7FFF;
block_475:
        *var_r3_2 = (var_r0_4 & var_r2_5) | var_r1_5;
        break;
    case 0x80:
        temp_r1_29 = arg0->unk350;
        var_r1 = temp_r1_29 + 0x215E;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_29->unk215E;
        var_r0_3 = -7;
        goto block_577;
    case 0x81:
        temp_r1_30 = arg0->unk350;
        var_r1 = temp_r1_30 + 0x215E;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_30->unk215E;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x82:
        temp_r1_31 = arg0->unk350;
        var_r1 = temp_r1_31 + 0x215E;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_31->unk215E;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x83:
        temp_r1_32 = arg0->unk350;
        var_r1_6 = temp_r1_32 + 0x215E;
        var_r3_3 = (arg2 & 3) << 7;
        var_r2_6 = (u16) temp_r1_32->unk215E;
        var_r0_5 = 0xFFFFFE7F;
block_512:
        *var_r1_6 = (var_r0_5 & var_r2_6) | var_r3_3;
        break;
    case 0x84:
        temp_r1_33 = arg0->unk350;
        var_r1 = temp_r1_33 + 0x215F;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_33->unk215F;
        var_r0_3 = -7;
        goto block_577;
    case 0x85:
        temp_r1_34 = arg0->unk350;
        var_r1 = temp_r1_34 + 0x215F;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_34->unk215F;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x86:
        temp_r1_35 = arg0->unk350;
        var_r1 = temp_r1_35 + 0x215F;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_35->unk215F;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x87:
        temp_r3_2 = arg0->unk350;
        temp_r3_2->unk215F = (u8) ((0x7F & temp_r3_2->unk215F) | ((arg2 & 1) << 7));
        var_r3_4 = temp_r3_2 + 0x2160;
        var_r1_7 = (arg2 >> 1) & 1;
        var_r2_7 = temp_r3_2->unk2160;
        var_r0_6 = -2;
block_496:
        *var_r3_4 = (var_r0_6 & var_r2_7) | var_r1_7;
        break;
    case 0x88:
        temp_r1_36 = arg0->unk350;
        var_r1 = temp_r1_36 + 0x2160;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_36->unk2160;
        var_r0_3 = -7;
        goto block_577;
    case 0x89:
        temp_r1_37 = arg0->unk350;
        var_r1 = temp_r1_37 + 0x2160;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_37->unk2160;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x8A:
        temp_r1_38 = arg0->unk350;
        var_r1 = temp_r1_38 + 0x2160;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_38->unk2160;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x8B:
        temp_r1_39 = arg0->unk350;
        var_r1_6 = temp_r1_39 + 0x2160;
        var_r3_3 = (arg2 & 3) << 7;
        var_r2_6 = (u16) temp_r1_39->unk2160;
        var_r0_5 = 0xFFFFFE7F;
        goto block_512;
    case 0x8C:
        temp_r1_40 = arg0->unk350;
        var_r1 = temp_r1_40 + 0x2161;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_40->unk2161;
        var_r0_3 = -7;
        goto block_577;
    case 0x8D:
        temp_r1_41 = arg0->unk350;
        var_r1 = temp_r1_41 + 0x2161;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_41->unk2161;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x8E:
        temp_r1_42 = arg0->unk350;
        var_r1 = temp_r1_42 + 0x2161;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_42->unk2161;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x8F:
        temp_r3_3 = arg0->unk350;
        var_r3_2 = temp_r3_3 + 0x2160;
        var_r1_5 = (3 & arg2) << 0xF;
        var_r0_4 = (s32) temp_r3_3->unk2160;
        var_r2_5 = 0xFFFE7FFF;
        goto block_475;
    case 0x90:
        temp_r1_43 = arg0->unk350;
        var_r1 = temp_r1_43 + 0x2162;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_43->unk2162;
        var_r0_3 = -7;
        goto block_577;
    case 0x91:
        temp_r1_44 = arg0->unk350;
        var_r1 = temp_r1_44 + 0x2162;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_44->unk2162;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x92:
        temp_r1_45 = arg0->unk350;
        var_r1 = temp_r1_45 + 0x2162;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_45->unk2162;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x93:
        temp_r1_46 = arg0->unk350;
        var_r1_6 = temp_r1_46 + 0x2162;
        var_r3_3 = (arg2 & 3) << 7;
        var_r2_6 = (u16) temp_r1_46->unk2162;
        var_r0_5 = 0xFFFFFE7F;
        goto block_512;
    case 0x94:
        temp_r1_47 = arg0->unk350;
        var_r1 = temp_r1_47 + 0x2163;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_47->unk2163;
        var_r0_3 = -7;
        goto block_577;
    case 0x95:
        temp_r1_48 = arg0->unk350;
        var_r1 = temp_r1_48 + 0x2163;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_48->unk2163;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x96:
        temp_r1_49 = arg0->unk350;
        var_r1 = temp_r1_49 + 0x2163;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_49->unk2163;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x97:
        temp_r3_4 = arg0->unk350;
        temp_r3_4->unk2163 = (u8) ((0x7F & temp_r3_4->unk2163) | ((arg2 & 1) << 7));
        var_r3_4 = temp_r3_4 + 0x2164;
        var_r1_7 = (arg2 >> 1) & 1;
        var_r2_7 = temp_r3_4->unk2164;
        var_r0_6 = -2;
        goto block_496;
    case 0x98:
        temp_r1_50 = arg0->unk350;
        var_r1 = temp_r1_50 + 0x2164;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_50->unk2164;
        var_r0_3 = -7;
        goto block_577;
    case 0x99:
        temp_r1_51 = arg0->unk350;
        var_r1 = temp_r1_51 + 0x2164;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_51->unk2164;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x9A:
        temp_r1_52 = arg0->unk350;
        var_r1 = temp_r1_52 + 0x2164;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_52->unk2164;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x9B:
        temp_r1_53 = arg0->unk350;
        var_r1_6 = temp_r1_53 + 0x2164;
        var_r3_3 = (arg2 & 3) << 7;
        var_r2_6 = (u16) temp_r1_53->unk2164;
        var_r0_5 = 0xFFFFFE7F;
        goto block_512;
    case 0x9C:
        temp_r1_54 = arg0->unk350;
        var_r1 = temp_r1_54 + 0x2165;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_54->unk2165;
        var_r0_3 = -7;
        goto block_577;
    case 0x9D:
        temp_r1_55 = arg0->unk350;
        var_r1 = temp_r1_55 + 0x2165;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_55->unk2165;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x9E:
        temp_r1_56 = arg0->unk350;
        var_r1 = temp_r1_56 + 0x2165;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_56->unk2165;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x9F:
        temp_r3_5 = arg0->unk350;
        var_r3_2 = temp_r3_5 + 0x2164;
        var_r1_5 = (3 & arg2) << 0xF;
        var_r0_4 = (s32) temp_r3_5->unk2164;
        var_r2_5 = 0xFFFE7FFF;
        goto block_475;
    case 0xA0:
        temp_r1_57 = arg0->unk350;
        var_r1 = temp_r1_57 + 0x2166;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_57->unk2166;
        var_r0_3 = -7;
        goto block_577;
    case 0xA1:
        temp_r1_58 = arg0->unk350;
        var_r1 = temp_r1_58 + 0x2166;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_58->unk2166;
        var_r0_3 = -0x19;
        goto block_577;
    case 0xA2:
        temp_r1_59 = arg0->unk350;
        var_r1 = temp_r1_59 + 0x2166;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_59->unk2166;
        var_r0_3 = -0x61;
        goto block_577;
    case 0xA3:
        temp_r1_60 = arg0->unk350;
        var_r1_6 = temp_r1_60 + 0x2166;
        var_r3_3 = (arg2 & 3) << 7;
        var_r2_6 = (u16) temp_r1_60->unk2166;
        var_r0_5 = 0xFFFFFE7F;
        goto block_512;
    case 0xA4:
        temp_r1_61 = arg0->unk350;
        var_r1 = temp_r1_61 + 0x2167;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_61->unk2167;
        var_r0_3 = -7;
        goto block_577;
    case 0xA5:
        temp_r1_62 = arg0->unk350;
        var_r1 = temp_r1_62 + 0x2167;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_62->unk2167;
        var_r0_3 = -0x19;
        goto block_577;
    case 0xA6:
        temp_r1_63 = arg0->unk350;
        var_r1 = temp_r1_63 + 0x2167;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_63->unk2167;
        var_r0_3 = -0x61;
        goto block_577;
    case 0xA7:
        temp_r3_6 = arg0->unk350;
        temp_r3_6->unk2167 = (u8) ((0x7F & temp_r3_6->unk2167) | ((arg2 & 1) << 7));
        var_r3_4 = temp_r3_6 + 0x2168;
        var_r1_7 = (arg2 >> 1) & 1;
        var_r2_7 = temp_r3_6->unk2168;
        var_r0_6 = -2;
        goto block_496;
    case 0xA8:
        temp_r1_64 = arg0->unk350;
        var_r1 = temp_r1_64 + 0x2168;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_64->unk2168;
        var_r0_3 = -7;
        goto block_577;
    case 0xA9:
        temp_r1_65 = arg0->unk350;
        var_r1 = temp_r1_65 + 0x2168;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_65->unk2168;
        var_r0_3 = -0x19;
        goto block_577;
    case 0xAA:
        temp_r1_66 = arg0->unk350;
        var_r1 = temp_r1_66 + 0x2168;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_66->unk2168;
        var_r0_3 = -0x61;
        goto block_577;
    case 0xAB:
        temp_r1_67 = arg0->unk350;
        var_r1_6 = temp_r1_67 + 0x2168;
        var_r3_3 = (arg2 & 3) << 7;
        var_r2_6 = (u16) temp_r1_67->unk2168;
        var_r0_5 = 0xFFFFFE7F;
        goto block_512;
    case 0x15D:
        temp_r1_68 = arg0->unk350;
        var_r1 = temp_r1_68 + 0x2197;
        var_r0 = (-4 & temp_r1_68->unk2197) | (arg2 & 3);
        goto block_578;
    case 0xAC:
        temp_r1_69 = arg0->unk350;
        var_r1 = temp_r1_69 + 0x2169;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_69->unk2169;
        var_r0_3 = -7;
        goto block_577;
    case 0xAD:
        temp_r1_70 = arg0->unk350;
        var_r1 = temp_r1_70 + 0x2169;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_70->unk2169;
        var_r0_3 = -0x19;
        goto block_577;
    case 0xAE:
        temp_r1_71 = arg0->unk350;
        var_r1 = temp_r1_71 + 0x2169;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_71->unk2169;
        var_r0_3 = -0x61;
        goto block_577;
    case 0xAF:
        temp_r3_7 = arg0->unk350;
        var_r3_2 = temp_r3_7 + 0x2168;
        var_r1_5 = (3 & arg2) << 0xF;
        var_r0_4 = (s32) temp_r3_7->unk2168;
        var_r2_5 = 0xFFFE7FFF;
        goto block_475;
    case 0xB0:
        temp_r1_72 = arg0->unk350;
        var_r1 = temp_r1_72 + 0x216A;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_72->unk216A;
        var_r0_3 = -7;
        goto block_577;
    case 0xB1:
        temp_r1_73 = arg0->unk350;
        var_r1 = temp_r1_73 + 0x216A;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_73->unk216A;
        var_r0_3 = -0x19;
        goto block_577;
    case 0xB2:
        temp_r1_74 = arg0->unk350;
        var_r1 = temp_r1_74 + 0x216A;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_74->unk216A;
        var_r0_3 = -0x61;
        goto block_577;
    case 0xB3:
        temp_r1_75 = arg0->unk350;
        var_r1_6 = temp_r1_75 + 0x216A;
        var_r3_3 = (arg2 & 3) << 7;
        var_r2_6 = (u16) temp_r1_75->unk216A;
        var_r0_5 = 0xFFFFFE7F;
        goto block_512;
    case 0xB4:
        temp_r1_76 = arg0->unk350;
        var_r1 = temp_r1_76 + 0x216B;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_76->unk216B;
        var_r0_3 = -7;
        goto block_577;
    case 0xB5:
        temp_r1_77 = arg0->unk350;
        var_r1 = temp_r1_77 + 0x216B;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_77->unk216B;
        var_r0_3 = -0x19;
        goto block_577;
    case 0xB6:
        temp_r1_78 = arg0->unk350;
        var_r1 = temp_r1_78 + 0x216B;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_78->unk216B;
        var_r0_3 = -0x61;
        goto block_577;
    case 0xB7:
        temp_r3_8 = arg0->unk350;
        temp_r3_8->unk216B = (u8) ((0x7F & temp_r3_8->unk216B) | ((arg2 & 1) << 7));
        var_r3_4 = temp_r3_8 + 0x216C;
        var_r1_7 = (arg2 >> 1) & 1;
        var_r2_7 = temp_r3_8->unk216C;
        var_r0_6 = -2;
        goto block_496;
    case 0xB8:
        temp_r1_79 = arg0->unk350;
        var_r1 = temp_r1_79 + 0x216C;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_79->unk216C;
        var_r0_3 = -7;
        goto block_577;
    case 0xB9:
        temp_r1_80 = arg0->unk350;
        var_r1 = temp_r1_80 + 0x216C;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_80->unk216C;
        var_r0_3 = -0x19;
        goto block_577;
    case 0xBA:
        temp_r1_81 = arg0->unk350;
        var_r1 = temp_r1_81 + 0x216C;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_81->unk216C;
        var_r0_3 = -0x61;
        goto block_577;
    case 0xBB:
        temp_r1_82 = arg0->unk350;
        var_r1_6 = temp_r1_82 + 0x216C;
        var_r3_3 = (arg2 & 3) << 7;
        var_r2_6 = (u16) temp_r1_82->unk216C;
        var_r0_5 = 0xFFFFFE7F;
        goto block_512;
    case 0xBC:
        temp_r1_83 = arg0->unk350;
        var_r1 = temp_r1_83 + 0x216D;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_83->unk216D;
        var_r0_3 = -7;
        goto block_577;
    case 0xBD:
        temp_r1_84 = arg0->unk350;
        var_r1 = temp_r1_84 + 0x216D;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_84->unk216D;
        var_r0_3 = -0x19;
        goto block_577;
    case 0xBE:
        temp_r1_85 = arg0->unk350;
        var_r1 = temp_r1_85 + 0x216D;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_85->unk216D;
        var_r0_3 = -0x61;
        goto block_577;
    case 0xBF:
        temp_r3_9 = arg0->unk350;
        var_r3_2 = temp_r3_9 + 0x216C;
        var_r1_5 = (3 & arg2) << 0xF;
        var_r0_4 = (s32) temp_r3_9->unk216C;
        var_r2_5 = 0xFFFE7FFF;
        goto block_475;
    case 0xC0:
        temp_r1_86 = arg0->unk350;
        var_r1 = temp_r1_86 + 0x216E;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_86->unk216E;
        var_r0_3 = -7;
        goto block_577;
    case 0xC1:
        temp_r1_87 = arg0->unk350;
        var_r1 = temp_r1_87 + 0x216E;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_87->unk216E;
        var_r0_3 = -0x19;
        goto block_577;
    case 0xC2:
        temp_r3_10 = arg0->unk350;
        temp_r3_10->unk216F = (u8) ((0xF & temp_r3_10->unk216F) | ((arg2 & 0xF) * 0x10));
        var_r1_8 = arg2 >> 4;
        var_r2_8 = 0x2170;
block_495:
        var_r3_4 = arg0->unk350 + var_r2_8;
        var_r1_7 = var_r1_8 & 7;
        var_r2_7 = *var_r3_4;
        var_r0_6 = -8;
        goto block_496;
    case 0xC3:
        temp_r1_88 = arg0->unk350;
        var_r1 = temp_r1_88 + 0x2170;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_88->unk2170;
        var_r0_3 = -0x19;
        goto block_577;
    case 0xC4:
        temp_r1_89 = arg0->unk350;
        var_r1 = temp_r1_89 + 0x2170;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_89->unk2170;
        var_r0_3 = -0x61;
        goto block_577;
    case 0xC5:
        temp_r1_90 = arg0->unk350;
        var_r1_6 = temp_r1_90 + 0x2170;
        var_r3_3 = (arg2 & 3) << 7;
        var_r2_6 = (u16) temp_r1_90->unk2170;
        var_r0_5 = 0xFFFFFE7F;
        goto block_512;
    case 0xC6:
        temp_r1_91 = arg0->unk350;
        var_r1 = temp_r1_91 + 0x2171;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_91->unk2171;
        var_r0_3 = -7;
        goto block_577;
    case 0xC7:
        temp_r1_92 = arg0->unk350;
        var_r1 = temp_r1_92 + 0x2171;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_92->unk2171;
        var_r0_3 = -0x19;
        goto block_577;
    case 0xC8:
        temp_r1_93 = arg0->unk350;
        var_r1 = temp_r1_93 + 0x2171;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_93->unk2171;
        var_r0_3 = -0x61;
        goto block_577;
    case 0xC9:
        temp_r1_94 = arg0->unk350;
        var_r1 = temp_r1_94 + 0x2171;
        var_r3 = arg2 << 7;
        var_r2_3 = temp_r1_94->unk2171;
        var_r0_3 = 0x7F;
        goto block_577;
    case 0xCA:
        temp_r1_95 = arg0->unk350;
        var_r1 = temp_r1_95 + 0x2172;
        var_r0 = (-4 & temp_r1_95->unk2172) | (arg2 & 3);
        goto block_578;
    case 0xCB:
        temp_r1_96 = arg0->unk350;
        var_r1 = temp_r1_96 + 0x2172;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_96->unk2172;
        var_r0_3 = -0xD;
        goto block_577;
    case 0xCC:
        temp_r1_97 = arg0->unk350;
        var_r1 = temp_r1_97 + 0x2172;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_97->unk2172;
        var_r0_3 = -0x31;
        goto block_577;
    case 0xCD:
        temp_r1_98 = arg0->unk350;
        var_r1 = temp_r1_98 + 0x2172;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_98->unk2172;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0xCE:
        temp_r1_99 = arg0->unk350;
        var_r1 = temp_r1_99 + 0x2173;
        var_r0 = (-4 & temp_r1_99->unk2173) | (arg2 & 3);
        goto block_578;
    case 0xCF:
        temp_r1_100 = arg0->unk350;
        var_r1 = temp_r1_100 + 0x2173;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_100->unk2173;
        var_r0_3 = -0xD;
        goto block_577;
    case 0xD0:
        temp_r1_101 = arg0->unk350;
        var_r1 = temp_r1_101 + 0x2173;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_101->unk2173;
        var_r0_3 = -0x31;
        goto block_577;
    case 0xD1:
        temp_r1_102 = arg0->unk350;
        var_r1 = temp_r1_102 + 0x2173;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_102->unk2173;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0xD2:
        temp_r1_103 = arg0->unk350;
        var_r1 = temp_r1_103 + 0x2174;
        var_r0 = (-4 & temp_r1_103->unk2174) | (arg2 & 3);
        goto block_578;
    case 0xD3:
        temp_r1_104 = arg0->unk350;
        var_r1 = temp_r1_104 + 0x2174;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_104->unk2174;
        var_r0_3 = -0xD;
        goto block_577;
    case 0xD4:
        temp_r1_105 = arg0->unk350;
        var_r1 = temp_r1_105 + 0x2174;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_105->unk2174;
        var_r0_3 = -0x31;
        goto block_577;
    case 0xD5:
        temp_r1_106 = arg0->unk350;
        var_r1 = temp_r1_106 + 0x2174;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_106->unk2174;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0xD6:
        temp_r1_107 = arg0->unk350;
        var_r1 = temp_r1_107 + 0x2175;
        var_r0 = (-4 & temp_r1_107->unk2175) | (arg2 & 3);
        goto block_578;
    case 0xD7:
        temp_r1_108 = arg0->unk350;
        var_r1 = temp_r1_108 + 0x2175;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_108->unk2175;
        var_r0_3 = -0xD;
        goto block_577;
    case 0xD8:
        temp_r1_109 = arg0->unk350;
        var_r1 = temp_r1_109 + 0x2175;
        var_r3 = (arg2 & 1) * 0x10;
        var_r2_3 = temp_r1_109->unk2175;
        var_r0_3 = -0x11;
        goto block_577;
    case 0xD9:
        temp_r1_110 = arg0->unk350;
        var_r1 = temp_r1_110 + 0x2175;
        var_r3 = (arg2 & 1) << 5;
        var_r2_3 = temp_r1_110->unk2175;
        var_r0_3 = -0x21;
        goto block_577;
    case 0xDA:
        var_r2_4 = 0x2175;
        goto block_576;
    case 0xDB:
        temp_r1_111 = arg0->unk350;
        var_r1 = temp_r1_111 + 0x2175;
        var_r3 = arg2 << 7;
        var_r2_3 = temp_r1_111->unk2175;
        var_r0_3 = 0x7F;
        goto block_577;
    case 0xDC:
        temp_r1_112 = arg0->unk350;
        var_r1 = temp_r1_112 + 0x2176;
        var_r0 = (-2 & temp_r1_112->unk2176) | (arg2 & 1);
        goto block_578;
    case 0xDD:
        temp_r1_113 = arg0->unk350;
        var_r1 = temp_r1_113 + 0x2176;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_113->unk2176;
        var_r0_3 = -7;
        goto block_577;
    case 0xDE:
        temp_r1_114 = arg0->unk350;
        var_r1 = temp_r1_114 + 0x2176;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_114->unk2176;
        var_r0_3 = -0x19;
        goto block_577;
    case 0xDF:
        temp_r1_115 = arg0->unk350;
        var_r1 = temp_r1_115 + 0x2176;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_115->unk2176;
        var_r0_3 = -0x61;
        goto block_577;
    case 0xE0:
        temp_r1_116 = arg0->unk350;
        var_r1_6 = temp_r1_116 + 0x2176;
        var_r3_3 = (arg2 & 3) << 7;
        var_r2_6 = (u16) temp_r1_116->unk2176;
        var_r0_5 = 0xFFFFFE7F;
        goto block_512;
    case 0xE1:
        temp_r1_117 = arg0->unk350;
        var_r1 = temp_r1_117 + 0x2177;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_117->unk2177;
        var_r0_3 = -7;
        goto block_577;
    case 0xE2:
        temp_r1_118 = arg0->unk350;
        var_r1 = temp_r1_118 + 0x2177;
        var_r3 = (arg2 & 1) * 8;
        var_r2_3 = temp_r1_118->unk2177;
        var_r0_3 = -9;
        goto block_577;
    case 0xE3:
        temp_r1_119 = arg0->unk350;
        var_r1 = temp_r1_119 + 0x2177;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_119->unk2177;
        var_r0_3 = -0x31;
        goto block_577;
    case 0xE4:
        temp_r1_120 = arg0->unk350;
        var_r1 = temp_r1_120 + 0x2177;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_120->unk2177;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0xE5:
        temp_r1_121 = arg0->unk350;
        var_r1 = temp_r1_121 + 0x2178;
        var_r0 = (-2 & temp_r1_121->unk2178) | (arg2 & 1);
        goto block_578;
    case 0xE6:
        temp_r1_122 = arg0->unk350;
        var_r1 = temp_r1_122 + 0x2178;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_122->unk2178;
        var_r0_3 = -7;
        goto block_577;
    case 0xE7:
        temp_r1_123 = arg0->unk350;
        var_r1 = temp_r1_123 + 0x2178;
        var_r3 = (arg2 & 7) * 8;
        var_r2_3 = temp_r1_123->unk2178;
        var_r0_3 = -0x39;
        goto block_577;
    case 0xE8:
        temp_r1_124 = arg0->unk350;
        var_r1 = temp_r1_124 + 0x2178;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_124->unk2178;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0xE9:
        temp_r1_125 = arg0->unk350;
        var_r1 = temp_r1_125 + 0x2179;
        var_r0 = (-4 & temp_r1_125->unk2179) | (arg2 & 3);
        goto block_578;
    case 0xEA:
        temp_r1_126 = arg0->unk350;
        var_r1 = temp_r1_126 + 0x2179;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_126->unk2179;
        var_r0_3 = -0xD;
        goto block_577;
    case 0xEB:
        temp_r1_127 = arg0->unk350;
        var_r1 = temp_r1_127 + 0x2179;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_127->unk2179;
        var_r0_3 = -0x31;
        goto block_577;
    case 0xEC:
        temp_r3_11 = arg0->unk350;
        var_r3_2 = temp_r3_11 + 0x2178;
        var_r1_5 = (0xF & arg2) << 0xE;
        var_r0_4 = (s32) temp_r3_11->unk2178;
        var_r2_5 = 0xFFFC3FFF;
        goto block_475;
    case 0xED:
        temp_r1_128 = arg0->unk350;
        var_r1 = temp_r1_128 + 0x217A;
        var_r3 = (arg2 & 1) * 4;
        var_r2_3 = temp_r1_128->unk217A;
        var_r0_3 = -5;
        goto block_577;
    case 0xEE:
        temp_r1_129 = arg0->unk350;
        var_r1 = temp_r1_129 + 0x217A;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_129->unk217A;
        var_r0_3 = -0x19;
        goto block_577;
    case 0xEF:
        temp_r1_130 = arg0->unk350;
        var_r1 = temp_r1_130 + 0x217A;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_130->unk217A;
        var_r0_3 = -0x61;
        goto block_577;
    case 0xF0:
        temp_r1_131 = arg0->unk350;
        var_r1 = temp_r1_131 + 0x217A;
        var_r3 = arg2 << 7;
        var_r2_3 = temp_r1_131->unk217A;
        var_r0_3 = 0x7F;
        goto block_577;
    case 0xF1:
        temp_r1_132 = arg0->unk350;
        var_r1 = temp_r1_132 + 0x217B;
        var_r0 = (-0x20 & temp_r1_132->unk217B) | (arg2 & 0x1F);
        goto block_578;
    case 0xF2:
        temp_r1_133 = arg0->unk350;
        var_r1 = temp_r1_133 + 0x217B;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_133->unk217B;
        var_r0_3 = -0x61;
        goto block_577;
    case 0xF3:
        temp_r3_12 = arg0->unk350;
        temp_r3_12->unk217B = (u8) ((0x7F & temp_r3_12->unk217B) | ((arg2 & 1) << 7));
        var_r3_4 = temp_r3_12 + 0x217C;
        var_r1_7 = (arg2 >> 1) & 1;
        var_r2_7 = temp_r3_12->unk217C;
        var_r0_6 = -2;
        goto block_496;
    case 0xF4:
        temp_r1_134 = arg0->unk350;
        var_r1 = temp_r1_134 + 0x217C;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_134->unk217C;
        var_r0_3 = -7;
        goto block_577;
    case 0xF5:
        temp_r1_135 = arg0->unk350;
        var_r1 = temp_r1_135 + 0x217C;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_135->unk217C;
        var_r0_3 = -0x19;
        goto block_577;
    case 0xF6:
        temp_r1_136 = arg0->unk350;
        var_r1 = temp_r1_136 + 0x217C;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_136->unk217C;
        var_r0_3 = -0x61;
        goto block_577;
    case 0xF7:
        temp_r1_137 = arg0->unk350;
        var_r1 = temp_r1_137 + 0x217C;
        var_r3 = arg2 << 7;
        var_r2_3 = temp_r1_137->unk217C;
        var_r0_3 = 0x7F;
        goto block_577;
    case 0xF8:
        temp_r1_138 = arg0->unk350;
        var_r1 = temp_r1_138 + 0x217D;
        var_r0 = (-4 & temp_r1_138->unk217D) | (arg2 & 3);
        goto block_578;
    case 0xF9:
        temp_r1_139 = arg0->unk350;
        var_r1 = temp_r1_139 + 0x217D;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_139->unk217D;
        var_r0_3 = -0xD;
        goto block_577;
    case 0xFA:
        temp_r1_140 = arg0->unk350;
        var_r1 = temp_r1_140 + 0x217D;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_140->unk217D;
        var_r0_3 = -0x31;
        goto block_577;
    case 0xFB:
        temp_r1_141 = arg0->unk350;
        var_r1 = temp_r1_141 + 0x217D;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_141->unk217D;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0xFC:
        temp_r1_142 = arg0->unk350;
        var_r1 = temp_r1_142 + 0x217E;
        var_r0 = (-4 & temp_r1_142->unk217E) | (arg2 & 3);
        goto block_578;
    case 0xFD:
        temp_r1_143 = arg0->unk350;
        var_r1 = temp_r1_143 + 0x217E;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_143->unk217E;
        var_r0_3 = -0xD;
        goto block_577;
    case 0xFE:
        temp_r1_144 = arg0->unk350;
        var_r1 = temp_r1_144 + 0x217E;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_144->unk217E;
        var_r0_3 = -0x31;
        goto block_577;
    case 0xFF:
        temp_r1_145 = arg0->unk350;
        var_r1 = temp_r1_145 + 0x217E;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_145->unk217E;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x100:
        temp_r1_146 = arg0->unk350;
        var_r1 = temp_r1_146 + 0x217F;
        var_r0 = (-4 & temp_r1_146->unk217F) | (arg2 & 3);
        goto block_578;
    case 0x101:
        temp_r1_147 = arg0->unk350;
        var_r1 = temp_r1_147 + 0x217F;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_147->unk217F;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x102:
        temp_r1_148 = arg0->unk350;
        var_r1 = temp_r1_148 + 0x217F;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_148->unk217F;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x103:
        temp_r1_149 = arg0->unk350;
        var_r1 = temp_r1_149 + 0x217F;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_149->unk217F;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x104:
        temp_r1_150 = arg0->unk350;
        var_r1 = temp_r1_150 + 0x2180;
        var_r0 = (-4 & temp_r1_150->unk2180) | (arg2 & 3);
        goto block_578;
    case 0x105:
        temp_r1_151 = arg0->unk350;
        var_r1 = temp_r1_151 + 0x2180;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_151->unk2180;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x106:
        temp_r1_152 = arg0->unk350;
        var_r1 = temp_r1_152 + 0x2180;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_152->unk2180;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x107:
        temp_r1_153 = arg0->unk350;
        var_r1 = temp_r1_153 + 0x2180;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_153->unk2180;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x108:
        temp_r1_154 = arg0->unk350;
        var_r1 = temp_r1_154 + 0x2181;
        var_r0 = (-4 & temp_r1_154->unk2181) | (arg2 & 3);
        goto block_578;
    case 0x109:
        temp_r1_155 = arg0->unk350;
        var_r1 = temp_r1_155 + 0x2181;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_155->unk2181;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x10A:
        temp_r1_156 = arg0->unk350;
        var_r1 = temp_r1_156 + 0x2181;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_156->unk2181;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x10B:
        temp_r1_157 = arg0->unk350;
        var_r1 = temp_r1_157 + 0x2181;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_157->unk2181;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x10C:
        temp_r1_158 = arg0->unk350;
        var_r1 = temp_r1_158 + 0x2182;
        var_r0 = (-4 & temp_r1_158->unk2182) | (arg2 & 3);
        goto block_578;
    case 0x10D:
        temp_r1_159 = arg0->unk350;
        var_r1 = temp_r1_159 + 0x2182;
        var_r3 = (arg2 & 1) * 4;
        var_r2_3 = temp_r1_159->unk2182;
        var_r0_3 = -5;
        goto block_577;
    case 0x10E:
        temp_r1_160 = arg0->unk350;
        var_r1 = temp_r1_160 + 0x2182;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_160->unk2182;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x10F:
        temp_r1_161 = arg0->unk350;
        var_r1 = temp_r1_161 + 0x2182;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_161->unk2182;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x110:
        temp_r1_162 = arg0->unk350;
        var_r1_6 = temp_r1_162 + 0x2182;
        var_r3_3 = (arg2 & 3) << 7;
        var_r2_6 = (u16) temp_r1_162->unk2182;
        var_r0_5 = 0xFFFFFE7F;
        goto block_512;
    case 0x111:
        temp_r1_163 = arg0->unk350;
        var_r1 = temp_r1_163 + 0x2183;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_163->unk2183;
        var_r0_3 = -7;
        goto block_577;
    case 0x112:
        temp_r1_164 = arg0->unk350;
        var_r1 = temp_r1_164 + 0x2183;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_164->unk2183;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x113:
        temp_r1_165 = arg0->unk350;
        var_r1 = temp_r1_165 + 0x2183;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_165->unk2183;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x114:
        temp_r3_13 = arg0->unk350;
        temp_r3_13->unk2183 = (u8) ((0x7F & temp_r3_13->unk2183) | ((arg2 & 1) << 7));
        var_r3_4 = temp_r3_13 + 0x2184;
        var_r1_7 = (arg2 >> 1) & 1;
        var_r2_7 = temp_r3_13->unk2184;
        var_r0_6 = -2;
        goto block_496;
    case 0x115:
        temp_r1_166 = arg0->unk350;
        var_r1 = temp_r1_166 + 0x2184;
        var_r3 = (arg2 & 1) * 2;
        var_r2_3 = temp_r1_166->unk2184;
        var_r0_3 = -3;
        goto block_577;
    case 0x116:
        temp_r1_167 = arg0->unk350;
        var_r1 = temp_r1_167 + 0x2184;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_167->unk2184;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x117:
        temp_r1_168 = arg0->unk350;
        var_r1 = temp_r1_168 + 0x2184;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_168->unk2184;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x118:
        temp_r1_169 = arg0->unk350;
        var_r1 = temp_r1_169 + 0x2184;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_169->unk2184;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x119:
        temp_r1_170 = arg0->unk350;
        var_r1 = temp_r1_170 + 0x2185;
        var_r0 = (-4 & temp_r1_170->unk2185) | (arg2 & 3);
        goto block_578;
    case 0x11A:
        temp_r1_171 = arg0->unk350;
        var_r1 = temp_r1_171 + 0x2185;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_171->unk2185;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x11B:
        temp_r1_172 = arg0->unk350;
        var_r1 = temp_r1_172 + 0x2185;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_172->unk2185;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x11C:
        temp_r1_173 = arg0->unk350;
        var_r1 = temp_r1_173 + 0x2185;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_173->unk2185;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x11D:
        temp_r1_174 = arg0->unk350;
        var_r1 = temp_r1_174 + 0x2186;
        var_r0 = (-4 & temp_r1_174->unk2186) | (arg2 & 3);
        goto block_578;
    case 0x11E:
        temp_r1_175 = arg0->unk350;
        var_r1 = temp_r1_175 + 0x2186;
        var_r3 = (arg2 & 7) * 4;
        var_r2_3 = temp_r1_175->unk2186;
        var_r0_3 = -0x1D;
        goto block_577;
    case 0x11F:
        temp_r1_176 = arg0->unk350;
        var_r1 = temp_r1_176 + 0x2186;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_176->unk2186;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x120:
        temp_r1_177 = arg0->unk350;
        var_r1_6 = temp_r1_177 + 0x2186;
        var_r3_3 = (arg2 & 3) << 7;
        var_r2_6 = (u16) temp_r1_177->unk2186;
        var_r0_5 = 0xFFFFFE7F;
        goto block_512;
    case 0x121:
        temp_r1_178 = arg0->unk350;
        var_r1 = temp_r1_178 + 0x2187;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_178->unk2187;
        var_r0_3 = -7;
        goto block_577;
    case 0x122:
        temp_r1_179 = arg0->unk350;
        var_r1 = temp_r1_179 + 0x2187;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_179->unk2187;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x123:
        temp_r1_180 = arg0->unk350;
        var_r1 = temp_r1_180 + 0x2187;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_180->unk2187;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x124:
        temp_r3_14 = arg0->unk350;
        temp_r3_14->unk2187 = (u8) ((0x7F & temp_r3_14->unk2187) | ((arg2 & 1) << 7));
        var_r3_4 = temp_r3_14 + 0x2188;
        var_r1_7 = (arg2 >> 1) & 1;
        var_r2_7 = temp_r3_14->unk2188;
        var_r0_6 = -2;
        goto block_496;
    case 0x125:
        temp_r1_181 = arg0->unk350;
        var_r1 = temp_r1_181 + 0x2188;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_181->unk2188;
        var_r0_3 = -7;
        goto block_577;
    case 0x126:
        temp_r1_182 = arg0->unk350;
        var_r1 = temp_r1_182 + 0x2188;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_182->unk2188;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x127:
        temp_r1_183 = arg0->unk350;
        var_r1 = temp_r1_183 + 0x2188;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_183->unk2188;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x128:
        temp_r1_184 = arg0->unk350;
        var_r1_6 = temp_r1_184 + 0x2188;
        var_r3_3 = (arg2 & 7) << 7;
        var_r2_6 = (u16) temp_r1_184->unk2188;
        var_r0_5 = 0xFFFFFC7F;
        goto block_512;
    case 0x129:
        temp_r1_185 = arg0->unk350;
        var_r1 = temp_r1_185 + 0x2189;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_185->unk2189;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x12A:
        temp_r1_186 = arg0->unk350;
        var_r1 = temp_r1_186 + 0x2189;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_186->unk2189;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x12B:
        temp_r3_15 = arg0->unk350;
        var_r3_2 = temp_r3_15 + 0x2188;
        var_r1_5 = (0xF & arg2) << 0xE;
        var_r0_4 = (s32) temp_r3_15->unk2188;
        var_r2_5 = 0xFFFC3FFF;
        goto block_475;
    case 0x12C:
        temp_r1_187 = arg0->unk350;
        var_r1 = temp_r1_187 + 0x218A;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_187->unk218A;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x12D:
        temp_r1_188 = arg0->unk350;
        var_r1 = temp_r1_188 + 0x218A;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_188->unk218A;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x12E:
        temp_r1_189 = arg0->unk350;
        var_r1 = temp_r1_189 + 0x218A;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_189->unk218A;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x12F:
        temp_r1_190 = arg0->unk350;
        var_r1 = temp_r1_190 + 0x218B;
        var_r0 = (-4 & temp_r1_190->unk218B) | (arg2 & 3);
        goto block_578;
    case 0x130:
        temp_r1_191 = arg0->unk350;
        var_r1 = temp_r1_191 + 0x218B;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_191->unk218B;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x131:
        temp_r3_16 = arg0->unk350;
        temp_r3_16->unk218B = (u8) ((0x1F & temp_r3_16->unk218B) | ((7 & arg2) << 5));
        var_r3_4 = temp_r3_16 + 0x218C;
        var_r1_7 = (arg2 >> 3) & 1;
        var_r2_7 = temp_r3_16->unk218C;
        var_r0_6 = -2;
        goto block_496;
    case 0x132:
        temp_r1_192 = arg0->unk350;
        var_r1 = temp_r1_192 + 0x218C;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_192->unk218C;
        var_r0_3 = -7;
        goto block_577;
    case 0x133:
        temp_r1_193 = arg0->unk350;
        var_r1 = temp_r1_193 + 0x218C;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_193->unk218C;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x134:
        temp_r1_194 = arg0->unk350;
        var_r1 = temp_r1_194 + 0x218C;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_194->unk218C;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x135:
        temp_r1_195 = arg0->unk350;
        var_r1_6 = temp_r1_195 + 0x218C;
        var_r3_3 = (arg2 & 3) << 7;
        var_r2_6 = (u16) temp_r1_195->unk218C;
        var_r0_5 = 0xFFFFFE7F;
        goto block_512;
    case 0x136:
        temp_r1_196 = arg0->unk350;
        var_r1 = temp_r1_196 + 0x218D;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_196->unk218D;
        var_r0_3 = -7;
        goto block_577;
    case 0x137:
        temp_r1_197 = arg0->unk350;
        var_r1 = temp_r1_197 + 0x218D;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_197->unk218D;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x138:
        temp_r3_17 = arg0->unk350;
        var_r3_2 = temp_r3_17 + 0x218C;
        var_r1_5 = (0xF & arg2) << 0xD;
        var_r0_4 = (s32) temp_r3_17->unk218C;
        var_r2_5 = 0xFFFE1FFF;
        goto block_475;
    case 0x139:
        temp_r1_198 = arg0->unk350;
        var_r1 = temp_r1_198 + 0x218E;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_198->unk218E;
        var_r0_3 = -7;
        goto block_577;
    case 0x13A:
        temp_r1_199 = arg0->unk350;
        var_r1 = temp_r1_199 + 0x218E;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_199->unk218E;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x13B:
        temp_r1_200 = arg0->unk350;
        var_r1 = temp_r1_200 + 0x218E;
        var_r3 = (arg2 & 1) << 5;
        var_r2_3 = temp_r1_200->unk218E;
        var_r0_3 = -0x21;
        goto block_577;
    case 0x13C:
        temp_r1_201 = arg0->unk350;
        var_r1 = temp_r1_201 + 0x218E;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_201->unk218E;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x13D:
        temp_r1_202 = arg0->unk350;
        var_r1 = temp_r1_202 + 0x218F;
        var_r0 = (-4 & temp_r1_202->unk218F) | (arg2 & 3);
        goto block_578;
    case 0x13E:
        temp_r1_203 = arg0->unk350;
        var_r1 = temp_r1_203 + 0x218F;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_203->unk218F;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x13F:
        temp_r1_204 = arg0->unk350;
        var_r1 = temp_r1_204 + 0x218F;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_204->unk218F;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x140:
        temp_r1_205 = arg0->unk350;
        var_r1 = temp_r1_205 + 0x218F;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_205->unk218F;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x141:
        temp_r1_206 = arg0->unk350;
        var_r1 = temp_r1_206 + 0x2190;
        var_r0 = (-4 & temp_r1_206->unk2190) | (arg2 & 3);
        goto block_578;
    case 0x142:
        temp_r1_207 = arg0->unk350;
        var_r1 = temp_r1_207 + 0x2190;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_207->unk2190;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x143:
        temp_r1_208 = arg0->unk350;
        var_r1 = temp_r1_208 + 0x2190;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_208->unk2190;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x144:
        temp_r1_209 = arg0->unk350;
        var_r1 = temp_r1_209 + 0x2190;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_209->unk2190;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x145:
        temp_r1_210 = arg0->unk350;
        var_r1 = temp_r1_210 + 0x2191;
        var_r0 = (-4 & temp_r1_210->unk2191) | (arg2 & 3);
        goto block_578;
    case 0x146:
        temp_r1_211 = arg0->unk350;
        var_r1 = temp_r1_211 + 0x2191;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_211->unk2191;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x147:
        temp_r1_212 = arg0->unk350;
        var_r1 = temp_r1_212 + 0x2191;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_212->unk2191;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x148:
        temp_r1_213 = arg0->unk350;
        var_r1 = temp_r1_213 + 0x2191;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_213->unk2191;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x149:
        temp_r1_214 = arg0->unk350;
        var_r1 = temp_r1_214 + 0x2192;
        var_r0 = (-4 & temp_r1_214->unk2192) | (arg2 & 3);
        goto block_578;
    case 0x14A:
        temp_r1_215 = arg0->unk350;
        var_r1 = temp_r1_215 + 0x2192;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_215->unk2192;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x14B:
        temp_r1_216 = arg0->unk350;
        var_r1 = temp_r1_216 + 0x2192;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_216->unk2192;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x14C:
        temp_r1_217 = arg0->unk350;
        var_r1 = temp_r1_217 + 0x2192;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_217->unk2192;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x14D:
        temp_r1_218 = arg0->unk350;
        var_r1 = temp_r1_218 + 0x2193;
        var_r0 = (-4 & temp_r1_218->unk2193) | (arg2 & 3);
        goto block_578;
    case 0x14E:
        temp_r1_219 = arg0->unk350;
        var_r1 = temp_r1_219 + 0x2193;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_219->unk2193;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x14F:
        temp_r1_220 = arg0->unk350;
        var_r1 = temp_r1_220 + 0x2193;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_220->unk2193;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x150:
        temp_r1_221 = arg0->unk350;
        var_r1 = temp_r1_221 + 0x2193;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_221->unk2193;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x151:
        temp_r1_222 = arg0->unk350;
        var_r1 = temp_r1_222 + 0x2194;
        var_r0 = (-4 & temp_r1_222->unk2194) | (arg2 & 3);
        goto block_578;
    case 0x152:
        temp_r1_223 = arg0->unk350;
        var_r1 = temp_r1_223 + 0x2194;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_223->unk2194;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x153:
        temp_r1_224 = arg0->unk350;
        var_r1 = temp_r1_224 + 0x2194;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_224->unk2194;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x154:
        temp_r1_225 = arg0->unk350;
        var_r1 = temp_r1_225 + 0x2194;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_225->unk2194;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x155:
        temp_r1_226 = arg0->unk350;
        var_r1 = temp_r1_226 + 0x2195;
        var_r0 = (-4 & temp_r1_226->unk2195) | (arg2 & 3);
        goto block_578;
    case 0x158:
        temp_r1_227 = arg0->unk350;
        var_r1 = temp_r1_227 + 0x2195;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_227->unk2195;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x159:
        temp_r1_228 = arg0->unk350;
        var_r1 = temp_r1_228 + 0x2196;
        var_r0 = (-4 & temp_r1_228->unk2196) | (arg2 & 3);
        goto block_578;
    case 0x15A:
        temp_r1_229 = arg0->unk350;
        var_r1 = temp_r1_229 + 0x2196;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_229->unk2196;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x15B:
        temp_r1_230 = arg0->unk350;
        var_r1 = temp_r1_230 + 0x2196;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_230->unk2196;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x15C:
        temp_r1_231 = arg0->unk350;
        var_r1 = temp_r1_231 + 0x2196;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_231->unk2196;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x15E:
        temp_r1_232 = arg0->unk350;
        var_r1 = temp_r1_232 + 0x2197;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_232->unk2197;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x15F:
        temp_r1_233 = arg0->unk350;
        var_r1 = temp_r1_233 + 0x2197;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_233->unk2197;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x160:
        temp_r1_234 = arg0->unk350;
        var_r1 = temp_r1_234 + 0x2197;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_234->unk2197;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x161:
        temp_r1_235 = arg0->unk350;
        var_r1 = temp_r1_235 + 0x2198;
        var_r0 = (-4 & temp_r1_235->unk2198) | (arg2 & 3);
        goto block_578;
    case 0x162:
        temp_r1_236 = arg0->unk350;
        var_r1 = temp_r1_236 + 0x2198;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_236->unk2198;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x163:
        temp_r1_237 = arg0->unk350;
        var_r1 = temp_r1_237 + 0x2198;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_237->unk2198;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x164:
        temp_r1_238 = arg0->unk350;
        var_r1 = temp_r1_238 + 0x2198;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_238->unk2198;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x165:
        temp_r1_239 = arg0->unk350;
        var_r1 = temp_r1_239 + 0x2199;
        var_r0 = (-4 & temp_r1_239->unk2199) | (arg2 & 3);
        goto block_578;
    case 0x166:
        temp_r1_240 = arg0->unk350;
        var_r1 = temp_r1_240 + 0x2199;
        var_r3 = (arg2 & 1) * 4;
        var_r2_3 = temp_r1_240->unk2199;
        var_r0_3 = -5;
        goto block_577;
    case 0x167:
        temp_r1_241 = arg0->unk350;
        var_r1 = temp_r1_241 + 0x2199;
        var_r3 = (arg2 & 1) * 8;
        var_r2_3 = temp_r1_241->unk2199;
        var_r0_3 = -9;
        goto block_577;
    case 0x168:
        temp_r1_242 = arg0->unk350;
        var_r1 = temp_r1_242 + 0x2199;
        var_r3 = (arg2 & 1) * 0x10;
        var_r2_3 = temp_r1_242->unk2199;
        var_r0_3 = -0x11;
        goto block_577;
    case 0x169:
        temp_r1_243 = arg0->unk350;
        var_r1 = temp_r1_243 + 0x2199;
        var_r3 = (arg2 & 1) << 5;
        var_r2_3 = temp_r1_243->unk2199;
        var_r0_3 = -0x21;
        goto block_577;
    case 0x16A:
        var_r2_4 = 0x2199;
        goto block_576;
    case 0x16B:
        temp_r3_18 = arg0->unk350;
        var_r3_2 = temp_r3_18 + 0x2198;
        var_r1_5 = (3 & arg2) << 0xF;
        var_r0_4 = (s32) temp_r3_18->unk2198;
        var_r2_5 = 0xFFFE7FFF;
        goto block_475;
    case 0x16D:
        temp_r1_244 = arg0->unk350;
        var_r1 = temp_r1_244 + 0x219A;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_244->unk219A;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x16F:
        temp_r1_245 = arg0->unk350;
        var_r1 = temp_r1_245 + 0x219A;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_245->unk219A;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x170:
        temp_r1_246 = arg0->unk350;
        var_r1_6 = temp_r1_246 + 0x219A;
        var_r3_3 = (arg2 & 3) << 7;
        var_r2_6 = (u16) temp_r1_246->unk219A;
        var_r0_5 = 0xFFFFFE7F;
        goto block_512;
    case 0x171:
        temp_r1_247 = arg0->unk350;
        var_r1 = temp_r1_247 + 0x219B;
        var_r3 = (arg2 & 7) * 2;
        var_r2_3 = temp_r1_247->unk219B;
        var_r0_3 = -0xF;
        goto block_577;
    case 0x172:
        temp_r1_248 = arg0->unk350;
        var_r1 = temp_r1_248 + 0x219B;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_248->unk219B;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x173:
        var_r2_4 = 0x219B;
        goto block_576;
    case 0x174:
        temp_r3_19 = arg0->unk350;
        temp_r3_19->unk219B = (u8) ((0x7F & temp_r3_19->unk219B) | ((1 & arg2) << 7));
        var_r3_4 = temp_r3_19 + 0x219C;
        var_r1_7 = (arg2 >> 1) & 3;
        var_r2_7 = temp_r3_19->unk219C;
        var_r0_6 = -4;
        goto block_496;
    case 0x176:
        temp_r1_249 = arg0->unk350;
        var_r1 = temp_r1_249 + 0x219C;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_249->unk219C;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x178:
        temp_r1_250 = arg0->unk350;
        var_r1 = temp_r1_250 + 0x219C;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_250->unk219C;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x17A:
        temp_r1_251 = arg0->unk350;
        var_r1 = temp_r1_251 + 0x219D;
        var_r0 = (-4 & temp_r1_251->unk219D) | (arg2 & 3);
        goto block_578;
    case 0x17B:
        temp_r1_252 = arg0->unk350;
        var_r1 = temp_r1_252 + 0x219D;
        var_r3 = (arg2 & 1) * 4;
        var_r2_3 = temp_r1_252->unk219D;
        var_r0_3 = -5;
        goto block_577;
    case 0x17C:
        temp_r1_253 = arg0->unk350;
        var_r1 = temp_r1_253 + 0x219D;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_253->unk219D;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x17E:
        temp_r1_254 = arg0->unk350;
        var_r1 = temp_r1_254 + 0x219D;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_254->unk219D;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x17F:
        temp_r1_255 = arg0->unk350;
        var_r1 = temp_r1_255 + 0x219E;
        var_r0 = (-2 & temp_r1_255->unk219E) | (arg2 & 1);
        goto block_578;
    case 0x180:
        temp_r1_256 = arg0->unk350;
        var_r1 = temp_r1_256 + 0x219E;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_256->unk219E;
        var_r0_3 = -7;
        goto block_577;
    case 0x182:
        temp_r1_257 = arg0->unk350;
        var_r1 = temp_r1_257 + 0x219E;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_257->unk219E;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x183:
        temp_r1_258 = arg0->unk350;
        var_r1_6 = temp_r1_258 + 0x219E;
        var_r3_3 = (arg2 & 7) << 6;
        var_r2_6 = (u16) temp_r1_258->unk219E;
        var_r0_5 = 0xFFFFFE3F;
        goto block_512;
    case 0x184:
        temp_r1_259 = arg0->unk350;
        var_r1 = temp_r1_259 + 0x219F;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_259->unk219F;
        var_r0_3 = -7;
        goto block_577;
    case 0x185:
        temp_r1_260 = arg0->unk350;
        var_r1 = temp_r1_260 + 0x219F;
        var_r3 = (arg2 & 1) * 8;
        var_r2_3 = temp_r1_260->unk219F;
        var_r0_3 = -9;
        goto block_577;
    case 0x186:
        temp_r1_261 = arg0->unk350;
        var_r1 = temp_r1_261 + 0x219F;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_261->unk219F;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x187:
        temp_r1_262 = arg0->unk350;
        var_r1 = temp_r1_262 + 0x219F;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_262->unk219F;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x188:
        temp_r1_263 = arg0->unk350;
        var_r1 = temp_r1_263 + 0x21A0;
        var_r0 = (-4 & temp_r1_263->unk21A0) | (arg2 & 3);
        goto block_578;
    case 0x189:
        temp_r1_264 = arg0->unk350;
        var_r1 = temp_r1_264 + 0x21A0;
        var_r3 = (arg2 & 1) * 4;
        var_r2_3 = temp_r1_264->unk21A0;
        var_r0_3 = -5;
        goto block_577;
    case 0x18A:
        temp_r1_265 = arg0->unk350;
        var_r1 = temp_r1_265 + 0x21A0;
        var_r3 = (arg2 & 1) * 8;
        var_r2_3 = temp_r1_265->unk21A0;
        var_r0_3 = -9;
        goto block_577;
    case 0x18B:
        temp_r1_266 = arg0->unk350;
        var_r1 = temp_r1_266 + 0x21A0;
        var_r3 = (arg2 & 1) * 0x10;
        var_r2_3 = temp_r1_266->unk21A0;
        var_r0_3 = -0x11;
        goto block_577;
    case 0x18C:
        temp_r1_267 = arg0->unk350;
        var_r1 = temp_r1_267 + 0x21A0;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_267->unk21A0;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x18D:
        temp_r1_268 = arg0->unk350;
        var_r1_6 = temp_r1_268 + 0x21CA;
        var_r3_3 = (arg2 & 7) << 7;
        var_r2_6 = temp_r1_268->unk21CA;
        var_r0_5 = 0xFFFFFC7F;
        goto block_512;
    case 0x18E:
        temp_r1_269 = arg0->unk350;
        var_r1 = temp_r1_269 + 0x21A1;
        var_r0 = (-4 & temp_r1_269->unk21A1) | (arg2 & 3);
        goto block_578;
    case 0x190:
        temp_r1_270 = arg0->unk350;
        var_r1 = temp_r1_270 + 0x21A1;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_270->unk21A1;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x192:
        temp_r1_271 = arg0->unk350;
        var_r1 = temp_r1_271 + 0x21A1;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_271->unk21A1;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x193:
        temp_r1_272 = arg0->unk350;
        var_r1 = temp_r1_272 + 0x21A2;
        var_r0 = (-2 & temp_r1_272->unk21A2) | (arg2 & 1);
        goto block_578;
    case 0x194:
        temp_r1_273 = arg0->unk350;
        var_r1 = temp_r1_273 + 0x21A2;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_273->unk21A2;
        var_r0_3 = -7;
        goto block_577;
    case 0x196:
        temp_r1_274 = arg0->unk350;
        var_r1 = temp_r1_274 + 0x21A2;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_274->unk21A2;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x197:
        temp_r1_275 = arg0->unk350;
        var_r1 = temp_r1_275 + 0x21A2;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_275->unk21A2;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x198:
        temp_r1_276 = arg0->unk350;
        var_r1 = temp_r1_276 + 0x21A3;
        var_r0 = (-4 & temp_r1_276->unk21A3) | (arg2 & 3);
        goto block_578;
    case 0x199:
        temp_r1_277 = arg0->unk350;
        var_r1 = temp_r1_277 + 0x21A3;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_277->unk21A3;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x19A:
        temp_r1_278 = arg0->unk350;
        var_r1 = temp_r1_278 + 0x21A3;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_278->unk21A3;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x19B:
        var_r2_4 = 0x21A3;
        goto block_576;
    case 0x19C:
        temp_r3_20 = arg0->unk350;
        temp_r3_20->unk21A3 = (u8) ((0x7F & temp_r3_20->unk21A3) | ((arg2 & 1) << 7));
        var_r3_4 = temp_r3_20 + 0x21A4;
        var_r1_7 = (arg2 >> 1) & 1;
        var_r2_7 = temp_r3_20->unk21A4;
        var_r0_6 = -2;
        goto block_496;
    case 0x19D:
        temp_r1_279 = arg0->unk350;
        var_r1 = temp_r1_279 + 0x21A4;
        var_r3 = (arg2 & 1) * 2;
        var_r2_3 = temp_r1_279->unk21A4;
        var_r0_3 = -3;
        goto block_577;
    case 0x19E:
        temp_r1_280 = arg0->unk350;
        var_r1 = temp_r1_280 + 0x21A4;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_280->unk21A4;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x19F:
        temp_r1_281 = arg0->unk350;
        var_r1 = temp_r1_281 + 0x21A4;
        var_r3 = (arg2 & 1) * 0x10;
        var_r2_3 = temp_r1_281->unk21A4;
        var_r0_3 = -0x11;
        goto block_577;
    case 0x1A0:
        temp_r1_282 = arg0->unk350;
        var_r1 = temp_r1_282 + 0x21A4;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_282->unk21A4;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x1A1:
        temp_r1_283 = arg0->unk350;
        var_r1 = temp_r1_283 + 0x21A4;
        var_r3 = arg2 << 7;
        var_r2_3 = temp_r1_283->unk21A4;
        var_r0_3 = 0x7F;
        goto block_577;
    case 0x1A2:
        temp_r1_284 = arg0->unk350;
        var_r1 = temp_r1_284 + 0x21A5;
        var_r0 = (-4 & temp_r1_284->unk21A5) | (arg2 & 3);
        goto block_578;
    case 0x1A3:
        temp_r1_285 = arg0->unk350;
        var_r1 = temp_r1_285 + 0x21A5;
        var_r3 = (arg2 & 1) * 4;
        var_r2_3 = temp_r1_285->unk21A5;
        var_r0_3 = -5;
        goto block_577;
    case 0x1A4:
        temp_r1_286 = arg0->unk350;
        var_r1 = temp_r1_286 + 0x21A5;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_286->unk21A5;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x1A5:
        temp_r1_287 = arg0->unk350;
        var_r1 = temp_r1_287 + 0x21A5;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_287->unk21A5;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x1A6:
        temp_r3_21 = arg0->unk350;
        var_r3_2 = temp_r3_21 + 0x21A4;
        var_r1_5 = (7 & arg2) << 0xF;
        var_r0_4 = (s32) temp_r3_21->unk21A4;
        var_r2_5 = 0xFFFC7FFF;
        goto block_475;
    case 0x1A7:
        temp_r1_288 = arg0->unk350;
        var_r1 = temp_r1_288 + 0x21A6;
        var_r3 = (arg2 & 1) * 4;
        var_r2_3 = temp_r1_288->unk21A6;
        var_r0_3 = -5;
        goto block_577;
    case 0x1A8:
        temp_r1_289 = arg0->unk350;
        var_r1 = temp_r1_289 + 0x21A6;
        var_r3 = (arg2 & 1) * 8;
        var_r2_3 = temp_r1_289->unk21A6;
        var_r0_3 = -9;
        goto block_577;
    case 0x1A9:
        temp_r1_290 = arg0->unk350;
        var_r1 = temp_r1_290 + 0x21A6;
        var_r3 = (arg2 & 1) * 0x10;
        var_r2_3 = temp_r1_290->unk21A6;
        var_r0_3 = -0x11;
        goto block_577;
    case 0x1AA:
        temp_r1_291 = arg0->unk350;
        var_r1 = temp_r1_291 + 0x21A6;
        var_r3 = (arg2 & 1) << 5;
        var_r2_3 = temp_r1_291->unk21A6;
        var_r0_3 = -0x21;
        goto block_577;
    case 0x1AB:
        var_r2_4 = 0x21A6;
        goto block_576;
    case 0x1AC:
        temp_r1_292 = arg0->unk350;
        var_r1_6 = temp_r1_292 + 0x21A6;
        var_r3_3 = (arg2 & 3) << 7;
        var_r2_6 = (u16) temp_r1_292->unk21A6;
        var_r0_5 = 0xFFFFFE7F;
        goto block_512;
    case 0x1AD:
        temp_r1_293 = arg0->unk350;
        var_r1 = temp_r1_293 + 0x21A7;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_293->unk21A7;
        var_r0_3 = -7;
        goto block_577;
    case 0x1AE:
        temp_r1_294 = arg0->unk350;
        var_r1 = temp_r1_294 + 0x21A7;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_294->unk21A7;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x1AF:
        temp_r1_295 = arg0->unk350;
        var_r1 = temp_r1_295 + 0x21A7;
        var_r3 = (arg2 & 3) << 5;
        var_r2_3 = temp_r1_295->unk21A7;
        var_r0_3 = -0x61;
        goto block_577;
    case 0x1B0:
        temp_r3_22 = arg0->unk350;
        temp_r3_22->unk21A7 = (u8) ((0x7F & temp_r3_22->unk21A7) | ((arg2 & 1) << 7));
        var_r3_4 = temp_r3_22 + 0x21A8;
        var_r1_7 = (arg2 >> 1) & 1;
        var_r2_7 = temp_r3_22->unk21A8;
        var_r0_6 = -2;
        goto block_496;
    case 0x1B1:
        temp_r1_296 = arg0->unk350;
        var_r1 = temp_r1_296 + 0x21A8;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_296->unk21A8;
        var_r0_3 = -7;
        goto block_577;
    case 0x1B2:
        temp_r1_297 = arg0->unk350;
        var_r1 = temp_r1_297 + 0x21A8;
        var_r3 = (arg2 & 3) * 8;
        var_r2_3 = temp_r1_297->unk21A8;
        var_r0_3 = -0x19;
        goto block_577;
    case 0x1B3:
        temp_r1_298 = arg0->unk350;
        var_r1 = temp_r1_298 + 0x21A8;
        var_r3 = arg2 << 5;
        var_r2_3 = temp_r1_298->unk21A8;
        var_r0_3 = 0x1F;
        goto block_577;
    case 0x1B4:
        temp_r1_299 = arg0->unk350;
        var_r1 = temp_r1_299 + 0x21A9;
        var_r0 = (-4 & temp_r1_299->unk21A9) | (arg2 & 3);
        goto block_578;
    case 0x1B5:
        temp_r1_300 = arg0->unk350;
        var_r1 = temp_r1_300 + 0x21A9;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_300->unk21A9;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x1B6:
        temp_r1_301 = arg0->unk350;
        var_r1 = temp_r1_301 + 0x21A9;
        var_r3 = (arg2 & 1) * 0x10;
        var_r2_3 = temp_r1_301->unk21A9;
        var_r0_3 = -0x11;
        goto block_577;
    case 0x1B7:
        temp_r1_302 = arg0->unk350;
        var_r1 = temp_r1_302 + 0x21A9;
        var_r3 = (arg2 & 1) << 5;
        var_r2_3 = temp_r1_302->unk21A9;
        var_r0_3 = -0x21;
        goto block_577;
    case 0x1B8:
        var_r2_4 = 0x21A9;
        goto block_576;
    case 0x1B9:
        temp_r1_303 = arg0->unk350;
        var_r1 = temp_r1_303 + 0x21A9;
        var_r3 = arg2 << 7;
        var_r2_3 = temp_r1_303->unk21A9;
        var_r0_3 = 0x7F;
        goto block_577;
    case 0x1BA:
        temp_r1_304 = arg0->unk350;
        var_r1 = temp_r1_304 + 0x21AA;
        var_r0 = (-2 & temp_r1_304->unk21AA) | (arg2 & 1);
        goto block_578;
    case 0x1BB:
        temp_r1_305 = arg0->unk350;
        var_r1 = temp_r1_305 + 0x21AA;
        var_r3 = (arg2 & 1) * 2;
        var_r2_3 = temp_r1_305->unk21AA;
        var_r0_3 = -3;
        goto block_577;
    case 0x1BC:
        temp_r1_306 = arg0->unk350;
        var_r1 = temp_r1_306 + 0x21AA;
        var_r3 = (arg2 & 1) * 4;
        var_r2_3 = temp_r1_306->unk21AA;
        var_r0_3 = -5;
        goto block_577;
    case 0x1BD:
        temp_r1_307 = arg0->unk350;
        var_r1 = temp_r1_307 + 0x21AA;
        var_r3 = (arg2 & 1) * 8;
        var_r2_3 = temp_r1_307->unk21AA;
        var_r0_3 = -9;
        goto block_577;
    case 0x1BE:
        temp_r1_308 = arg0->unk350;
        var_r1 = temp_r1_308 + 0x21AA;
        var_r3 = (arg2 & 1) * 0x10;
        var_r2_3 = temp_r1_308->unk21AA;
        var_r0_3 = -0x11;
        goto block_577;
    case 0x1BF:
        temp_r1_309 = arg0->unk350;
        var_r1 = temp_r1_309 + 0x21AA;
        var_r3 = (arg2 & 1) << 5;
        var_r2_3 = temp_r1_309->unk21AA;
        var_r0_3 = -0x21;
        goto block_577;
    case 0x1C0:
        var_r2_4 = 0x21AA;
        goto block_576;
    case 0x1C1:
        temp_r1_310 = arg0->unk350;
        var_r1 = temp_r1_310 + 0x21AA;
        var_r3 = arg2 << 7;
        var_r2_3 = temp_r1_310->unk21AA;
        var_r0_3 = 0x7F;
        goto block_577;
    case 0x1C2:
        temp_r1_311 = arg0->unk350;
        var_r1 = temp_r1_311 + 0x21AB;
        var_r0 = (-2 & temp_r1_311->unk21AB) | (arg2 & 1);
        goto block_578;
    case 0x1C3:
        temp_r1_312 = arg0->unk350;
        var_r1 = temp_r1_312 + 0x21AB;
        var_r3 = (arg2 & 1) * 2;
        var_r2_3 = temp_r1_312->unk21AB;
        var_r0_3 = -3;
        goto block_577;
    case 0x1C4:
        temp_r1_313 = arg0->unk350;
        var_r1 = temp_r1_313 + 0x21AB;
        var_r3 = (arg2 & 1) * 4;
        var_r2_3 = temp_r1_313->unk21AB;
        var_r0_3 = -5;
        goto block_577;
    case 0x1C5:
        temp_r1_314 = arg0->unk350;
        var_r1 = temp_r1_314 + 0x21AB;
        var_r3 = (arg2 & 1) * 8;
        var_r2_3 = temp_r1_314->unk21AB;
        var_r0_3 = -9;
        goto block_577;
    case 0x1C6:
        temp_r1_315 = arg0->unk350;
        var_r1_6 = temp_r1_315 + 0x21B4;
        var_r3_3 = arg2 << 6;
        var_r2_6 = temp_r1_315->unk21B4;
        var_r0_5 = 0xFFFFC03F;
        goto block_512;
    case 0x1C7:
        var_r2_9 = 0x21B4;
block_474:
        var_r3_2 = arg0->unk350 + var_r2_9;
        var_r1_5 = (0xFF & arg2) << 0xE;
        var_r0_4 = *var_r3_2;
        var_r2_5 = 0xFFC03FFF;
        goto block_475;
    case 0x1C8:
        temp_r1_316 = arg0->unk350;
        var_r1_6 = temp_r1_316 + 0x21B6;
        var_r3_3 = arg2 << 6;
        var_r2_6 = temp_r1_316->unk21B6;
        var_r0_5 = 0xFFFFC03F;
        goto block_512;
    case 0x1C9:
        temp_r3_23 = arg0->unk350;
        temp_r3_23->unk21B7 = (u8) ((0x3F & temp_r3_23->unk21B7) | ((3 & arg2) << 6));
        var_r3_4 = temp_r3_23 + 0x21B8;
        var_r1_7 = (arg2 >> 2) & 0x3F;
        var_r2_7 = temp_r3_23->unk21B8;
        var_r0_6 = -0x40;
        goto block_496;
    case 0x1CA:
        temp_r1_317 = arg0->unk350;
        var_r1_6 = temp_r1_317 + 0x21B8;
        var_r3_3 = arg2 << 6;
        var_r2_6 = (u16) temp_r1_317->unk21B8;
        var_r0_5 = 0xFFFFC03F;
        goto block_512;
    case 0x1CB:
        var_r2_9 = 0x21B8;
        goto block_474;
    case 0x1CC:
        temp_r1_318 = arg0->unk350;
        var_r1_6 = temp_r1_318 + 0x21BA;
        var_r3_3 = arg2 << 6;
        var_r2_6 = temp_r1_318->unk21BA;
        var_r0_5 = 0xFFFFC03F;
        goto block_512;
    case 0x1CD:
        temp_r3_24 = arg0->unk350;
        temp_r3_24->unk21BB = (u8) ((0x3F & temp_r3_24->unk21BB) | ((3 & arg2) << 6));
        var_r3_4 = temp_r3_24 + 0x21BC;
        var_r1_7 = (arg2 >> 2) & 0x3F;
        var_r2_7 = temp_r3_24->unk21BC;
        var_r0_6 = -0x40;
        goto block_496;
    case 0x1CE:
        temp_r1_319 = arg0->unk350;
        var_r1_6 = temp_r1_319 + 0x21BC;
        var_r3_3 = arg2 << 6;
        var_r2_6 = (u16) temp_r1_319->unk21BC;
        var_r0_5 = 0xFFFFC03F;
        goto block_512;
    case 0x1CF:
        var_r2_9 = 0x21BC;
        goto block_474;
    case 0x1D0:
        temp_r1_320 = arg0->unk350;
        var_r1_6 = temp_r1_320 + 0x21BE;
        var_r3_3 = arg2 << 6;
        var_r2_6 = temp_r1_320->unk21BE;
        var_r0_5 = 0xFFFFC03F;
        goto block_512;
    case 0x1D1:
        temp_r3_25 = arg0->unk350;
        temp_r3_25->unk21BF = (u8) ((0x3F & temp_r3_25->unk21BF) | ((3 & arg2) << 6));
        var_r3_4 = temp_r3_25 + 0x21C0;
        var_r1_7 = (arg2 >> 2) & 0x3F;
        var_r2_7 = temp_r3_25->unk21C0;
        var_r0_6 = -0x40;
        goto block_496;
    case 0x1D2:
        temp_r1_321 = arg0->unk350;
        var_r1_6 = temp_r1_321 + 0x21C0;
        var_r3_3 = (arg2 & 7) << 6;
        var_r2_6 = (u16) temp_r1_321->unk21C0;
        var_r0_5 = 0xFFFFFE3F;
        goto block_512;
    case 0x1D3:
        temp_r1_322 = arg0->unk350;
        var_r1 = temp_r1_322 + 0x21C1;
        var_r3 = (arg2 & 3) * 2;
        var_r2_3 = temp_r1_322->unk21C1;
        var_r0_3 = -7;
        goto block_577;
    case 0x1D4:
        temp_r1_323 = arg0->unk350;
        var_r1 = temp_r1_323 + 0x21C1;
        var_r3 = (arg2 & 1) * 8;
        var_r2_3 = temp_r1_323->unk21C1;
        var_r0_3 = -9;
        goto block_577;
    case 0x1D5:
        temp_r1_324 = arg0->unk350;
        var_r1 = temp_r1_324 + 0x21C1;
        var_r3 = (arg2 & 1) * 0x10;
        var_r2_3 = temp_r1_324->unk21C1;
        var_r0_3 = -0x11;
        goto block_577;
    case 0x1D6:
        temp_r1_325 = arg0->unk350;
        var_r1 = temp_r1_325 + 0x21C1;
        var_r3 = (arg2 & 1) << 5;
        var_r2_3 = temp_r1_325->unk21C1;
        var_r0_3 = -0x21;
        goto block_577;
    case 0x1D7:
        var_r2_4 = 0x21C1;
        goto block_576;
    case 0x1D8:
        temp_r1_326 = arg0->unk350;
        var_r1 = temp_r1_326 + 0x21C1;
        var_r3 = arg2 << 7;
        var_r2_3 = temp_r1_326->unk21C1;
        var_r0_3 = 0x7F;
        goto block_577;
    case 0x1D9:
        temp_r1_327 = arg0->unk350;
        var_r1 = temp_r1_327 + 0x21C2;
        var_r0 = (-2 & temp_r1_327->unk21C2) | (arg2 & 1);
        goto block_578;
    case 0x1DA:
        temp_r1_328 = arg0->unk350;
        var_r1 = temp_r1_328 + 0x21C2;
        var_r3 = (arg2 & 1) * 2;
        var_r2_3 = temp_r1_328->unk21C2;
        var_r0_3 = -3;
        goto block_577;
    case 0x1DB:
        temp_r1_329 = arg0->unk350;
        var_r1 = temp_r1_329 + 0x21C2;
        var_r3 = (arg2 & 1) * 4;
        var_r2_3 = temp_r1_329->unk21C2;
        var_r0_3 = -5;
        goto block_577;
    case 0x1DC:
        temp_r1_330 = arg0->unk350;
        var_r1 = temp_r1_330 + 0x21C2;
        var_r3 = (arg2 & 1) * 8;
        var_r2_3 = temp_r1_330->unk21C2;
        var_r0_3 = -9;
        goto block_577;
    case 0x1DD:
        temp_r1_331 = arg0->unk350;
        var_r1 = temp_r1_331 + 0x21C2;
        var_r3 = (arg2 & 1) * 0x10;
        var_r2_3 = temp_r1_331->unk21C2;
        var_r0_3 = -0x11;
        goto block_577;
    case 0x1DE:
        temp_r1_332 = arg0->unk350;
        var_r1 = temp_r1_332 + 0x21C2;
        var_r3 = (arg2 & 1) << 5;
        var_r2_3 = temp_r1_332->unk21C2;
        var_r0_3 = -0x21;
        goto block_577;
    case 0x1DF:
        var_r2_4 = 0x21C2;
        goto block_576;
    case 0x1E0:
        temp_r1_333 = arg0->unk350;
        var_r1_6 = temp_r1_333 + 0x21C2;
        var_r3_3 = (arg2 & 0xF) << 7;
        var_r2_6 = (u16) temp_r1_333->unk21C2;
        var_r0_5 = 0xFFFFF87F;
        goto block_512;
    case 0x1E1:
        temp_r1_334 = arg0->unk350;
        var_r1 = temp_r1_334 + 0x21C3;
        var_r3 = (arg2 & 0xF) * 8;
        var_r2_3 = temp_r1_334->unk21C3;
        var_r0_3 = -0x79;
        goto block_577;
    case 0x1E2:
        temp_r3_26 = arg0->unk350;
        temp_r3_26->unk21C3 = (u8) ((0x7F & temp_r3_26->unk21C3) | ((1 & arg2) << 7));
        var_r1_8 = arg2 >> 1;
        var_r2_8 = 0x21C4;
        goto block_495;
    case 0x1E3:
        temp_r1_335 = arg0->unk350;
        var_r1 = temp_r1_335 + 0x21C4;
        var_r3 = (arg2 & 1) * 8;
        var_r2_3 = temp_r1_335->unk21C4;
        var_r0_3 = -9;
        goto block_577;
    case 0x1E4:
        temp_r1_336 = arg0->unk350;
        var_r1 = temp_r1_336 + 0x21C4;
        var_r3 = (arg2 & 1) * 0x10;
        var_r2_3 = temp_r1_336->unk21C4;
        var_r0_3 = -0x11;
        goto block_577;
    case 0x1E5:
        temp_r1_337 = arg0->unk350;
        var_r1 = temp_r1_337 + 0x21C4;
        var_r3 = (arg2 & 1) << 5;
        var_r2_3 = temp_r1_337->unk21C4;
        var_r0_3 = -0x21;
        goto block_577;
    case 0x1E6:
        var_r2_4 = 0x21C4;
        goto block_576;
    case 0x1E7:
        temp_r1_338 = arg0->unk350;
        var_r1 = temp_r1_338 + 0x21C4;
        var_r3 = arg2 << 7;
        var_r2_3 = temp_r1_338->unk21C4;
        var_r0_3 = 0x7F;
        goto block_577;
    case 0x1E8:
        temp_r1_339 = arg0->unk350;
        var_r1 = temp_r1_339 + 0x21C5;
        var_r0 = (-2 & temp_r1_339->unk21C5) | (arg2 & 1);
        goto block_578;
    case 0x1E9:
        temp_r1_340 = arg0->unk350;
        var_r1 = temp_r1_340 + 0x21C5;
        var_r3 = (arg2 & 1) * 2;
        var_r2_3 = temp_r1_340->unk21C5;
        var_r0_3 = -3;
        goto block_577;
    case 0x1EA:
        temp_r1_341 = arg0->unk350;
        var_r1 = temp_r1_341 + 0x21C5;
        var_r3 = (arg2 & 1) * 4;
        var_r2_3 = temp_r1_341->unk21C5;
        var_r0_3 = -5;
        goto block_577;
    case 0x1EB:
        temp_r1_342 = arg0->unk350;
        var_r1 = temp_r1_342 + 0x21C5;
        var_r3 = (arg2 & 1) * 8;
        var_r2_3 = temp_r1_342->unk21C5;
        var_r0_3 = -9;
        goto block_577;
    case 0x1EC:
        temp_r1_343 = arg0->unk350;
        var_r1 = temp_r1_343 + 0x21C5;
        var_r3 = (arg2 & 1) * 0x10;
        var_r2_3 = temp_r1_343->unk21C5;
        var_r0_3 = -0x11;
        goto block_577;
    case 0x1ED:
        temp_r1_344 = arg0->unk350;
        var_r1 = temp_r1_344 + 0x21C5;
        var_r3 = (arg2 & 1) << 5;
        var_r2_3 = temp_r1_344->unk21C5;
        var_r0_3 = -0x21;
        goto block_577;
    case 0x1EE:
        var_r2_4 = 0x21C5;
        goto block_576;
    case 0x1EF:
        temp_r1_345 = arg0->unk350;
        var_r1 = temp_r1_345 + 0x21C5;
        var_r3 = arg2 << 7;
        var_r2_3 = temp_r1_345->unk21C5;
        var_r0_3 = 0x7F;
        goto block_577;
    case 0x1F0:
        temp_r1_346 = arg0->unk350;
        var_r1 = temp_r1_346 + 0x21C6;
        var_r0 = (-2 & temp_r1_346->unk21C6) | (arg2 & 1);
        goto block_578;
    case 0x1F1:
        temp_r1_347 = arg0->unk350;
        var_r1_6 = temp_r1_347 + 0x21C6;
        var_r3_3 = arg2 * 2;
        var_r2_6 = (u16) temp_r1_347->unk21C6;
        var_r0_5 = 0xFFFFFE01;
        goto block_512;
    case 0x1F2:
        temp_r1_348 = arg0->unk350;
        var_r1 = temp_r1_348 + 0x21C7;
        var_r3 = (arg2 & 1) * 2;
        var_r2_3 = temp_r1_348->unk21C7;
        var_r0_3 = -3;
        goto block_577;
    case 0x1F3:
        temp_r1_349 = arg0->unk350;
        var_r1 = temp_r1_349 + 0x21C7;
        var_r3 = (arg2 & 1) * 4;
        var_r2_3 = temp_r1_349->unk21C7;
        var_r0_3 = -5;
        goto block_577;
    case 0x1F4:
        temp_r1_350 = arg0->unk350;
        var_r1 = temp_r1_350 + 0x21C7;
        var_r3 = (arg2 & 1) * 8;
        var_r2_3 = temp_r1_350->unk21C7;
        var_r0_3 = -9;
        goto block_577;
    case 0x1F5:
        temp_r1_351 = arg0->unk350;
        var_r1 = temp_r1_351 + 0x21C7;
        var_r3 = (arg2 & 1) * 0x10;
        var_r2_3 = temp_r1_351->unk21C7;
        var_r0_3 = -0x11;
        goto block_577;
    case 0x1F6:
        temp_r1_352 = arg0->unk350;
        var_r1 = temp_r1_352 + 0x21C7;
        var_r3 = (arg2 & 1) << 5;
        var_r2_3 = temp_r1_352->unk21C7;
        var_r0_3 = -0x21;
        goto block_577;
    case 0x1F7:
        var_r2_4 = 0x21C7;
        goto block_576;
    case 0x1F8:
        temp_r1_353 = arg0->unk350;
        var_r1 = temp_r1_353 + 0x21C7;
        var_r3 = arg2 << 7;
        var_r2_3 = temp_r1_353->unk21C7;
        var_r0_3 = 0x7F;
        goto block_577;
    case 0x1F9:
        temp_r1_354 = arg0->unk350;
        var_r1 = temp_r1_354 + 0x21C8;
        var_r0 = (-2 & temp_r1_354->unk21C8) | (arg2 & 1);
        goto block_578;
    case 0x1FA:
        temp_r1_355 = arg0->unk350;
        var_r1 = temp_r1_355 + 0x21C8;
        var_r3 = (arg2 & 1) * 2;
        var_r2_3 = temp_r1_355->unk21C8;
        var_r0_3 = -3;
        goto block_577;
    case 0x1FB:
        temp_r1_356 = arg0->unk350;
        var_r1 = temp_r1_356 + 0x21AB;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_356->unk21AB;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x1FC:
        temp_r1_357 = arg0->unk350;
        var_r1 = temp_r1_357 + 0x21AB;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_357->unk21AB;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x1FD:
        temp_r1_358 = arg0->unk350;
        var_r1 = temp_r1_358 + 0x21AC;
        var_r0 = (-4 & temp_r1_358->unk21AC) | (arg2 & 3);
        goto block_578;
    case 0x1FE:
        temp_r1_359 = arg0->unk350;
        var_r1 = temp_r1_359 + 0x21AC;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_359->unk21AC;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x1FF:
        temp_r1_360 = arg0->unk350;
        var_r1 = temp_r1_360 + 0x21AC;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_360->unk21AC;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x200:
        temp_r1_361 = arg0->unk350;
        var_r1 = temp_r1_361 + 0x21AC;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_361->unk21AC;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x201:
        temp_r1_362 = arg0->unk350;
        var_r1 = temp_r1_362 + 0x21AD;
        var_r0 = (-4 & temp_r1_362->unk21AD) | (arg2 & 3);
        goto block_578;
    case 0x202:
        temp_r1_363 = arg0->unk350;
        var_r1 = temp_r1_363 + 0x21AD;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_363->unk21AD;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x203:
        temp_r1_364 = arg0->unk350;
        var_r1 = temp_r1_364 + 0x21AD;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_364->unk21AD;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x204:
        temp_r1_365 = arg0->unk350;
        var_r1 = temp_r1_365 + 0x21AD;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_365->unk21AD;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x205:
        temp_r1_366 = arg0->unk350;
        var_r1 = temp_r1_366 + 0x21AE;
        var_r0 = (-4 & temp_r1_366->unk21AE) | (arg2 & 3);
        goto block_578;
    case 0x206:
        temp_r1_367 = arg0->unk350;
        var_r1 = temp_r1_367 + 0x21AE;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_367->unk21AE;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x207:
        temp_r1_368 = arg0->unk350;
        var_r1 = temp_r1_368 + 0x21AE;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_368->unk21AE;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x208:
        temp_r1_369 = arg0->unk350;
        var_r1 = temp_r1_369 + 0x21AE;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_369->unk21AE;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x209:
        temp_r1_370 = arg0->unk350;
        var_r1 = temp_r1_370 + 0x21AF;
        var_r0 = (-4 & temp_r1_370->unk21AF) | (arg2 & 3);
        goto block_578;
    case 0x20A:
        temp_r1_371 = arg0->unk350;
        var_r1 = temp_r1_371 + 0x21AF;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_371->unk21AF;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x20B:
        temp_r1_372 = arg0->unk350;
        var_r1 = temp_r1_372 + 0x21AF;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_372->unk21AF;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x20C:
        temp_r1_373 = arg0->unk350;
        var_r1 = temp_r1_373 + 0x21AF;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_373->unk21AF;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x20D:
        temp_r1_374 = arg0->unk350;
        var_r1 = temp_r1_374 + 0x21B0;
        var_r0 = (-4 & temp_r1_374->unk21B0) | (arg2 & 3);
        goto block_578;
    case 0x20E:
        temp_r1_375 = arg0->unk350;
        var_r1 = temp_r1_375 + 0x21B0;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_375->unk21B0;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x20F:
        temp_r1_376 = arg0->unk350;
        var_r1 = temp_r1_376 + 0x21B0;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_376->unk21B0;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x210:
        temp_r1_377 = arg0->unk350;
        var_r1 = temp_r1_377 + 0x21B0;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_377->unk21B0;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x211:
        temp_r1_378 = arg0->unk350;
        var_r1 = temp_r1_378 + 0x21B1;
        var_r0 = (-4 & temp_r1_378->unk21B1) | (arg2 & 3);
        goto block_578;
    case 0x212:
        temp_r1_379 = arg0->unk350;
        var_r1 = temp_r1_379 + 0x21B1;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_379->unk21B1;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x213:
        temp_r1_380 = arg0->unk350;
        var_r1 = temp_r1_380 + 0x21B1;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_380->unk21B1;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x214:
        temp_r1_381 = arg0->unk350;
        var_r1 = temp_r1_381 + 0x21B1;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_381->unk21B1;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x215:
        temp_r1_382 = arg0->unk350;
        var_r1 = temp_r1_382 + 0x21B2;
        var_r0 = (-4 & temp_r1_382->unk21B2) | (arg2 & 3);
        goto block_578;
    case 0x216:
        temp_r1_383 = arg0->unk350;
        var_r1 = temp_r1_383 + 0x21B2;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_383->unk21B2;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x217:
        temp_r1_384 = arg0->unk350;
        var_r1 = temp_r1_384 + 0x21B2;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_384->unk21B2;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x218:
        temp_r1_385 = arg0->unk350;
        var_r1 = temp_r1_385 + 0x21B2;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_385->unk21B2;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x219:
        temp_r1_386 = arg0->unk350;
        var_r1 = temp_r1_386 + 0x21B3;
        var_r0 = (-4 & temp_r1_386->unk21B3) | (arg2 & 3);
        goto block_578;
    case 0x21A:
        temp_r1_387 = arg0->unk350;
        var_r1 = temp_r1_387 + 0x21B3;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = temp_r1_387->unk21B3;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x21B:
        temp_r1_388 = arg0->unk350;
        var_r1 = temp_r1_388 + 0x21B3;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = temp_r1_388->unk21B3;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x21C:
        temp_r1_389 = arg0->unk350;
        var_r1 = temp_r1_389 + 0x21B3;
        var_r3 = arg2 << 6;
        var_r2_3 = temp_r1_389->unk21B3;
        var_r0_3 = 0x3F;
        goto block_577;
    case 0x21D:
        temp_r1_390 = arg0->unk350;
        var_r1 = temp_r1_390 + 0x21B4;
        var_r0 = (-4 & (u8) temp_r1_390->unk21B4) | (arg2 & 3);
        goto block_578;
    case 0x21E:
        temp_r1_391 = arg0->unk350;
        var_r1 = temp_r1_391 + 0x21B4;
        var_r3 = (arg2 & 3) * 4;
        var_r2_3 = (u8) temp_r1_391->unk21B4;
        var_r0_3 = -0xD;
        goto block_577;
    case 0x21F:
        temp_r1_392 = arg0->unk350;
        var_r1 = temp_r1_392 + 0x21B4;
        var_r3 = (arg2 & 3) * 0x10;
        var_r2_3 = (u8) temp_r1_392->unk21B4;
        var_r0_3 = -0x31;
        goto block_577;
    case 0x220:
        temp_r1_393 = arg0->unk350;
        var_r1 = temp_r1_393 + 0x21C8;
        var_r3 = (arg2 & 1) * 4;
        var_r2_3 = temp_r1_393->unk21C8;
        var_r0_3 = -5;
        goto block_577;
    case 0x221:
        temp_r1_394 = arg0->unk350;
        var_r1 = temp_r1_394 + 0x21C8;
        var_r3 = (arg2 & 1) * 8;
        var_r2_3 = temp_r1_394->unk21C8;
        var_r0_3 = -9;
        goto block_577;
    case 0x222:
        temp_r1_395 = arg0->unk350;
        var_r1 = temp_r1_395 + 0x21C8;
        var_r3 = arg2 * 0x10;
        var_r2_3 = temp_r1_395->unk21C8;
        var_r0_3 = 0xF;
        goto block_577;
    case 0x223:
        temp_r1_396 = arg0->unk350;
        var_r1 = temp_r1_396 + 0x21C9;
        var_r0 = (-2 & temp_r1_396->unk21C9) | (arg2 & 1);
        goto block_578;
    case 0x224:
        temp_r1_397 = arg0->unk350;
        var_r1 = temp_r1_397 + 0x21C9;
        var_r3 = (arg2 & 0xF) * 2;
        var_r2_3 = temp_r1_397->unk21C9;
        var_r0_3 = -0x1F;
        goto block_577;
    case 0x225:
        temp_r1_398 = arg0->unk350;
        var_r1 = temp_r1_398 + 0x21C9;
        var_r3 = (arg2 & 1) << 5;
        var_r2_3 = temp_r1_398->unk21C9;
        var_r0_3 = -0x21;
        goto block_577;
    case 0x226:
        var_r2_4 = 0x21C9;
        goto block_576;
    case 0x227:
        temp_r1_399 = arg0->unk350;
        var_r1 = temp_r1_399 + 0x21C9;
        var_r3 = arg2 << 7;
        var_r2_3 = temp_r1_399->unk21C9;
        var_r0_3 = 0x7F;
        goto block_577;
    case 0x228:
        temp_r1_400 = arg0->unk350;
        var_r1 = temp_r1_400 + 0x21CA;
        var_r0 = (-4 & (u8) temp_r1_400->unk21CA) | (arg2 & 3);
        goto block_578;
    case 0x229:
        temp_r1_401 = arg0->unk350;
        var_r1 = temp_r1_401 + 0x21CA;
        var_r3 = (arg2 & 1) * 4;
        var_r2_3 = (u8) temp_r1_401->unk21CA;
        var_r0_3 = -5;
        goto block_577;
    case 0x22A:
        temp_r1_402 = arg0->unk350;
        var_r1 = temp_r1_402 + 0x21CA;
        var_r3 = (arg2 & 1) * 8;
        var_r2_3 = (u8) temp_r1_402->unk21CA;
        var_r0_3 = -9;
        goto block_577;
    case 0x22B:
        temp_r1_403 = arg0->unk350;
        var_r1 = temp_r1_403 + 0x21CA;
        var_r3 = (arg2 & 1) * 0x10;
        var_r2_3 = (u8) temp_r1_403->unk21CA;
        var_r0_3 = -0x11;
        goto block_577;
    case 0x22C:
        temp_r1_404 = arg0->unk350;
        var_r1 = temp_r1_404 + 0x21CA;
        var_r3 = (arg2 & 1) << 5;
        var_r2_3 = (u8) temp_r1_404->unk21CA;
        var_r0_3 = -0x21;
        goto block_577;
    case 0x22D:
        var_r2_4 = 0x21CA;
        goto block_576;
    case 0x22E:
        temp_r1_405 = arg0->unk350;
        var_r1 = temp_r1_405 + 0x21CB;
        var_r3 = arg2 * 4;
        var_r2_3 = temp_r1_405->unk21CB;
        var_r0_3 = 3;
        goto block_577;
    case 0x22F:
        temp_r1_406 = arg0->unk350;
        var_r1 = temp_r1_406 + 0x216E;
        var_r3 = (arg2 & 1) << 5;
        var_r2_3 = temp_r1_406->unk216E;
        var_r0_3 = -0x21;
        goto block_577;
    case 0x230:
        var_r2_4 = 0x216E;
        goto block_576;
    }
    temp_r2_9 = func_0804590C(arg0, arg1);
    temp_r1_407 = arg1 - 0x46;
    switch (temp_r1_407) {
    case 0x0:
    case 0x1:
    case 0x3:
    case 0x4:
    case 0x5:
    case 0x6:
    case 0x7:
    case 0x8:
    case 0x9:
    case 0xA:
    case 0xC:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3C:
    case 0x3D:
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x41:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4C:
    case 0x4D:
    case 0x4E:
    case 0x4F:
    case 0x50:
    case 0x51:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5A:
    case 0x5B:
    case 0x5C:
    case 0x5D:
    case 0x5E:
    case 0x5F:
    case 0x60:
    case 0x61:
    case 0x62:
    case 0x63:
    case 0x64:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6A:
    case 0x6B:
    case 0x6C:
    case 0x6D:
    case 0x6E:
    case 0x6F:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7A:
    case 0x7B:
    case 0x7C:
    case 0x7D:
    case 0x7E:
    case 0x7F:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8A:
    case 0x8B:
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
    case 0x95:
    case 0x96:
    case 0x97:
    case 0x99:
    case 0x9A:
    case 0x9B:
    case 0x9C:
    case 0x9D:
    case 0x9E:
    case 0xA0:
    case 0xA1:
    case 0xA2:
    case 0xA3:
    case 0xA4:
    case 0xA5:
    case 0xA6:
    case 0xA7:
    case 0xA8:
    case 0xA9:
    case 0xAA:
    case 0xAB:
    case 0xAC:
    case 0xAD:
    case 0xB3:
    case 0xB4:
    case 0xB5:
    case 0xB6:
    case 0xB7:
    case 0xB9:
    case 0xBA:
    case 0xBC:
    case 0xBE:
    case 0xBF:
    case 0xC0:
    case 0xC1:
    case 0xC4:
    case 0xC5:
    case 0xC8:
    case 0xC9:
    case 0xCA:
    case 0xCB:
    case 0xCC:
    case 0xCE:
    case 0xCF:
    case 0xD0:
    case 0xD1:
    case 0xD2:
    case 0xD3:
    case 0xD4:
    case 0xD5:
    case 0xD6:
    case 0xD7:
    case 0xD8:
    case 0xD9:
    case 0xDA:
    case 0xDB:
    case 0xDC:
    case 0xDD:
    case 0xE0:
    case 0xE1:
    case 0xE2:
    case 0xE4:
    case 0xE5:
    case 0xE6:
    case 0xE7:
    case 0xE8:
    case 0xE9:
    case 0xEA:
    case 0xEC:
    case 0xED:
    case 0xEE:
    case 0xEF:
    case 0xF0:
    case 0xF1:
    case 0xF2:
    case 0xF3:
    case 0xF5:
    case 0xF6:
    case 0xF7:
    case 0xF8:
    case 0xF9:
    case 0xFA:
    case 0xFB:
    case 0xFC:
    case 0xFD:
    case 0xFF:
    case 0x100:
    case 0x102:
    case 0x103:
    case 0x104:
    case 0x105:
    case 0x106:
    case 0x108:
    case 0x109:
    case 0x10A:
    case 0x10B:
    case 0x10C:
    case 0x10D:
    case 0x10F:
    case 0x110:
    case 0x112:
    case 0x113:
    case 0x114:
    case 0x115:
    case 0x116:
    case 0x117:
    case 0x118:
    case 0x119:
    case 0x11A:
    case 0x11B:
    case 0x11C:
    case 0x11D:
    case 0x11E:
    case 0x11F:
    case 0x120:
    case 0x121:
    case 0x122:
    case 0x123:
    case 0x124:
    case 0x125:
    case 0x126:
    case 0x127:
    case 0x128:
    case 0x129:
    case 0x12A:
    case 0x12B:
    case 0x12C:
    case 0x12D:
    case 0x12E:
    case 0x12F:
    case 0x130:
    case 0x131:
    case 0x132:
    case 0x133:
    case 0x134:
    case 0x135:
    case 0x136:
    case 0x137:
    case 0x138:
    case 0x139:
    case 0x13A:
    case 0x13B:
    case 0x141:
    case 0x143:
    case 0x145:
    case 0x146:
    case 0x148:
    case 0x14C:
    case 0x14E:
    case 0x150:
    case 0x152:
    case 0x154:
    case 0x156:
    case 0x158:
    case 0x15A:
    case 0x15C:
    case 0x15D:
    case 0x15E:
    case 0x162:
    case 0x164:
    case 0x166:
    case 0x168:
    case 0x16A:
    case 0x16C:
    case 0x16D:
    case 0x16E:
    case 0x16F:
    case 0x170:
    case 0x172:
    case 0x174:
    case 0x176:
    case 0x178:
    case 0x17A:
    case 0x17B:
    case 0x182:
    case 0x183:
    case 0x184:
    case 0x185:
    case 0x186:
    case 0x187:
    case 0x188:
    case 0x18A:
    case 0x18B:
        if (temp_r2_9 != temp_sb) {
            switch (temp_r2_9) {
            case 1:
                if (arg0->unk354 != 0) {
                    func_080125EC();
                }
                func_0809C600(arg0->unk350 + 0x214C, arg1);
                return;
            case 2:
            case 0:
                func_0809C644(arg0->unk350 + 0x214C, arg1);
                break;
            }
        } else {
            return;
        }
        break;
    }
}
