/* Entry 0x088F828C | file offset 0x000F5264 | FUN_088f828c | bytes 56 */

void FUN_088f828c(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x14c70);
  (**(code **)(iVar1 + 0x2c))((int)*(int **)(param_1 + 0x14c70) + (int)*(short *)(iVar1 + 0x28));
  return;
}

