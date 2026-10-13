/* Entry 0x08808C98 | file offset 0x00005C70 | FUN_08808c98 | bytes 588 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08808c98(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
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
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar2 = *param_1;
  uVar1 = *(undefined2 *)(*(int *)(param_4 + 0xc) + 6);
  if (*(int *)(iVar2 + 0x18) == 0) {
    FUN_088085a8(0,*(undefined4 *)(iVar2 + 0x1c),0,param_3,uVar1);
    iVar3 = *param_1;
    iVar2 = *(int *)(iVar3 + 0x18);
  }
  else {
    FUN_088085a8(*(int *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20),
                 param_3,uVar1);
    iVar3 = *param_1;
    iVar2 = *(int *)(iVar3 + 0x18);
  }
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x542) == '\x03')) {
    iVar2 = *(int *)(iVar2 + 0x5d4);
  }
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x34) != 0)) &&
     ((iVar2 == 0 || (*(char *)(iVar2 + 0x542) != '\x01')))) {
    iVar2 = FUN_088132bc(param_3);
    iVar3 = *param_1;
    local_a0 = *(undefined4 *)(param_4 + 0x10);
    if (iVar2 == 1) {
      local_9c = *(undefined4 *)(param_4 + 0x14);
      local_98 = *(undefined4 *)(param_4 + 0x18);
      local_54 = 0x3f800000;
      local_84 = 0x3f800000;
      local_94 = 0x3f800000;
      local_90 = local_a0;
      local_8c = local_9c;
      local_88 = local_98;
      local_60 = local_a0;
      local_5c = local_9c;
      local_58 = local_98;
      func_0x08abb690(_DAT_08abbdf8,*(undefined4 *)(iVar3 + 0x18),&local_a0,
                      *(undefined1 *)(*(int *)(iVar3 + 0x34) + 0xd));
    }
    else {
      local_7c = *(undefined4 *)(param_4 + 0x14);
      local_78 = *(undefined4 *)(param_4 + 0x18);
      local_34 = 0x3f800000;
      local_64 = 0x3f800000;
      local_74 = 0x3f800000;
      local_80 = local_a0;
      local_70 = local_a0;
      local_6c = local_7c;
      local_68 = local_78;
      local_40 = local_a0;
      local_3c = local_7c;
      local_38 = local_78;
      func_0x08abb60c(_DAT_08abbdf8,*(undefined4 *)(iVar3 + 0x18),&local_80,
                      *(undefined1 *)(*(int *)(iVar3 + 0x34) + 0xd));
    }
  }
  return;
}

