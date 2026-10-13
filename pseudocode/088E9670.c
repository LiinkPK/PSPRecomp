/* Entry 0x088E9670 | file offset 0x000E6648 | FUN_088e9670 | bytes 148 */

void FUN_088e9670(int param_1)

{
  FUN_088d7574(param_1 + 0x1874);
  FUN_088ce7f4(param_1 + 0x1af0);
  if (*(int *)(param_1 + 0x1860) != 3) {
    FUN_088e9704(param_1,1);
    FUN_088a28e8(0,0);
    FUN_088965f4(DAT_089d6ae8,0);
    FUN_088a3f2c(0);
    FUN_088e6940(param_1 + 0x1340);
    if (*(char *)(param_1 + 0x13f0) != '\0') {
      FUN_088ea504(param_1 + 0x13ec);
    }
  }
  return;
}

