/* Entry 0x0890B758 | file offset 0x00108730 | FUN_0890b758 | bytes 52 */

void FUN_0890b758(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 4) = &DAT_089cdd88;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

