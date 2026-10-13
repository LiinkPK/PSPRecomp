/* Entry 0x08941CE0 | file offset 0x0013ECB8 | FUN_08941ce0 | bytes 52 */

void FUN_08941ce0(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x24) = &DAT_089dafc0;
    if ((param_2 & 1) != 0) {
      FUN_089748d0();
    }
  }
  return;
}

