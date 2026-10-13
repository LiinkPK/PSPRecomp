/* Entry 0x088B9168 | file offset 0x000B6140 | FUN_088b9168 | bytes 96 */

int FUN_088b9168(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  iVar3 = param_1 + 0xaac;
  iVar2 = iVar3 + *(int *)(param_1 + 0x15f8) * 4;
  iVar1 = 0;
  if (iVar3 != iVar2) {
    cVar4 = *(char *)(param_1 + 0xaae);
    while( true ) {
      if (cVar4 != '\0') {
        iVar1 = iVar1 + 1;
      }
      if (iVar3 + 4 == iVar2) break;
      cVar4 = *(char *)(iVar3 + 6);
      iVar3 = iVar3 + 4;
    }
  }
  return iVar1;
}

