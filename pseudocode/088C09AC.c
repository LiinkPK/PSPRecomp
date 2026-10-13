/* Entry 0x088C09AC | file offset 0x000BD984 | FUN_088c09ac | bytes 80 */

int FUN_088c09ac(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  piVar1 = (int *)(iVar2 + 4);
  iVar3 = 0;
  if (0 < *piVar1) {
    do {
      if (*(byte *)(iVar2 + 10) == param_2) {
        return iVar2 + 8;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x1c;
    } while (iVar3 < *piVar1);
  }
  return 0;
}

