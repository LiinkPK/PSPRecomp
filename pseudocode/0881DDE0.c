/* Entry 0x0881DDE0 | file offset 0x0001ADB8 | FUN_0881dde0 | bytes 52 */

void FUN_0881dde0(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 8) = &DAT_089c7588;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

