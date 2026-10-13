/* Entry 0x0888E6A8 | file offset 0x0008B680 | FUN_0888e6a8 | bytes 80 */

int FUN_0888e6a8(int param_1)

{
  FUN_08864ff0(param_1 + 0x100,1,70000,0x46);
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined **)(param_1 + 0x13c) = &DAT_089ca5b0;
  *(int *)(param_1 + 0x140) = param_1;
  return param_1;
}

