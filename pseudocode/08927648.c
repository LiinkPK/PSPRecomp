/* Entry 0x08927648 | file offset 0x00124620 | FUN_08927648 | bytes 112 */

void FUN_08927648(int *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[5] != 0) {
      FUN_0885c538(param_1[1],param_1[5],0);
      param_1[5] = 0;
    }
    if (*param_1 != 0) {
      FUN_0885c538(param_1[1],*param_1,0);
      *param_1 = 0;
      param_1[3] = 0;
    }
    param_1[1] = 0;
  }
  return;
}

