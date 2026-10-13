/* Entry 0x0881DDAC | file offset 0x0001AD84 | FUN_0881ddac | bytes 52 */

void FUN_0881ddac(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_089c7578;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

