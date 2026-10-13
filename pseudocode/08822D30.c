/* Entry 0x08822D30 | file offset 0x0001FD08 | FUN_08822d30 | bytes 40 */

bool FUN_08822d30(int param_1)

{
  return (*(uint *)(param_1 + 0x20) & 1) != 0 && (*(uint *)(param_1 + 0x20) & 4) != 0;
}

