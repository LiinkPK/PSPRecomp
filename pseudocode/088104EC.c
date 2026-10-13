/* Entry 0x088104EC | file offset 0x0000D4C4 | FUN_088104ec | bytes 52 */

void FUN_088104ec(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 8) = &DAT_089c6d80;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

