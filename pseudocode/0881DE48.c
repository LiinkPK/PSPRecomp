/* Entry 0x0881DE48 | file offset 0x0001AE20 | FUN_0881de48 | bytes 52 */

void FUN_0881de48(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 8) = &DAT_089c75a8;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

