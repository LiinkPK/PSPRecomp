/* Entry 0x08927B70 | file offset 0x00124B48 | FUN_08927b70 | bytes 96 */

int FUN_08927b70(undefined4 param_1,short param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  
  iVar1 = 0;
  iVar2 = *(int *)(*(int *)(DAT_089d6c30 + 4) + 8);
  if (0 < iVar2) {
    psVar3 = *(short **)(DAT_089d6c30 + 8);
    do {
      if (*psVar3 == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      psVar3 = psVar3 + 0x16;
    } while (iVar1 < iVar2);
  }
  return 0;
}

