/* Entry 0x08911940 | file offset 0x0010E918 | FUN_08911940 | bytes 80 */

void FUN_08911940(int *param_1)

{
  if (*param_1 != 0) {
    FUN_088da060();
    *param_1 = 0;
  }
  (**(code **)(param_1[4] + 0xc))((int)param_1 + (int)*(short *)(param_1[4] + 8));
  return;
}

