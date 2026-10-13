/* Entry 0x088C92CC | file offset 0x000C62A4 | FUN_088c92cc | bytes 224 */

int FUN_088c92cc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xbda8)) {
    do {
      iVar1 = FUN_088c90c0(param_1,iVar3);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0xbda8);
      }
      else if (*(char *)(iVar1 + 0x20) == '\x02') {
        if (iVar2 == param_2) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
        iVar1 = *(int *)(param_1 + 0xbda8);
      }
      else {
        iVar1 = *(int *)(param_1 + 0xbda8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}

