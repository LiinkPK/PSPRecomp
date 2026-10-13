/* Entry 0x08841144 | file offset 0x0003E11C | FUN_08841144 | bytes 212 */

void FUN_08841144(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_089d4958;
  if (*(char *)(DAT_089d4958 + 0x50) != '\0') {
    FUN_0886d0bc();
    iVar2 = 0;
    while( true ) {
      if (iVar2 == 0) {
        iVar2 = *(int *)(iVar1 + 0x3c);
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x4a4);
      }
      if (iVar2 == 0) break;
      (**(code **)(*(int *)(iVar2 + 0x544) + 0x54))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0x544) + 0x50));
    }
    iVar2 = 0;
    while( true ) {
      if (iVar2 == 0) {
        iVar2 = *(int *)(iVar1 + 0x3c);
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x4a4);
      }
      if (iVar2 == 0) break;
      (**(code **)(*(int *)(iVar2 + 0x544) + 0x5c))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0x544) + 0x58));
    }
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
  }
  return;
}

