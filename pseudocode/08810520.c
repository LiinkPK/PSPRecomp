/* Entry 0x08810520 | file offset 0x0000D4F8 | FUN_08810520 | bytes 148 */

void FUN_08810520(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x24) = &DAT_089c6d60;
    FUN_088105e0(param_1);
    if (param_1 != -8) {
      if (param_1 != -0x18) {
        *(undefined **)(param_1 + 0x20) = &DAT_089c6d80;
      }
      if (param_1 != -0xc) {
        *(undefined **)(param_1 + 0x14) = &DAT_089c6d70;
      }
    }
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

