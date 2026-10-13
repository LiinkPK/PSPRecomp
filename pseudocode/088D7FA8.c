/* Entry 0x088D7FA8 | file offset 0x000D4F80 | FUN_088d7fa8 | bytes 88 */

void FUN_088d7fa8(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x24) = &DAT_089cc188;
    FUN_088d8030(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

