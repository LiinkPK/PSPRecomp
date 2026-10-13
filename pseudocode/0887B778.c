/* Entry 0x0887B778 | file offset 0x00078750 | FUN_0887b778 | bytes 88 */

void FUN_0887b778(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_2[5];
  *(short *)(param_1 + 0x14) = (short)(int)(float)param_2[0xc];
  *(short *)(param_1 + 0x16) = (short)(int)(float)param_2[0xd];
  if ((*(uint *)(param_1 + 0x10) & 0x2000) == 0) {
    *(short *)(param_1 + 0x16) = *(short *)(param_1 + 0x16) + -1;
  }
  return;
}

