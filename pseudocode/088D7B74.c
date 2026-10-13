/* Entry 0x088D7B74 | file offset 0x000D4B4C | FUN_088d7b74 | bytes 88 */

void FUN_088d7b74(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x1c) = &DAT_089cc0c8;
    FUN_088d7bf0(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

