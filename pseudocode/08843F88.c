/* Entry 0x08843F88 | file offset 0x00040F60 | FUN_08843f88 | bytes 52 */

void FUN_08843f88(int param_1)

{
  *(short *)(param_1 + 0xe0) = *(short *)(param_1 + 0xe0) + -1;
  if (*(short *)(param_1 + 0xe0) == 0) {
    FUN_08843ff8();
  }
  return;
}

