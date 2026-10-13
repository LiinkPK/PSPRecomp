/* Entry 0x089B0E78 | file offset 0x001ADE50 | FUN_089b0e78 | bytes 68 */

uint FUN_089b0e78(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if ((param_2 + 1 & 0xffff0000) != 0) {
      return param_2;
    }
    if ((param_2 & 0xffff) < (uint)*(ushort *)(param_1 + 0x20)) {
      return *(int *)(param_1 + 0xc) + param_2 * 0x100;
    }
  }
  return 0;
}

