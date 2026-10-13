/* Entry 0x08837764 | file offset 0x0003473C | FUN_08837764 | bytes 92 */

undefined4 FUN_08837764(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*(int *)(param_1 + 0x46c) != 0) && (0 < *(short *)(*(int *)(param_1 + 0x46c) + 4))) &&
     ((*(uint *)(param_1 + 0x388) & 0x4000) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

