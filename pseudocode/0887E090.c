/* Entry 0x0887E090 | file offset 0x0007B068 | FUN_0887e090 | bytes 60 */

void FUN_0887e090(int param_1,undefined4 param_2,int param_3,undefined1 param_4,undefined2 param_5)

{
  if (param_3 < 2) {
    param_1 = param_1 + param_3 * 8;
    *(undefined4 *)(param_1 + 0x30) = param_2;
    *(undefined1 *)(param_1 + 0x35) = param_4;
    *(undefined2 *)(param_1 + 0x36) = param_5;
  }
  return;
}

