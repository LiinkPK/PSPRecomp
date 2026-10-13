/* Entry 0x089038F4 | file offset 0x001008CC | FUN_089038f4 | bytes 708 */

void FUN_089038f4(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined1 auStack_c0 [144];
  uint local_30;
  int local_2c;
  
  if ((0 < (int)param_1[1]) && (iVar12 = 0, 0 < (int)param_1[1])) {
    puVar13 = param_1 + 2;
    do {
      iVar5 = sceNetAdhocctlGetPeerInfo(puVar13,0x98,auStack_c0);
      if (iVar5 < 0) {
        piVar7 = (int *)param_1[0x42];
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 0x14))((int)piVar7 + (int)*(short *)(*piVar7 + 0x10),puVar13);
        }
        iVar6 = FUN_08904820(param_1,puVar13);
        iVar5 = param_1[1];
        if (iVar6 == 1) {
          iVar12 = iVar12 + -1;
          puVar13 = puVar13 + -4;
        }
      }
      else {
        uVar15 = sceKernelGetSystemTimeWide();
        uVar8 = (uint)((uint)uVar15 < local_30);
        uVar10 = (int)((ulonglong)uVar15 >> 0x20) - local_2c;
        if (uVar10 == uVar8 && 20000000 < (uint)uVar15 - local_30 || uVar10 != uVar8) {
          piVar7 = (int *)param_1[0x42];
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 0x14))((int)piVar7 + (int)*(short *)(*piVar7 + 0x10),puVar13);
          }
          iVar5 = FUN_08904820(param_1,puVar13);
          if (iVar5 == 1) {
            iVar12 = iVar12 + -1;
            puVar13 = puVar13 + -4;
          }
        }
        iVar5 = param_1[1];
      }
      iVar12 = iVar12 + 1;
      puVar13 = puVar13 + 4;
    } while (iVar12 < iVar5);
  }
  iVar12 = param_1[0x61];
  iVar5 = 0;
  if (0 < iVar12) {
    puVar13 = param_1 + 0x49;
    do {
      iVar6 = 0;
      bVar4 = false;
      if (0 < (int)param_1[1]) {
        puVar14 = param_1 + 2;
        do {
          iVar12 = FUN_08935490(puVar13,puVar14,6);
          if (iVar12 == 0) {
            bVar4 = true;
            iVar12 = param_1[0x61];
            goto LAB_08903ac0;
          }
          iVar6 = iVar6 + 1;
          puVar14 = puVar14 + 4;
        } while (iVar6 < (int)param_1[1]);
        iVar12 = param_1[0x61];
      }
LAB_08903ac0:
      if (!bVar4) {
        bVar4 = false;
        if (0 < iVar12) {
          iVar12 = iVar12 + -1;
          param_1[0x61] = iVar12;
          if (iVar5 < iVar12) {
            puVar9 = (undefined1 *)((int)param_1 + iVar5 * 6 + 0x124);
            puVar11 = (undefined1 *)((int)param_1 + iVar5 * 6 + 0x12a);
            iVar6 = iVar5;
            do {
              uVar1 = puVar11[1];
              uVar2 = puVar11[2];
              *puVar9 = *puVar11;
              uVar3 = puVar11[3];
              puVar9[1] = uVar1;
              uVar1 = puVar11[4];
              puVar9[2] = uVar2;
              uVar2 = puVar11[5];
              puVar9[3] = uVar3;
              puVar9[4] = uVar1;
              puVar9[5] = uVar2;
              iVar12 = param_1[0x61];
              iVar6 = iVar6 + 1;
              puVar9 = puVar9 + 6;
              puVar11 = puVar11 + 6;
            } while (iVar6 < iVar12);
          }
          bVar4 = true;
        }
        if (bVar4) {
          iVar5 = iVar5 + -1;
          puVar13 = (undefined4 *)((int)puVar13 + -6);
        }
      }
      iVar5 = iVar5 + 1;
      puVar13 = (undefined4 *)((int)puVar13 + 6);
    } while (iVar5 < iVar12);
  }
  if (*(char *)(param_1 + 0x47) != '\0') {
    sceNetAdhocMatchingCancelTarget(*param_1,(int)param_1 + 0x116);
    *(undefined1 *)(param_1 + 0x47) = 0;
  }
  return;
}

