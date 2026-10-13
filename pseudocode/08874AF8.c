/* Entry 0x08874AF8 | file offset 0x00071AD0 | FUN_08874af8 | bytes 72 */

void FUN_08874af8(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = DAT_09b48358;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x20);
    }
    iVar2 = iVar1;
    if (iVar2 == 0) break;
    FUN_088745a4();
  }
  return;
}

