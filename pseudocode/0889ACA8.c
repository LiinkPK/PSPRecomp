/* Entry 0x0889ACA8 | file offset 0x00097C80 | FUN_0889aca8 | bytes 1748 */

int FUN_0889aca8(int param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [12];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  iVar5 = FUN_0889740c();
  if (iVar5 == 1) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    FUN_089a3528(&local_98,param_2,param_3);
    auVar3._4_4_ = local_94;
    auVar3._0_4_ = local_98;
    auVar3._8_4_ = local_90;
    auVar2._4_4_ = local_94;
    auVar2._0_4_ = local_98;
    auVar2._8_4_ = local_90;
    auVar1._4_4_ = local_94;
    auVar1._0_4_ = local_98;
    auVar1._8_4_ = local_90;
    uVar18 = vdot_t(auVar1,auVar2);
    uVar20 = vzero_s();
    uVar21 = vcmp_s(8,uVar18,local_98);
    fVar19 = (float)vsqrt_s(uVar18);
    vrcp_s(fVar19);
    uVar18 = vcmovt_s(uVar20,(byte)uVar21 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar3,uVar18);
    local_98 = auVar1._0_4_;
    local_94 = auVar1._4_4_;
    local_90 = auVar1._8_4_;
    local_74 = fVar19;
    FUN_089a34c0(auStack_b0,param_3);
    FUN_089a34c0(auStack_a4,&local_98);
    local_8c = *param_3 - 0.0001;
    local_88 = param_3[1] - 0.0001;
    local_84 = param_3[2] - 0.0001;
    FUN_089a3528(&local_8c,&local_8c,param_1 + 0xd8);
    FUN_089a3590(&local_8c,&local_8c,param_1 + 0xe4);
    fVar13 = (float)(*(int *)(*(int *)(param_1 + 4) + 4) + -1);
    if (local_8c < 0.0) {
      fVar13 = 0.0;
    }
    else if (local_8c <= fVar13) {
      fVar13 = local_8c;
    }
    fVar14 = (float)(*(int *)(*(int *)(param_1 + 4) + 8) + -1);
    if (local_88 < 0.0) {
      fVar14 = 0.0;
    }
    else if (local_88 <= fVar14) {
      fVar14 = local_88;
    }
    fVar15 = (float)(*(int *)(*(int *)(param_1 + 4) + 0xc) + -1);
    if (local_84 < 0.0) {
      fVar15 = 0.0;
    }
    else if (local_84 <= fVar15) {
      fVar15 = local_84;
    }
    local_80 = *param_2 + 0.0001;
    local_7c = param_2[1] + 0.0001;
    local_78 = param_2[2] + 0.0001;
    local_8c = fVar13;
    local_88 = fVar14;
    local_84 = fVar15;
    FUN_089a3528(&local_80,&local_80,param_1 + 0xd8);
    FUN_089a3590(&local_80,&local_80,param_1 + 0xe4);
    fVar13 = (float)(*(int *)(*(int *)(param_1 + 4) + 4) + -1);
    if (local_80 < 0.0) {
      fVar13 = 0.0;
    }
    else if (local_80 <= fVar13) {
      fVar13 = local_80;
    }
    fVar14 = (float)(*(int *)(*(int *)(param_1 + 4) + 8) + -1);
    if (local_7c < 0.0) {
      fVar14 = 0.0;
    }
    else if (local_7c <= fVar14) {
      fVar14 = local_7c;
    }
    fVar15 = (float)(*(int *)(*(int *)(param_1 + 4) + 0xc) + -1);
    if (local_78 < 0.0) {
      fVar15 = 0.0;
    }
    else if (local_78 <= fVar15) {
      fVar15 = local_78;
    }
    fVar16 = local_8c;
    fVar4 = fVar13;
    if (fVar13 <= local_8c) {
      fVar16 = fVar13;
      fVar4 = local_8c;
    }
    local_58 = (int)fVar4;
    fVar17 = local_88;
    fVar4 = fVar14;
    if (fVar14 <= local_88) {
      fVar17 = fVar14;
      fVar4 = local_88;
    }
    local_44 = (int)fVar4;
    iVar7 = (int)fVar17;
    fVar17 = local_84;
    fVar4 = fVar15;
    if (fVar15 <= local_84) {
      fVar17 = fVar15;
      fVar4 = local_84;
    }
    local_68 = (int)fVar4;
    local_80 = fVar13;
    local_7c = fVar14;
    local_78 = fVar15;
    FUN_0889d934(auStack_b0);
    local_60 = *(int *)(*(int *)(param_1 + 4) + 0xc);
    local_48 = *(int *)(*(int *)(param_1 + 4) + 4) * local_60;
    if (iVar7 <= local_44) {
      local_54 = local_48 * iVar7;
      local_5c = (int)fVar17;
      local_50 = iVar7;
      local_4c = (int)fVar16;
      do {
        local_64 = local_4c;
        if (local_4c <= local_58) {
          local_6c = local_54 + local_60 * local_4c;
          do {
            local_70 = local_5c;
            if (local_5c <= local_68) {
              do {
                iVar7 = (local_6c + local_70) * 0x48;
                fVar13 = (float)FUN_088735e4(auStack_b0,*(int *)(param_1 + 0x2c) + iVar7);
                if (fVar13 < fVar19) {
                  uVar11 = 0;
                  iVar12 = 0;
                  do {
                    if ((1 << (uVar11 & 0x1f) & 4U) != 0) {
                      iVar6 = *(int *)(param_1 + 0x2c) + iVar7 + iVar12;
                      iVar10 = *(int *)(iVar6 + 0x1c);
                      iVar9 = 0;
                      psVar8 = (short *)(*(int *)(param_1 + 0x34) + *(int *)(iVar6 + 0x18) * 2);
                      if (0 < iVar10) {
                        do {
                          if (((((*(ushort *)
                                   (*(int *)(param_1 + 0x70) +
                                    (uint)*(byte *)(*(int *)(param_1 + 0x14) + *psVar8 * 0x18) *
                                    0x4c + 0x24) & 1) != 0) &&
                               ((*(uint *)(*(int *)(param_1 + 0x14) + *psVar8 * 0x18) & 0x800000) !=
                                0)) && (fVar13 = (float)FUN_0889dc30(*(int *)(param_1 + 0x14) +
                                                                     *psVar8 * 0x18,
                                                                     *(undefined4 *)(param_1 + 8),1)
                                       , fVar13 < fVar19)) &&
                             (iVar6 = FUN_08897584(param_1,*(undefined1 *)
                                                            (*(int *)(param_1 + 0x14) +
                                                            *psVar8 * 0x18),0,1), iVar6 != 0)) {
                            iVar5 = iVar5 + 1;
                          }
                          iVar9 = iVar9 + 1;
                          psVar8 = psVar8 + 1;
                        } while (iVar9 < iVar10);
                      }
                    }
                    uVar11 = uVar11 + 1;
                    iVar12 = iVar12 + 8;
                  } while ((int)uVar11 < 6);
                }
                local_70 = local_70 + 1;
              } while (local_70 <= local_68);
            }
            local_64 = local_64 + 1;
            local_6c = local_6c + local_60;
          } while (local_64 <= local_58);
        }
        local_50 = local_50 + 1;
        local_54 = local_54 + local_48;
      } while (local_50 <= local_44);
    }
  }
  return iVar5;
}

