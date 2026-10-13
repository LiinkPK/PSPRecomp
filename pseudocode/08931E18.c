/* Entry 0x08931E18 | file offset 0x0012EDF0 | FUN_08931e18 | bytes 100 */

void FUN_08931e18(int *param_1)

{
  if (*param_1 == 1) {
    (**(code **)(param_1[3] + 0x24))((int)param_1 + (int)*(short *)(param_1[3] + 0x20));
    (**(code **)(param_1[3] + 0x2c))((int)param_1 + (int)*(short *)(param_1[3] + 0x28));
  }
  return;
}

