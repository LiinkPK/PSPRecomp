/* Entry 0x088EC9D8 | file offset 0x000E99B0 | FUN_088ec9d8 | bytes 96 */

void FUN_088ec9d8(int param_1)

{
  FUN_088ec544(param_1 + 4);
  FUN_088ec2f8(param_1 + 0x18);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_088da060();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_0887ba5c();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

