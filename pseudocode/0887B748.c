/* Entry 0x0887B748 | file offset 0x00078720 | FUN_0887b748 | bytes 48 */

void FUN_0887b748(int param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 0x14) = param_2;
  *(undefined2 *)(param_1 + 0x16) = param_3;
  if ((*(uint *)(param_1 + 0x10) & 0x2000) == 0) {
    *(short *)(param_1 + 0x16) = *(short *)(param_1 + 0x16) + -1;
  }
  return;
}

