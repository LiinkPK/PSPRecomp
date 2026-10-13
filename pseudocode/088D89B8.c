/* Entry 0x088D89B8 | file offset 0x000D5990 | FUN_088d89b8 | bytes 100 */

void FUN_088d89b8(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x40) = &DAT_089cc1d8;
    FUN_088d8a54(param_1);
    FUN_0887a2ec(param_1 + 8,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

