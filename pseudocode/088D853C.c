/* Entry 0x088D853C | file offset 0x000D5514 | FUN_088d853c | bytes 88 */

void FUN_088d853c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_089cc1c0;
    FUN_088d85a4(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

