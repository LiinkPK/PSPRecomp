/* Entry 0x088E6E18 | file offset 0x000E3DF0 | FUN_088e6e18 | bytes 52 */

void FUN_088e6e18(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x418) = &DAT_089cc738;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

