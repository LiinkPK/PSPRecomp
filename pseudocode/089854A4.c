/* Entry 0x089854A4 | file offset 0x0018247C | FUN_089854a4 | bytes 1716 */

void FUN_089854a4(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  undefined1 *puVar11;
  int iVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  int iVar15;
  int *piVar16;
  undefined4 *puVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined1 (*pauVar26) [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_120 [64];
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int local_88;
  int local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  int local_64;
  uint local_60;
  int local_5c;
  undefined4 local_58;
  float local_54;
  int local_50;
  undefined4 *local_4c;
  
  iVar5 = FUN_08985250(param_2,param_1);
  iVar12 = *(int *)(DAT_09b6f478 + 0x8c);
  puVar11 = *(undefined1 **)
             (*(int *)(iVar12 + 0x48) +
             (uint)*(ushort *)(*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 8) + 2) * 4);
  FUN_08946ac4(0x3f800000,DAT_09b6f478,iVar12,*(undefined4 *)(iVar12 + 0x50),*puVar11,puVar11[1],
               puVar11[2],auStack_120);
  FUN_0896fb5c(auStack_120);
  iVar12 = FUN_08985250(param_2,param_1);
  uVar6 = FUN_08983db4(*(undefined1 *)(iVar12 + 0x5d),0,1,2);
  FUN_08983cd8(uVar6);
  FUN_08983b74(0);
  piVar18 = *(int **)(param_3 + 0xa4);
  if (piVar18 != (int *)0x0) {
    if (*(int *)(iVar5 + 0x3c) < 0) {
      iVar12 = -1;
    }
    else if (*(int *)(*(int *)(*(int *)(param_3 + 0x88) + 0x1c8) + 0x30) == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_3 + 0x88) + 0x1c8) + 0x30) +
                                *(int *)(iVar5 + 0x3c) * 4) + 0x10);
    }
    if (iVar12 != -1) {
      FUN_089a0384(9);
      piVar16 = *(int **)(*piVar18 + iVar12 * 4);
      FUN_08973334(piVar18,iVar12,5,1,1,1);
      local_d4 = *(undefined4 *)(DAT_089da27c + 0x3c);
      local_e0 = -*(float *)(DAT_089da27c + 0x30);
      local_dc = -*(float *)(DAT_089da27c + 0x34);
      local_d8 = -*(float *)(DAT_089da27c + 0x38);
      FUN_089a3868(&local_d0,
                   *(int *)(DAT_09b6f478 + 0x8c) +
                   (uint)*(ushort *)
                          (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 8) +
                          *(int *)(*(int *)(DAT_09b6f478 + 0x90) + 4) * 2) + 0x60);
      FUN_089a3918(&local_d0,&DAT_089da410,&local_d0);
      fVar27 = local_c4;
      uVar6 = *(undefined4 *)(iVar5 + 0x44);
      iVar12 = FUN_0898456c(param_1);
      local_54 = fVar27;
      local_70 = (iVar12 - 2U) / (uint)*(byte *)(iVar5 + 0x5b) + 2;
      uVar20 = local_70;
      if (*(float *)(iVar5 + 0x40) != 100.0) {
        fVar27 = (float)(int)local_70;
        if ((int)local_70 < 0) {
          fVar27 = fVar27 + 4.2949673e+09;
        }
        uVar20 = (int)(fVar27 * *(float *)(iVar5 + 0x40) * 0.01);
      }
      if (uVar20 < 3) {
        uVar20 = 0;
        uVar19 = 0;
        uVar8 = 0;
      }
      else {
        uVar19 = uVar20 >> 1;
        uVar20 = uVar20 - uVar19;
        uVar8 = uVar19 + uVar20;
        if (uVar8 < 3) {
          return;
        }
      }
      iVar15 = local_70 - uVar8;
      iVar9 = *piVar16;
      bVar1 = *(byte *)(iVar5 + 0x5b);
      iVar12 = local_70 * 2;
      local_58 = param_1;
      FUN_089853b4(param_1,&local_c0,iVar5,uVar20,uVar19,*(undefined4 *)(iVar9 + 0x20),
                   *(undefined4 *)(iVar9 + 0x1c));
      piVar18 = (int *)FUN_08984564(param_1);
      local_60 = piVar18[1];
      iVar5 = *piVar18;
      local_5c = FUN_08974a3c(*(undefined4 *)(param_3 + 0xb0),local_60 * iVar12 * 0x30);
      if (local_5c != 0) {
        local_64 = 0;
        local_68 = 0;
        local_84 = 0;
        local_50 = iVar12;
        if (local_60 != 0) {
          local_80 = iVar15 + uVar20;
          local_88 = (uint)bVar1 << 5;
          local_7c = (local_80 + uVar19) - 1;
          local_78 = uVar19;
          local_74 = uVar20;
          local_6c = iVar5;
          do {
            uVar20 = local_70;
            if (*(char *)(local_6c + 0x38) != '\0') {
              fVar27 = local_54 * *(float *)(local_6c + 0x34);
              pauVar21 = *(undefined1 (**) [16])(local_6c + 0x40);
              uVar32 = local_d0;
              uVar33 = uStack_cc;
              uVar34 = uStack_c8;
              local_c4 = fVar27;
              iVar5 = FUN_0898456c(local_58);
              pauVar26 = pauVar21 + iVar5 * 2 + -2;
              uVar8 = 0;
              if (uVar20 != 0) {
                puVar17 = (undefined4 *)(local_5c + local_84 * 0x30);
                puVar25 = puVar17 + 3;
                puVar24 = puVar17 + 9;
                pauVar13 = (undefined1 (*) [16])0x0;
                pauVar14 = (undefined1 (*) [16])0x0;
                pauVar22 = pauVar21;
                fVar29 = local_b8;
                fVar30 = local_ac;
                do {
                  fVar28 = local_b8;
                  fVar31 = local_ac;
                  if (uVar8 != 0) {
                    if (uVar8 == local_80) {
                      fVar28 = local_b0;
                      fVar31 = local_a8;
                      if (local_78 != 1) {
                        fVar28 = local_b4;
                      }
                    }
                    else {
                      fVar28 = fVar29;
                      fVar31 = fVar30;
                      if (uVar8 == local_74) {
                        fVar28 = local_b4;
                        fVar31 = 0.0;
                      }
                    }
                  }
                  if (uVar8 == 0) {
                    pauVar14 = (undefined1 (*) [16])(*pauVar22 + local_88);
                    pauVar10 = pauVar14;
                    if (pauVar26 < pauVar14) {
                      pauVar10 = pauVar26;
                    }
                    pauVar23 = (undefined1 (*) [16])(*pauVar14 + local_88);
                    FUN_0898d19c(uVar6,puVar25,puVar24,pauVar22 + 1,pauVar10 + 1,pauVar22 + 1,
                                 &local_e0);
                    auVar3._12_4_ = fVar27;
                    auVar3._8_4_ = uVar34;
                    auVar3._4_4_ = uVar33;
                    auVar3._0_4_ = uVar32;
                    auVar2 = vmul_q(auVar3,*pauVar22);
                    auVar2 = vsat0_q(auVar2);
                    local_a0 = auVar2._0_4_;
                    uStack_9c = auVar2._4_4_;
                    uStack_98 = auVar2._8_4_;
                    uStack_94 = auVar2._12_4_;
                    pauVar14 = pauVar22;
                  }
                  else if (uVar8 == local_7c) {
                    FUN_0898d19c(uVar6,puVar25,puVar24,pauVar13 + 1,pauVar21 + iVar5 * 2 + -1,
                                 pauVar21 + iVar5 * 2 + -1,&local_e0);
                    auVar4._12_4_ = fVar27;
                    auVar4._8_4_ = uVar34;
                    auVar4._4_4_ = uVar33;
                    auVar4._0_4_ = uVar32;
                    auVar2 = vmul_q(auVar4,*pauVar26);
                    auVar2 = vsat0_q(auVar2);
                    local_a0 = auVar2._0_4_;
                    uStack_9c = auVar2._4_4_;
                    uStack_98 = auVar2._8_4_;
                    uStack_94 = auVar2._12_4_;
                    pauVar14 = pauVar13;
                    pauVar10 = pauVar26;
                    pauVar23 = pauVar22;
                  }
                  else {
                    pauVar23 = (undefined1 (*) [16])(*pauVar22 + local_88);
                    pauVar10 = pauVar22;
                    if (pauVar26 < pauVar22) {
                      pauVar10 = pauVar26;
                    }
                    local_4c = puVar17;
                    FUN_0898d19c(uVar6,puVar25,puVar24,pauVar13 + 1,pauVar10 + 1,pauVar14 + 1,
                                 &local_e0);
                    auVar2._12_4_ = fVar27;
                    auVar2._8_4_ = uVar34;
                    auVar2._4_4_ = uVar33;
                    auVar2._0_4_ = uVar32;
                    auVar2 = vmul_q(auVar2,*pauVar14);
                    auVar2 = vsat0_q(auVar2);
                    local_a0 = auVar2._0_4_;
                    uStack_9c = auVar2._4_4_;
                    uStack_98 = auVar2._8_4_;
                    uStack_94 = auVar2._12_4_;
                    puVar17 = local_4c;
                  }
                  uVar7 = FUN_089a48cc(&local_a0);
                  puVar17[2] = uVar7;
                  puVar17[8] = uVar7;
                  *puVar17 = local_c0;
                  puVar17[6] = local_bc;
                  puVar17[1] = fVar28;
                  puVar17[7] = fVar28;
                  local_84 = local_84 + 1;
                  fVar29 = fVar31 + fVar28;
                  uVar8 = uVar8 + 1;
                  puVar17 = puVar17 + 0xc;
                  puVar25 = puVar25 + 0xc;
                  puVar24 = puVar24 + 0xc;
                  pauVar13 = pauVar14;
                  pauVar14 = pauVar10;
                  pauVar22 = pauVar23;
                  fVar30 = fVar31;
                } while (uVar8 < local_70);
              }
              local_64 = local_64 + 1;
            }
            local_68 = local_68 + 1;
            local_6c = local_6c + 0x50;
          } while (local_68 < local_60);
        }
        if (local_64 != 0) {
          FUN_089a05f0(4,0x19f,local_50,local_64,0,local_5c);
        }
      }
    }
  }
  return;
}

