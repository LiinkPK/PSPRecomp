/* Entry 0x089045EC | file offset 0x001015C4 | FUN_089045ec | bytes 32 */

void FUN_089045ec(int param_1)

{
  if (*(char *)(param_1 + 0x115) == '\x01') {
    *(undefined1 *)(param_1 + 0x114) = 1;
    *(undefined1 *)(param_1 + 0x115) = 0;
  }
  return;
}

