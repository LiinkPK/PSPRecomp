/* Entry 0x08810C78 | file offset 0x0000DC50 | FUN_08810c78 | bytes 52 */

void FUN_08810c78(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 8) = &DAT_089c6e00;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

