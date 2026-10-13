/* Entry 0x088D6280 | file offset 0x000D3258 | FUN_088d6280 | bytes 1548 */

void FUN_088d6280(uint *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined1 *puVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int local_5d4;
  int local_5d0 [8];
  undefined1 auStack_5b0 [48];
  float afStack_580 [84];
  undefined1 auStack_430 [4];
  undefined1 local_42c [1024];
  
  piVar10 = local_5d0;
  piVar7 = local_5d0;
  piVar15 = local_5d0;
  piVar13 = local_5d0;
  uVar4 = param_1[4];
  if (uVar4 != 0) {
    puVar5 = (undefined2 *)(param_1[9] + param_1[1] * 0x1e);
    if (*(short *)(uVar4 + 0xc) == -1) {
      FUN_088d9f5c(uVar4,*puVar5,1);
      *(undefined2 *)(param_1[4] + 0xe) = *(undefined2 *)(param_1[9] + param_1[1] * 0x1e + 2);
    }
    else {
      FUN_088d9f5c(uVar4,puVar5[1],1);
    }
    iVar2 = FUN_088d3724();
    if (iVar2 == 0) {
      iVar2 = 0;
      iVar11 = 0;
      do {
        sVar1 = *(short *)(param_1[9] + param_1[1] * 0x1e + iVar11 + 8);
        if (sVar1 == -1) {
          return;
        }
        if (*(int *)(param_1[5] + iVar11) != 0) {
          FUN_0887ba5c();
          *(undefined4 *)(param_1[5] + iVar11) = 0;
        }
        if (param_1[6] == 0) {
          uVar3 = FUN_0887b3ec(param_1[7],param_1[8],0,sVar1,0,0);
          *(undefined4 *)(param_1[5] + iVar11) = uVar3;
          iVar14 = *(int *)(param_1[5] + iVar11);
        }
        else {
          uVar3 = FUN_0887ad78(param_1[6],0,sVar1,0,0,0);
          *(undefined4 *)(param_1[5] + iVar11) = uVar3;
          iVar14 = *(int *)(param_1[5] + iVar11);
        }
        if (iVar14 != 0) {
          FUN_0887ba04(iVar14);
          FUN_0887b958(*(undefined4 *)(param_1[5] + iVar11));
          FUN_0887b9c4(*(undefined4 *)(param_1[5] + iVar11));
          if ((*param_1 & 2) == 0) {
            FUN_0887b924(*(undefined4 *)(param_1[5] + iVar11));
            uVar4 = param_1[4];
            iVar14 = *(int *)(param_1[5] + iVar11);
          }
          else {
            FUN_0887b944(*(undefined4 *)(param_1[5] + iVar11));
            uVar4 = param_1[4];
            iVar14 = *(int *)(param_1[5] + iVar11);
          }
          if (iVar14 != 0) {
            *(uint *)(iVar14 + 0x10) = *(uint *)(iVar14 + 0x10) | 0x8000;
            if (*(int *)(uVar4 + 0x34) == 0) {
              *(int *)(uVar4 + 0x34) = iVar14;
              *(int *)(uVar4 + 0x30) = iVar14;
              *(undefined4 *)(iVar14 + 0x4c) = 0;
              *(undefined4 *)(iVar14 + 0x54) = 0;
              iVar6 = *(int *)(uVar4 + 0x38);
            }
            else {
              *(int *)(*(int *)(uVar4 + 0x34) + 0x4c) = iVar14;
              uVar3 = *(undefined4 *)(uVar4 + 0x34);
              *(undefined4 *)(iVar14 + 0x4c) = 0;
              *(undefined4 *)(iVar14 + 0x54) = uVar3;
              iVar6 = *(int *)(uVar4 + 0x38);
              *(int *)(uVar4 + 0x34) = iVar14;
            }
            *(int *)(uVar4 + 0x38) = iVar6 + 1;
          }
        }
        iVar2 = iVar2 + 1;
        iVar11 = iVar11 + 4;
      } while (iVar2 < 6);
    }
    else {
      iVar14 = 0;
      iVar11 = 0;
      puVar12 = auStack_5b0;
      iVar2 = 0;
      do {
        iVar6 = iVar2;
        sVar1 = *(short *)(param_1[9] + param_1[1] * 0x1e + iVar11 + 6);
        if (sVar1 == -1) {
          piVar10 = (int *)param_1[5];
          iVar11 = iVar6 + -1;
          iVar2 = iVar6;
          goto LAB_088d63c8;
        }
        FUN_088da0a8(param_1[4],sVar1,puVar12,auStack_430);
        *piVar10 = iVar14;
        iVar14 = iVar14 + 1;
        iVar2 = iVar6 + 1;
        iVar11 = iVar11 + 4;
        puVar12 = puVar12 + 0x40;
        piVar10 = piVar10 + 1;
      } while (iVar14 < 6);
      piVar10 = (int *)param_1[5];
      iVar11 = iVar6;
LAB_088d63c8:
      iVar14 = 0;
      if (0 < iVar11) {
        do {
          iVar14 = iVar14 + 1;
          if (iVar14 < iVar2) {
            piVar9 = local_5d0 + iVar14;
            iVar6 = iVar14;
            do {
              iVar8 = *piVar7;
              if (afStack_580[*piVar9 * 0x10] < afStack_580[iVar8 * 0x10]) {
                *piVar7 = *piVar9;
                *piVar9 = iVar8;
              }
              iVar6 = iVar6 + 1;
              piVar9 = piVar9 + 1;
            } while (iVar6 < iVar2);
          }
          piVar7 = piVar7 + 1;
        } while (iVar14 < iVar11);
      }
      if (*piVar10 != 0) {
        FUN_0887ba5c(*piVar10);
        *(undefined4 *)param_1[5] = 0;
      }
      iVar14 = 0;
      iVar11 = 0;
      piVar7 = local_5d0;
      if (0 < iVar2) {
        do {
          piVar13 = piVar7;
          sVar1 = *(short *)(param_1[9] + param_1[1] * 0x1e + *piVar15 * 4 + 8);
          if ((sVar1 != -1) && (sVar1 != *(short *)((int)param_1 + 0x2a))) {
            if (param_1[6] == 0) {
              uVar3 = FUN_0887b500(param_1[7],param_1[8],sVar1);
            }
            else {
              uVar3 = FUN_0887afbc(param_1[6],sVar1,0);
            }
            iVar6 = FUN_0893f988(uVar3);
            if ((iVar14 != 0) && (iVar11 < 0x1fe)) {
              *(undefined2 *)((int)piVar13 + 0x1a4) = 0x20;
              *(undefined2 *)((int)piVar13 + 0x1a6) = 0x20;
              iVar11 = iVar11 + 2;
              piVar13 = (int *)((int)local_5d0 + iVar11 * 2);
            }
            if (iVar11 < 0x200 - iVar6) {
              FUN_08935524((undefined1 *)((int)piVar13 + 0x1a4),uVar3,iVar6 * 2);
              iVar11 = iVar6 + iVar11;
              piVar13 = (int *)((int)local_5d0 + iVar11 * 2);
            }
          }
          iVar14 = iVar14 + 1;
          piVar15 = piVar15 + 1;
          piVar7 = piVar13;
        } while (iVar14 < iVar2);
      }
      *(undefined2 *)((int)piVar13 + 0x1a4) = 0;
      if (iVar2 != 0) {
        uVar3 = FUN_0887d868(DAT_089d6998,0,local_42c,0xffffffff,0,0,0,0);
        *(undefined4 *)param_1[5] = uVar3;
        if (*(int *)param_1[5] == 0) {
          uVar4 = param_1[1];
        }
        else {
          FUN_0887ba04(*(int *)param_1[5]);
          FUN_0887b958(*(undefined4 *)param_1[5]);
          FUN_0887b9c4(*(undefined4 *)param_1[5]);
          if ((*param_1 & 2) == 0) {
            FUN_0887b924(*(undefined4 *)param_1[5]);
            uVar4 = param_1[4];
            iVar11 = *(int *)param_1[5];
          }
          else {
            FUN_0887b944(*(undefined4 *)param_1[5]);
            uVar4 = param_1[4];
            iVar11 = *(int *)param_1[5];
          }
          if (iVar11 == 0) {
            uVar4 = param_1[1];
          }
          else {
            *(uint *)(iVar11 + 0x10) = *(uint *)(iVar11 + 0x10) | 0x8000;
            if (*(int *)(uVar4 + 0x34) == 0) {
              *(int *)(uVar4 + 0x34) = iVar11;
              *(int *)(uVar4 + 0x30) = iVar11;
              *(undefined4 *)(iVar11 + 0x4c) = 0;
              *(undefined4 *)(iVar11 + 0x54) = 0;
              iVar14 = *(int *)(uVar4 + 0x38);
            }
            else {
              *(int *)(*(int *)(uVar4 + 0x34) + 0x4c) = iVar11;
              uVar3 = *(undefined4 *)(uVar4 + 0x34);
              *(undefined4 *)(iVar11 + 0x4c) = 0;
              *(undefined4 *)(iVar11 + 0x54) = uVar3;
              iVar14 = *(int *)(uVar4 + 0x38);
              *(int *)(uVar4 + 0x34) = iVar11;
            }
            *(int *)(uVar4 + 0x38) = iVar14 + 1;
            uVar4 = param_1[1];
          }
        }
        *(undefined2 *)(param_1 + 10) =
             *(undefined2 *)(param_1[9] + uVar4 * 0x1e + local_5d0[iVar2 + -1] * 4 + 6);
      }
    }
  }
  return;
}

