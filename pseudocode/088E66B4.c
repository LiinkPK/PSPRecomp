/* Entry 0x088E66B4 | file offset 0x000E368C | FUN_088e66b4 | bytes 52 */

void FUN_088e66b4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x24) = &DAT_089cc710;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

