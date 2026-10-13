/* Entry 0x08925D34 | file offset 0x00122D0C | FUN_08925d34 | bytes 76 */

int FUN_08925d34(int param_1,short param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = 0;
  psVar1 = (short *)(iVar2 + 0x10);
  if (0 < *psVar1) {
    do {
      if (*(short *)(iVar2 + 0x14) == param_2) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x4e;
    } while (iVar3 < *psVar1);
  }
  return -1;
}

