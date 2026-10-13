/* Entry 0x089BD030 | file offset 0x001BA008 | FUN_089bd030 | bytes 36 */

uint FUN_089bd030(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(byte *)(param_1 + 0x18) - 1;
    uVar1 = param_2 + uVar1 & ~uVar1;
  }
  return uVar1;
}

