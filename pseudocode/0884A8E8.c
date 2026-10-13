/* Entry 0x0884A8E8 | file offset 0x000478C0 | FUN_0884a8e8 | bytes 92 */

int FUN_0884a8e8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 4);
    do {
      if ((*(short *)(iVar1 + 4) == param_2) && (*(short *)(iVar1 + 6) == param_3)) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return 0;
}

