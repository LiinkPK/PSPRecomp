/* Entry 0x08834900 | file offset 0x000318D8 | FUN_08834900 | bytes 52 */

void FUN_08834900(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x3a4) + 8);
  (**(code **)(iVar1 + 0x34))(*(int *)(param_1 + 0x3a4) + (int)*(short *)(iVar1 + 0x30));
  return;
}

