/* Entry 0x0885C4D4 | file offset 0x000594AC | FUN_0885c4d4 | bytes 52 */

void FUN_0885c4d4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x24) = &DAT_089c8e28;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

