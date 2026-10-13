/* Entry 0x0891ED04 | file offset 0x0011BCDC | FUN_0891ed04 | bytes 924 */

void FUN_0891ed04(char *param_1,int param_2,char param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  short *psVar14;
  uint uVar15;
  char *pcVar16;
  undefined2 *puVar17;
  short *psVar18;
  
  cVar7 = param_1[10];
  *(undefined1 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined1 *)(param_2 + 8) = 0xff;
  pcVar16 = param_1 + cVar7 * 2;
  *(undefined1 *)(param_2 + 9) = 0xff;
  iVar3 = 0;
  iVar6 = param_2;
  do {
    *(undefined1 *)(iVar3 + param_2 + 0x13) = 0;
    iVar8 = 0;
    iVar10 = iVar6;
    do {
      iVar8 = iVar8 + 1;
      *(undefined1 *)(iVar10 + 10) = 0xff;
      iVar10 = iVar6 + iVar8;
    } while (iVar8 < 3);
    iVar3 = iVar3 + 1;
    iVar6 = iVar6 + 3;
  } while (iVar3 < 3);
  if (param_3 == '\x01') {
    pcVar16[1] = '\x01';
    iVar6 = FUN_0891eba0(param_1,(int)*pcVar16);
    if (iVar6 == 1) {
      *(char *)(param_2 + 9) = *pcVar16;
    }
  }
  else {
    iVar6 = FUN_0891eba0(param_1,(int)*pcVar16);
    if (iVar6 == 1) {
      *(char *)(param_2 + 8) = *pcVar16;
    }
    cVar7 = param_1[0xe];
    iVar6 = 0;
    if ('\0' < cVar7) {
      do {
        *(char *)(iVar6 + param_2 + 3) = param_1[iVar6 + 0xb];
        cVar1 = param_1[0x12];
        cVar7 = param_1[0xe];
        if (2 < cVar1) break;
        param_1[cVar1 + 0xf] = param_1[iVar6 + 0xb];
        param_1[0x12] = cVar1 + '\x01';
        iVar6 = iVar6 + 1;
      } while (iVar6 < cVar7);
    }
    *(char *)(param_2 + 7) = cVar7;
    param_1[0xe] = '\0';
  }
  iVar6 = 0;
  iVar3 = *(int *)(DAT_089d7718 + 8);
  if (0 < iVar3) {
    iVar10 = 0;
    do {
      puVar17 = (undefined2 *)(DAT_089d771c + iVar10);
      psVar18 = puVar17 + 6;
      if (((-1 < *psVar18) &&
          (iVar4 = param_2 + *(char *)(param_2 + 7) + 3,
          iVar8 = FUN_0891ec10(param_2 + 3,iVar4,puVar17), iVar8 == iVar4)) &&
         (cVar7 = param_1[0xe],
         pcVar16 = (char *)FUN_0891ec10(param_1 + 0xb,param_1 + cVar7 + 0xb,puVar17),
         pcVar16 == param_1 + cVar7 + 0xb)) {
        uVar15 = 0;
        uVar11 = 0;
        iVar8 = 0;
        bVar2 = false;
        uVar13 = 0;
        psVar14 = psVar18;
        do {
          if (-1 < *psVar14) {
            iVar9 = (int)param_1[10];
            uVar12 = 1 << (uVar13 & 0x1f);
            uVar15 = uVar15 | uVar12;
            iVar4 = 0;
            pcVar16 = param_1;
            if (-1 < iVar9) {
              do {
                if ((int)*pcVar16 == (int)*psVar14) {
                  uVar11 = uVar11 | uVar12;
                  if (pcVar16[1] == '\x01') {
                    iVar8 = iVar8 + 1;
                  }
                  if (iVar4 == iVar9) {
                    bVar2 = true;
                  }
                }
                iVar4 = iVar4 + 1;
                pcVar16 = pcVar16 + 2;
              } while (iVar4 <= iVar9);
            }
          }
          uVar13 = uVar13 + 1;
          psVar14 = psVar14 + 1;
        } while ((int)uVar13 < 3);
        if (((uVar11 == uVar15) && (0 < iVar8)) && (bVar2)) {
          cVar7 = param_1[0xe];
          if (2 < cVar7) break;
          param_1[cVar7 + 0xb] = (char)*puVar17;
          param_1[0xe] = cVar7 + '\x01';
          iVar8 = 0;
          iVar4 = 0;
          cVar7 = *(char *)(param_2 + 6);
          do {
            if (-1 < *psVar18) {
              *(char *)(param_2 + cVar7 * 3 + iVar8 + 10) = (char)*psVar18;
              iVar8 = iVar8 + 1;
            }
            iVar4 = iVar4 + 1;
            psVar18 = psVar18 + 1;
          } while (iVar4 < 3);
          puVar5 = (undefined1 *)(param_2 + cVar7);
          puVar5[0x13] = (char)iVar8;
          *puVar5 = (char)*puVar17;
          *(char *)(param_2 + 6) = cVar7 + '\x01';
        }
      }
      iVar6 = iVar6 + 1;
      iVar10 = iVar10 + 0x12;
    } while (iVar6 < iVar3);
  }
  if ((param_4 == 1) || (param_3 == '\0')) {
    param_1[10] = param_1[10] + '\x01';
  }
  return;
}

