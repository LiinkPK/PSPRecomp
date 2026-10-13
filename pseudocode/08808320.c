/* Entry 0x08808320 | file offset 0x000052F8 | FUN_08808320 | bytes 68 */

undefined4 FUN_08808320(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*(int *)(param_1 + 0x18) != 0) && (*(short *)(param_1 + 0x2c) == 1)) &&
     ((*(uint *)(*(int *)(param_1 + 0x18) + 0x380) & 0x80000) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

