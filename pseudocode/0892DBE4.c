/* Entry 0x0892DBE4 | file offset 0x0012ABBC | FUN_0892dbe4 | bytes 100 */

void FUN_0892dbe4(int param_1)

{
  FUN_0892acac();
  FUN_0892e1b4(param_1);
  FUN_0892e0c8(param_1);
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_088dab44();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 8));
  return;
}

