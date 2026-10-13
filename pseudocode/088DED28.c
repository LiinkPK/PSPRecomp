/* Entry 0x088DED28 | file offset 0x000DBD00 | FUN_088ded28 | bytes 64 */

void FUN_088ded28(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_088da060();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_088ded08(param_1);
  return;
}

