/* Entry 0x08926D2C | file offset 0x00123D04 | FUN_08926d2c | bytes 208 */

void FUN_08926d2c(undefined4 param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_2 = 9;
  *(undefined1 *)((int)param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  param_2[3] = 2;
  *(undefined1 *)((int)param_2 + 5) = 0;
  *(undefined4 *)(param_2 + 0x242) = 0;
  iVar2 = 0;
  puVar1 = param_2;
  do {
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x14) = 0xffffffff;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 8);
  iVar2 = FUN_0892615c(param_1);
  iVar3 = 0;
  iVar4 = iVar2 + 0x500;
  puVar1 = param_2;
  do {
    *(int *)(puVar1 + 0x204) = iVar4;
    *(undefined2 *)(iVar4 + (int)param_2) = 0;
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -4;
  } while (iVar3 < 0x1e);
  iVar3 = FUN_0892614c(param_1);
  *(int *)(param_2 + 0x240) = iVar2 + iVar3 + 0x48c;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined4 *)(param_2 + 0x244) = 0;
  return;
}

