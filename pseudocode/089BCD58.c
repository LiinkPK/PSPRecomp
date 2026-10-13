/* Entry 0x089BCD58 | file offset 0x001B9D30 | FUN_089bcd58 | bytes 24 */

uint FUN_089bcd58(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (*(ushort *)(param_1 + 2) & 0x1f) >> 4;
  }
  return uVar1;
}

