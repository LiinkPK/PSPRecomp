/* Entry 0x0888964C | file offset 0x00086624 | FUN_0888964c | bytes 72 */

void FUN_0888964c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined1 param_5)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  *(int *)(param_1 + 0x54) = param_3;
  if (param_3 == -1) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  *(undefined4 *)(param_1 + 0x740) = param_4;
  FUN_08889694(param_1,param_5);
  return;
}

