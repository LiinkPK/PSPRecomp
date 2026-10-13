/* Entry 0x08828B9C | file offset 0x00025B74 | FUN_08828b9c | bytes 52 */

void FUN_08828b9c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 8) = &DAT_089c78d0;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

