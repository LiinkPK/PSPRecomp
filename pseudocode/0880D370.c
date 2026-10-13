/* Entry 0x0880D370 | file offset 0x0000A348 | FUN_0880d370 | bytes 1212 */

void FUN_0880d370(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  int iVar4;
  short *psVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  float local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 *local_48;
  
  local_54 = *(int *)(param_2 + 0x158);
  local_4c = *(int *)(param_1 + 0x18);
  local_60 = 0;
  if (0 < local_4c) {
    local_5c = param_2 + 0xf0;
    local_50 = param_2 + 0xe0;
    local_68 = 0;
    local_64 = 0;
    puVar7 = auStack_90;
    puVar6 = auStack_80;
    local_58 = param_1;
    do {
      psVar5 = (short *)(*(int *)(local_58 + 0x1c) + local_64);
      if ((*(short *)(local_54 + 2) == *psVar5) || (*(short *)(local_54 + 4) == *psVar5)) {
        local_48 = puVar6;
        FUN_089a3868(auStack_f0,*(int *)(local_58 + 0x30) + local_68);
        uVar8 = FUN_0880bf5c(param_4,param_2,auStack_f0);
        FUN_089a38e0(auStack_150,param_2,param_4);
        FUN_089a3a44(uVar8,&local_120,auStack_150);
        FUN_089a38a8(auStack_110,param_4,&local_120);
        iVar4 = local_5c;
        FUN_089a38e0(&local_120,local_50,local_5c);
        FUN_089a3a44(uVar8,&local_120,&local_120);
        FUN_089a38a8(auStack_100,iVar4,&local_120);
        fVar10 = *(float *)(psVar5 + 8);
        fVar9 = (float)FUN_089a3c18(auStack_f0,auStack_110);
        puVar6 = local_48;
        if (fVar9 < fVar10) {
          FUN_089a38e0(&local_120,param_4,auStack_f0);
          auVar3._4_4_ = uStack_11c;
          auVar3._0_4_ = local_120;
          auVar3._8_4_ = uStack_118;
          auVar2._4_4_ = uStack_11c;
          auVar2._0_4_ = local_120;
          auVar2._8_4_ = uStack_118;
          auVar1._4_4_ = uStack_11c;
          auVar1._0_4_ = local_120;
          auVar1._8_4_ = uStack_118;
          uVar8 = vdot_t(auVar1,auVar2);
          uVar11 = vzero_s();
          uVar12 = vcmp_s(8,uVar8,local_120);
          local_70 = (float)vsqrt_s(uVar8);
          vrcp_s(local_70);
          uVar8 = vcmovt_s(uVar11,(byte)uVar12 & 1);
          vpfxd(4,4,4,5);
          auVar1 = vscl_t(auVar3,uVar8);
          local_120 = auVar1._0_4_;
          uStack_11c = auVar1._4_4_;
          uStack_118 = auVar1._8_4_;
          if (*(float *)(psVar5 + 8) <= local_70) {
            local_48 = puVar7;
            FUN_0880ceb4(*(undefined4 *)(param_2 + 0x160),*(undefined4 *)(psVar5 + 8),&local_b0,
                         param_4,auStack_100,auStack_f0);
            local_c0 = local_b0;
            local_bc = local_ac;
            local_b8 = local_a8;
            local_b4 = local_a4;
            FUN_089a3868(auStack_140,&local_c0);
            FUN_089a38e0(&local_120,auStack_140,auStack_f0);
            FUN_089a3bc8(&local_120,&local_120);
            FUN_08868c14(&local_a0,auStack_110,auStack_140,&local_120);
            local_c0 = local_a0;
            local_bc = local_9c;
            local_b8 = local_98;
            local_b4 = local_94;
            FUN_089a3868(auStack_130,&local_c0);
            fVar9 = (float)FUN_089a3c18(auStack_110,auStack_140);
            FUN_089a38e0(&local_120,auStack_130,auStack_140);
            FUN_089a3bc8(&local_120,&local_120);
            FUN_089a3a44(fVar9 * (1.0 - *(float *)(*(int *)(param_2 + 0x15c) + 0x14)),&local_120,
                         &local_120);
            FUN_089a38a8(param_2,&local_120,auStack_140);
            uVar8 = *(undefined4 *)(param_2 + 0x160);
            FUN_089a38e0(puVar6,param_2,param_4);
            FUN_089a3bc8(puVar6,puVar6);
            FUN_089a3a44(uVar8,puVar6,puVar6);
            FUN_089a38a8(param_2,puVar6,param_4);
            *(undefined4 *)(param_2 + 0xc) = 0x3f800000;
            puVar7 = local_48;
          }
          else if ((*(short *)(param_2 + 0x154) != -1) &&
                  (fVar9 = (float)FUN_08867fec(&local_120,auStack_150), 1.5707964 < fVar9)) {
            FUN_08868c14(&local_d0,param_2,param_4,&local_120);
            local_e0 = local_d0;
            local_dc = local_cc;
            local_d8 = local_c8;
            local_d4 = local_c4;
            FUN_089a3868(param_2,&local_e0);
            uVar8 = *(undefined4 *)(param_2 + 0x160);
            FUN_089a38e0(puVar7,param_2,param_4);
            FUN_089a3bc8(puVar7,puVar7);
            FUN_089a3a44(uVar8,puVar7,puVar7);
            FUN_089a38a8(param_2,puVar7,param_4);
            *(undefined4 *)(param_2 + 0xc) = 0x3f800000;
          }
        }
      }
      local_60 = local_60 + 1;
      local_64 = local_64 + 0x14;
      local_68 = local_68 + 0x10;
    } while (local_60 < local_4c);
  }
  return;
}

