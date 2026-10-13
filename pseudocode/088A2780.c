/* Entry 0x088A2780 | file offset 0x0009F758 | FUN_088a2780 | bytes 80 */

void FUN_088a2780(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = DAT_09b4cf98;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x58);
    }
    iVar2 = iVar1;
    if (iVar2 == 0) break;
    FUN_088a1e44(0);
  }
  return;
}

