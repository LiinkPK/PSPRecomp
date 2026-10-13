/* Entry 0x0881DD78 | file offset 0x0001AD50 | FUN_0881dd78 | bytes 52 */

void FUN_0881dd78(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_089c7568;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

