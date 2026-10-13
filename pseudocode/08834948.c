/* Entry 0x08834948 | file offset 0x00031920 | FUN_08834948 | bytes 52 */

void FUN_08834948(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x3a4) + 8);
  (**(code **)(iVar1 + 0x3c))(*(int *)(param_1 + 0x3a4) + (int)*(short *)(iVar1 + 0x38));
  return;
}

