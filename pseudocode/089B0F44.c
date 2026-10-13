/* Entry 0x089B0F44 | file offset 0x001ADF1C | FUN_089b0f44 | bytes 84 */

uint FUN_089b0f44(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if ((param_2 + 1 & 0xffff0000) != 0) {
      return param_2;
    }
    if ((param_2 & 0xffff) < *(ushort *)(param_1 + 0x28) + 1) {
      return *(int *)(param_1 + 0x1c) + param_2 * 0x30;
    }
  }
  return 0;
}

