/* Entry 0x08846CCC | file offset 0x00043CA4 | FUN_08846ccc | bytes 332 */

int FUN_08846ccc(int *param_1,int param_2,int param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = *(int *)(*param_1 + 4);
  iVar4 = *param_1 + 8;
  if (0 < iVar6) {
    do {
      if ((((*(char *)(iVar4 + 6) != 0) && (*(char *)(iVar4 + 6) == param_2)) &&
          (*(char *)(iVar4 + 7) == param_3)) && (((*(byte *)(iVar4 + 8) & 8) != 0) == (bool)param_4)
         ) {
        pcVar3 = (char *)(iVar4 + 0x24);
        bVar1 = false;
        if ((*pcVar3 == 'P') && (bVar1 = false, *(char *)(iVar4 + 0x25) == '_')) {
          bVar1 = true;
        }
        if (bVar1) {
          iVar2 = FUN_089359e8(pcVar3);
          bVar1 = false;
          if ((pcVar3[iVar2 + -2] == '_') && (bVar1 = false, pcVar3[iVar2 + -1] == 'W')) {
            bVar1 = true;
          }
          if (!bVar1) {
            return iVar4;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x44;
    } while (iVar5 < iVar6);
  }
  return 0;
}

