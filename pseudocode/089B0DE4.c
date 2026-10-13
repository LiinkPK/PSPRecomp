/* Entry 0x089B0DE4 | file offset 0x001ADDBC | FUN_089b0de4 | bytes 44 */

int FUN_089b0de4(int param_1)

{
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 2) & 2) != 0)) {
    return param_1 + 0x70;
  }
  return 0;
}

