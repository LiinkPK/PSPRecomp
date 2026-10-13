/* Entry 0x08896CBC | file offset 0x00093C94 | FUN_08896cbc | bytes 936 */

int FUN_08896cbc(int *param_1,float *param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  char local_120 [256];
  
  if ((char)param_1[5] == '\0') {
    iVar9 = -1;
  }
  else {
    iVar9 = -1;
    FUN_0889d96c(param_2);
    FUN_0889d980();
    if (param_1[6] == 2) {
      pfVar10 = (float *)param_1[4];
      fVar12 = *param_2;
      fVar11 = param_2[2];
      if (*pfVar10 <= fVar12) {
        bVar2 = false;
        if (((pfVar10[1] <= fVar11) && (bVar2 = false, fVar12 <= pfVar10[2])) &&
           (bVar2 = false, fVar11 <= pfVar10[3])) {
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        iVar3 = 0;
        iVar7 = (int)((fVar12 - *pfVar10) / pfVar10[4]) * (int)pfVar10[7] +
                (int)((fVar11 - pfVar10[1]) / pfVar10[5]);
        iVar6 = iVar7 * 2;
        if (*(short *)((int)pfVar10[9] + iVar6) != 0) {
          iVar6 = (uint)*(ushort *)((int)pfVar10[10] + iVar6) * 2;
          do {
            sVar1 = *(short *)((int)pfVar10[0xb] + iVar6);
            iVar4 = sVar1 * 0x10;
            if ((*(short *)(param_1[1] + (uint)*(byte *)(param_1[2] + iVar4 + 0xc) * 0x24 + 0x20) !=
                 0) && (iVar4 = FUN_0889dad8(param_1[2] + iVar4,param_1[3]), iVar4 != 0)) {
              iVar9 = (int)sVar1;
            }
            iVar3 = iVar3 + 1;
            iVar6 = iVar6 + 2;
          } while (iVar3 < (int)(uint)*(ushort *)((int)pfVar10[9] + iVar7 * 2));
        }
      }
    }
    else if (param_1[6] == 1) {
      pfVar10 = (float *)param_1[4];
      FUN_08935524(local_120,&DAT_089d6af8,0x100);
      piVar5 = (int *)*param_1;
      iVar6 = 0;
      if (0 < *piVar5) {
        iVar7 = param_1[1];
        do {
          cVar8 = '\0';
          if (*(short *)(iVar7 + 0x20) != 0) {
            if (*pfVar10 <= *param_2) {
              if (pfVar10[1] <= param_2[2]) {
                if (*param_2 <= pfVar10[2]) {
                  cVar8 = '\0';
                  if (param_2[2] <= pfVar10[3]) {
                    cVar8 = '\x01';
                  }
                }
                else {
                  cVar8 = '\0';
                }
              }
              else {
                cVar8 = '\0';
              }
            }
            else {
              cVar8 = '\0';
            }
          }
          local_120[iVar6] = cVar8;
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 0x24;
          pfVar10 = pfVar10 + 4;
        } while (iVar6 < *piVar5);
      }
      iVar6 = 0;
      iVar7 = 0;
      if (0 < piVar5[1]) {
        do {
          if ((local_120[*(byte *)(param_1[2] + iVar7 + 0xc)] != '\0') &&
             (iVar3 = FUN_0889dad8(param_1[2] + iVar7,param_1[3]), iVar3 != 0)) {
            iVar9 = iVar6;
          }
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 0x10;
        } while (iVar6 < *(int *)(*param_1 + 4));
      }
    }
    else {
      iVar6 = 0;
      iVar7 = 0;
      if (0 < *(int *)(*param_1 + 4)) {
        do {
          if ((*(short *)(param_1[1] + (uint)*(byte *)(param_1[2] + iVar7 + 0xc) * 0x24 + 0x20) != 0
              ) && (iVar3 = FUN_0889dad8(param_1[2] + iVar7,param_1[3]), iVar3 != 0)) {
            iVar9 = iVar6;
          }
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 0x10;
        } while (iVar6 < *(int *)(*param_1 + 4));
      }
    }
  }
  return iVar9;
}

