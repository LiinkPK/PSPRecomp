/* Entry 0x08822E30 | file offset 0x0001FE08 | FUN_08822e30 | bytes 536 */

void FUN_08822e30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  
  local_90 = *(undefined4 *)(param_2 + 0x100);
  local_8c = *(undefined4 *)(param_2 + 0x104);
  local_88 = *(undefined4 *)(param_2 + 0x108);
  local_84 = *(undefined4 *)(param_2 + 0x10c);
  iVar5 = 0;
  if (0 < (int)(((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80)) {
    puVar6 = &local_80;
    iVar4 = 0;
    do {
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      local_64 = 0x3f800000;
      iVar1 = *(int *)(param_1 + 0x28) + iVar4;
      fVar8 = 3.4028235e+38;
      uVar3 = (int)*(char *)(iVar1 + 0x12a) & 0x3f;
      iVar2 = 0;
      if (uVar3 != 0) {
        do {
          iVar1 = *(int *)(param_1 + 0x2c) +
                  (((int)*(char *)(iVar1 + 0x129) & 0x7fU) + iVar2) * 0x80;
          local_40 = puVar6;
          FUN_089a38fc(auStack_60,iVar1,&local_90);
          fVar9 = *(float *)(*(int *)(iVar1 + 0x70) + 0x18);
          fVar7 = (float)FUN_089a3bf8(auStack_60);
          puVar6 = local_40;
          fVar7 = fVar7 - fVar9;
          if (fVar7 < fVar8) {
            FUN_089a3868(&local_70,auStack_60);
            fVar8 = fVar7;
          }
          iVar2 = iVar2 + 1;
          iVar1 = *(int *)(param_1 + 0x28) + iVar4;
        } while (iVar2 < (int)uVar3);
      }
      FUN_08823048(fVar8,&local_50,param_1,&local_70);
      local_80 = local_50;
      local_7c = local_4c;
      local_78 = local_48;
      local_74 = local_44;
      FUN_089a3868(iVar1 + 0xa0,puVar6);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x130;
    } while (iVar5 < (int)(((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80));
  }
  return;
}

