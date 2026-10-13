/* Entry 0x08914BC8 | file offset 0x00111BA0 | FUN_08914bc8 | bytes 80 */

void FUN_08914bc8(int param_1)

{
  if (*(char *)(param_1 + 0x7e8) != '\0') {
    *(undefined1 *)(param_1 + 0x7e8) = 0;
    FUN_088a28e8(0,0);
    FUN_088965f4(DAT_089d6ae8,0);
    FUN_088a3f2c(0);
  }
  return;
}

