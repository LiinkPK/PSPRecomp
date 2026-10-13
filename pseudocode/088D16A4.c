/* Entry 0x088D16A4 | file offset 0x000CE67C | FUN_088d16a4 | bytes 80 */

void FUN_088d16a4(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != -1) {
    FUN_088a0dfc(DAT_089d6c80,*(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  return;
}

