/* Entry 0x08884A38 | file offset 0x00081A10 | FUN_08884a38 | bytes 200 */

void FUN_08884a38(int *param_1,uint param_2)

{
  if (param_1 != (int *)0x0) {
    if (param_1[3] != 0) {
      FUN_0887ba5c();
      param_1[3] = 0;
    }
    if (param_1[4] != 0) {
      FUN_0887ba5c();
      param_1[4] = 0;
    }
    if (param_1[2] != 0) {
      FUN_0887a644(param_1[2],3);
      param_1[2] = 0;
    }
    if (param_1[1] != 0) {
      FUN_088da060();
      param_1[1] = 0;
    }
    if (*param_1 != 0) {
      FUN_088dab44();
      *param_1 = 0;
    }
    FUN_08885b14(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_08885b5c(param_1);
    }
  }
  return;
}

