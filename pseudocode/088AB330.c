/* Entry 0x088AB330 | file offset 0x000A8308 | FUN_088ab330 | bytes 72 */

void FUN_088ab330(int param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  else {
    FUN_088a51e4(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

