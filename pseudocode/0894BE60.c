/* Entry 0x0894BE60 | file offset 0x00148E38 | FUN_0894be60 | bytes 48 */

void FUN_0894be60(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  if (*param_2 == 'l') {
    *(undefined4 *)(param_2 + 0x28) = param_3;
    *(undefined4 *)(param_2 + 0x2c) = param_4;
  }
  else {
    *(undefined4 *)(param_2 + 0x19c) = param_3;
    *(undefined4 *)(param_2 + 0x1a0) = param_4;
  }
  return;
}

