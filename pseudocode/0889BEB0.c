/* Entry 0x0889BEB0 | file offset 0x00098E88 | FUN_0889beb0 | bytes 2136 */

undefined4
FUN_0889beb0(float param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
            undefined1 param_7,code *param_8,undefined4 param_9,uint uStackX_0,uint uStackX_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined1 auStack_d4 [4];
  float local_d0;
  undefined2 local_cc;
  undefined1 auStack_c8 [36];
  int local_a4;
  uint local_a0;
  int local_9c;
  undefined4 *local_98;
  uint local_94;
  uint local_90;
  undefined1 local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  uint local_74;
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
  
  local_90 = uStackX_0;
  local_94 = uStackX_4;
  local_a4 = -1;
  local_a0 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    local_8c = param_7;
    local_88 = param_9;
    local_74 = param_5;
    iVar1 = FUN_0889740c(param_2);
    if (iVar1 == 1) {
      uVar2 = 0;
    }
    else if (0.0 < param_1) {
      if (param_6 < 3) {
        local_110 = *(undefined4 *)(param_4 + 0xc);
        local_10c = *(undefined4 *)(param_4 + 0x10);
        local_108 = *(undefined4 *)(param_4 + 0x14);
        FUN_089a3680(param_1,&local_110,&local_110);
        FUN_089a34f4(&local_110,&local_110,param_4);
        FUN_089a36e4(&local_ec,param_4,&local_110);
        FUN_089a36b0(&local_e0,param_4,&local_110);
        local_104 = local_ec - 0.0001;
        local_100 = local_e8 - 0.0001;
        local_fc = local_e4 - 0.0001;
        FUN_089a3528(&local_104,&local_104,param_2 + 0xd8);
        FUN_089a3590(&local_104,&local_104,param_2 + 0xe4);
        iVar1 = *(int *)(param_2 + 4);
        fVar8 = (float)(*(int *)(iVar1 + 4) + -1);
        if (local_104 < 0.0) {
          local_104 = 0.0;
        }
        else if (fVar8 < local_104) {
          local_104 = fVar8;
        }
        fVar8 = (float)(*(int *)(iVar1 + 8) + -1);
        if (local_100 < 0.0) {
          fVar8 = 0.0;
        }
        else if (local_100 <= fVar8) {
          fVar8 = local_100;
        }
        fVar9 = (float)(*(int *)(iVar1 + 0xc) + -1);
        if (local_fc < 0.0) {
          fVar9 = 0.0;
        }
        else if (local_fc <= fVar9) {
          fVar9 = local_fc;
        }
        local_f8 = local_e0 + 0.0001;
        local_f4 = local_dc + 0.0001;
        local_f0 = local_d8 + 0.0001;
        local_100 = fVar8;
        local_fc = fVar9;
        local_98 = (undefined4 *)(param_4 + 0xc);
        FUN_089a3528(&local_f8,&local_f8,param_2 + 0xd8);
        FUN_089a3590(&local_f8,&local_f8,param_2 + 0xe4);
        iVar1 = *(int *)(param_2 + 4);
        fVar8 = (float)(*(int *)(iVar1 + 4) + -1);
        if (local_f8 < 0.0) {
          fVar8 = 0.0;
        }
        else if (local_f8 <= fVar8) {
          fVar8 = local_f8;
        }
        local_5c = (int)fVar8;
        fVar9 = (float)(*(int *)(iVar1 + 8) + -1);
        if (local_f4 < 0.0) {
          fVar9 = 0.0;
        }
        else if (local_f4 <= fVar9) {
          fVar9 = local_f4;
        }
        local_48 = (int)fVar9;
        fVar10 = (float)(*(int *)(iVar1 + 0xc) + -1);
        if (local_f0 < 0.0) {
          fVar10 = 0.0;
        }
        else if (local_f0 <= fVar10) {
          fVar10 = local_f0;
        }
        local_6c = (int)fVar10;
        iVar1 = (int)local_104;
        if (fVar8 <= local_104) {
          iVar1 = local_5c;
          local_5c = (int)local_104;
        }
        iVar3 = (int)local_100;
        if (fVar9 <= local_100) {
          iVar3 = local_48;
          local_48 = (int)local_100;
        }
        iVar7 = (int)local_fc;
        if (fVar10 <= local_fc) {
          iVar7 = local_6c;
          local_6c = (int)local_fc;
        }
        local_f8 = fVar8;
        local_f4 = fVar9;
        local_f0 = fVar10;
        local_84 = param_4;
        FUN_0889d934(param_4);
        local_64 = *(int *)(*(int *)(param_2 + 4) + 0xc);
        local_4c = *(int *)(*(int *)(param_2 + 4) + 4) * local_64;
        fVar8 = param_1;
        local_54 = iVar3;
        if (iVar3 <= local_48) {
          local_58 = local_4c * iVar3;
          local_7c = param_2 + param_6 * 4;
          local_60 = iVar7;
          local_50 = iVar1;
          do {
            local_68 = local_50;
            if (local_50 <= local_5c) {
              local_70 = local_58 + local_64 * local_50;
              do {
                local_78 = local_60;
                if (local_60 <= local_6c) {
                  do {
                    iVar1 = local_78;
                    local_80 = (local_70 + local_78) * 0x48;
                    iVar3 = *(int *)(local_7c + 0x28) + local_80;
                    if (param_8 == (code *)0x0) {
                      fVar9 = (float)FUN_088735e4(local_84,iVar3);
                      if (fVar9 < fVar8) goto LAB_0889c408;
                      local_78 = iVar1 + 1;
                    }
                    else {
                      fVar9 = (float)FUN_088735e4(local_84,iVar3);
                      if (param_1 <= fVar9) {
                        local_78 = iVar1 + 1;
                      }
                      else {
LAB_0889c408:
                        uVar6 = 0;
                        local_9c = 0;
                        do {
                          if ((local_74 & 1 << (uVar6 & 0x1f)) != 0) {
                            iVar1 = *(int *)(local_7c + 0x28) + local_80 + local_9c;
                            iVar3 = *(int *)(iVar1 + 0x1c);
                            psVar5 = (short *)(*(int *)(param_2 + 0x34) + *(int *)(iVar1 + 0x18) * 2
                                              );
                            iVar1 = 0;
                            if (0 < iVar3) {
                              do {
                                puVar4 = (uint *)(*(int *)(param_2 + 0x14) + *psVar5 * 0x18);
                                if (((*(ushort *)
                                       (*(int *)(param_2 + 0x70) + (uint)(byte)*puVar4 * 0x4c + 0x24
                                       ) & 1) != 0) && ((*puVar4 & local_90) == local_94)) {
                                  fVar9 = (float)FUN_0889dc30(*(int *)(param_2 + 0x14) +
                                                              *psVar5 * 0x18,
                                                              *(undefined4 *)(param_2 + 8),local_8c)
                                  ;
                                  if (param_8 == (code *)0x0) {
                                    if ((fVar9 < fVar8) &&
                                       (local_a4 = (int)*psVar5, fVar8 = fVar9, local_a0 = uVar6,
                                       param_3 == 0)) {
                                      return 1;
                                    }
                                  }
                                  else if (fVar9 < param_1) {
                                    local_cc = (undefined2)uVar6;
                                    local_d0 = fVar9;
                                    FUN_089a3680(fVar9,auStack_c8,local_98);
                                    FUN_089a34f4(auStack_c8,auStack_c8,local_84);
                                    FUN_088972c4(param_2,auStack_d4,
                                                 *(int *)(param_2 + 0x14) + *psVar5 * 0x18);
                                    iVar7 = (*param_8)(auStack_d4,local_88);
                                    if ((iVar7 != 0) &&
                                       (local_a4 = (int)*psVar5, fVar8 = fVar9, local_a0 = uVar6,
                                       param_3 == 0)) {
                                      return 1;
                                    }
                                  }
                                }
                                iVar1 = iVar1 + 1;
                                psVar5 = psVar5 + 1;
                              } while (iVar1 < iVar3);
                            }
                          }
                          uVar6 = uVar6 + 1;
                          local_9c = local_9c + 8;
                        } while ((int)uVar6 < 6);
                        local_78 = local_78 + 1;
                      }
                    }
                  } while (local_78 <= local_6c);
                }
                local_68 = local_68 + 1;
                local_70 = local_70 + local_64;
              } while (local_68 <= local_5c);
            }
            local_54 = local_54 + 1;
            local_58 = local_58 + local_4c;
          } while (local_54 <= local_48);
        }
        iVar3 = local_84;
        iVar1 = local_a4;
        if (local_a4 < 0) {
          uVar2 = 0;
        }
        else {
          if (param_3 != 0) {
            *(float *)(param_3 + 4) = fVar8;
            iVar7 = param_3 + 0xc;
            FUN_089a3680(fVar8,iVar7,local_98);
            FUN_089a34f4(iVar7,iVar7,iVar3);
            *(short *)(param_3 + 8) = (short)local_a0;
            FUN_088972c4(param_2,param_3,*(int *)(param_2 + 0x14) + iVar1 * 0x18,iVar1);
          }
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

