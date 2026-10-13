/* Entry 0x0880C2D8 | file offset 0x000092B0 | FUN_0880c2d8 | bytes 68 */

int FUN_0880c2d8(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    psVar2 = *(short **)(param_1 + 0x24);
    do {
      if (*psVar2 == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 0x20;
    } while (iVar1 < *(int *)(param_1 + 0x20));
  }
  return -1;
}

