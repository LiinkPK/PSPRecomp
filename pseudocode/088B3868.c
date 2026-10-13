/* Entry 0x088B3868 | file offset 0x000B0840 | FUN_088b3868 | bytes 88 */

void FUN_088b3868(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x1c) = &DAT_089cb7c8;
    FUN_088b38e0(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

