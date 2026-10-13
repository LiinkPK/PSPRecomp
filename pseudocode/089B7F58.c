/* Entry 0x089B7F58 | file offset 0x001B4F30 | FUN_089b7f58 | bytes 52 */

uint FUN_089b7f58(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0x7fff) >> 10;
  if ((param_1 & 0x7fff) != 0) {
    uVar1 = uVar1 + 0x70;
  }
  return (param_1 & 0x3ff) << 0xd | (param_1 & 0x8000) << 0x10 | uVar1 << 0x17;
}

