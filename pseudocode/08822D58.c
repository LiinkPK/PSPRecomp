/* Entry 0x08822D58 | file offset 0x0001FD30 | FUN_08822d58 | bytes 40 */

bool FUN_08822d58(int param_1)

{
  return (*(uint *)(param_1 + 0x20) & 1) != 0 && (*(uint *)(param_1 + 0x20) & 8) != 0;
}

