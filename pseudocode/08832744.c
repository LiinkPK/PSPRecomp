/* Entry 0x08832744 | file offset 0x0002F71C | FUN_08832744 | bytes 1132 */

void FUN_08832744(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_30;
  
  uVar4 = *(uint *)(param_3 + 0x38c);
  uVar5 = 0;
  if (param_5 < 3) {
    if (0 < param_5) {
      if (param_5 < 2) {
        FUN_089a3868(&local_280,param_4);
      }
      else {
        FUN_089a3868(&local_280,*(int *)(param_3 + 0x304) + 0x90);
        FUN_089a3ebc(&local_250);
        local_210 = local_250;
        local_20c = local_24c;
        local_208 = local_248;
        local_204 = local_244;
        local_200 = local_240;
        local_1fc = local_23c;
        local_1f8 = local_238;
        local_1f4 = local_234;
        local_1f0 = local_230;
        local_1ec = local_22c;
        local_1e8 = local_228;
        local_1e4 = local_224;
        local_1e0 = local_220;
        local_1dc = local_21c;
        local_1d8 = local_218;
        local_1d4 = local_214;
        FUN_089a4124(0xbfc90fdb,&local_250,&local_250);
        FUN_089a3f40(&local_d0,&local_250,&local_280);
        local_1d0 = local_d0;
        local_1cc = local_cc;
        local_1c8 = local_c8;
        local_1c4 = local_c4;
        local_260 = local_d0;
        local_25c = local_cc;
        local_258 = local_c8;
        local_254 = local_c4;
        FUN_089a3868(&local_280,&local_260);
      }
      goto LAB_088327dc;
    }
  }
  else {
    if (param_5 < 4) {
      FUN_089a3868(&local_280,*(int *)(param_3 + 0x304) + 0x90);
      FUN_089a3ebc(&local_1b0);
      local_170 = local_1b0;
      local_16c = local_1ac;
      local_168 = local_1a8;
      local_164 = local_1a4;
      local_160 = local_1a0;
      local_15c = local_19c;
      local_158 = local_198;
      local_154 = local_194;
      local_150 = local_190;
      local_14c = local_18c;
      local_148 = local_188;
      local_144 = local_184;
      local_140 = local_180;
      local_13c = local_17c;
      local_138 = local_178;
      local_134 = local_174;
      FUN_089a4124(0x3fc90fdb,&local_1b0,&local_1b0);
      FUN_089a3f40(&local_70,&local_1b0,&local_280);
      local_130 = local_70;
      local_12c = local_6c;
      local_128 = local_68;
      local_124 = local_64;
      local_1c0 = local_70;
      local_1bc = local_6c;
      local_1b8 = local_68;
      local_1b4 = local_64;
      FUN_089a3868(&local_280,&local_1c0);
      goto LAB_088327dc;
    }
    if (param_5 < 5) {
      FUN_089a3868(&local_280,param_4 + 0x10);
      uVar5 = 1;
      goto LAB_088327dc;
    }
  }
  FUN_089a38e0(&local_50,param_3 + 0x80,*(int *)(param_3 + 0x304) + 0x80);
  local_120 = local_50;
  local_11c = local_4c;
  local_118 = local_48;
  local_114 = local_44;
  local_270 = local_50;
  local_26c = local_4c;
  local_268 = local_48;
  local_264 = local_44;
  FUN_089a3868(&local_280,&local_270);
LAB_088327dc:
  auVar3._4_4_ = uStack_27c;
  auVar3._0_4_ = local_280;
  auVar3._8_4_ = uStack_278;
  auVar2._4_4_ = uStack_27c;
  auVar2._0_4_ = local_280;
  auVar2._8_4_ = uStack_278;
  auVar1._4_4_ = uStack_27c;
  auVar1._0_4_ = local_280;
  auVar1._8_4_ = uStack_278;
  uVar6 = vdot_t(auVar1,auVar2);
  uVar7 = vzero_s();
  uVar8 = vcmp_s(8,uVar6,local_280);
  local_30 = vsqrt_s(uVar6);
  vrcp_s(local_30);
  uVar6 = vcmovt_s(uVar7,(byte)uVar8 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar3,uVar6);
  local_280 = auVar1._0_4_;
  uStack_27c = auVar1._4_4_;
  uStack_278 = auVar1._8_4_;
  FUN_089a3a44(param_1,&local_280,&local_280);
  local_274 = param_2;
  func_0x08a6158c(param_3,&local_280,(uVar4 & 1) != 0,uVar5);
  *(uint *)(param_4 + 0x28) = *(uint *)(param_4 + 0x28) | 1;
  return;
}

