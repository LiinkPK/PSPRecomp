/* Entry 0x088A1FF4 | file offset 0x0009EFCC | FUN_088a1ff4 | bytes 48 */

void FUN_088a1ff4(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x50);
  (**(code **)(iVar1 + 0x3c))((int)*(int **)(param_1 + 0x50) + (int)*(short *)(iVar1 + 0x38));
  return;
}

