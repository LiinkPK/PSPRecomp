/* Entry 0x0887B1F4 | file offset 0x000781CC | FUN_0887b1f4 | bytes 108 */

void FUN_0887b1f4(int *param_1,uint param_2)

{
  if (param_1 != (int *)0x0) {
    if ((param_1[1] != 0) && (*param_1 != 0)) {
      FUN_0885c538(param_1[1],*param_1,0);
      *param_1 = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_0887b5f8();
    }
  }
  return;
}

