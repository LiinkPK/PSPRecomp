/* Entry 0x088F80A8 | file offset 0x000F5080 | FUN_088f80a8 | bytes 56 */

void FUN_088f80a8(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x14c70);
  (**(code **)(iVar1 + 0xc))((int)*(int **)(param_1 + 0x14c70) + (int)*(short *)(iVar1 + 8));
  return;
}

