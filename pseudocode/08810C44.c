/* Entry 0x08810C44 | file offset 0x0000DC1C | FUN_08810c44 | bytes 52 */

void FUN_08810c44(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 8) = &DAT_089c6df0;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

