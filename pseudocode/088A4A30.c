/* Entry 0x088A4A30 | file offset 0x000A1A08 | FUN_088a4a30 | bytes 60 */

void FUN_088a4a30(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 2) {
    FUN_088a483c(param_1,0);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x24);
  }
  return;
}

