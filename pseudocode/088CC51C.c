/* Entry 0x088CC51C | file offset 0x000C94F4 | FUN_088cc51c | bytes 92 */

void FUN_088cc51c(int *param_1)

{
  if (*param_1 != 0) {
    FUN_088da060();
    *param_1 = 0;
  }
  if (param_1[2] != 0) {
    FUN_0887ba5c();
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = -1;
  return;
}

