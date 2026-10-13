/* Entry 0x088E9AB4 | file offset 0x000E6A8C | FUN_088e9ab4 | bytes 144 */

void FUN_088e9ab4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_089d7e88;
  if (*(int *)(DAT_089d7e88 + 0x98) != 0) {
    iVar3 = DAT_089d7e88 + 0x90;
    iVar2 = FUN_088e0f14(iVar3);
    if (iVar2 == 0) {
      FUN_088e9474(iVar1);
      FUN_088e9500(iVar1);
      FUN_088e01c4(iVar3,0);
      if (*(char *)(iVar1 + 0x1710) != '\0') {
        FUN_088e91e8(iVar1);
      }
    }
  }
  return;
}

