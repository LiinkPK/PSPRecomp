/* Entry 0x0889C708 | file offset 0x000996E0 | FUN_0889c708 | bytes 2044 */

undefined4
FUN_0889c708(int param_1,int param_2,undefined4 *param_3,uint param_4,uint param_5,uint param_6,
            code *param_7,undefined4 param_8)

{
  short sVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 (*pauVar8) [12];
  uint uVar9;
  short *psVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 in_V40;
  undefined4 in_V44;
  undefined4 in_V48;
  undefined1 auStack_118 [12];
  undefined1 auStack_10c [12];
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 auStack_d0 [4];
  float local_cc;
  undefined2 local_c8;
  undefined1 auStack_c4 [36];
  uint local_a0;
  uint local_9c;
  code *local_98;
  int local_94;
  int local_90;
  uint local_8c;
  int local_88;
  undefined4 *local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint local_70;
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
  
  local_90 = -1;
  local_8c = 0;
  if (*(int *)(param_1 + 4) == 0) {
    uVar6 = 0;
  }
  else {
    local_98 = param_7;
    local_94 = param_2;
    local_80 = param_8;
    local_70 = param_6;
    iVar5 = FUN_0889740c(param_1);
    if (iVar5 == 1) {
      uVar6 = 0;
    }
    else if (0.0 < (float)param_3[3]) {
      uVar9 = (param_5 & 0x300) >> 8;
      if (uVar9 < 3) {
        fVar16 = (float)param_3[3];
        local_dc = *param_3;
        local_d8 = param_3[1];
        local_100 = fVar16 + 0.0001;
        local_d4 = param_3[2];
        fVar15 = fVar16 * fVar16;
        local_fc = local_100;
        local_f8 = local_100;
        FUN_089a3528(&local_dc,&local_dc,param_1 + 0xd8);
        FUN_089a34c0(&local_f4,&local_dc);
        FUN_089a3528(&local_f4,&local_f4,&local_100);
        FUN_089a3590(&local_f4,&local_f4,param_1 + 0xe4);
        fVar12 = (float)(*(int *)(*(int *)(param_1 + 4) + 4) + -1);
        if (local_f4 < 0.0) {
          fVar12 = 0.0;
        }
        else if (local_f4 <= fVar12) {
          fVar12 = local_f4;
        }
        fVar13 = (float)(*(int *)(*(int *)(param_1 + 4) + 8) + -1);
        if (local_f0 < 0.0) {
          fVar13 = 0.0;
        }
        else if (local_f0 <= fVar13) {
          fVar13 = local_f0;
        }
        fVar14 = (float)(*(int *)(*(int *)(param_1 + 4) + 0xc) + -1);
        if (local_ec < 0.0) {
          fVar14 = 0.0;
        }
        else if (local_ec <= fVar14) {
          fVar14 = local_ec;
        }
        local_f4 = fVar12;
        local_f0 = fVar13;
        local_ec = fVar14;
        FUN_089a34c0(&local_e8,&local_dc);
        FUN_089a34f4(&local_e8,&local_e8,&local_100);
        FUN_089a3590(&local_e8,&local_e8,param_1 + 0xe4);
        fVar12 = (float)(*(int *)(*(int *)(param_1 + 4) + 4) + -1);
        if (local_e8 < 0.0) {
          fVar12 = 0.0;
        }
        else if (local_e8 <= fVar12) {
          fVar12 = local_e8;
        }
        fVar13 = (float)(*(int *)(*(int *)(param_1 + 4) + 8) + -1);
        if (local_e4 < 0.0) {
          fVar13 = 0.0;
        }
        else if (local_e4 <= fVar13) {
          fVar13 = local_e4;
        }
        fVar14 = (float)(*(int *)(*(int *)(param_1 + 4) + 0xc) + -1);
        if (local_e0 < 0.0) {
          fVar14 = 0.0;
        }
        else if (local_e0 <= fVar14) {
          fVar14 = local_e0;
        }
        local_4c = (int)local_f4;
        iVar5 = (int)local_f0;
        local_58 = (int)local_ec;
        local_5c = (int)fVar12;
        local_68 = (int)fVar14;
        local_e8 = fVar12;
        local_e4 = fVar13;
        local_e0 = fVar14;
        local_84 = param_3;
        local_44 = (int)fVar13;
        FUN_0889d954(param_3);
        local_60 = *(int *)(*(int *)(param_1 + 4) + 0xc);
        local_48 = *(int *)(*(int *)(param_1 + 4) + 4) * local_60;
        local_54 = iVar5;
        if (iVar5 <= (int)fVar13) {
          local_50 = local_48 * iVar5;
          local_78 = param_1 + uVar9 * 4;
          local_a0 = param_5;
          local_9c = param_4;
          do {
            local_64 = local_4c;
            if (local_4c <= local_5c) {
              local_6c = local_50 + local_60 * local_4c;
              do {
                local_74 = local_58;
                if (local_58 <= local_68) {
                  do {
                    local_7c = (local_6c + local_74) * 0x48;
                    pauVar8 = (undefined1 (*) [12])(*(int *)(local_78 + 0x28) + local_7c);
                    auVar4 = vzero_t();
                    auVar2._8_4_ = in_V48;
                    auVar2._4_4_ = in_V44;
                    auVar2._0_4_ = in_V40;
                    auVar2 = vsub_t(*pauVar8,auVar2);
                    auVar3._8_4_ = in_V48;
                    auVar3._4_4_ = in_V44;
                    auVar3._0_4_ = in_V40;
                    auVar3 = vsub_t(auVar3,pauVar8[1]);
                    auVar2 = vmax_t(auVar2,auVar3);
                    auVar2 = vmax_t(auVar2,auVar4);
                    fVar12 = (float)vdot_t(auVar2,auVar2);
                    if (fVar12 <= fVar15) {
                      uVar9 = 0;
                      local_88 = 0;
                      do {
                        if ((local_70 & 1 << (uVar9 & 0x1f)) != 0) {
                          iVar5 = *(int *)(local_78 + 0x28) + local_7c + local_88;
                          iVar11 = *(int *)(iVar5 + 0x1c);
                          psVar10 = (short *)(*(int *)(param_1 + 0x34) + *(int *)(iVar5 + 0x18) * 2)
                          ;
                          iVar5 = 0;
                          if (0 < iVar11) {
                            sVar1 = *psVar10;
                            while( true ) {
                              if (((*(ushort *)
                                     (*(int *)(param_1 + 0x70) +
                                      (uint)*(byte *)(*(int *)(param_1 + 0x14) + sVar1 * 0x18) *
                                      0x4c + 0x24) & 1) != 0) &&
                                 ((*(uint *)(*(int *)(param_1 + 0x14) + *psVar10 * 0x18) & local_9c)
                                  == local_a0)) {
                                fVar12 = (float)FUN_0889ddbc(*(int *)(param_1 + 0x14) +
                                                             *psVar10 * 0x18,
                                                             *(undefined4 *)(param_1 + 8),
                                                             *(undefined4 *)(param_1 + 0xc),
                                                             auStack_118);
                                if (local_98 == (code *)0x0) {
                                  if (fVar12 < fVar16) {
                                    fVar15 = fVar12 * fVar12;
                                    FUN_089a34c0(auStack_10c,auStack_118);
                                    local_90 = (int)*psVar10;
                                    fVar16 = fVar12;
                                    local_8c = uVar9;
                                    if (local_94 == 0) {
                                      return 1;
                                    }
                                  }
                                }
                                else if (fVar12 < (float)local_84[3]) {
                                  FUN_089a34c0(auStack_c4,auStack_118);
                                  local_c8 = (undefined2)uVar9;
                                  local_cc = fVar12;
                                  FUN_088972c4(param_1,auStack_d0,
                                               *(int *)(param_1 + 0x14) + *psVar10 * 0x18);
                                  iVar7 = (*local_98)(auStack_d0,local_80);
                                  if (iVar7 != 0) {
                                    FUN_089a34c0(auStack_10c,auStack_118);
                                    local_90 = (int)*psVar10;
                                    fVar16 = fVar12;
                                    local_8c = uVar9;
                                    if (local_94 == 0) {
                                      return 1;
                                    }
                                  }
                                }
                              }
                              iVar5 = iVar5 + 1;
                              psVar10 = psVar10 + 1;
                              if (iVar11 <= iVar5) break;
                              sVar1 = *psVar10;
                            }
                          }
                        }
                        uVar9 = uVar9 + 1;
                        local_88 = local_88 + 8;
                      } while ((int)uVar9 < 6);
                    }
                    local_74 = local_74 + 1;
                  } while (local_74 <= local_68);
                }
                local_64 = local_64 + 1;
                local_6c = local_6c + local_60;
              } while (local_64 <= local_5c);
            }
            local_54 = local_54 + 1;
            local_50 = local_50 + local_48;
          } while (local_54 <= local_44);
        }
        iVar11 = local_90;
        iVar5 = local_94;
        if (local_90 < 0) {
          uVar6 = 0;
        }
        else {
          if (local_94 != 0) {
            FUN_089a34c0(local_94 + 0xc,auStack_10c);
            *(float *)(iVar5 + 4) = fVar16;
            *(short *)(iVar5 + 8) = (short)local_8c;
            FUN_088972c4(param_1,iVar5,*(int *)(param_1 + 0x14) + iVar11 * 0x18,iVar11);
          }
          uVar6 = 1;
        }
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}

