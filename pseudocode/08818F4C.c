/* Entry 0x08818F4C | file offset 0x00015F24 | FUN_08818f4c | bytes 56 */

undefined4 FUN_08818f4c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(char *)(param_1 + 0xc) != '\0') {
    uVar1 = FUN_088192c8(param_1,0xffffffff,0,0);
  }
  return uVar1;
}

