/* Entry 0x08902734 | file offset 0x000FF70C | FUN_08902734 | bytes 608 */

void FUN_08902734(undefined4 *param_1)

{
  char cVar1;
  short sVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  short *psVar13;
  undefined1 auStack_7b0 [16];
  undefined1 auStack_7a0 [1891];
  char local_3d;
  int local_38;
  int local_34;
  undefined4 *local_30;
  
  iVar6 = 0;
  puVar8 = param_1;
  do {
    iVar7 = 0;
    puVar12 = puVar8;
    do {
      *puVar12 = 0xffffffff;
      iVar7 = iVar7 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar7 < 0x23);
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 0x23;
  } while (iVar6 < 3);
  param_1[0x69] = 0;
  param_1[0xa42] = 0;
  iVar6 = 0;
  local_34 = *(int *)(DAT_089d72e0 + 8);
  local_30 = param_1;
  do {
    iVar7 = 0;
    puVar8 = param_1 + 0x6a;
    do {
      FUN_08902a10(puVar8);
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 0x18;
    } while (iVar7 < 0x23);
    iVar6 = iVar6 + 1;
    param_1 = param_1 + 0x348;
  } while (iVar6 < 3);
  local_38 = 0;
  if (0 < local_34) {
    do {
      psVar3 = (short *)FUN_088b3584(local_38);
      puVar8 = local_30;
      iVar6 = (int)(char)psVar3[1];
      if (-1 < iVar6) {
        cVar1 = *(char *)((int)psVar3 + 1);
        iVar7 = 0;
        if (0 < cVar1) {
          do {
            psVar13 = psVar3 + 4;
            FUN_088cb9e8(auStack_7b0);
            iVar5 = (int)local_3d;
            sVar2 = *psVar13;
            FUN_088bbab4(auStack_7b0,(int)psVar3[5],0xffffffff,0xffffffff);
            iVar11 = 0;
            puVar8[iVar6 * 0x348 + sVar2 * 0x18 + 0x6a] = (int)*psVar13;
            puVar12 = puVar8 + iVar6 * 0x348 + sVar2 * 0x18 + 0x6b;
            do {
              iVar9 = 0;
              do {
                uVar4 = FUN_088b7a88(auStack_7a0 + iVar5 * 0xc6,iVar11,iVar9);
                FUN_088b7d94(puVar12,iVar9,uVar4);
                iVar9 = iVar9 + 1;
              } while (iVar9 < 0xc);
              iVar9 = 0;
              do {
                iVar10 = 0;
                do {
                  uVar4 = FUN_088b7ab8(auStack_7a0 + iVar5 * 0xc6,iVar11,iVar9,iVar10);
                  FUN_088b7da4(puVar12,iVar9,iVar10,uVar4);
                  iVar10 = iVar10 + 1;
                } while (iVar10 < 3);
                iVar9 = iVar9 + 1;
              } while (iVar9 < 6);
              iVar11 = iVar11 + 1;
              puVar12 = (undefined4 *)((int)puVar12 + 0x1e);
            } while (iVar11 < 3);
            iVar7 = iVar7 + 1;
            psVar3 = psVar13;
          } while (iVar7 < cVar1);
        }
      }
      local_38 = local_38 + 1;
    } while (local_38 < local_34);
  }
  return;
}

