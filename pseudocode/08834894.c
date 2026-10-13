/* Entry 0x08834894 | file offset 0x0003186C | FUN_08834894 | bytes 52 */

void FUN_08834894(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x3a4) + 8);
  (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0x3a4) + (int)*(short *)(iVar1 + 0x20));
  return;
}

