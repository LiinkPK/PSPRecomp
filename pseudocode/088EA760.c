/* Entry 0x088EA760 | file offset 0x000E7738 | FUN_088ea760 | bytes 52 */

void FUN_088ea760(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x20) = &DAT_089cc9c8;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

