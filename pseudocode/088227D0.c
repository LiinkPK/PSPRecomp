/* Entry 0x088227D0 | file offset 0x0001F7A8 | FUN_088227d0 | bytes 48 */

undefined4 FUN_088227d0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 4;
  }
  return uVar1;
}

