/* Entry 0x088DE050 | file offset 0x000DB028 | FUN_088de050 | bytes 72 */

void FUN_088de050(int *param_1)

{
  if (*param_1 != 0) {
    FUN_0899bb1c();
    *(undefined2 *)((int)param_1 + 6) = 0xffff;
    *(undefined2 *)(param_1 + 2) = 0xffff;
    *param_1 = 0;
  }
  return;
}

