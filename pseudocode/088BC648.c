/* Entry 0x088BC648 | file offset 0x000B9620 | FUN_088bc648 | bytes 148 */

void FUN_088bc648(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  psVar3 = (short *)(param_1 + 4);
  cVar1 = *(char *)(param_2 + 0x763);
  iVar4 = 0;
  while ((*psVar3 == -1 || (iVar2 = FUN_088b78bc(param_2 + cVar1 * 0xc6,(int)*psVar3), iVar2 != 0)))
  {
    iVar4 = iVar4 + 1;
    psVar3 = psVar3 + 1;
    if (9 < iVar4) {
      return;
    }
  }
  return;
}

