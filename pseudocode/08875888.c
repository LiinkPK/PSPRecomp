/* Entry 0x08875888 | file offset 0x00072860 | FUN_08875888 | bytes 88 */

void FUN_08875888(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x20) = &DAT_089c9c38;
    FUN_0887590c(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

