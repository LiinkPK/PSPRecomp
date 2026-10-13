/* Entry 0x08823D28 | file offset 0x00020D00 | FUN_08823d28 | bytes 748 */

void FUN_08823d28(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [4];
  undefined4 local_8c;
  undefined1 auStack_80 [4];
  undefined4 local_7c;
  undefined1 auStack_70 [4];
  undefined4 local_6c;
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  local_44 = ((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80;
  local_48 = 0;
  if (0 < local_44) {
    local_4c = 0;
    do {
      fVar6 = 0.0;
      iVar3 = 0;
      local_50 = *(int *)(param_1 + 0x28) + local_4c;
      uVar4 = (int)*(char *)(local_50 + 0x12a) & 0x3f;
      if (uVar4 != 0) {
        iVar2 = ((int)*(char *)(local_50 + 0x129) & 0x7fU) << 7;
        do {
          iVar1 = *(int *)(param_1 + 0x2c) + iVar2;
          if ((*(byte *)(iVar1 + 0x7f) & 4) != 0) {
            fVar8 = *(float *)(iVar1 + 4) - *(float *)(iVar1 + 0x24);
            fVar7 = *(float *)(*(int *)(iVar1 + 0x70) + 0x18);
            if (0.0 < fVar8) {
              if (fVar8 < fVar7) {
                FUN_089a38fc(auStack_90,iVar1 + 0x20,iVar1);
                local_8c = 0;
                fVar5 = (float)FUN_089a3bf8(auStack_90);
                fVar7 = fVar7 * fVar7 - fVar8 * fVar8;
                if (fVar5 * fVar5 < fVar7) {
                  FUN_089a38fc(auStack_80,iVar1,iVar1 + 0x50);
                  local_7c = 0;
                  FUN_089a3bc8(auStack_80,auStack_80);
                  fVar8 = (float)FUN_089a3b10(auStack_80,auStack_90);
                  fVar7 = (float)FUN_089a47cc(fVar7 - (fVar5 * fVar5 - fVar8 * fVar8));
                  fVar8 = fVar8 + fVar7;
                  if (fVar6 < fVar8) {
                    FUN_089a3a64(fVar8,auStack_a0,auStack_80);
                    fVar6 = fVar8;
                  }
                }
              }
            }
            else {
              FUN_089a38fc(auStack_70,iVar1 + 0x20,iVar1);
              local_6c = 0;
              fVar8 = (float)FUN_089a3bf8(auStack_70);
              if (fVar8 * fVar8 < fVar7 * fVar7) {
                FUN_089a38fc(auStack_60,iVar1,iVar1 + 0x50);
                local_5c = 0;
                FUN_089a3bc8(auStack_60,auStack_60);
                fVar5 = (float)FUN_089a3b10(auStack_60,auStack_70);
                fVar7 = (float)FUN_089a47cc(fVar7 * fVar7 - (fVar8 * fVar8 - fVar5 * fVar5));
                fVar5 = fVar5 + fVar7;
                if (fVar6 < fVar5) {
                  FUN_089a3a64(fVar5,auStack_a0,auStack_60);
                  fVar6 = fVar5;
                }
              }
            }
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x80;
        } while (iVar3 < (int)uVar4);
      }
      if (fVar6 != 0.0) {
        FUN_089a38c4(local_50 + 0xc0,local_50 + 0xc0,auStack_a0);
      }
      local_48 = local_48 + 1;
      local_4c = local_4c + 0x130;
    } while (local_48 < local_44);
  }
  return;
}

