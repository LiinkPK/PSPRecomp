/* Entry 0x08837948 | file offset 0x00034920 | FUN_08837948 | bytes 72 */

undefined4 FUN_08837948(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*(int *)(param_1 + 0x3a4) == 0) || ((*(uint *)(param_1 + 0x380) & 4) != 0)) ||
     ((*(byte *)(param_1 + 400) & 0x80) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

