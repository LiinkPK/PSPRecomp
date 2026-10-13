/* Entry 0x0884333C | file offset 0x00040314 | FUN_0884333c | bytes 268 */

void FUN_0884333c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0886d2c4(*param_1 + 0x24);
  param_1[1] = iVar2;
  FUN_0886d354(0,*param_1 + 0x24,param_2,param_3);
  FUN_0886d354(1,*param_1 + 0x24,param_2,param_3);
  iVar2 = FUN_0886d4b8(0,*param_1 + 0x24);
  param_1[10] = iVar2;
  iVar2 = FUN_0886d4b8(1,*param_1 + 0x24);
  param_1[0xb] = iVar2;
  *(uint *)(param_1[1] + 0x90) = *(uint *)(param_1[1] + 0x90) | 4;
  iVar2 = *param_1;
  if (iVar2 != 0) {
    bVar1 = false;
    if ((*(char *)(iVar2 + 0x24) == 'R') && (bVar1 = false, *(char *)(iVar2 + 0x25) == '_')) {
      bVar1 = true;
    }
    if ((bVar1) && (iVar2 = param_1[1], *(int *)(*(int *)(iVar2 + 0x84) + 4) == 0)) {
      *(uint *)(iVar2 + 0x90) = *(uint *)(iVar2 + 0x90) | 8;
    }
  }
  return;
}

