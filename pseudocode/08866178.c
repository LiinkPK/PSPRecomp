/* Entry 0x08866178 | file offset 0x00063150 | FUN_08866178 | bytes 40 */

void FUN_08866178(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x2ccf) != param_2) {
    *(undefined1 *)(param_1 + 0x2cd0) = 1;
  }
  return;
}

