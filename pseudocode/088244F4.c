/* Entry 0x088244F4 | file offset 0x000214CC | FUN_088244f4 | bytes 656 */

void FUN_088244f4(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
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
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  
  local_a0 = 0xff7fffff;
  local_94 = 0x3f800000;
  local_90 = 0x7f7fffff;
  local_8c = 0x7f7fffff;
  local_88 = 0x7f7fffff;
  local_84 = 0x3f800000;
  local_3c = ((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80;
  local_40 = 0;
  local_9c = local_a0;
  local_98 = local_a0;
  if (0 < local_3c) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x28) + iVar5;
      if ((*(byte *)(iVar2 + 299) & 1) == 0) {
        if ((*(byte *)(iVar2 + 299) & 2) == 0) {
          local_74 = 0x3f800000;
          local_80 = 0xff7fffff;
          local_70 = 0x7f7fffff;
          local_6c = 0x7f7fffff;
          local_68 = 0x7f7fffff;
          local_64 = 0x3f800000;
          uVar4 = (int)*(char *)(iVar2 + 0x12a) & 0x3f;
          iVar3 = 0;
          local_7c = local_80;
          local_78 = local_80;
          if (uVar4 != 0) {
            iVar2 = ((int)*(char *)(iVar2 + 0x129) & 0x7fU) << 7;
            do {
              pfVar1 = (float *)(*(int *)(param_1 + 0x2c) + iVar2);
              local_48 = *(float *)((int)pfVar1[0x1c] + 0x18);
              local_60 = *pfVar1 - local_48;
              local_5c = pfVar1[1] - local_48;
              local_54 = 0x3f800000;
              local_58 = pfVar1[2] - local_48;
              local_50 = *pfVar1 + local_48;
              local_4c = pfVar1[1] + local_48;
              local_44 = 0x3f800000;
              local_48 = pfVar1[2] + local_48;
              FUN_089a3ab8(&local_80,&local_80,&local_50);
              FUN_089a3ad4(&local_70,&local_70,&local_60);
              iVar3 = iVar3 + 1;
              iVar2 = iVar2 + 0x80;
            } while (iVar3 < (int)uVar4);
          }
          FUN_089a3ab8(&local_a0,&local_a0,&local_80);
          FUN_089a3ad4(&local_90,&local_90,&local_70);
          FUN_089a3868(*(int *)(param_1 + 0x28) + iVar5 + 0xe0,&local_80);
          FUN_089a3868(*(int *)(param_1 + 0x28) + iVar5 + 0xd0,&local_70);
        }
        else {
          FUN_089a3ab8(&local_a0,&local_a0,*(int *)(param_1 + 0x28) + iVar5 + 0xe0);
          FUN_089a3ad4(&local_90,&local_90,*(int *)(param_1 + 0x28) + iVar5 + 0xd0);
        }
      }
      local_40 = local_40 + 1;
      iVar5 = iVar5 + 0x130;
    } while (local_40 < local_3c);
  }
  FUN_089a3868(param_1 + 0x10,&local_a0);
  FUN_089a3868(param_1,&local_90);
  return;
}

