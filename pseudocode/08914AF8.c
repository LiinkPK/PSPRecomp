/* Entry 0x08914AF8 | file offset 0x00111AD0 | FUN_08914af8 | bytes 108 */

void FUN_08914af8(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x7e5) != '\0') {
    iVar1 = FUN_088ac9a8(DAT_089d712c);
    if (iVar1 == 0) {
      return;
    }
    if (*(float *)(param_1 + 0x6c) < 60.0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x7e5) = 0;
  }
  FUN_089136c0(param_1);
  return;
}

