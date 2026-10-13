/* Entry 0x088F75FC | file offset 0x000F45D4 | FUN_088f75fc | bytes 516 */

void FUN_088f75fc(undefined4 param_1,char *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int local_40;
  
  puVar1 = DAT_089d7f38;
  *param_2 = (char)*DAT_089d7f38;
  param_2[1] = (char)puVar1[1];
  param_2[3] = param_2[3] | 2;
  if (*param_2 == '\x01') {
    param_2[3] = param_2[3] | 1;
  }
  iVar12 = 0;
  piVar14 = (int *)(param_2 + 0x48);
  local_40 = 0;
  iVar13 = 0;
  do {
    FUN_08935524(piVar14 + 1,(int)DAT_089d7f38 + local_40 + 0x6d4,0x1c);
    iVar9 = 0;
    iVar11 = 0;
    piVar10 = piVar14 + 8;
    do {
      iVar3 = FUN_088f7030(iVar12,iVar9);
      puVar2 = DAT_089d7f38;
      if (-1 < iVar3) {
        *(undefined2 *)piVar10 = 6;
        *(short *)((int)piVar10 + 2) = (short)*(char *)((int)puVar2 + iVar11 + iVar13 + 0x1c50);
        *piVar14 = *piVar14 + 1;
      }
      iVar9 = iVar9 + 1;
      iVar11 = iVar11 + 0x1548;
      piVar10 = piVar10 + 0xba;
    } while (iVar9 < 5);
    iVar12 = iVar12 + 1;
    local_40 = local_40 + 0x1c;
    piVar14 = piVar14 + 0x3aa;
    iVar13 = iVar13 + 0x6a68;
  } while (iVar12 < 2);
  iVar12 = 0;
  iVar13 = 0;
  param_2 = param_2 + 0x1d98;
  do {
    puVar2 = DAT_089d7f38;
    *(undefined2 *)param_2 = *(undefined2 *)((int)DAT_089d7f38 + iVar13 + 8);
    *(undefined2 *)(param_2 + 2) = *(undefined2 *)((int)puVar2 + iVar13 + 10);
    puVar7 = (undefined4 *)((int)puVar2 + iVar13 + 0x10);
    *(uint *)(param_2 + 4) = *(uint *)((int)puVar2 + iVar13 + 0xc) & 0x7fffffff;
    *(undefined2 *)(param_2 + 8) = puVar1[2];
    iVar9 = 0;
    iVar11 = 0x2a;
    uVar6 = *puVar7;
    puVar5 = puVar7;
    pcVar8 = param_2 + 0x14;
    do {
      uVar4 = puVar5[1];
      *(undefined4 *)pcVar8 = uVar6;
      iVar9 = iVar9 + 8;
      *(undefined4 *)(pcVar8 + 4) = uVar4;
      puVar5 = (undefined4 *)((int)puVar7 + iVar9);
      iVar11 = iVar11 + -1;
      uVar6 = *puVar5;
      pcVar8 = param_2 + 0x14 + iVar9;
    } while (iVar11 != 0);
    iVar12 = iVar12 + 1;
    *(undefined4 *)pcVar8 = uVar6;
    iVar13 = iVar13 + 0x15c;
    param_2 = param_2 + 0x168;
  } while (iVar12 < 5);
  return;
}

