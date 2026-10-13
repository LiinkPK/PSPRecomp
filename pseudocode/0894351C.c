/* Entry 0x0894351C | file offset 0x001404F4 | FUN_0894351c | bytes 1916 */

void FUN_0894351c(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if ((*(uint *)(param_2 + 0xc) & 0x10000) == 0) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x10000;
    if (*(int *)(param_2 + 8) != 0) {
      iVar1 = param_2 + *(int *)(param_2 + 8);
      *(int *)(param_2 + 8) = iVar1;
      *(int *)(iVar1 + 4) = param_2 + *(int *)(iVar1 + 4);
    }
    if ((*(uint *)(param_2 + 0xc) & 0x800000) == 0) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x800000;
      iVar1 = param_2 + *(int *)(param_2 + 0x44);
      if (*(int *)(param_2 + 0x44) != 0) {
        *(int *)(param_2 + 0x44) = iVar1;
        *(int *)(iVar1 + 4) = param_2 + *(int *)(iVar1 + 4);
        iVar1 = 0;
        iVar3 = (*(int **)(param_2 + 0x44))[1];
        if (0 < **(int **)(param_2 + 0x44)) {
          do {
            iVar1 = iVar1 + 1;
            *(int *)(iVar3 + 8) = param_2 + *(int *)(iVar3 + 8);
            iVar3 = iVar3 + 0xc;
          } while (iVar1 < **(int **)(param_2 + 0x44));
        }
      }
    }
    iVar1 = *(int *)(param_2 + 0x40);
    if ((iVar1 != 0) && (puVar2 = (ushort *)(param_2 + iVar1), iVar1 < 0x500000)) {
      *(ushort **)(param_2 + 0x40) = puVar2;
      iVar3 = 0;
      *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + param_2;
      iVar1 = 0;
      if (*puVar2 != 0) {
        do {
          *(int *)(*(int *)(puVar2 + 2) + iVar1) = *(int *)(*(int *)(puVar2 + 2) + iVar1) + param_2;
          iVar3 = iVar3 + 1;
          *(int *)(*(int *)(*(int *)(puVar2 + 2) + iVar1) + 8) =
               param_2 + *(int *)(*(int *)(*(int *)(puVar2 + 2) + iVar1) + 8);
          iVar1 = iVar1 + 4;
        } while (iVar3 < (int)(uint)*puVar2);
      }
    }
    if ((*(uint *)(param_2 + 0xc) & 0x80000) == 0) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x80000;
      if (*(int *)(param_2 + 0x30) != 0) {
        *(int *)(param_2 + 0x30) = param_2 + *(int *)(param_2 + 0x30);
        iVar3 = 0;
        iVar1 = 0;
        if (*(short *)(param_2 + 0x20) != 0) {
          do {
            piVar4 = (int *)(*(int *)(param_2 + 0x30) + iVar1);
            *piVar4 = param_2 + *piVar4;
            iVar5 = *(int *)(*(int *)(param_2 + 0x30) + iVar1);
            iVar3 = iVar3 + 1;
            *(int *)(iVar5 + 0xc) = param_2 + *(int *)(iVar5 + 0xc);
            iVar1 = iVar1 + 4;
          } while (iVar3 < (int)(uint)*(ushort *)(param_2 + 0x20));
        }
      }
    }
    if ((*(uint *)(param_2 + 0xc) & 0x100000) == 0) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x100000;
      if (*(int *)(param_2 + 0x34) != 0) {
        *(int *)(param_2 + 0x34) = param_2 + *(int *)(param_2 + 0x34);
        iVar3 = 0;
        iVar1 = 0;
        if (*(short *)(param_2 + 0x22) != 0) {
          do {
            piVar4 = (int *)(*(int *)(param_2 + 0x34) + iVar1);
            *piVar4 = param_2 + *piVar4;
            iVar5 = *(int *)(*(int *)(param_2 + 0x34) + iVar1);
            iVar3 = iVar3 + 1;
            *(int *)(iVar5 + 0xc) = param_2 + *(int *)(iVar5 + 0xc);
            iVar1 = iVar1 + 4;
          } while (iVar3 < (int)(uint)*(ushort *)(param_2 + 0x22));
        }
      }
    }
    if ((*(uint *)(param_2 + 0xc) & 0x200000) == 0) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x200000;
      if (*(int *)(param_2 + 0x38) != 0) {
        *(int *)(param_2 + 0x38) = param_2 + *(int *)(param_2 + 0x38);
        iVar3 = 0;
        iVar1 = 0;
        if (*(short *)(param_2 + 0x24) != 0) {
          do {
            piVar4 = (int *)(*(int *)(param_2 + 0x38) + iVar1);
            *piVar4 = param_2 + *piVar4;
            iVar5 = *(int *)(*(int *)(param_2 + 0x38) + iVar1);
            iVar3 = iVar3 + 1;
            *(int *)(iVar5 + 0xc) = param_2 + *(int *)(iVar5 + 0xc);
            iVar1 = iVar1 + 4;
          } while (iVar3 < (int)(uint)*(ushort *)(param_2 + 0x24));
        }
      }
    }
    if ((*(uint *)(param_2 + 0xc) & 0x400000) == 0) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x400000;
      if (*(int *)(param_2 + 0x3c) != 0) {
        *(int *)(param_2 + 0x3c) = param_2 + *(int *)(param_2 + 0x3c);
        iVar3 = 0;
        iVar1 = 0;
        if (*(short *)(param_2 + 0x26) != 0) {
          do {
            piVar4 = (int *)(*(int *)(param_2 + 0x3c) + iVar1);
            *piVar4 = param_2 + *piVar4;
            iVar5 = *(int *)(*(int *)(param_2 + 0x3c) + iVar1);
            iVar3 = iVar3 + 1;
            *(int *)(iVar5 + 0xc) = param_2 + *(int *)(iVar5 + 0xc);
            iVar1 = iVar1 + 4;
          } while (iVar3 < (int)(uint)*(ushort *)(param_2 + 0x26));
        }
      }
    }
    if ((*(uint *)(param_2 + 0xc) & 0x20000) == 0) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x20000;
      piVar4 = (int *)(param_2 + *(int *)(param_2 + 0x28));
      *(int **)(param_2 + 0x28) = piVar4;
      iVar1 = 0;
      if (*(short *)(param_2 + 0x1c) != 0) {
        do {
          iVar3 = param_2 + *piVar4;
          *piVar4 = iVar3;
          iVar10 = 0;
          *(int *)(iVar3 + 8) = param_2 + *(int *)(iVar3 + 8);
          iVar5 = 0;
          if (*(short *)(iVar3 + 6) != 0) {
            do {
              piVar6 = (int *)(*(int *)(iVar3 + 8) + iVar5);
              *piVar6 = *piVar6 + param_2;
              iVar7 = *(int *)(*(int *)(iVar3 + 8) + iVar5);
              iVar8 = *(int *)(iVar7 + 0xc);
              if (iVar8 != 0) {
                *(int *)(iVar7 + 0xc) = param_2 + iVar8;
              }
              iVar10 = iVar10 + 1;
              iVar5 = iVar5 + 4;
            } while (iVar10 < (int)(uint)*(ushort *)(iVar3 + 6));
          }
          iVar1 = iVar1 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar1 < (int)(uint)*(ushort *)(param_2 + 0x1c));
      }
    }
    if ((*(uint *)(param_2 + 0xc) & 0x40000) == 0) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x40000;
      piVar4 = (int *)(param_2 + *(int *)(param_2 + 0x2c));
      *(int **)(param_2 + 0x2c) = piVar4;
      iVar1 = 0;
      if (*(short *)(param_2 + 0x1e) != 0) {
        do {
          iVar3 = param_2 + *piVar4;
          *piVar4 = iVar3;
          iVar10 = 0;
          piVar6 = (int *)(param_2 + *(int *)(iVar3 + 0x1c));
          *(int **)(iVar3 + 0x1c) = piVar6;
          iVar5 = 0;
          if (*(short *)(iVar3 + 0x10) != 0) {
            do {
              iVar7 = param_2 + *piVar6;
              *(int *)(*(int *)(iVar3 + 0x1c) + iVar5) = iVar7;
              iVar10 = iVar10 + 1;
              *(int *)(iVar7 + 4) = param_2 + *(int *)(iVar7 + 4);
              iVar5 = iVar5 + 4;
              piVar6 = piVar6 + 1;
            } while (iVar10 < (int)(uint)*(ushort *)(iVar3 + 0x10));
          }
          iVar10 = 0;
          *(int *)(iVar3 + 0x20) = param_2 + *(int *)(iVar3 + 0x20);
          iVar5 = 0;
          if (*(short *)(iVar3 + 0x12) != 0) {
            do {
              iVar7 = *(int *)(*(int *)(iVar3 + 0x20) + iVar5);
              if (iVar7 != 0) {
                iVar7 = param_2 + iVar7;
                *(int *)(*(int *)(iVar3 + 0x20) + iVar5) = iVar7;
                if (*(char *)(iVar7 + 8) != '\0') {
                  iVar9 = 0;
                  *(int *)(iVar7 + 0x1c) = param_2 + *(int *)(iVar7 + 0x1c);
                  iVar8 = 0;
                  if (*(char *)(iVar7 + 8) != '\0') {
                    do {
                      piVar6 = (int *)(*(int *)(iVar7 + 0x1c) + iVar8);
                      iVar11 = param_2 + *piVar6;
                      *piVar6 = iVar11;
                      iVar9 = iVar9 + 1;
                      *(int *)(iVar11 + 8) = *(int *)(iVar11 + 8) + param_2;
                      iVar8 = iVar8 + 4;
                    } while (iVar9 < (int)(uint)*(byte *)(iVar7 + 8));
                  }
                  if (*(char *)(iVar7 + 0x12) == '\0') {
                    iVar8 = *(int *)(iVar7 + 0x24);
                    *(undefined4 *)(iVar7 + 0x20) = 0;
                  }
                  else {
                    iVar8 = param_2 + *(int *)(iVar7 + 0x20);
                    *(int *)(iVar7 + 0x20) = iVar8;
                    *(int *)(iVar8 + 8) = param_2 + *(int *)(iVar8 + 8);
                    iVar8 = *(int *)(iVar7 + 0x24);
                  }
                  piVar6 = (int *)(param_2 + iVar8);
                  *(int **)(iVar7 + 0x24) = piVar6;
                  iVar8 = 0;
                  if (*(char *)(iVar7 + 0x13) != '\0') {
                    iVar9 = 0;
                    do {
                      iVar11 = param_2 + *piVar6;
                      *(int *)(*(int *)(iVar7 + 0x24) + iVar9) = iVar11;
                      iVar8 = iVar8 + 1;
                      *(int *)(iVar11 + 8) = param_2 + *(int *)(iVar11 + 8);
                      iVar9 = iVar9 + 4;
                      piVar6 = piVar6 + 1;
                    } while (iVar8 < (int)(uint)*(byte *)(iVar7 + 0x13));
                  }
                  *(int *)(iVar7 + 0x28) = param_2 + *(int *)(iVar7 + 0x28);
                  *(int *)(iVar7 + 0x2c) = param_2 + *(int *)(iVar7 + 0x2c);
                  *(int *)(iVar7 + 0x30) = param_2 + *(int *)(iVar7 + 0x30);
                  *(int *)(iVar7 + 0x34) = param_2 + *(int *)(iVar7 + 0x34);
                  *(int *)(iVar7 + 0x38) = param_2 + *(int *)(iVar7 + 0x38);
                  *(int *)(iVar7 + 0x3c) = param_2 + *(int *)(iVar7 + 0x3c);
                  *(int *)(iVar7 + 0x40) = param_2 + *(int *)(iVar7 + 0x40);
                  *(int *)(iVar7 + 0x44) = param_2 + *(int *)(iVar7 + 0x44);
                }
              }
              iVar10 = iVar10 + 1;
              iVar5 = iVar5 + 4;
            } while (iVar10 < (int)(uint)*(ushort *)(iVar3 + 0x12));
          }
          *(int *)(iVar3 + 0x24) = param_2 + *(int *)(iVar3 + 0x24);
          piVar6 = (int *)(param_2 + *(int *)(iVar3 + 0x28));
          *(int **)(iVar3 + 0x28) = piVar6;
          iVar10 = 0;
          iVar5 = 0;
          do {
            iVar7 = param_2 + *piVar6;
            *(int *)(*(int *)(iVar3 + 0x28) + iVar5) = iVar7;
            iVar10 = iVar10 + 1;
            *(int *)(iVar7 + 4) = param_2 + *(int *)(iVar7 + 4);
            iVar5 = iVar5 + 4;
            piVar6 = piVar6 + 1;
          } while (iVar10 < 0xc);
          iVar10 = 0;
          piVar6 = (int *)(param_2 + *(int *)(iVar3 + 0x2c));
          *(int **)(iVar3 + 0x2c) = piVar6;
          iVar5 = 0;
          if (*(short *)(iVar3 + 0x18) != 0) {
            do {
              iVar7 = param_2 + *piVar6;
              *(int *)(*(int *)(iVar3 + 0x2c) + iVar5) = iVar7;
              iVar10 = iVar10 + 1;
              *(int *)(iVar7 + 4) = param_2 + *(int *)(iVar7 + 4);
              iVar5 = iVar5 + 4;
              piVar6 = piVar6 + 1;
            } while (iVar10 < (int)(uint)*(ushort *)(iVar3 + 0x18));
          }
          iVar5 = 0;
          piVar6 = (int *)(param_2 + *(int *)(iVar3 + 0x30));
          *(int **)(iVar3 + 0x30) = piVar6;
          iVar10 = 0;
          if (*(short *)(iVar3 + 0x1a) != 0) {
            do {
              *(int *)(*(int *)(iVar3 + 0x30) + iVar10) = param_2 + *piVar6;
              iVar5 = iVar5 + 1;
              iVar10 = iVar10 + 4;
              piVar6 = piVar6 + 1;
            } while (iVar5 < (int)(uint)*(ushort *)(iVar3 + 0x1a));
          }
          iVar1 = iVar1 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar1 < (int)(uint)*(ushort *)(param_2 + 0x1e));
      }
    }
  }
  return;
}

