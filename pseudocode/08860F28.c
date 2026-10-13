/* Entry 0x08860F28 | file offset 0x0005DF00 | FUN_08860f28 | bytes 88 */

void FUN_08860f28(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x43c) = &DAT_089c8e60;
    FUN_08860fe4(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

