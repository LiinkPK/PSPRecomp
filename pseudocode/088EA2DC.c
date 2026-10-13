/* Entry 0x088EA2DC | file offset 0x000E72B4 | FUN_088ea2dc | bytes 52 */

void FUN_088ea2dc(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x54) = &DAT_089cc9a8;
    if ((param_2 & 1) != 0) {
      FUN_08992f04();
    }
  }
  return;
}

