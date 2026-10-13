/* Entry 0x0884BD7C | file offset 0x00048D54 | FUN_0884bd7c | bytes 88 */

void FUN_0884bd7c(int *param_1)

{
  if (param_1[2] != 0) {
    FUN_08842138();
    param_1[2] = 0;
  }
  param_1[3] = 0;
  param_1[1] = 0;
  if (*param_1 != 0) {
    FUN_08842138();
  }
  *param_1 = 0;
  return;
}

