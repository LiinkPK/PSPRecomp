/* Entry 0x0887E684 | file offset 0x0007B65C | FUN_0887e684 | bytes 92 */

void FUN_0887e684(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x24);
  (**(code **)(iVar1 + 0x1c))(*(int *)(param_1 + 0x14) + (int)*(short *)(iVar1 + 0x18));
  FUN_0885c488(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

