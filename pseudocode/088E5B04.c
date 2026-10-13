/* Entry 0x088E5B04 | file offset 0x000E2ADC | FUN_088e5b04 | bytes 52 */

void FUN_088e5b04(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x80) = &DAT_089cc610;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

