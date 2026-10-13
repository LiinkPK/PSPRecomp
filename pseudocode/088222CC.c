/* Entry 0x088222CC | file offset 0x0001F2A4 | FUN_088222cc | bytes 88 */

void FUN_088222cc(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x34) = &DAT_089c7690;
    FUN_088223a8(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

