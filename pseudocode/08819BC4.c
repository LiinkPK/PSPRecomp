/* Entry 0x08819BC4 | file offset 0x00016B9C | FUN_08819bc4 | bytes 88 */

void FUN_08819bc4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_089c74e8;
    FUN_08819c44(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

