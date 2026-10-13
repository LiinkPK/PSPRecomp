/* Entry 0x08846F40 | file offset 0x00043F18 | FUN_08846f40 | bytes 296 */

int FUN_08846f40(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = 0;
  iVar4 = *(int *)(*param_1 + 4);
  iVar3 = *param_1 + 8;
  if (0 < iVar4) {
    do {
      if (((*(char *)(iVar3 + 6) != 0) && (*(char *)(iVar3 + 6) == param_2)) &&
         (pcVar6 = (char *)(iVar3 + 0x24), *(char *)(iVar3 + 7) == param_3)) {
        bVar1 = false;
        if ((*pcVar6 == 'P') && (bVar1 = false, *(char *)(iVar3 + 0x25) == '_')) {
          bVar1 = true;
        }
        if (bVar1) {
          iVar2 = FUN_089359e8(pcVar6);
          bVar1 = false;
          if ((pcVar6[iVar2 + -2] == '_') && (bVar1 = false, pcVar6[iVar2 + -1] == 'A')) {
            bVar1 = true;
          }
          if (bVar1) {
            return iVar3;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x44;
    } while (iVar5 < iVar4);
  }
  return 0;
}

