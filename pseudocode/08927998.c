/* Entry 0x08927998 | file offset 0x00124970 | FUN_08927998 | bytes 168 */

void FUN_08927998(int param_1)

{
  undefined4 uVar1;
  
  FUN_08926094();
  FUN_0885c538(*(undefined4 *)(param_1 + 4),*(undefined4 *)(*(int *)(param_1 + 0x20) + 8),0);
  FUN_0885c538(*(undefined4 *)(param_1 + 4),*(undefined4 *)(*(int *)(param_1 + 0x20) + 4),0);
  FUN_0885c538(*(undefined4 *)(param_1 + 4),**(undefined4 **)(param_1 + 0x20),0);
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 4) = 0;
  **(undefined4 **)(param_1 + 0x20) = 0;
  FUN_0885c538(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x20),0);
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar1 = *(undefined4 *)(param_1 + 4);
  FUN_08927648(param_1);
  FUN_0885c488(uVar1);
  return;
}

