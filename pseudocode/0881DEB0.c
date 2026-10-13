/* Entry 0x0881DEB0 | file offset 0x0001AE88 | FUN_0881deb0 | bytes 52 */

void FUN_0881deb0(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_089c75c8;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

