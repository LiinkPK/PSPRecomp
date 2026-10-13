/* Entry 0x0880AFD4 | file offset 0x00007FAC | FUN_0880afd4 | bytes 84 */

void FUN_0880afd4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    iVar2 = DAT_089d4770;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x78);
    }
    if (iVar2 == 0) break;
    FUN_0880a9e8(iVar2);
    iVar1 = iVar2;
  }
  return;
}

