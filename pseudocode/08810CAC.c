/* Entry 0x08810CAC | file offset 0x0000DC84 | FUN_08810cac | bytes 208 */

void FUN_08810cac(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x48) = &DAT_089c6db0;
    FUN_08810d8c(param_1);
    if (param_1 != -0x3c) {
      *(undefined **)(param_1 + 0x44) = &DAT_089c6e00;
    }
    if (param_1 != -0x30) {
      *(undefined **)(param_1 + 0x38) = &DAT_089c6df0;
    }
    if (param_1 != -0x24) {
      *(undefined **)(param_1 + 0x2c) = &DAT_089c6de0;
    }
    if (param_1 != -0x18) {
      *(undefined **)(param_1 + 0x20) = &DAT_089c6dd0;
    }
    if (param_1 != -0xc) {
      *(undefined **)(param_1 + 0x14) = &DAT_089c6dc0;
    }
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

