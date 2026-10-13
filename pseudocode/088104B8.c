/* Entry 0x088104B8 | file offset 0x0000D490 | FUN_088104b8 | bytes 52 */

void FUN_088104b8(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 8) = &DAT_089c6d70;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

