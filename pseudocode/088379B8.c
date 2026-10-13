/* Entry 0x088379B8 | file offset 0x00034990 | FUN_088379b8 | bytes 68 */

undefined4 FUN_088379b8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*(uint *)(param_1 + 0x380) & 0x100000) != 0) || ((*(byte *)(param_1 + 0x192) & 4) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

