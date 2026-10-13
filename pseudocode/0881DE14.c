/* Entry 0x0881DE14 | file offset 0x0001ADEC | FUN_0881de14 | bytes 52 */

void FUN_0881de14(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 8) = &DAT_089c7598;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

