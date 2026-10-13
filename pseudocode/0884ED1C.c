/* Entry 0x0884ED1C | file offset 0x0004BCF4 | FUN_0884ed1c | bytes 120 */

void FUN_0884ed1c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  FUN_08850fac(*(undefined4 *)(param_1 + 8),param_2,
               (int)*(char *)(*(int *)(param_1 + 4) + 0x30 + param_3));
  FUN_0884fe10(param_1,param_2,param_4);
  *(undefined1 *)(param_1 + 0x1d) = 1;
  return;
}

