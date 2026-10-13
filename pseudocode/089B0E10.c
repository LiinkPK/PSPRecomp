/* Entry 0x089B0E10 | file offset 0x001ADDE8 | FUN_089b0e10 | bytes 44 */

int FUN_089b0e10(int param_1)

{
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 2) & 4) != 0)) {
    return param_1 + 0x80;
  }
  return 0;
}

