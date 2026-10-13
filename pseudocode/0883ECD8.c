/* Entry 0x0883ECD8 | file offset 0x0003BCB0 | FUN_0883ecd8 | bytes 68 */

void FUN_0883ecd8(int *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = *(int *)(param_2 + 0xc)) {
    *param_1 = (*param_1 * (int)*(short *)(param_2 + 4)) / 100;
  }
  return;
}

