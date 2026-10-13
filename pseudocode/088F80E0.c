/* Entry 0x088F80E0 | file offset 0x000F50B8 | FUN_088f80e0 | bytes 56 */

void FUN_088f80e0(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x14c70);
  (**(code **)(iVar1 + 0x14))((int)*(int **)(param_1 + 0x14c70) + (int)*(short *)(iVar1 + 0x10));
  return;
}

