/* Entry 0x089BCD18 | file offset 0x001B9CF0 | FUN_089bcd18 | bytes 44 */

int FUN_089bcd18(int param_1)

{
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 2) & 0x20) != 0)) {
    return param_1 + 0x20;
  }
  return 0;
}

