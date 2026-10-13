/* Entry 0x0887B8A8 | file offset 0x00078880 | FUN_0887b8a8 | bytes 44 */

void FUN_0887b8a8(int param_1,int param_2)

{
  if (param_2 < 0x100) {
    if (param_2 < -1) {
      param_2 = -1;
    }
  }
  else {
    param_2 = 0xff;
  }
  *(short *)(param_1 + 10) = (short)param_2;
  return;
}

