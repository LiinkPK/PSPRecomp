/* Entry 0x0892ABF8 | file offset 0x00127BD0 | FUN_0892abf8 | bytes 52 */

void FUN_0892abf8(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x24) = &DAT_089cec00;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

