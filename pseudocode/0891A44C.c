/* Entry 0x0891A44C | file offset 0x00117424 | FUN_0891a44c | bytes 364 */

int FUN_0891a44c(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int local_10 [4];
  
  piVar3 = local_10;
  iVar4 = *(int *)(param_1 + 4);
  iVar1 = -1;
  if (iVar4 < 1) {
    if (-1 < iVar4) {
      iVar5 = param_1 + 8;
      iVar6 = 0;
      pcVar2 = (char *)(param_1 + 0x70);
      iVar4 = iVar1;
      do {
        iVar1 = 0;
        iVar8 = 0;
        iVar7 = 0;
        pcVar9 = pcVar2;
        if (0 < *(int *)(pcVar2 + 100)) {
          do {
            if ('\0' < *pcVar9) {
              iVar8 = iVar8 + 1;
            }
            iVar1 = iVar1 + 1;
            pcVar9 = pcVar9 + 0x14;
          } while (iVar1 < *(int *)(pcVar2 + 100));
        }
        iVar11 = 0;
        iVar1 = iVar4;
        iVar10 = iVar5;
        if (0 < *(int *)(iVar5 + 100)) {
          do {
            iVar7 = iVar7 + *(char *)(iVar10 + 2);
            iVar1 = iVar6;
            if (iVar8 <= iVar7) break;
            iVar11 = iVar11 + 1;
            iVar10 = iVar10 + 0x14;
            iVar1 = iVar4;
          } while (iVar11 < *(int *)(iVar5 + 100));
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x68;
        pcVar2 = pcVar2 + -0x68;
        iVar4 = iVar1;
      } while (iVar6 < 2);
    }
  }
  else if (iVar4 < 2) {
    param_1 = param_1 + 8;
    iVar4 = 0;
    do {
      *piVar3 = 0;
      iVar6 = 0;
      iVar5 = param_1;
      if (0 < *(int *)(param_1 + 100)) {
        do {
          iVar6 = iVar6 + 1;
          *piVar3 = *piVar3 + (int)*(char *)(iVar5 + 2);
          iVar5 = iVar5 + 0x14;
        } while (iVar6 < *(int *)(param_1 + 100));
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 0x68;
      piVar3 = piVar3 + 1;
    } while (iVar4 < 2);
    if (local_10[1] < local_10[0]) {
      iVar1 = 0;
    }
    else if (local_10[0] < local_10[1]) {
      iVar1 = 1;
    }
  }
  return iVar1;
}

