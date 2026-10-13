/* Entry 0x088B5254 | file offset 0x000B222C | FUN_088b5254 | bytes 1052 */

int FUN_088b5254(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                int param_6)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined2 uVar13;
  int iVar14;
  int local_40;
  
  iVar2 = FUN_088b6640(param_5);
  iVar12 = 0;
  iVar11 = 0;
  do {
    iVar14 = (int)*(short *)(param_4 + 0x3de + iVar12 * 6);
    if (iVar14 != -1) {
      bVar1 = true;
      if ((iVar2 != 0) && (iVar4 = 0, 0 < *(short *)(iVar2 + 2))) {
        do {
          if (iVar14 == *(int *)(*(int *)(iVar2 + 4) + iVar4 * 4)) {
            bVar1 = false;
            break;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(short *)(iVar2 + 2));
      }
      if (bVar1) {
        if (param_3 <= iVar11) break;
        iVar4 = FUN_088b1d9c(iVar14);
        iVar14 = FUN_088b8414(param_4,iVar14,0);
        piVar3 = (int *)(param_2 + iVar11 * 8);
        *piVar3 = iVar4;
        *(undefined1 *)((int)piVar3 + 6) = *(undefined1 *)(iVar4 + 0x20 + param_6);
        if ((*(ushort *)(iVar14 + 4) & 2) == 0) {
          uVar13 = *(undefined2 *)(iVar4 + 0xe);
        }
        else {
          uVar13 = *(undefined2 *)(iVar4 + 0x10);
        }
        *(undefined2 *)(piVar3 + 1) = uVar13;
        *(undefined1 *)((int)piVar3 + 7) = 0;
        iVar11 = iVar11 + 1;
      }
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x96);
  iVar12 = 0;
  iVar2 = *(int *)(DAT_089d7290 + 8);
  if (0 < iVar2) {
    iVar14 = 0;
    do {
      iVar14 = DAT_089d7294 + iVar14 + iVar12 * 8;
      if (-1 < *(short *)(iVar14 + 8)) {
        if (param_3 <= iVar11) break;
        iVar4 = 0;
        if (0 < iVar11) {
          do {
            if (*(short *)(iVar14 + 8) == **(short **)(param_2 + iVar4 * 8)) {
              iVar4 = FUN_088b8414(param_4,(int)*(short *)(iVar14 + 8),0);
              piVar3 = (int *)(param_2 + iVar11 * 8);
              *piVar3 = iVar14;
              *(undefined1 *)((int)piVar3 + 6) = *(undefined1 *)(iVar14 + 0x20 + param_6);
              if ((*(ushort *)(iVar4 + 4) & 2) == 0) {
                uVar13 = *(undefined2 *)(iVar14 + 0xe);
              }
              else {
                uVar13 = *(undefined2 *)(iVar14 + 0x10);
              }
              *(undefined2 *)(piVar3 + 1) = uVar13;
              *(undefined1 *)((int)piVar3 + 7) = 0;
              iVar11 = iVar11 + 1;
              break;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar11);
        }
      }
      iVar12 = iVar12 + 1;
      iVar14 = iVar12 * 0x20;
    } while (iVar12 < iVar2);
  }
  local_40 = sceKernelGetSystemTimeLow();
  iVar2 = 0;
  if (0 < iVar11) {
    do {
      local_40 = local_40 * 0x343fd + 0x269ec3;
      puVar5 = (undefined4 *)(param_2 + iVar2 * 8);
      uVar6 = *puVar5;
      uVar7 = puVar5[1];
      iVar2 = iVar2 + 1;
      puVar8 = (undefined4 *)(param_2 + ((int)(local_40 >> 0x10 & 0x7fffU) % iVar11) * 8);
      uVar10 = puVar8[1];
      *puVar5 = *puVar8;
      puVar5[1] = uVar10;
      *puVar8 = uVar6;
      puVar8[1] = uVar7;
    } while (iVar2 < iVar11);
  }
  iVar2 = 0;
  if (0 < iVar11 + -1) {
    do {
      iVar12 = *(int *)(param_2 + iVar2 * 8);
      if ((*(short *)(iVar12 + 10) != -1) && (iVar14 = iVar2 + 1, iVar14 < iVar11)) {
        do {
          iVar4 = *(int *)(param_2 + iVar14 * 8);
          if ((*(char *)(iVar12 + 0x1b) == *(char *)(iVar4 + 0x1b)) &&
             (*(short *)(iVar12 + 10) == *(short *)(iVar4 + 10))) {
            iVar4 = iVar14;
            if (iVar14 < iVar11 + -1) {
              do {
                iVar9 = param_2 + iVar4 * 8;
                puVar5 = (undefined4 *)(param_2 + iVar4 * 8);
                uVar6 = *(undefined4 *)(iVar9 + 0xc);
                *puVar5 = *(undefined4 *)(iVar9 + 8);
                puVar5[1] = uVar6;
                iVar4 = iVar4 + 1;
              } while (iVar4 < iVar11 + -1);
            }
            iVar14 = iVar14 + -1;
            iVar11 = iVar11 + -1;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar11);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar11 + -1);
  }
  return iVar11;
}

