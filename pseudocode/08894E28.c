/* Entry 0x08894E28 | file offset 0x00091E00 | FUN_08894e28 | bytes 116 */

void FUN_08894e28(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x120) = &DAT_089ca868;
    FUN_08864c48(param_1 + 0x78,2);
    FUN_0886f048(param_1 + 0x60,2);
    FUN_0886ee90(param_1 + 0x10,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

