/* Entry 0x0883C7BC | file offset 0x00039794 | FUN_0883c7bc | bytes 2232 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0883c7bc(int param_1,undefined4 *param_2)

{
  short sVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined1 auStack_280 [8];
  short local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 *local_268;
  uint local_254;
  undefined1 auStack_250 [12];
  undefined1 auStack_244 [20];
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_220;
  float local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
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
  float local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_3c;
  
  if (((*(uint *)(param_1 + 0x380) & 0x2000) != 0) || ((*(uint *)(param_1 + 0x380) & 0x4000) != 0))
  {
    FUN_08899300();
    uVar6 = FUN_0881baa8();
    sVar1 = *(short *)(param_1 + 0x53c);
    uVar7 = (**(code **)(*(int *)(param_1 + 0x544) + 0x1fc))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x1f8));
    uVar8 = (**(code **)(*(int *)(param_1 + 0x544) + 0x204))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x200));
    FUN_0881c608(uVar6,(int)sVar1,param_1,uVar7,uVar8);
  }
  if ((*(uint *)(param_1 + 0x380) & 0x2000) == 0) {
    if ((*(uint *)(param_1 + 0x380) & 0x4000) == 0) {
      return;
    }
    uVar11 = *(uint *)(param_1 + 900);
  }
  else {
    uVar11 = *(uint *)(param_1 + 900);
  }
  if ((uVar11 & 0x10000) == 0) {
    uVar6 = FUN_08899300();
    FUN_089a3868(&local_230,param_2);
    auVar4._4_4_ = local_22c;
    auVar4._0_4_ = local_230;
    auVar4._8_4_ = local_228;
    auVar3._4_4_ = local_22c;
    auVar3._0_4_ = local_230;
    auVar3._8_4_ = local_228;
    auVar2._4_4_ = local_22c;
    auVar2._0_4_ = local_230;
    auVar2._8_4_ = local_228;
    uVar7 = vdot_t(auVar2,auVar3);
    uVar8 = vzero_s();
    uVar14 = vcmp_s(8,uVar7,local_230);
    fVar13 = (float)vsqrt_s(uVar7);
    vrcp_s(fVar13);
    uVar7 = vcmovt_s(uVar8,(byte)uVar14 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(auVar4,uVar7);
    local_230 = auVar2._0_4_;
    local_22c = auVar2._4_4_;
    local_228 = auVar2._8_4_;
    local_3c = fVar13;
    if (fVar13 <= 0.0) {
      uVar7 = (**(code **)(*(int *)(param_1 + 0x544) + 0x204))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x200));
      FUN_089a3868(&local_230,uVar7);
      FUN_089a3978(&local_230,&local_230);
    }
    fVar12 = 2.0;
    if (2.0 < fVar13) {
      fVar12 = fVar13;
    }
    FUN_08837030(&local_200,param_1);
    local_290 = local_200;
    local_28c = local_1fc;
    local_288 = local_1f8;
    local_284 = local_1f4;
    local_210 = local_200;
    local_20c = local_1fc;
    local_208 = local_1f8;
    local_2a0 = local_200;
    local_29c = local_1fc;
    local_298 = local_1f8;
    FUN_089a34c0(auStack_250,&local_2a0);
    local_1f0 = local_230;
    local_1ec = local_22c;
    local_1e8 = local_228;
    local_2a0 = local_230;
    local_29c = local_22c;
    local_298 = local_228;
    FUN_089a34c0(auStack_244,&local_2a0);
    iVar9 = FUN_0889beb0(fVar12,uVar6,auStack_280,auStack_250,0x36,1,1,0,0,0,0);
    if (iVar9 != 0) {
      FUN_089a383c(*local_268,local_268[1],local_268[2],0,&local_220);
      fVar13 = (float)FUN_08867fec(&local_230,&local_220);
      if (fVar13 < 2.0943952) {
        iVar9 = 0;
      }
    }
    if (iVar9 != 0) {
      local_1e0 = *param_2;
      local_1dc = param_2[1];
      local_1d8 = param_2[2];
      local_1d4 = param_2[3];
      local_1d0 = local_274;
      local_1cc = local_270;
      local_1c8 = local_26c;
      local_1c4 = 0x3f800000;
      local_1c0 = *local_268;
      local_1bc = local_268[1];
      local_1b8 = local_268[2];
      local_1b4 = 0x3f800000;
      iVar10 = (**(code **)(*(int *)(param_1 + 0x544) + 0xd4))
                         (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0xd0),&local_1e0,
                          &local_1d0,&local_1c0);
      if ((iVar10 == 0) &&
         (func_0x08b53748(_DAT_08b54330,param_1,auStack_280,param_2), (local_254 & 0x1000000) == 0))
      {
        uVar6 = FUN_0881baa8();
        local_1b0 = local_274;
        local_1ac = local_270;
        local_1a8 = local_26c;
        local_1a4 = 0x3f800000;
        local_1a0 = *local_268;
        local_19c = local_268[1];
        local_198 = local_268[2];
        local_194 = 0x3f800000;
        FUN_0881c584(uVar6,local_254 & 0xff,param_1,&local_1b0,&local_1a0);
        uVar6 = FUN_0881baa8();
        iVar10 = FUN_0881c68c(uVar6,local_254 & 0xff);
        if (iVar10 == 0) {
          if (local_278 == 1) {
            (**(code **)(*(int *)(param_1 + 0x544) + 0xcc))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 200));
            FUN_089a3868(&local_220,param_1 + 0x80);
            local_21c = local_21c - *(float *)(param_1 + 0x3c0);
            FUN_08834f30(param_1,&local_220);
          }
          else {
            *(uint *)(param_1 + 900) = *(uint *)(param_1 + 900) | 0x10000;
            if (iVar9 != 0) {
              FUN_089a38e0(&local_b0,param_1 + 0x100,param_1 + 0x80);
              local_110 = local_b0;
              local_10c = local_ac;
              local_108 = local_a8;
              local_104 = local_a4;
              local_120 = local_b0;
              local_11c = local_ac;
              local_118 = local_a8;
              local_114 = local_a4;
              local_e8 = local_b0;
              local_e4 = local_ac;
              local_e0 = local_a8;
              local_148 = local_b0;
              local_144 = local_ac;
              local_140 = local_a8;
              FUN_089a3528(&local_84,&local_274,&local_148);
              puVar5 = local_268;
              local_f4 = local_84;
              local_f0 = local_80;
              local_ec = local_7c;
              local_154 = local_84;
              local_150 = local_80;
              local_14c = local_7c;
              uVar6 = FUN_08837014(param_1);
              FUN_089a3680(uVar6,&local_6c,puVar5);
              local_dc = local_6c;
              local_d8 = local_68;
              local_d4 = local_64;
              local_13c = local_6c;
              local_138 = local_68;
              local_134 = local_64;
              FUN_089a34f4(&local_54,&local_154,&local_13c);
              local_100 = local_54;
              local_fc = local_50;
              local_f8 = local_4c;
              local_160 = local_54;
              local_15c = local_50;
              local_158 = local_4c;
              local_170 = local_54;
              local_16c = local_50;
              local_168 = local_4c;
              local_164 = 0x3f800000;
              FUN_08834f30(param_1,&local_170);
              local_220 = *local_268;
              local_21c = (float)local_268[1];
              local_218 = local_268[2];
              local_214 = 0x3f800000;
              uVar6 = 0x2c0;
              if (*(short *)(param_1 + 0x180) == 0x2ee) {
                FUN_089a3a44(0xbf800000,&local_220,&local_220);
                uVar6 = 0x2f2;
              }
              local_130 = local_220;
              local_12c = local_21c;
              local_128 = local_218;
              local_124 = local_214;
              FUN_08835ba4(param_1,&local_130);
              FUN_08834c10(param_1,0x12,0);
              FUN_0882fa10(0,0,param_1 + 0x130,uVar6,0);
              FUN_0882fb90(0x41000000,0,param_1 + 0x130,0x65);
              uVar6 = _DAT_08ad0158;
              uVar7 = FUN_08837014(param_1);
              func_0x08acfa14(uVar7,uVar6,auStack_280);
            }
            uVar11 = *(uint *)(param_1 + 0x380);
            *(uint *)(param_1 + 0x380) = uVar11 | 0x8000;
            *(uint *)(param_1 + 0x380) = uVar11 | 0x18000;
            FUN_08833c18(0x3f000000,param_1);
            FUN_08834160(param_1);
            uVar6 = FUN_0881baa8();
            local_190 = local_274;
            local_18c = local_270;
            local_188 = local_26c;
            local_184 = 0x3f800000;
            local_180 = *local_268;
            local_17c = local_268[1];
            local_178 = local_268[2];
            local_174 = 0x3f800000;
            FUN_0881c584(uVar6,local_254 & 0xff,param_1,&local_190,&local_180);
          }
        }
      }
    }
  }
  return;
}

