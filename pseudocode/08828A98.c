/* Entry 0x08828A98 | file offset 0x00025A70 | FUN_08828a98 | bytes 48 */

void FUN_08828a98(int *param_1,int param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2 + 0x10;
  param_1[2] = param_2 + 0x10 + *(int *)(param_2 + 8) * 0xcc;
  return;
}

