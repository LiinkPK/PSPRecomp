/* Entry 0x0887CEE8 | file offset 0x00079EC0 | FUN_0887cee8 | bytes 88 */

void FUN_0887cee8(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xcc) = &DAT_089c9d48;
    FUN_0887cf80(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

