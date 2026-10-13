/* Entry 0x0892D1D8 | file offset 0x0012A1B0 | FUN_0892d1d8 | bytes 100 */

void FUN_0892d1d8(int param_1)

{
  FUN_0892acac();
  FUN_0892d838(param_1);
  FUN_0892d540(param_1);
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_088dab44();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(param_1 + *(short *)(*(int *)(param_1 + 0x24) + 8));
  return;
}

