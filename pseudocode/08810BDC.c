/* Entry 0x08810BDC | file offset 0x0000DBB4 | FUN_08810bdc | bytes 52 */

void FUN_08810bdc(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 8) = &DAT_089c6dd0;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

