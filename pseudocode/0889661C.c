/* Entry 0x0889661C | file offset 0x000935F4 | FUN_0889661c | bytes 160 */

void FUN_0889661c(int param_1)

{
  FUN_08895fe4();
  FUN_088a2664(0,0x18703);
  FUN_088a2664(0,0x18704);
  FUN_088963b8(param_1);
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_088a2664(0);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_088a2664(0);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_0889f830(param_1 + 0x14,0);
  }
  return;
}

