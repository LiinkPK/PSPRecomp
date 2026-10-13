/* Entry 0x08810BA8 | file offset 0x0000DB80 | FUN_08810ba8 | bytes 52 */

void FUN_08810ba8(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 8) = &DAT_089c6dc0;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

