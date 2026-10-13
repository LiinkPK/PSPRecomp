/* Entry 0x0887E798 | file offset 0x0007B770 | FUN_0887e798 | bytes 28 */

void FUN_0887e798(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}

