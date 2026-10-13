/* Entry 0x08887B4C | file offset 0x00084B24 | FUN_08887b4c | bytes 96 */

void FUN_08887b4c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_088a0dfc(DAT_089d6c80,*(undefined4 *)(param_1 + 0x20));
    uVar1 = FUN_088908e0();
    FUN_0885c538(uVar1,*(undefined4 *)(param_1 + 0x1c),0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

