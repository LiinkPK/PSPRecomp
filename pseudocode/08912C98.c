/* Entry 0x08912C98 | file offset 0x0010FC70 | FUN_08912c98 | bytes 100 */

int FUN_08912c98(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*param_1 + 4);
  iVar3 = 0;
  iVar1 = *param_1 + 8;
  if (0 < iVar2) {
    do {
      if (((*(char *)(iVar1 + 2) == param_2) && (*(char *)(iVar1 + 3) == param_3)) &&
         (*(char *)(iVar1 + 4) == param_4)) {
        return iVar1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x84;
    } while (iVar3 < iVar2);
  }
  return 0;
}

