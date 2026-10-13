/* Entry 0x088C0274 | file offset 0x000BD24C | FUN_088c0274 | bytes 476 */

void FUN_088c0274(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  bool bVar6;
  short *psVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  
  FUN_088c01c0(param_2);
  iVar8 = 0;
  iVar12 = (int)param_2[5];
  psVar9 = param_1;
  if (0 < *(int *)(param_1 + 700)) {
    do {
      sVar1 = param_2[4];
      sVar2 = param_2[0x86];
      sVar3 = param_2[0x87];
      sVar4 = param_2[0x88];
      iVar10 = 0;
      sVar5 = param_2[0x89];
      psVar11 = param_2;
      psVar7 = psVar9;
      do {
        *psVar11 = *psVar11 + *psVar7;
        iVar10 = iVar10 + 1;
        psVar11[1] = psVar11[1] + psVar7[1];
        psVar11 = psVar11 + 2;
        psVar7 = psVar7 + 2;
      } while (iVar10 < 2);
      param_2[4] = sVar1 + psVar9[4] * psVar9[5];
      param_2[5] = (short)iVar12 + psVar9[5];
      param_2[0x86] = sVar2 + psVar9[0x86];
      param_2[0x87] = sVar3 + psVar9[0x87];
      param_2[0x88] = sVar4 + psVar9[0x88];
      iVar12 = 0;
      param_2[0x89] = sVar5 + psVar9[0x89];
      psVar11 = psVar9 + 6;
      if (0 < *(int *)(psVar9 + 0x8a)) {
        do {
          iVar10 = *(int *)(param_2 + 0x8a);
          iVar13 = 0;
          bVar6 = false;
          if (0 < iVar10) {
            psVar7 = param_2;
            do {
              if (psVar7[6] == *psVar11) {
                bVar6 = true;
                psVar7[7] = psVar7[7] + psVar11[1];
                break;
              }
              iVar13 = iVar13 + 1;
              psVar7 = psVar7 + 2;
            } while (iVar13 < iVar10);
          }
          if ((!bVar6) && (iVar10 < 0x40)) {
            sVar1 = psVar11[1];
            param_2[iVar10 * 2 + 6] = *psVar11;
            param_2[iVar10 * 2 + 7] = sVar1;
            *(int *)(param_2 + 0x8a) = *(int *)(param_2 + 0x8a) + 1;
          }
          iVar12 = iVar12 + 1;
          psVar11 = psVar11 + 2;
        } while (iVar12 < *(int *)(psVar9 + 0x8a));
      }
      iVar8 = iVar8 + 1;
      iVar12 = (int)param_2[5];
      psVar9 = psVar9 + 0x8c;
    } while (iVar8 < *(int *)(param_1 + 700));
  }
  if (iVar12 != 0) {
    param_2[4] = (short)((int)param_2[4] / iVar12);
  }
  return;
}

