/* Entry 0x088F8254 | file offset 0x000F522C | FUN_088f8254 | bytes 56 */

void FUN_088f8254(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x14c70);
  (**(code **)(iVar1 + 0x24))((int)*(int **)(param_1 + 0x14c70) + (int)*(short *)(iVar1 + 0x20));
  return;
}

