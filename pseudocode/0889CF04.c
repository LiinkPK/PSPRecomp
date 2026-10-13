/* Entry 0x0889CF04 | file offset 0x00099EDC | FUN_0889cf04 | bytes 1820 */

char FUN_0889cf04(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 uStackX_0)

{
  bool bVar1;
  undefined1 auVar2 [12];
  bool bVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  char cVar15;
  undefined1 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_190;
  undefined4 local_18c;
  undefined2 local_188;
  undefined2 local_186;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178 [5];
  undefined4 local_164;
  undefined1 auStack_160 [12];
  undefined1 auStack_154 [12];
  undefined4 local_148;
  undefined1 auStack_144 [12];
  undefined1 auStack_138 [12];
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 auStack_108 [12];
  undefined1 auStack_fc [12];
  undefined1 auStack_f0 [12];
  undefined1 auStack_e4 [12];
  undefined1 auStack_d8 [12];
  undefined1 auStack_cc [12];
  undefined1 auStack_c0 [12];
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [12];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  char local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 *local_5c;
  undefined1 *local_58;
  undefined4 local_54;
  char local_50;
  
  puVar12 = &local_1a0;
  puVar13 = &local_1a0;
  fVar17 = (float)FUN_089a37dc(param_4);
  iVar10 = FUN_0889740c(param_1);
  local_80 = '\0';
  local_7c = uStackX_0;
  local_78 = param_8;
  local_70 = param_7;
  local_6c = param_6;
  local_5c = param_2;
  if (iVar10 == 1) {
    FUN_089a34f4(param_5,param_3,param_4);
    local_80 = '\0';
  }
  else {
    local_74 = param_1;
    if (*(int *)(param_1 + 4) == 0) {
      FUN_089a34c0(param_5,param_3);
      local_80 = '\0';
    }
    else {
      iVar10 = (int)(fVar17 / *(float *)(param_3 + 0xc)) + 1;
      if (iVar10 == 1) {
        FUN_089a34c0(auStack_160,param_4);
      }
      else {
        FUN_089a3680(1.0 / (float)iVar10,auStack_160,param_4);
      }
      local_88 = param_3;
      local_64 = param_5;
      local_60 = iVar10;
      FUN_089a37dc(auStack_160);
      FUN_089a34c0(auStack_154,param_3);
      local_148 = *(undefined4 *)(param_3 + 0xc);
      FUN_089a34c0(param_5,param_3);
      local_84 = 0;
      local_68 = 0;
      if (0 < iVar10) {
        uVar22 = 0xbf800000;
        puVar16 = auStack_cc;
        do {
          FUN_089a34f4(auStack_154,auStack_154,auStack_160);
          bVar3 = false;
          bVar1 = true;
          iVar10 = 0;
          do {
            local_1a0 = 0;
            iVar11 = FUN_088978c4(local_74,&local_190,auStack_154,local_6c,local_70,local_78,
                                  local_7c,0);
            if (iVar11 == 0) break;
            FUN_089a3528(&local_12c,auStack_154,&local_184);
            iVar11 = FUN_089a377c(&local_12c);
            if (iVar11 == 1) {
              FUN_089a34c0(&local_12c,local_178[0]);
            }
            else {
              auVar5._4_4_ = local_128;
              auVar5._0_4_ = local_12c;
              auVar5._8_4_ = local_124;
              auVar4._4_4_ = local_128;
              auVar4._0_4_ = local_12c;
              auVar4._8_4_ = local_124;
              auVar2._4_4_ = local_128;
              auVar2._0_4_ = local_12c;
              auVar2._8_4_ = local_124;
              uVar24 = vdot_t(auVar2,auVar4);
              uVar26 = vzero_s();
              uVar25 = vcmp_s(8,uVar24,local_12c);
              local_90 = vsqrt_s(uVar24);
              vrcp_s(local_90);
              uVar24 = vcmovt_s(uVar26,(byte)uVar25 & 1);
              vpfxd(4,4,4,5);
              auVar2 = vscl_t(auVar5,uVar24);
              local_12c = auVar2._0_4_;
              local_128 = auVar2._4_4_;
              local_124 = auVar2._8_4_;
              fVar17 = (float)FUN_089a3718(&local_12c,local_178[0]);
              if (fVar17 < -0.9999) {
                FUN_089a3680(uVar22,&local_12c,&local_12c);
              }
            }
            cVar15 = '\0';
            if ((0 < iVar10) && (!bVar3)) {
              local_120 = local_12c;
              local_11c = local_128;
              local_118 = local_124;
              local_114 = local_184;
              local_110 = local_180;
              local_10c = local_17c;
              fVar17 = (float)FUN_089a3718(auStack_144,auStack_144);
              fVar18 = (float)FUN_089a3718(auStack_144,&local_120);
              fVar19 = (float)FUN_089a3718(&local_120,&local_120);
              fVar21 = fVar17 * fVar19 - fVar18 * fVar18;
              if (0.0001 <= fVar21) {
                local_50 = '\0';
                local_58 = puVar16;
                local_54 = uVar22;
                fVar20 = (float)FUN_089a3718(auStack_144,auStack_138);
                iVar11 = local_88;
                fVar23 = fVar20 + *(float *)(local_88 + 0xc) + 0.0001;
                fVar20 = (float)FUN_089a3718(&local_120,&local_114);
                fVar20 = fVar20 + *(float *)(iVar11 + 0xc) + 0.0001;
                FUN_089a3680((fVar23 * fVar19 - fVar18 * fVar20) / fVar21,auStack_fc,auStack_144);
                FUN_089a3680((fVar17 * fVar20 - fVar23 * fVar18) / fVar21,auStack_f0,&local_120);
                FUN_089a34f4(auStack_108,auStack_fc,auStack_f0);
                FUN_089a3748(auStack_e4,auStack_144,&local_120);
                fVar17 = (float)FUN_089a3718(auStack_e4,auStack_e4);
                uVar22 = local_54;
                puVar16 = local_58;
                cVar15 = local_50;
                if (0.0001 <= fVar17) {
                  FUN_089a3528(auStack_d8,auStack_154,auStack_108);
                  fVar18 = (float)FUN_089a3718(auStack_d8,auStack_e4);
                  FUN_089a3680(fVar18 / fVar17,puVar16,auStack_e4);
                  FUN_089a34f4(puVar16,puVar16,auStack_108);
                  FUN_089a34c0(auStack_154,puVar16);
                  bVar3 = true;
                  cVar15 = '\x01';
                }
              }
            }
            if (cVar15 == '\0') {
              local_58 = puVar16;
              FUN_089a3680(*(float *)(local_88 + 0xc) + 0.0001,auStack_c0,&local_12c);
              FUN_089a34f4(auStack_154,&local_184,auStack_c0);
              FUN_089a34c0(auStack_144,&local_12c);
              FUN_089a34c0(auStack_138,&local_184);
              puVar16 = local_58;
            }
            local_84 = local_84 + 1;
            local_80 = '\x01';
            iVar10 = iVar10 + 1;
            bVar1 = iVar10 < 5;
          } while (bVar1);
          if (!bVar1) break;
          if (local_80 == '\0') {
            FUN_089a34c0(local_64,auStack_154);
          }
          else {
            FUN_089a34c0(local_64,auStack_154);
          }
          local_68 = local_68 + 1;
        } while (local_68 < local_60);
      }
      uVar26 = local_64;
      uVar24 = local_6c;
      uVar22 = local_70;
      iVar11 = local_74;
      iVar10 = local_88;
      if (0 < local_84) {
        FUN_089a3528(&local_9c,local_64,local_88);
        auVar8._4_4_ = local_98;
        auVar8._0_4_ = local_9c;
        auVar8._8_4_ = local_94;
        auVar7._4_4_ = local_98;
        auVar7._0_4_ = local_9c;
        auVar7._8_4_ = local_94;
        auVar6._4_4_ = local_98;
        auVar6._0_4_ = local_9c;
        auVar6._8_4_ = local_94;
        uVar25 = vdot_t(auVar6,auVar7);
        uVar27 = vzero_s();
        uVar28 = vcmp_s(8,uVar25,local_9c);
        uVar25 = vsqrt_s(uVar25);
        vrcp_s(uVar25);
        uVar27 = vcmovt_s(uVar27,(byte)uVar28 & 1);
        vpfxd(4,4,4,5);
        auVar2 = vscl_t(auVar8,uVar27);
        local_9c = auVar2._0_4_;
        local_98 = auVar2._4_4_;
        local_94 = auVar2._8_4_;
        local_8c = uVar25;
        FUN_089a34c0(auStack_b4,iVar10);
        FUN_089a34c0(auStack_a8,&local_9c);
        local_1a0 = 0;
        local_19c = 0;
        iVar11 = FUN_0889beb0(uVar25,iVar11,&local_190,auStack_b4,uVar24,uVar22,1,0,0);
        if (iVar11 != 0) {
          FUN_089a34c0(uVar26,iVar10);
        }
      }
      puVar9 = local_5c;
      if (local_5c != (undefined4 *)0x0) {
        *local_5c = local_190;
        local_5c[1] = local_18c;
        *(undefined2 *)(local_5c + 2) = local_188;
        *(undefined2 *)((int)local_5c + 10) = local_186;
        FUN_089a34c0(local_5c + 3,&local_184);
        iVar10 = 0;
        puVar14 = puVar9;
        do {
          iVar10 = iVar10 + 4;
          puVar14[6] = *(undefined4 *)((int)puVar12 + 0x28);
          puVar12 = (undefined4 *)((int)puVar12 + 4);
          puVar14 = puVar14 + 1;
        } while (iVar10 < 1);
        iVar10 = 0;
        puVar12 = puVar9;
        do {
          iVar10 = iVar10 + 1;
          puVar12[7] = *(undefined4 *)((int)puVar13 + 0x2c);
          puVar13 = (undefined4 *)((int)puVar13 + 4);
          puVar12 = puVar12 + 1;
        } while (iVar10 < 4);
        puVar9[0xb] = local_164;
      }
    }
  }
  return local_80;
}

