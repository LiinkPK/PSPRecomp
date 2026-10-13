/* Entry 0x08943C98 | file offset 0x00140C70 | FUN_08943c98 | bytes 2072 */

void FUN_08943c98(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  if ((*(uint *)(param_2 + 0xc) & 0x10000) != 0) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xfffeffff;
    iVar5 = *(int *)(param_2 + 8);
    iVar2 = -param_2;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 4) = iVar2 + *(int *)(iVar5 + 4);
      *(int *)(param_2 + 8) = iVar2 + *(int *)(param_2 + 8);
    }
    if ((*(uint *)(param_2 + 0xc) & 0x800000) != 0) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xff7fffff;
      piVar6 = *(int **)(param_2 + 0x44);
      if (piVar6 != (int *)0x0) {
        iVar8 = 0;
        iVar5 = piVar6[1];
        if (0 < *piVar6) {
          do {
            iVar8 = iVar8 + 1;
            *(int *)(iVar5 + 8) = iVar2 + *(int *)(iVar5 + 8);
            piVar6 = *(int **)(param_2 + 0x44);
            iVar5 = iVar5 + 0xc;
          } while (iVar8 < *piVar6);
          iVar5 = piVar6[1];
        }
        piVar6[1] = iVar2 + iVar5;
        *(int *)(param_2 + 0x44) = iVar2 + *(int *)(param_2 + 0x44);
      }
    }
    puVar7 = *(ushort **)(param_2 + 0x40);
    if (puVar7 != (ushort *)0x0) {
      iVar8 = 0;
      iVar5 = *(int *)(puVar7 + 2);
      if (*puVar7 != 0) {
        iVar10 = 0;
        do {
          *(int *)(*(int *)(iVar5 + iVar10) + 8) = iVar2 + *(int *)(*(int *)(iVar5 + iVar10) + 8);
          iVar8 = iVar8 + 1;
          piVar6 = (int *)(*(int *)(puVar7 + 2) + iVar10);
          iVar10 = iVar10 + 4;
          *piVar6 = iVar2 + *piVar6;
          iVar5 = *(int *)(puVar7 + 2);
        } while (iVar8 < (int)(uint)*puVar7);
      }
      *(int *)(puVar7 + 2) = iVar2 + iVar5;
      *(int *)(param_2 + 0x40) = iVar2 + *(int *)(param_2 + 0x40);
    }
    if ((*(uint *)(param_2 + 0xc) & 0x80000) != 0) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xfff7ffff;
      iVar5 = *(int *)(param_2 + 0x30);
      if (iVar5 != 0) {
        iVar10 = 0;
        iVar8 = 0;
        if (*(short *)(param_2 + 0x20) != 0) {
          do {
            *(int *)(*(int *)(iVar5 + iVar8) + 0xc) =
                 iVar2 + *(int *)(*(int *)(iVar5 + iVar8) + 0xc);
            iVar10 = iVar10 + 1;
            piVar6 = (int *)(*(int *)(param_2 + 0x30) + iVar8);
            iVar8 = iVar8 + 4;
            *piVar6 = iVar2 + *piVar6;
            iVar5 = *(int *)(param_2 + 0x30);
          } while (iVar10 < (int)(uint)*(ushort *)(param_2 + 0x20));
        }
        *(int *)(param_2 + 0x30) = iVar2 + iVar5;
      }
    }
    if ((*(uint *)(param_2 + 0xc) & 0x100000) != 0) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffefffff;
      iVar5 = *(int *)(param_2 + 0x34);
      if (iVar5 != 0) {
        iVar10 = 0;
        iVar8 = 0;
        if (*(short *)(param_2 + 0x22) != 0) {
          do {
            *(int *)(*(int *)(iVar5 + iVar8) + 0xc) =
                 iVar2 + *(int *)(*(int *)(iVar5 + iVar8) + 0xc);
            iVar10 = iVar10 + 1;
            piVar6 = (int *)(*(int *)(param_2 + 0x34) + iVar8);
            iVar8 = iVar8 + 4;
            *piVar6 = iVar2 + *piVar6;
            iVar5 = *(int *)(param_2 + 0x34);
          } while (iVar10 < (int)(uint)*(ushort *)(param_2 + 0x22));
        }
        *(int *)(param_2 + 0x34) = iVar2 + iVar5;
      }
    }
    if ((*(uint *)(param_2 + 0xc) & 0x200000) != 0) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffdfffff;
      iVar5 = *(int *)(param_2 + 0x38);
      if (iVar5 != 0) {
        iVar10 = 0;
        iVar8 = 0;
        if (*(short *)(param_2 + 0x24) != 0) {
          do {
            *(int *)(*(int *)(iVar5 + iVar8) + 0xc) =
                 iVar2 + *(int *)(*(int *)(iVar5 + iVar8) + 0xc);
            iVar10 = iVar10 + 1;
            piVar6 = (int *)(*(int *)(param_2 + 0x38) + iVar8);
            iVar8 = iVar8 + 4;
            *piVar6 = iVar2 + *piVar6;
            iVar5 = *(int *)(param_2 + 0x38);
          } while (iVar10 < (int)(uint)*(ushort *)(param_2 + 0x24));
        }
        *(int *)(param_2 + 0x38) = iVar2 + iVar5;
      }
    }
    if ((*(uint *)(param_2 + 0xc) & 0x400000) != 0) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffbfffff;
      iVar5 = *(int *)(param_2 + 0x3c);
      if (iVar5 != 0) {
        iVar10 = 0;
        iVar8 = 0;
        if (*(short *)(param_2 + 0x26) != 0) {
          do {
            *(int *)(*(int *)(iVar5 + iVar8) + 0xc) =
                 iVar2 + *(int *)(*(int *)(iVar5 + iVar8) + 0xc);
            iVar10 = iVar10 + 1;
            piVar6 = (int *)(*(int *)(param_2 + 0x3c) + iVar8);
            iVar8 = iVar8 + 4;
            *piVar6 = iVar2 + *piVar6;
            iVar5 = *(int *)(param_2 + 0x3c);
          } while (iVar10 < (int)(uint)*(ushort *)(param_2 + 0x26));
        }
        *(int *)(param_2 + 0x3c) = iVar2 + iVar5;
      }
    }
    uVar3 = *(uint *)(param_2 + 0xc);
    if ((uVar3 & 0x20000) != 0) {
      *(uint *)(param_2 + 0xc) = uVar3 & 0xfffdffff;
      iVar5 = 0;
      piVar6 = *(int **)(param_2 + 0x28);
      if (*(short *)(param_2 + 0x1c) != 0) {
        do {
          iVar10 = *piVar6;
          iVar8 = 0;
          iVar9 = *(int *)(iVar10 + 8);
          if (*(short *)(iVar10 + 6) != 0) {
            iVar15 = 0;
            do {
              iVar11 = *(int *)(*(int *)(iVar9 + iVar15) + 0xc);
              if (iVar11 != 0) {
                *(int *)(*(int *)(iVar9 + iVar15) + 0xc) = iVar2 + iVar11;
                iVar9 = *(int *)(iVar10 + 8);
              }
              iVar8 = iVar8 + 1;
              *(int *)(iVar9 + iVar15) = iVar2 + *(int *)(iVar9 + iVar15);
              iVar15 = iVar15 + 4;
              iVar9 = *(int *)(iVar10 + 8);
            } while (iVar8 < (int)(uint)*(ushort *)(iVar10 + 6));
          }
          *(int *)(iVar10 + 8) = iVar2 + iVar9;
          iVar5 = iVar5 + 1;
          *piVar6 = iVar2 + *piVar6;
          piVar6 = piVar6 + 1;
        } while (iVar5 < (int)(uint)*(ushort *)(param_2 + 0x1c));
        piVar6 = *(int **)(param_2 + 0x28);
      }
      *(int *)(param_2 + 0x28) = iVar2 + (int)piVar6;
      uVar3 = *(uint *)(param_2 + 0xc);
    }
    if ((uVar3 & 0x40000) != 0) {
      *(uint *)(param_2 + 0xc) = uVar3 & 0xfffbffff;
      iVar5 = 0;
      piVar6 = *(int **)(param_2 + 0x2c);
      if (*(short *)(param_2 + 0x1e) != 0) {
        do {
          iVar10 = *piVar6;
          iVar8 = 0;
          piVar12 = *(int **)(iVar10 + 0x1c);
          piVar13 = piVar12;
          if (*(short *)(iVar10 + 0x10) != 0) {
            iVar9 = 0;
            do {
              *(int *)(*(int *)((int)piVar13 + iVar9) + 4) =
                   iVar2 + *(int *)(*(int *)((int)piVar13 + iVar9) + 4);
              *(int *)(*(int *)(iVar10 + 0x1c) + iVar9) = iVar2 + *piVar12;
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 + 4;
              piVar12 = piVar12 + 1;
              piVar13 = *(int **)(iVar10 + 0x1c);
            } while (iVar8 < (int)(uint)*(ushort *)(iVar10 + 0x10));
          }
          *(int *)(iVar10 + 0x1c) = iVar2 + (int)piVar13;
          uVar3 = (uint)*(ushort *)(iVar10 + 0x12);
          iVar9 = 0;
          iVar8 = *(int *)(iVar10 + 0x20);
          if (uVar3 != 0) {
            iVar15 = 0;
            do {
              iVar11 = *(int *)(iVar8 + iVar15);
              if (iVar11 != 0) {
                iVar14 = *(int *)(iVar8 + iVar15);
                if (*(char *)(iVar14 + 8) != '\0') {
                  iVar16 = 0;
                  iVar8 = 0;
                  if (*(char *)(iVar14 + 8) != '\0') {
                    do {
                      iVar4 = *(int *)(*(int *)(iVar14 + 0x1c) + iVar8);
                      *(int *)(iVar4 + 8) = iVar2 + *(int *)(iVar4 + 8);
                      iVar16 = iVar16 + 1;
                      piVar13 = (int *)(*(int *)(iVar14 + 0x1c) + iVar8);
                      *piVar13 = iVar2 + *piVar13;
                      iVar8 = iVar8 + 4;
                    } while (iVar16 < (int)(uint)*(byte *)(iVar14 + 8));
                  }
                  if (*(char *)(iVar14 + 0x12) == '\0') {
                    *(undefined4 *)(iVar14 + 0x20) = 0;
                    piVar13 = *(int **)(iVar14 + 0x24);
                    cVar1 = *(char *)(iVar14 + 0x13);
                  }
                  else {
                    *(int *)(*(int *)(iVar14 + 0x20) + 8) =
                         iVar2 + *(int *)(*(int *)(iVar14 + 0x20) + 8);
                    piVar13 = *(int **)(iVar14 + 0x24);
                    *(int *)(iVar14 + 0x20) = iVar2 + *(int *)(iVar14 + 0x20);
                    cVar1 = *(char *)(iVar14 + 0x13);
                  }
                  iVar16 = 0;
                  iVar8 = 0;
                  piVar12 = piVar13;
                  if (cVar1 != '\0') {
                    do {
                      *(int *)(*(int *)((int)piVar13 + iVar8) + 8) =
                           iVar2 + *(int *)(*(int *)((int)piVar13 + iVar8) + 8);
                      *(int *)(*(int *)(iVar14 + 0x24) + iVar8) = iVar2 + *piVar12;
                      iVar16 = iVar16 + 1;
                      iVar8 = iVar8 + 4;
                      piVar13 = *(int **)(iVar14 + 0x24);
                      piVar12 = piVar12 + 1;
                    } while (iVar16 < (int)(uint)*(byte *)(iVar14 + 0x13));
                  }
                  *(int *)(iVar14 + 0x24) = iVar2 + (int)piVar13;
                  *(int *)(iVar14 + 0x28) = iVar2 + *(int *)(iVar14 + 0x28);
                  *(int *)(iVar14 + 0x2c) = iVar2 + *(int *)(iVar14 + 0x2c);
                  *(int *)(iVar14 + 0x30) = iVar2 + *(int *)(iVar14 + 0x30);
                  *(int *)(iVar14 + 0x34) = iVar2 + *(int *)(iVar14 + 0x34);
                  *(int *)(iVar14 + 0x38) = iVar2 + *(int *)(iVar14 + 0x38);
                  *(int *)(iVar14 + 0x3c) = iVar2 + *(int *)(iVar14 + 0x3c);
                  *(int *)(iVar14 + 0x40) = iVar2 + *(int *)(iVar14 + 0x40);
                  *(int *)(iVar14 + 0x44) = iVar2 + *(int *)(iVar14 + 0x44);
                  *(int *)(iVar14 + 0x1c) = iVar2 + *(int *)(iVar14 + 0x1c);
                  iVar8 = *(int *)(iVar10 + 0x20);
                }
                *(int *)(iVar8 + iVar15) = iVar2 + iVar11;
                uVar3 = (uint)*(ushort *)(iVar10 + 0x12);
                iVar8 = *(int *)(iVar10 + 0x20);
              }
              iVar9 = iVar9 + 1;
              iVar15 = iVar15 + 4;
            } while (iVar9 < (int)uVar3);
          }
          *(int *)(iVar10 + 0x20) = iVar2 + iVar8;
          piVar12 = *(int **)(iVar10 + 0x28);
          *(int *)(iVar10 + 0x24) = iVar2 + *(int *)(iVar10 + 0x24);
          iVar8 = 0;
          iVar9 = 0;
          piVar13 = piVar12;
          do {
            iVar8 = iVar8 + 1;
            *(int *)(*(int *)((int)piVar13 + iVar9) + 4) =
                 iVar2 + *(int *)(*(int *)((int)piVar13 + iVar9) + 4);
            *(int *)(*(int *)(iVar10 + 0x28) + iVar9) = iVar2 + *piVar12;
            iVar9 = iVar9 + 4;
            piVar12 = piVar12 + 1;
            piVar13 = *(int **)(iVar10 + 0x28);
          } while (iVar8 < 0xc);
          *(int *)(iVar10 + 0x28) = iVar2 + (int)piVar13;
          iVar8 = 0;
          piVar12 = *(int **)(iVar10 + 0x2c);
          piVar13 = piVar12;
          if (*(short *)(iVar10 + 0x18) != 0) {
            iVar9 = 0;
            do {
              *(int *)(*(int *)((int)piVar13 + iVar9) + 4) =
                   iVar2 + *(int *)(*(int *)((int)piVar13 + iVar9) + 4);
              *(int *)(*(int *)(iVar10 + 0x2c) + iVar9) = iVar2 + *piVar12;
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 + 4;
              piVar12 = piVar12 + 1;
              piVar13 = *(int **)(iVar10 + 0x2c);
            } while (iVar8 < (int)(uint)*(ushort *)(iVar10 + 0x18));
          }
          *(int *)(iVar10 + 0x2c) = iVar2 + (int)piVar13;
          iVar8 = 0;
          piVar13 = *(int **)(iVar10 + 0x30);
          if (*(short *)(iVar10 + 0x1a) != 0) {
            iVar9 = 0;
            piVar12 = piVar13;
            do {
              *(int *)((int)piVar13 + iVar9) = iVar2 + *piVar12;
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 + 4;
              piVar12 = piVar12 + 1;
              piVar13 = *(int **)(iVar10 + 0x30);
            } while (iVar8 < (int)(uint)*(ushort *)(iVar10 + 0x1a));
          }
          *(int *)(iVar10 + 0x30) = iVar2 + (int)piVar13;
          iVar5 = iVar5 + 1;
          *piVar6 = iVar2 + *piVar6;
          piVar6 = piVar6 + 1;
        } while (iVar5 < (int)(uint)*(ushort *)(param_2 + 0x1e));
        piVar6 = *(int **)(param_2 + 0x2c);
      }
      *(int *)(param_2 + 0x2c) = iVar2 + (int)piVar6;
    }
  }
  return;
}

