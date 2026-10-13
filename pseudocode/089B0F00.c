/* Entry 0x089B0F00 | file offset 0x001ADED8 | FUN_089b0f00 | bytes 68 */

uint FUN_089b0f00(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if ((param_2 + 1 & 0xffff0000) != 0) {
      return param_2;
    }
    if ((param_2 & 0xffff) < (uint)*(ushort *)(param_1 + 0x26)) {
      return *(int *)(param_1 + 0x18) + param_2 * 0x10;
    }
  }
  return 0;
}

