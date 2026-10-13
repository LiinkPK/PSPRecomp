/* Entry 0x088CDF18 | file offset 0x000CAEF0 | FUN_088cdf18 | bytes 88 */

void FUN_088cdf18(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_089cbd50;
    FUN_088cdf80(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

