/* Entry 0x0887B7E8 | file offset 0x000787C0 | FUN_0887b7e8 | bytes 56 */

void FUN_0887b7e8(int *param_1)

{
  if ((param_1[4] & 0x2000U) == 0) {
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(*param_1 + 0xc);
  }
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 7) = 0;
  param_1[4] = param_1[4] | 2;
  return;
}

