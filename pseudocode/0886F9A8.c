/* Entry 0x0886F9A8 | file offset 0x0006C980 | FUN_0886f9a8 | bytes 60 */

int FUN_0886f9a8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < param_3) {
    do {
      iVar1 = (int)*(char *)(iVar2 + param_2) + (param_3 - iVar2) + iVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return iVar1;
}

