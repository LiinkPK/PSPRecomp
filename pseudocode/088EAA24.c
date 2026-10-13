/* Entry 0x088EAA24 | file offset 0x000E79FC | FUN_088eaa24 | bytes 52 */

void FUN_088eaa24(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x80) = &DAT_089cc9e8;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

