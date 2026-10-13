/* Entry 0x0881099C | file offset 0x0000D974 | FUN_0881099c | bytes 88 */

void FUN_0881099c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_089c6da0;
    FUN_08810a04(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

