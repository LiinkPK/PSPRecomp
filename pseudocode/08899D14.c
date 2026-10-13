/* Entry 0x08899D14 | file offset 0x00096CEC | FUN_08899d14 | bytes 1500 */

float FUN_08899d14(int param_1,int param_2,float *param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  local_74 = -1;
  local_70 = 0;
  fVar10 = -3.4028235e+38;
  local_60 = param_4;
  local_44 = param_2;
  if ((*(int *)(param_1 + 4) != 0) && (param_5 < 3)) {
    local_8c = *param_3 - 0.0001;
    local_88 = param_3[1] - 0.0001;
    local_84 = param_3[2] - 0.0001;
    FUN_089a3528(&local_8c,&local_8c,param_1 + 0xd8);
    FUN_089a3590(&local_8c,&local_8c,param_1 + 0xe4);
    iVar2 = *(int *)(param_1 + 4);
    fVar7 = (float)(*(int *)(iVar2 + 4) + -1);
    if (local_8c < 0.0) {
      local_8c = 0.0;
    }
    else if (fVar7 < local_8c) {
      local_8c = fVar7;
    }
    fVar7 = (float)(*(int *)(iVar2 + 8) + -1);
    if (local_88 < 0.0) {
      fVar7 = 0.0;
    }
    else if (local_88 <= fVar7) {
      fVar7 = local_88;
    }
    fVar8 = (float)(*(int *)(iVar2 + 0xc) + -1);
    if (local_84 < 0.0) {
      fVar8 = 0.0;
    }
    else if (local_84 <= fVar8) {
      fVar8 = local_84;
    }
    local_80 = *param_3 + 0.0001;
    local_7c = param_3[1] + 0.0001;
    local_78 = param_3[2] + 0.0001;
    local_88 = fVar7;
    local_84 = fVar8;
    FUN_089a3528(&local_80,&local_80,param_1 + 0xd8);
    FUN_089a3590(&local_80,&local_80,param_1 + 0xe4);
    iVar2 = *(int *)(param_1 + 4);
    local_4c = (int)local_84;
    fVar7 = (float)(*(int *)(iVar2 + 4) + -1);
    if (local_80 < 0.0) {
      fVar7 = 0.0;
    }
    else if (local_80 <= fVar7) {
      fVar7 = local_80;
    }
    local_48 = (int)fVar7;
    fVar8 = (float)(*(int *)(iVar2 + 8) + -1);
    if (local_7c < 0.0) {
      fVar8 = 0.0;
    }
    else if (local_7c <= fVar8) {
      fVar8 = local_7c;
    }
    fVar9 = (float)(*(int *)(iVar2 + 0xc) + -1);
    if (local_78 < 0.0) {
      fVar9 = 0.0;
    }
    else if (local_78 <= fVar9) {
      fVar9 = local_78;
    }
    local_54 = (int)local_8c;
    if (fVar7 <= local_8c) {
      local_54 = local_48;
      local_48 = (int)local_8c;
    }
    local_58 = (int)fVar9;
    if (fVar9 <= local_84) {
      local_58 = local_4c;
      local_4c = (int)fVar9;
    }
    local_50 = *(int *)(iVar2 + 0xc);
    local_80 = fVar7;
    local_7c = fVar8;
    local_78 = fVar9;
    if (local_54 <= local_48) {
      local_5c = local_50 * local_54;
      local_68 = param_1 + param_5 * 4;
      do {
        local_64 = local_4c;
        if (local_4c <= local_58) {
          do {
            iVar2 = local_5c + local_64;
            FUN_0889d96c(param_3);
            local_6c = iVar2 * 0x48;
            iVar2 = FUN_0885be40(*(int *)(param_1 + 0x20) + local_6c,param_3);
            if (iVar2 != 0) {
              uVar6 = 0;
              iVar2 = 0;
              do {
                if ((local_60 & 1 << (uVar6 & 0x1f)) != 0) {
                  iVar3 = *(int *)(local_68 + 0x18) + local_6c + iVar2;
                  iVar5 = *(int *)(iVar3 + 0x1c);
                  if (0 < iVar5) {
                    psVar4 = (short *)(*(int *)(param_1 + 0x24) + *(int *)(iVar3 + 0x18) * 2);
                    iVar3 = 0;
                    if (0 < iVar5) {
                      do {
                        iVar1 = FUN_0889877c(param_1,*(undefined1 *)
                                                      (*(int *)(param_1 + 0x14) + *psVar4 * 0x18));
                        if (iVar1 != 0) {
                          if (((((*(uint *)(*(int *)(param_1 + 0x14) + *psVar4 * 0x18) & param_6) ==
                                 param_7) &&
                               (iVar1 = FUN_08899968(param_1,&local_90,0,
                                                     *(int *)(param_1 + 0x14) + *psVar4 * 0x18),
                               iVar1 != 0)) && (local_90 <= param_3[1])) && (fVar10 < local_90)) {
                            local_74 = (int)*psVar4;
                            fVar10 = local_90;
                            local_70 = uVar6;
                          }
                        }
                        iVar3 = iVar3 + 1;
                        psVar4 = psVar4 + 1;
                      } while (iVar3 < iVar5);
                    }
                  }
                }
                uVar6 = uVar6 + 1;
                iVar2 = iVar2 + 8;
              } while ((int)uVar6 < 6);
            }
            local_64 = local_64 + 1;
          } while (local_64 <= local_58);
        }
        local_54 = local_54 + 1;
        local_5c = local_5c + local_50;
      } while (local_54 <= local_48);
    }
  }
  iVar3 = local_44;
  iVar2 = local_74;
  if ((-1 < local_74) && (local_44 != 0)) {
    FUN_089a34c0(local_44 + 0xc,param_3);
    *(float *)(iVar3 + 0x10) = local_90;
    fVar7 = param_3[1];
    *(short *)(iVar3 + 8) = (short)local_70;
    *(float *)(iVar3 + 4) = fVar7 - local_90;
    FUN_088972c4(param_1,iVar3,*(int *)(param_1 + 0x14) + iVar2 * 0x18,iVar2);
  }
  return fVar10;
}

