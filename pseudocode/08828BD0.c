/* Entry 0x08828BD0 | file offset 0x00025BA8 | FUN_08828bd0 | bytes 112 */

void FUN_08828bd0(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x18) = &DAT_089c78c0;
    FUN_08828c50(param_1);
    if (param_1 != -0xc) {
      *(undefined **)(param_1 + 0x14) = &DAT_089c78d0;
    }
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

