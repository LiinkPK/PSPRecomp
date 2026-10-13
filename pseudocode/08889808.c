/* Entry 0x08889808 | file offset 0x000867E0 | FUN_08889808 | bytes 164 */

void FUN_08889808(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_089d6a00;
  if (*(char *)(DAT_089d6a00 + 0x19) != '\0') {
    *(undefined1 *)(DAT_089d6a00 + 0x19) = 0;
    FUN_088876b0(iVar1);
  }
  if ((*(char *)(iVar1 + 0x18) == '\x01') || (*(int *)(param_1 + 0x4c) == 9)) {
    FUN_088650a4(param_1 + 4);
  }
  else {
    iVar1 = FUN_0891ba84(DAT_089d8508,*(undefined1 *)(param_1 + 0x68),
                         *(undefined4 *)(param_1 + 0x54));
    if (iVar1 == 1) {
      FUN_088650a4(param_1 + 4);
    }
  }
  return;
}

