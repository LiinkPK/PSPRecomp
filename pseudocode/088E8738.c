/* Entry 0x088E8738 | file offset 0x000E5710 | FUN_088e8738 | bytes 84 */

void FUN_088e8738(int param_1)

{
  FUN_08896ab0(DAT_089d6af0);
  FUN_088699f4(param_1);
  if (*(int *)(param_1 + 4) != 0) {
    FUN_088a0d1c();
    FUN_088a0cd4(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

