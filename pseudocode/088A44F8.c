/* Entry 0x088A44F8 | file offset 0x000A14D0 | FUN_088a44f8 | bytes 72 */

void FUN_088a44f8(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffb | 4;
  if (param_2 < 1) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  else {
    *(float *)(param_1 + 0x1c) = (float)param_2;
  }
  return;
}

