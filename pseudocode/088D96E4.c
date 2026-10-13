/* Entry 0x088D96E4 | file offset 0x000D66BC | FUN_088d96e4 | bytes 88 */

void FUN_088d96e4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_089cc250;
    FUN_088d9750(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

