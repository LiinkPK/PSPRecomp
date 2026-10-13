/* Entry 0x08851028 | file offset 0x0004E000 | FUN_08851028 | bytes 48 */

void FUN_08851028(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x5d4) + 0x544);
  (**(code **)(iVar1 + 0x1b4))(*(int *)(param_1 + 0x5d4) + (int)*(short *)(iVar1 + 0x1b0));
  return;
}

