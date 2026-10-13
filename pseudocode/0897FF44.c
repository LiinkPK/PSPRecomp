/* Entry 0x0897FF44 | file offset 0x0017CF1C | FUN_0897ff44 | bytes 896 */

/* WARNING: Removing unreachable block (ram,0x08980118) */
/* WARNING: Removing unreachable block (ram,0x08980124) */
/* WARNING: Removing unreachable block (ram,0x08980130) */
/* WARNING: Removing unreachable block (ram,0x08980190) */
/* WARNING: Removing unreachable block (ram,0x0898019c) */
/* WARNING: Removing unreachable block (ram,0x089801a8) */

void FUN_0897ff44(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_8c;
  float local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_6c;
  undefined1 *local_68;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_44;
  int *local_40;
  undefined1 auStack_30 [16];
  
  iVar3 = *(int *)(param_2 + 0xac);
  FUN_08983f78(&local_a0);
  FUN_089a3918(auStack_30,param_4 + 0x10,*(int *)(param_2 + 0x88) + 0x40);
  local_48 = *(char *)((int)param_3 + 0x1e) == '\x01';
  local_50 = 0;
  local_68 = auStack_30;
  local_4c = FUN_08983db4((char)param_3[7],0,1,2);
  local_44 = 4;
  local_a0 = 0;
  local_9c = 0;
  local_84 = param_3[3];
  local_80 = param_3[4];
  local_7c = *(undefined4 *)(iVar3 + 0x14);
  local_78 = *(undefined4 *)(iVar3 + 0x18);
  if ((*(char *)((int)param_3 + 0x1f) == '\0') || ((char)param_3[8] == '\0')) {
    if (*(char *)((int)param_3 + 0x1f) == '\0') {
      if ((char)param_3[8] != '\0') {
        local_74 = 2;
      }
    }
    else {
      local_74 = 1;
    }
  }
  else {
    local_74 = 3;
  }
  local_40 = *(int **)(param_2 + 0xa4);
  if (local_40 != (int *)0x0) {
    if (*param_3 < 0) {
      local_6c = -1;
    }
    else {
      iVar3 = *(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x30);
      if (iVar3 == 0) {
        local_6c = -1;
      }
      else {
        local_6c = *(int *)(*(int *)(iVar3 + *param_3 * 4) + 0x10);
      }
    }
    if (local_6c != -1) {
      iVar3 = **(int **)(*local_40 + local_6c * 4);
      iVar1 = param_3[3];
      iVar2 = param_3[4];
      fVar5 = (float)*(int *)(iVar3 + 0x20);
      fVar4 = (float)*(int *)(iVar3 + 0x1c);
      local_8c = *(float *)(param_4 + 0x20);
      local_88 = *(float *)(param_4 + 0x24);
      if (*(char *)((int)param_3 + 0x1f) == '\0') {
        local_8c = local_8c / fVar5;
      }
      else if (*(char *)((int)param_3 + 0x1f) == '\x01') {
        local_8c = local_8c / fVar5;
      }
      else {
        fVar6 = (float)iVar1;
        if (iVar1 < 0) {
          fVar6 = fVar6 + 4.2949673e+09;
        }
        local_8c = (local_8c + fVar6) / fVar5;
      }
      if ((char)param_3[8] == '\0') {
        local_88 = local_88 / fVar4;
      }
      else if ((char)param_3[8] == '\x01') {
        local_88 = local_88 / fVar4;
      }
      else {
        fVar6 = (float)iVar2;
        if (iVar2 < 0) {
          fVar6 = fVar6 + 4.2949673e+09;
        }
        local_88 = (local_88 + fVar6) / fVar4;
      }
      fVar6 = (float)iVar1;
      if (iVar1 < 0) {
        fVar6 = fVar6 + 4.2949673e+09;
      }
      if (fVar6 == 0.0) {
        local_8c = local_8c * 0.0;
      }
      else {
        fVar6 = (float)iVar1;
        if (iVar1 < 0) {
          fVar6 = fVar6 + 4.2949673e+09;
        }
        local_8c = local_8c * (fVar5 / fVar6);
      }
      fVar5 = (float)iVar2;
      if (iVar2 < 0) {
        fVar5 = fVar5 + 4.2949673e+09;
      }
      if (fVar5 == 0.0) {
        local_88 = local_88 * 0.0;
      }
      else {
        fVar5 = (float)iVar2;
        if (iVar2 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        local_88 = local_88 * (fVar4 / fVar5);
      }
      local_47 = 1;
      FUN_08983fb8(&local_a0);
    }
  }
  return;
}

