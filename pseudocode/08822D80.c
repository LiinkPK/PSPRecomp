/* Entry 0x08822D80 | file offset 0x0001FD58 | FUN_08822d80 | bytes 40 */

bool FUN_08822d80(int param_1)

{
  return (*(uint *)(param_1 + 0x20) & 1) != 0 && (*(uint *)(param_1 + 0x20) & 0x10) != 0;
}

