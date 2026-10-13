/* Entry 0x0881DFB4 | file offset 0x0001AF8C | FUN_0881dfb4 | bytes 52 */

void FUN_0881dfb4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 8) = &DAT_089c7618;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

