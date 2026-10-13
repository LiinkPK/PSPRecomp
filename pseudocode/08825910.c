/* Entry 0x08825910 | file offset 0x000228E8 | FUN_08825910 | bytes 1232 */

void FUN_08825910(float *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float local_80;
  undefined4 local_7c;
  float local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  float local_48;
  float local_44;
  int local_40;
  
  iVar1 = FUN_0881baa8();
  local_44 = param_1[9];
  fVar2 = *(float *)(iVar1 + 0x128);
  while (fVar2 != 0.0) {
    if (fVar2 == local_44) {
      fVar2 = *(float *)((int)fVar2 + 0x5fc);
    }
    else if (((((*(float *)((int)fVar2 + 0x580) < *param_1) ||
               (*(float *)((int)fVar2 + 0x588) < param_1[2])) ||
              (param_1[4] < *(float *)((int)fVar2 + 0x570))) ||
             ((param_1[6] < *(float *)((int)fVar2 + 0x578) ||
              (*(float *)((int)fVar2 + 0x584) < param_1[1])))) ||
            (param_1[5] < *(float *)((int)fVar2 + 0x574))) {
      fVar2 = *(float *)((int)fVar2 + 0x5fc);
    }
    else {
      local_4c = (((uint)param_1[8] & 0x1fe0) >> 5 ^ 0x80) - 0x80;
      local_54 = 0;
      local_48 = fVar2;
      if (0 < local_4c) {
        local_50 = 0;
        do {
          local_68 = (int)param_1[10] + local_50;
          local_6c = (int)*(char *)(local_68 + 0x12a) & 0x3f;
          local_58 = (int)*(char *)(local_68 + 0x129) & 0x7f;
          if (((((*(byte *)(local_68 + 299) & 2) == 0) &&
               (*(float *)(local_68 + 0xd0) <= *(float *)((int)fVar2 + 0x580))) &&
              ((*(float *)(local_68 + 0xd8) <= *(float *)((int)fVar2 + 0x588) &&
               (((*(float *)((int)fVar2 + 0x570) <= *(float *)(local_68 + 0xe0) &&
                 (*(float *)((int)fVar2 + 0x578) <= *(float *)(local_68 + 0xe8))) &&
                (*(float *)(local_68 + 0xd4) <= *(float *)((int)fVar2 + 0x584))))))) &&
             (*(float *)((int)fVar2 + 0x574) <= *(float *)(local_68 + 0xe4))) {
            local_5c = ((*(uint *)((int)fVar2 + 0x590) & 0x1fe0) >> 5 ^ 0x80) - 0x80;
            local_60 = 0;
            if (0 < local_5c) {
              iVar1 = local_68 + 0xc0;
              local_64 = 0;
              do {
                iVar3 = *(int *)((int)fVar2 + 0x598) + local_64;
                local_70 = (int)*(char *)(iVar3 + 0x129) & 0x7f;
                uVar8 = (int)*(char *)(iVar3 + 0x12a) & 0x3f;
                if (((((*(byte *)(iVar3 + 299) & 1) == 0) &&
                     (*(float *)(local_68 + 0xd0) <= *(float *)(iVar3 + 0xe0))) &&
                    ((*(float *)(local_68 + 0xd8) <= *(float *)(iVar3 + 0xe8) &&
                     ((*(float *)(iVar3 + 0xd0) <= *(float *)(local_68 + 0xe0) &&
                      (*(float *)(iVar3 + 0xd8) <= *(float *)(local_68 + 0xe8))))))) &&
                   ((*(float *)(local_68 + 0xd4) <= *(float *)(iVar3 + 0xe4) &&
                    ((*(float *)(iVar3 + 0xd4) <= *(float *)(local_68 + 0xe4) &&
                     (iVar3 = 0, 0 < (int)local_6c)))))) {
                  iVar9 = local_58 << 7;
                  do {
                    fVar6 = param_1[0xb];
                    iVar5 = 0;
                    if (uVar8 != 0) {
                      iVar4 = local_70 << 7;
                      do {
                        iVar7 = *(int *)((int)fVar2 + 0x59c) + iVar4;
                        local_40 = iVar1;
                        FUN_089a38fc(&local_80,(int)fVar6 + iVar9,iVar7);
                        fVar10 = (float)FUN_089a3bf8(&local_80);
                        iVar1 = local_40;
                        fVar11 = *(float *)(*(int *)((int)fVar6 + iVar9 + 0x70) + 0x18) +
                                 *(float *)(*(int *)(iVar7 + 0x70) + 0x18);
                        if (fVar10 < fVar11) {
                          fVar11 = fVar11 - fVar10;
                          if (*(char *)((int)param_1 + 0x31) == '\0') {
                            fVar11 = fVar11 * 0.5;
                          }
                          FUN_089a3bc8(&local_80,&local_80);
                          iVar7 = FUN_089a3b70(&local_80);
                          if (iVar7 != 0) {
                            local_80 = 1.0;
                          }
                          local_80 = local_80 * fVar11;
                          local_7c = 0;
                          local_78 = local_78 * fVar11;
                          FUN_089a38c4(iVar1,iVar1,&local_80);
                        }
                        iVar5 = iVar5 + 1;
                        iVar4 = iVar4 + 0x80;
                      } while (iVar5 < (int)uVar8);
                    }
                    iVar3 = iVar3 + 1;
                    iVar9 = iVar9 + 0x80;
                  } while (iVar3 < (int)local_6c);
                }
                local_60 = local_60 + 1;
                local_64 = local_64 + 0x130;
              } while (local_60 < local_5c);
            }
          }
          local_54 = local_54 + 1;
          local_50 = local_50 + 0x130;
        } while (local_54 < local_4c);
      }
      fVar2 = *(float *)((int)local_48 + 0x5fc);
    }
  }
  return;
}

