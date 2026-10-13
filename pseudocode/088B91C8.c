/* Entry 0x088B91C8 | file offset 0x000B61A0 | FUN_088b91c8 | bytes 100 */

int FUN_088b91c8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 + 0x1484;
  iVar3 = iVar4 + *(int *)(param_1 + 0x15fc) * 4;
  iVar2 = 0;
  if (iVar4 != iVar3) {
    bVar1 = *(byte *)(param_1 + 0x1487);
    while( true ) {
      if ((bVar1 & 2) != 0) {
        iVar2 = iVar2 + 1;
      }
      if (iVar4 + 4 == iVar3) break;
      bVar1 = *(byte *)(iVar4 + 7);
      iVar4 = iVar4 + 4;
    }
  }
  return iVar2;
}

