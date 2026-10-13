/* Entry 0x088E3970 | file offset 0x000E0948 | FUN_088e3970 | bytes 100 */

int FUN_088e3970(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1 + 0x160;
  while (((*(int *)(iVar1 + 4) == 0 || (*(short *)(param_1 + 0x160) != param_2)) ||
         (*(short *)(param_1 + 0x162) != param_3))) {
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 8;
    iVar1 = iVar1 + 8;
    if (0x3f < iVar2) {
      return 0;
    }
  }
  return iVar1;
}

