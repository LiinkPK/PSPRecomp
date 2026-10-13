/* Entry 0x0881DF4C | file offset 0x0001AF24 | FUN_0881df4c | bytes 52 */

void FUN_0881df4c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 8) = &DAT_089c75f8;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

