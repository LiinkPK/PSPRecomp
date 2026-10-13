/* Entry 0x088254FC | file offset 0x000224D4 | FUN_088254fc | bytes 1044 */

void FUN_088254fc(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_a0 [4];
  undefined1 auStack_90 [16];
  int local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  
  iVar1 = *(int *)(param_1 + 0x24);
  fVar8 = (float)FUN_0882fc20(iVar1 + 0x130,0xffffffff);
  fVar10 = 1.0;
  if (fVar8 != 0.0) {
    fVar10 = *(float *)(iVar1 + 0x1a8) / fVar8;
  }
  uVar2 = (*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80;
  local_60 = uVar2 - 0x80;
  local_5c = 0;
  local_54 = uVar2 - 0x81;
  if (0 < local_54) {
    local_58 = 0;
    do {
      local_70 = *(int *)(param_1 + 0x28) + local_58;
      local_74 = (int)*(char *)(local_70 + 0x12a) & 0x3f;
      local_64 = (int)*(char *)(local_70 + 0x129) & 0x7f;
      local_68 = local_5c + 1;
      local_5c = local_68;
      if (((*(byte *)(local_70 + 299) & 2) == 0) && (local_68 < local_60)) {
        local_6c = local_68 * 0x130;
        iVar1 = local_70 + 0xc0;
        do {
          iVar6 = *(int *)(param_1 + 0x28) + local_6c;
          local_78 = (int)*(char *)(iVar6 + 0x129) & 0x7f;
          uVar2 = (int)*(char *)(iVar6 + 0x12a) & 0x3f;
          if ((((((*(byte *)(iVar6 + 299) & 1) == 0) &&
                (*(float *)(local_70 + 0xd0) <= *(float *)(iVar6 + 0xe0))) &&
               (*(float *)(local_70 + 0xd4) <= *(float *)(iVar6 + 0xe4))) &&
              ((*(float *)(local_70 + 0xd8) <= *(float *)(iVar6 + 0xe8) &&
               (*(float *)(iVar6 + 0xd0) <= *(float *)(local_70 + 0xe0))))) &&
             ((*(float *)(iVar6 + 0xd4) <= *(float *)(local_70 + 0xe4) &&
              ((*(float *)(iVar6 + 0xd8) <= *(float *)(local_70 + 0xe8) &&
               (local_7c = 0, 0 < (int)local_74)))))) {
            iVar6 = iVar6 + 0xc0;
            local_80 = local_64 << 7;
            do {
              iVar4 = 0;
              iVar5 = *(int *)(param_1 + 0x2c) + local_80;
              if (uVar2 != 0) {
                iVar3 = local_78 << 7;
                do {
                  iVar7 = *(int *)(param_1 + 0x2c) + iVar3;
                  local_50 = iVar6;
                  FUN_089a38fc(local_a0,iVar5,iVar7);
                  fVar9 = (float)FUN_089a3bf8(local_a0);
                  fVar11 = *(float *)(*(int *)(iVar5 + 0x70) + 0x18) +
                           *(float *)(*(int *)(iVar7 + 0x70) + 0x18);
                  FUN_089a38fc(auStack_90,iVar5 + 0x10,iVar7 + 0x10);
                  fVar8 = (float)FUN_089a3bf8(auStack_90);
                  iVar6 = local_50;
                  if (fVar11 < fVar8) {
                    fVar8 = fVar11;
                  }
                  fVar8 = fVar10 * (fVar11 - fVar8) + fVar8;
                  if (fVar9 <= fVar8) {
                    fVar8 = fVar8 - fVar9;
                    if (*(char *)(param_1 + 0x31) == '\0') {
                      fVar8 = fVar8 * 0.5;
                    }
                    FUN_089a3bc8(local_a0,local_a0);
                    iVar7 = FUN_089a3b70(local_a0);
                    if (iVar7 != 0) {
                      local_a0[0] = 1.0;
                    }
                    local_a0[0] = local_a0[0] * fVar8;
                    local_a0[1] = 0.0;
                    local_a0[2] = local_a0[2] * fVar8;
                    FUN_089a38c4(iVar1,iVar1,local_a0);
                    FUN_089a38fc(iVar6,iVar6,local_a0);
                  }
                  iVar4 = iVar4 + 1;
                  iVar3 = iVar3 + 0x80;
                } while (iVar4 < (int)uVar2);
              }
              local_7c = local_7c + 1;
              local_80 = local_80 + 0x80;
            } while (local_7c < (int)local_74);
          }
          local_68 = local_68 + 1;
          local_6c = local_6c + 0x130;
        } while (local_68 < local_60);
      }
      local_58 = local_58 + 0x130;
    } while (local_5c < local_54);
  }
  return;
}

