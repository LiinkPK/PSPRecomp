/* Entry 0x08833534 | file offset 0x0003050C | FUN_08833534 | bytes 100 */

void FUN_08833534(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    cVar1 = *(char *)(*(int *)(param_1 + 0x2f8) + 10 + iVar2);
    if (cVar1 != -1) {
      FUN_088372d0(param_1,cVar1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x12);
  return;
}

