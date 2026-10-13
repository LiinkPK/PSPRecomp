/* Entry 0x08816784 | file offset 0x0001375C | FUN_08816784 | bytes 100 */

void FUN_08816784(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x1c) = &DAT_089c74b0;
    FUN_088167f0(param_1);
    FUN_0881af84(param_1 + 4,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

