/* Entry 0x088CD4C8 | file offset 0x000CA4A0 | FUN_088cd4c8 | bytes 112 */

void FUN_088cd4c8(int param_1)

{
  FUN_088cd538();
  if (*(char *)(param_1 + 0x20) == '\0') {
    FUN_088cdc60(param_1);
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_088da060();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_088dab44();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_088cd49c(param_1);
  return;
}

