/* Entry 0x088F8454 | file offset 0x000F542C | FUN_088f8454 | bytes 56 */

void FUN_088f8454(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x14c70);
  (**(code **)(iVar1 + 0x44))((int)*(int **)(param_1 + 0x14c70) + (int)*(short *)(iVar1 + 0x40));
  return;
}

