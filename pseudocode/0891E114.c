/* Entry 0x0891E114 | file offset 0x0011B0EC | FUN_0891e114 | bytes 80 */

void FUN_0891e114(int param_1,int param_2)

{
  *(undefined2 *)(param_1 + 0x148) = 0;
  *(undefined2 *)(param_1 + 0x188) = 0xffff;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  if (param_2 != 0) {
    FUN_08935e30(param_1 + 0x148,param_2);
  }
  FUN_0891e18c(param_1);
  return;
}

