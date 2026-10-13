/* Entry 0x0891F740 | file offset 0x0011C718 | FUN_0891f740 | bytes 92 */

void FUN_0891f740(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0885c538(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8),0);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0885c538(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0xc),0);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

