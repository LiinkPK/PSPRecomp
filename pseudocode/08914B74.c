/* Entry 0x08914B74 | file offset 0x00111B4C | FUN_08914b74 | bytes 84 */

void FUN_08914b74(int param_1)

{
  if (*(char *)(param_1 + 0x7e8) == '\0') {
    *(undefined1 *)(param_1 + 0x7e8) = 1;
    FUN_088a28e8(0,1);
    FUN_088965f4(DAT_089d6ae8,1);
    FUN_088a3f2c(1);
  }
  return;
}

