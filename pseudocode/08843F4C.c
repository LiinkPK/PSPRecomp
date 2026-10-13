/* Entry 0x08843F4C | file offset 0x00040F24 | FUN_08843f4c | bytes 60 */

void FUN_08843f4c(int param_1)

{
  if (*(short *)(param_1 + 0xe0) == 0) {
    FUN_08843fbc(param_1);
  }
  *(short *)(param_1 + 0xe0) = *(short *)(param_1 + 0xe0) + 1;
  return;
}

