/* Entry 0x0889F5E8 | file offset 0x0009C5C0 | FUN_0889f5e8 | bytes 84 */

int FUN_0889f5e8(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 8);
  iVar1 = 0;
  if (0 < iVar3) {
    psVar2 = *(short **)(param_1 + 8);
    do {
      if (*psVar2 == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 0x16;
    } while (iVar1 < iVar3);
  }
  return -1;
}

