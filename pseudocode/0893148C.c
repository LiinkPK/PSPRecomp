/* Entry 0x0893148C | file offset 0x0012E464 | FUN_0893148c | bytes 224 */

void FUN_0893148c(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  if (0 < *(int *)(param_1 + 0x260)) {
    if (*(int *)(param_1 + 0x28) == 3) {
      FUN_08931908(param_1);
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
    *(undefined4 *)(param_1 + 0x264) = param_2;
    *(undefined1 *)(param_1 + 0x298) = param_4;
    *(undefined1 *)(param_1 + 0x299) = param_5;
    FUN_088d46e4(param_1 + 0x268,param_3,0,*(int *)(param_1 + 0x260) + -1,0,0xffffffff);
    FUN_089306e4(param_1 + *(int *)(param_1 + 0x26c) * 0x5c + 0x38);
    *(undefined4 *)(param_1 + 0x294) = 0;
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  return;
}

