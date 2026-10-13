/* Entry 0x088DE968 | file offset 0x000DB940 | FUN_088de968 | bytes 88 */

void FUN_088de968(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_089cc2a8;
    FUN_088de9d8(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

