/* Entry 0x0881DEE4 | file offset 0x0001AEBC | FUN_0881dee4 | bytes 52 */

void FUN_0881dee4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 8) = &DAT_089c75d8;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

