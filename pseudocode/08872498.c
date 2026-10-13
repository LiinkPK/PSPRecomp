/* Entry 0x08872498 | file offset 0x0006F470 | FUN_08872498 | bytes 52 */

void FUN_08872498(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x34) = &DAT_089c96b0;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

