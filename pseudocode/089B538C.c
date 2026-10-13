/* Entry 0x089B538C | file offset 0x001B2364 | FUN_089b538c | bytes 172 */

void FUN_089b538c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (*(int *)(param_3 + 4) != 0) {
    iVar1 = param_4 * 0x30 + *(int *)(param_3 + 4);
    *(undefined4 *)(iVar1 + 0x2c) = param_2;
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined2 *)(iVar1 + 0x10) = 0;
    return;
  }
  FUN_089b5044();
  iVar1 = param_4 * 0x30 + *(int *)(param_3 + 4);
  *(undefined4 *)(iVar1 + 0x2c) = param_2;
  *(undefined4 *)(iVar1 + 0x28) = param_1;
  *(undefined2 *)(iVar1 + 0x10) = 0;
  return;
}

