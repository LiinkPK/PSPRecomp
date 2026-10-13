/* Entry 0x08926508 | file offset 0x001234E0 | FUN_08926508 | bytes 72 */

void FUN_08926508(undefined4 param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x480) + param_2;
  *(undefined2 *)(iVar1 + (uint)*(byte *)(param_2 + 2) * 4) = param_3;
  *(undefined2 *)(iVar1 + (uint)*(byte *)(param_2 + 2) * 4 + 2) = param_4;
  *(char *)(param_2 + 2) = *(char *)(param_2 + 2) + '\x01';
  return;
}

