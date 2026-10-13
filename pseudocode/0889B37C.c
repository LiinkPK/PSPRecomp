/* Entry 0x0889B37C | file offset 0x00098354 | FUN_0889b37c | bytes 1516 */

int FUN_0889b37c(float param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_a0 [12];
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined1 auStack_78 [12];
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
  int local_40;
  int local_3c;
  
  iVar1 = FUN_0889740c();
  if (iVar1 == 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    FUN_089a34c0(auStack_a0,param_3);
    local_90 = (*param_3 - param_1) - 0.0001;
    local_8c = (param_3[1] - param_1) - 0.0001;
    local_88 = (param_3[2] - param_1) - 0.0001;
    local_94 = param_1;
    FUN_089a3528(&local_90,&local_90,param_2 + 0xd8);
    FUN_089a3590(&local_90,&local_90,param_2 + 0xe4);
    iVar2 = *(int *)(param_2 + 4);
    fVar9 = (float)(*(int *)(iVar2 + 4) + -1);
    if (local_90 < 0.0) {
      local_90 = 0.0;
    }
    else if (fVar9 < local_90) {
      local_90 = fVar9;
    }
    fVar9 = (float)(*(int *)(iVar2 + 8) + -1);
    if (local_8c < 0.0) {
      fVar9 = 0.0;
    }
    else if (local_8c <= fVar9) {
      fVar9 = local_8c;
    }
    fVar10 = (float)(*(int *)(iVar2 + 0xc) + -1);
    if (local_88 < 0.0) {
      fVar10 = 0.0;
    }
    else if (local_88 <= fVar10) {
      fVar10 = local_88;
    }
    local_84 = *param_3 + param_1 + 0.0001;
    local_80 = param_3[1] + param_1 + 0.0001;
    local_7c = param_3[2] + param_1 + 0.0001;
    local_8c = fVar9;
    local_88 = fVar10;
    FUN_089a3528(&local_84,&local_84,param_2 + 0xd8);
    FUN_089a3590(&local_84,&local_84,param_2 + 0xe4);
    iVar2 = *(int *)(param_2 + 4);
    fVar9 = (float)(*(int *)(iVar2 + 4) + -1);
    if (local_84 < 0.0) {
      fVar9 = 0.0;
    }
    else if (local_84 <= fVar9) {
      fVar9 = local_84;
    }
    local_50 = (int)fVar9;
    fVar10 = (float)(*(int *)(iVar2 + 8) + -1);
    if (local_80 < 0.0) {
      fVar10 = 0.0;
    }
    else if (local_80 <= fVar10) {
      fVar10 = local_80;
    }
    local_3c = (int)fVar10;
    fVar11 = (float)(*(int *)(iVar2 + 0xc) + -1);
    if (local_7c < 0.0) {
      fVar11 = 0.0;
    }
    else if (local_7c <= fVar11) {
      fVar11 = local_7c;
    }
    local_60 = (int)fVar11;
    iVar2 = (int)local_90;
    if (fVar9 <= local_90) {
      iVar2 = local_50;
      local_50 = (int)local_90;
    }
    iVar3 = (int)local_8c;
    if (fVar10 <= local_8c) {
      iVar3 = local_3c;
      local_3c = (int)local_8c;
    }
    iVar6 = (int)local_88;
    if (fVar11 <= local_88) {
      iVar6 = local_60;
      local_60 = (int)local_88;
    }
    local_84 = fVar9;
    local_80 = fVar10;
    local_7c = fVar11;
    FUN_0889d954(auStack_a0);
    local_58 = *(int *)(*(int *)(param_2 + 4) + 0xc);
    local_40 = *(int *)(*(int *)(param_2 + 4) + 4) * local_58;
    if (iVar3 <= local_3c) {
      local_4c = local_40 * iVar3;
      local_54 = iVar6;
      local_48 = iVar3;
      local_44 = iVar2;
      do {
        local_5c = local_44;
        if (local_44 <= local_50) {
          local_64 = local_4c + local_58 * local_44;
          do {
            local_68 = local_54;
            if (local_54 <= local_60) {
              do {
                uVar8 = 0;
                local_6c = (local_64 + local_68) * 0x48;
                iVar2 = 0;
                do {
                  if ((1 << (uVar8 & 0x1f) & 4U) != 0) {
                    iVar3 = *(int *)(param_2 + 0x2c) + local_6c + iVar2;
                    iVar7 = *(int *)(iVar3 + 0x1c);
                    iVar6 = 0;
                    psVar5 = (short *)(*(int *)(param_2 + 0x34) + *(int *)(iVar3 + 0x18) * 2);
                    if (0 < iVar7) {
                      do {
                        puVar4 = (uint *)(*(int *)(param_2 + 0x14) + *psVar5 * 0x18);
                        if (((((*(ushort *)
                                 (*(int *)(param_2 + 0x70) + (uint)(byte)*puVar4 * 0x4c + 0x24) & 1)
                               != 0) && ((*puVar4 & 0x800000) != 0)) &&
                            (fVar9 = (float)FUN_0889ddbc(*(int *)(param_2 + 0x14) + *psVar5 * 0x18,
                                                         *(undefined4 *)(param_2 + 8),
                                                         *(undefined4 *)(param_2 + 0xc),auStack_78),
                            fVar9 <= param_1)) &&
                           (iVar3 = FUN_08897584(param_2,*(undefined1 *)
                                                          (*(int *)(param_2 + 0x14) + *psVar5 * 0x18
                                                          ),0,1), iVar3 != 0)) {
                          iVar1 = iVar1 + 1;
                        }
                        iVar6 = iVar6 + 1;
                        psVar5 = psVar5 + 1;
                      } while (iVar6 < iVar7);
                    }
                  }
                  uVar8 = uVar8 + 1;
                  iVar2 = iVar2 + 8;
                } while ((int)uVar8 < 6);
                local_68 = local_68 + 1;
              } while (local_68 <= local_60);
            }
            local_5c = local_5c + 1;
            local_64 = local_64 + local_58;
          } while (local_5c <= local_50);
        }
        local_48 = local_48 + 1;
        local_4c = local_4c + local_40;
      } while (local_48 <= local_3c);
    }
  }
  return iVar1;
}

