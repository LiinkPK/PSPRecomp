/* Entry 0x08942544 | file offset 0x0013F51C | FUN_08942544 | bytes 152 */

void FUN_08942544(int *param_1)

{
  if (*param_1 != 0) {
    FUN_089748d0(*param_1);
    *param_1 = 0;
  }
  if (param_1[2] != 0) {
    FUN_089748d0(param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    FUN_089748d0(param_1[3]);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    FUN_089748d0(param_1[4]);
    param_1[4] = 0;
  }
  param_1[5] = 0;
  return;
}

