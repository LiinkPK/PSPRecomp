/* Entry 0x089B1884 | file offset 0x001AE85C | FUN_089b1884 | bytes 68 */

uint FUN_089b1884(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if ((param_2 + 1 & 0xffff0000) != 0) {
      return param_2;
    }
    if ((param_2 & 0xffff) < (uint)*(ushort *)(param_1 + 0xc)) {
      return *(int *)(param_1 + 8) + param_2 * 0x40;
    }
  }
  return 0;
}

