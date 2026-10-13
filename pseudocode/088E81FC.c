/* Entry 0x088E81FC | file offset 0x000E51D4 | FUN_088e81fc | bytes 52 */

void FUN_088e81fc(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x4c) = &DAT_089cc7a0;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

