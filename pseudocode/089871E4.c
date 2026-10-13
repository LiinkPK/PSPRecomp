/* Entry 0x089871E4 | file offset 0x001841BC | FUN_089871e4 | bytes 1636 */

undefined4 FUN_089871e4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  char cVar4;
  short sVar5;
  short *psVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  int *piVar13;
  int iVar14;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  piVar13 = *(int **)(*(int *)(param_2 + 0x8c) +
                      (uint)*(ushort *)
                             (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                             (*(int *)(*(int *)(param_2 + 0x90) + 4) + *(int *)(param_1 + 0xbc)) * 2
                             ) + 0x60);
  iVar14 = 0;
  if ((*(char *)(param_1 + 0xb1) != '\0') && (iVar14 = 2, *(float *)(param_1 + 0xa0) == 0.0)) {
    iVar14 = 1;
  }
  *(int *)(param_1 + 0x18) = iVar14;
  iVar10 = *piVar13;
  iVar1 = iVar10 * 2;
  iVar9 = 0x10;
  iVar2 = iVar10 * 4;
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    iVar9 = 0x18;
  }
  iVar9 = iVar9 * iVar10;
  if (iVar14 == 0) {
    *(int *)(param_1 + 0x24) = iVar9 * 2;
    iVar14 = DAT_09b6f478;
    if (*(int *)(param_1 + 0x28) != 0) {
      iVar9 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*(int *)(param_1 + 0x28));
      iVar14 = iVar14 + (uint)*(ushort *)(*(int *)(*(int *)(iVar14 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar14 + 0xb4) = *(int *)(iVar14 + 0xb4) - iVar9;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    psVar3 = (short *)FUN_08971134(*(undefined4 *)(param_2 + 0x18),iVar2,&local_40,1);
    if (psVar3 != (short *)0x0) {
      iVar14 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar14 + 0xb4) = *(int *)(iVar14 + 0xb4) + local_40;
    }
    *(short **)(param_1 + 0x28) = psVar3;
    if (psVar3 == (short *)0x0) {
      iVar14 = *piVar13;
    }
    else {
      *(int *)(param_1 + 0x2c) = iVar1;
      iVar14 = *piVar13;
    }
    iVar9 = 0;
    sVar5 = 0;
    if (0 < iVar14) {
      sVar8 = 1;
      do {
        *psVar3 = sVar5;
        psVar3[1] = sVar8;
        iVar9 = iVar9 + 1;
        psVar3 = psVar3 + 2;
        sVar5 = sVar5 + 2;
        sVar8 = sVar8 + 2;
      } while (iVar9 < *piVar13);
    }
    cVar4 = *(char *)(param_1 + 0xc0);
  }
  else {
    iVar10 = *(int *)(param_1 + 0x30);
    if (iVar14 == 1) {
      *(int *)(param_1 + 0x24) = iVar9 * 3;
      iVar14 = DAT_09b6f478;
      if (iVar10 != 0) {
        iVar9 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),iVar10);
        iVar14 = iVar14 + (uint)*(ushort *)(*(int *)(*(int *)(iVar14 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(iVar14 + 0xb4) = *(int *)(iVar14 + 0xb4) - iVar9;
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      iVar14 = FUN_08971134(*(undefined4 *)(param_2 + 0x18),iVar2,&local_3c,1);
      if (iVar14 == 0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      else {
        iVar9 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(iVar9 + 0xb4) = *(int *)(iVar9 + 0xb4) + local_3c;
        *(int *)(param_1 + 0x30) = iVar14;
      }
      if (iVar14 != 0) {
        *(int *)(param_1 + 0x34) = iVar1;
      }
      iVar14 = DAT_09b6f478;
      if (*(int *)(param_1 + 0x38) != 0) {
        iVar9 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*(int *)(param_1 + 0x38));
        iVar14 = iVar14 + (uint)*(ushort *)(*(int *)(*(int *)(iVar14 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(iVar14 + 0xb4) = *(int *)(iVar14 + 0xb4) - iVar9;
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
      psVar3 = (short *)FUN_08971134(*(undefined4 *)(param_2 + 0x18),iVar2,&local_38,1);
      if (psVar3 == (short *)0x0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      else {
        iVar14 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(iVar14 + 0xb4) = *(int *)(iVar14 + 0xb4) + local_38;
        *(short **)(param_1 + 0x38) = psVar3;
      }
      psVar6 = *(short **)(param_1 + 0x30);
      if (psVar3 == (short *)0x0) {
        iVar14 = *piVar13;
      }
      else {
        *(int *)(param_1 + 0x3c) = iVar1;
        iVar14 = *piVar13;
      }
      iVar9 = 0;
      sVar5 = 0;
      if (0 < iVar14) {
        sVar8 = 1;
        sVar11 = 2;
        do {
          *psVar6 = sVar5;
          psVar6[1] = sVar8;
          *psVar3 = sVar8;
          psVar3[1] = sVar11;
          iVar9 = iVar9 + 1;
          psVar6 = psVar6 + 2;
          psVar3 = psVar3 + 2;
          sVar5 = sVar5 + 3;
          sVar8 = sVar8 + 3;
          sVar11 = sVar11 + 3;
        } while (iVar9 < *piVar13);
      }
      cVar4 = *(char *)(param_1 + 0xc0);
    }
    else {
      *(int *)(param_1 + 0x24) = iVar9 * 4;
      iVar14 = DAT_09b6f478;
      if (iVar10 != 0) {
        iVar9 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),iVar10);
        iVar14 = iVar14 + (uint)*(ushort *)(*(int *)(*(int *)(iVar14 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(iVar14 + 0xb4) = *(int *)(iVar14 + 0xb4) - iVar9;
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      iVar14 = FUN_08971134(*(undefined4 *)(param_2 + 0x18),iVar2,&local_34,1);
      if (iVar14 == 0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      else {
        iVar9 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(iVar9 + 0xb4) = *(int *)(iVar9 + 0xb4) + local_34;
        *(int *)(param_1 + 0x30) = iVar14;
      }
      if (iVar14 != 0) {
        *(int *)(param_1 + 0x34) = iVar1;
      }
      iVar14 = DAT_09b6f478;
      if (*(int *)(param_1 + 0x28) != 0) {
        iVar9 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*(int *)(param_1 + 0x28));
        iVar14 = iVar14 + (uint)*(ushort *)(*(int *)(*(int *)(iVar14 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(iVar14 + 0xb4) = *(int *)(iVar14 + 0xb4) - iVar9;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      iVar14 = FUN_08971134(*(undefined4 *)(param_2 + 0x18),iVar2,&local_30,1);
      if (iVar14 == 0) {
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
      else {
        iVar9 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(iVar9 + 0xb4) = *(int *)(iVar9 + 0xb4) + local_30;
        *(int *)(param_1 + 0x28) = iVar14;
      }
      if (iVar14 != 0) {
        *(int *)(param_1 + 0x2c) = iVar1;
      }
      iVar14 = DAT_09b6f478;
      if (*(int *)(param_1 + 0x38) != 0) {
        iVar9 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),*(int *)(param_1 + 0x38));
        iVar14 = iVar14 + (uint)*(ushort *)(*(int *)(*(int *)(iVar14 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(iVar14 + 0xb4) = *(int *)(iVar14 + 0xb4) - iVar9;
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
      psVar3 = (short *)FUN_08971134(*(undefined4 *)(param_2 + 0x18),iVar2,&local_2c,1);
      if (psVar3 == (short *)0x0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      else {
        iVar14 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
        *(int *)(iVar14 + 0xb4) = *(int *)(iVar14 + 0xb4) + local_2c;
        *(short **)(param_1 + 0x38) = psVar3;
      }
      psVar6 = *(short **)(param_1 + 0x28);
      psVar7 = *(short **)(param_1 + 0x30);
      if (psVar3 == (short *)0x0) {
        iVar14 = *piVar13;
      }
      else {
        *(int *)(param_1 + 0x3c) = iVar1;
        iVar14 = *piVar13;
      }
      iVar9 = 0;
      sVar5 = 0;
      if (0 < iVar14) {
        sVar8 = 1;
        sVar11 = 2;
        sVar12 = 3;
        do {
          *psVar7 = sVar5;
          psVar7[1] = sVar8;
          *psVar6 = sVar8;
          psVar6[1] = sVar11;
          *psVar3 = sVar11;
          psVar3[1] = sVar12;
          iVar9 = iVar9 + 1;
          psVar7 = psVar7 + 2;
          psVar6 = psVar6 + 2;
          psVar3 = psVar3 + 2;
          sVar5 = sVar5 + 4;
          sVar8 = sVar8 + 4;
          sVar11 = sVar11 + 4;
          sVar12 = sVar12 + 4;
        } while (iVar9 < *piVar13);
      }
      cVar4 = *(char *)(param_1 + 0xc0);
    }
  }
  if (cVar4 != '\0') {
    if (*(int *)(param_1 + 0xc4) < 0) {
      iVar14 = -1;
    }
    else {
      iVar14 = *(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x30);
      if (iVar14 == 0) {
        iVar14 = -1;
      }
      else {
        iVar14 = *(int *)(*(int *)(iVar14 + *(int *)(param_1 + 0xc4) * 4) + 0x10);
      }
    }
    if (iVar14 == -1) {
      return 0;
    }
    piVar13 = *(int **)(**(int **)(param_2 + 0xa4) + iVar14 * 4);
    *(float *)(param_1 + 0x10) = (float)*(int *)(*piVar13 + 0x1c);
    *(float *)(param_1 + 0x14) = (float)*(int *)(*piVar13 + 0x20);
  }
  return 1;
}

