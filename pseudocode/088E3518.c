/* Entry 0x088E3518 | file offset 0x000E04F0 | FUN_088e3518 | bytes 76 */

void FUN_088e3518(int param_1)

{
  if (*(int *)(param_1 + 0x670) != 0) {
    FUN_0887e684(DAT_089d6998);
    FUN_088665c4(*(undefined4 *)(param_1 + 0x670));
    *(undefined4 *)(param_1 + 0x670) = 0;
  }
  return;
}

